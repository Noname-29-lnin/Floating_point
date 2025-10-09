# Phương pháp test

Xây dựng một function tính toán dữ liệu từ hàm Cpp cho trước với từng phép toán một.

Nếu có trường hợp hợp Fail thì lặp tức dừng bộ test, và cần test tầm 200 trường hợp từ exponent trải dài từ 0->255.
Nếu có thể thì với 1bit signed thì cần 2 test để bao phủ hết
Nếu có thể thì với 8bit exponent cần 255 test để bao phủ hết
Nếu có thể thì với 23bit mantissa cần 8388608 test để bao phủ hết
=> cần 2^32 trường hợp để bao phủ hết tất cả các trường hợp có thể có của ngõ vào (với có 2 ngõ vào => 2^64 trường hợp có thể có)
=> Nếu mọt test cần 1 chu kỳ (nếu đủ nhanh thì 1ns) -> cần 18.45Gs -> cần 584.94 năm :)))
# Các thực hiện test

## Đối với phép cộng (+)

```SystemVerilog
`timescale 1ns/1ps

interface fp_inter;

  parameter SIZE_DATA = 32;
  parameter NUM_OP    = 2;

  logic i_clk, i_rst_n;
  logic [NUM_OP-1:0]      i_alu_op;   // opcode: 2'b00 add, 2'b01 sub, 2'b10 mul, 2'b11 div
  logic [NUM_OP-1:0]      w_alu_op;
  logic [SIZE_DATA-1:0]   i_data_a, i_data_b;
  logic [SIZE_DATA-1:0]   w_data_a, w_data_b;
  logic [SIZE_DATA-1:0]   o_result;

endinterface // fp_inter


// Floating point ALU (IEEE-754 single precision) - behavioral/synthesizable algorithmic
module fp_alu #( parameter SIZE_DATA = 32 ) (
    fp_inter intf
);
    // local parameters for opcode
    localparam OP_ADD = 2'b00;
    localparam OP_SUB = 2'b01;
    localparam OP_MUL = 2'b10;
    localparam OP_DIV = 2'b11;

    // ------- helper packed types -------
    typedef struct packed {
        logic sign;
        logic [7:0] exp;
        logic [22:0] man;
    } fp32_t;

    // ------- unpack function -------
    function automatic fp32_t unpack(input logic [31:0] bits);
        fp32_t out;
        out.sign = bits[31];
        out.exp  = bits[30:23];
        out.man  = bits[22:0];
        return out;
    endfunction

    // ------- pack function -------
    function automatic logic [31:0] pack(input fp32_t in);
        logic [31:0] bits;
        bits = {in.sign, in.exp, in.man};
        return bits;
    endfunction

    // ------- utility: restore implicit bit, return 24-bit mantissa as uint -------
    function automatic logic [23:0] restore_mantissa(input logic [7:0] exp, input logic [22:0] man);
        if (exp == 8'd0) begin
            // subnormal: leading zero (we keep it as is)
            return {1'b0, man};
        end else begin
            return {1'b1, man}; // implicit 1
        end
    endfunction

    // ------- ADD (A + B) algorithmic (no rounding beyond truncation) -------
    function automatic void fp_add(
        input fp32_t A, input fp32_t B,
        output fp32_t R
    );
        // local variables
        logic signed [9:0] expA, expB; // signed to compute diffs
        logic [23:0] mA, mB;
        logic signA, signB;
        logic [24:0] mantR_ext; // allow carry
        logic [8:0] expR; // allow overflow
        int shift;

        // initialize
        signA = A.sign; signB = B.sign;
        expA  = A.exp;
        expB  = B.exp;
        mA = restore_mantissa(A.exp, A.man);
        mB = restore_mantissa(B.exp, B.man);

        // handle zero shortcuts
        if ((A.exp == 8'd0 && A.man == 23'd0) && (B.exp == 8'd0 && B.man == 23'd0)) begin
            R.sign = 1'b0; R.exp = 8'd0; R.man = 23'd0; return;
        end

        // Align exponents: shift smaller mantissa right
        if (expA > expB) begin
            shift = expA - expB;
            if (shift >= 25) mB = 24'd0; else mB = (mB >> shift);
            expR = expA;
        end else if (expB > expA) begin
            shift = expB - expA;
            if (shift >= 25) mA = 24'd0; else mA = (mA >> shift);
            expR = expB;
        end else begin
            expR = expA;
        end

        // Add or subtract mantissas depending on sign
        if (signA == signB) begin
            mantR_ext = {1'b0, mA} + {1'b0, mB}; // 25-bit
            R.sign = signA;
            // normalize if MSB in bit24
            if (mantR_ext[24]) begin
                // shift right one, increment exponent
                mantR_ext = mantR_ext >> 1;
                expR = expR + 1;
            end
        end else begin
            // subtraction
            if ({1'b0,mA} >= {1'b0,mB}) begin
                mantR_ext = {1'b0,mA} - {1'b0,mB};
                R.sign = signA;
            end else begin
                mantR_ext = {1'b0,mB} - {1'b0,mA};
                R.sign = signB;
            end
            // normalize left (shift until bit23 = 1) unless result zero
            if (mantR_ext == 0) begin
                R.exp = 8'd0; R.man = 23'd0; R.sign = 1'b0; return;
            end
            while (mantR_ext[23] == 1'b0 && expR > 0) begin
                mantR_ext = mantR_ext << 1;
                expR = expR - 1;
            end
        end

        // pack mantissa (truncate lower bits -> no round)
        R.exp = expR[7:0];
        R.man = mantR_ext[22:0];
    endfunction // fp_add


    // ------- SUB (A - B) implemented via ADD with sign flip -------
    function automatic void fp_sub(input fp32_t A, input fp32_t B, output fp32_t R);
        fp32_t Bneg;
        Bneg = B;
        Bneg.sign = ~B.sign;
        fp_add(A, Bneg, R);
    endfunction


    // ------- MUL (A * B) algorithmic (no round-to-nearest-even) -------
    function automatic void fp_mul(input fp32_t A, input fp32_t B, output fp32_t R);
        logic [23:0] mA, mB;
        logic signed [9:0] expA, expB;
        logic signed [9:0] expR;
        logic signR;
        logic [47:0] prod48;
        logic [31:0] shifted; // post normalize
        // restore mantissas
        mA = restore_mantissa(A.exp, A.man);
        mB = restore_mantissa(B.exp, B.man);
        expA = A.exp;
        expB = B.exp;
        signR = A.sign ^ B.sign;

        // zero checks
        if ((A.exp == 8'd0 && A.man == 23'd0) || (B.exp == 8'd0 && B.man == 23'd0)) begin
            R.sign = signR; R.exp = 8'd0; R.man = 23'd0; return;
        end

        // multiply 24x24 -> 48 bits
        prod48 = (uint64_t)'(mA) * (uint64_t)'(mB);

        // exponent add (bias 127)
        expR = (int)expA + (int)expB - 127;

        // normalization:
        // product range: [1.0*1.0, (2-2^-23)*(2-2^-23)) => [1.0, ~4.0)
        // If top bit (bit47) = 1 then value >= 2.0 -> need shift right 24 to get 24 bits mantissa with hidden 1
        if (prod48[47]) begin
            // shift right 24: keep 24 bits (including hidden)
            shifted = prod48 >> 24; // now has 24 bits (bit23 is implicit 1)
            expR = expR + 1;
        end else begin
            // shift right 23
            shifted = prod48 >> 23;
        end

        // assign
        R.sign = signR;
        // clamp exponent (basic)
        if (expR <= 0) begin
            R.exp = 8'd0;
            R.man = shifted[22:0];
        end else if (expR >= 8'd255) begin
            // overflow -> INF (not handling NaN)
            R.exp = 8'd255;
            R.man = 23'd0;
        end else begin
            R.exp = expR[7:0];
            R.man = shifted[22:0];
        end
    endfunction


    // ------- DIV (A / B) algorithmic (simple integer division, no exceptional handling) -------
    function automatic void fp_div(input fp32_t A, input fp32_t B, output fp32_t R);
        logic [23:0] mA, mB;
        logic signed [9:0] expA, expB;
        logic signed [9:0] expR;
        logic signR;
        logic [47:0] dividend;
        logic [47:0] quotient;
        logic [31:0] qshifted;

        mA = restore_mantissa(A.exp, A.man);
        mB = restore_mantissa(B.exp, B.man);
        expA = A.exp;
        expB = B.exp;
        signR = A.sign ^ B.sign;

        // division by zero -> set INF (simple)
        if (B.exp == 8'd0 && B.man == 23'd0) begin
            R.sign = signR; R.exp = 8'd255; R.man = 23'd0; return;
        end
        // zero numerator -> zero result
        if (A.exp == 8'd0 && A.man == 23'd0) begin
            R.sign = signR; R.exp = 8'd0; R.man = 23'd0; return;
        end

        // compute exponent
        expR = (int)expA - (int)expB + 127;

        // perform integer division with scaling to preserve precision:
        // compute (mA << 23) / mB -> yields 24-bit result with hidden bit in bit23
        dividend = (uint64_t)mA << 23; // 47 bits enough
        quotient = dividend / mB;      // quotient fits in <= 24 bits (but stored in 48-bit)
        // normalize quotient
        if (quotient & (1 << 24)) begin
            // too large (rare) -> shift right
            qshifted = quotient >> 1;
            expR = expR + 1;
        end else begin
            qshifted = quotient;
            while ((qshifted & (1 << 23)) == 0 && expR > 0) begin
                qshifted = qshifted << 1;
                expR = expR - 1;
            end
        end

        R.sign = signR;
        if (expR <= 0) begin
            R.exp = 8'd0;
            R.man = qshifted[22:0];
        end else if (expR >= 8'd255) begin
            R.exp = 8'd255; R.man = 23'd0;
        end else begin
            R.exp = expR[7:0];
            R.man = qshifted[22:0];
        end
    endfunction


    // ------- top-level combinational ALU -------
    always_comb begin
        fp32_t A = unpack(intf.i_data_a);
        fp32_t B = unpack(intf.i_data_b);
        fp32_t R;

        case (intf.i_alu_op)
            OP_ADD: fp_add(A, B, R);
            OP_SUB: fp_sub(A, B, R);
            OP_MUL: fp_mul(A, B, R);
            OP_DIV: fp_div(A, B, R);
            default: begin R.sign = 0; R.exp = 8'd0; R.man = 23'd0; end
        endcase

        intf.o_result = pack(R);
    end

endmodule
```

**Các trường hợp cần test Direct**


**Các trường hợp cần test Random**