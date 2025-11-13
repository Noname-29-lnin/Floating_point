module UART_Tx #(
    parameter SIZE_DATA = 8,
    parameter OVER_SAMPLE = 16 // oversampling
)(
    input wire                      i_clk           , // clock for CPU
    input wire                      i_rst_n         , // active low reset
    input wire                      i_stick         , // baud rate signal
    input wire                      i_tx_en         , // start signal
    input wire                      i_fifo_empty    , // FIFO empty signal
    input wire [SIZE_DATA - 1 : 0]  i_tx_data       , // data to be transmitted parallel
    output logic                    o_tx_serial     , // serial data output 
    output logic                    o_tx_done         // end signal
);

localparam SIZE_STATUS = 3;
localparam [SIZE_STATUS-1:0] IDLE        = 3'b000,
                             START       = 3'b001,
                             TRANSMIT    = 3'b010,
                             //PARYTY      = 3'b011,
                             STOP_I      = 3'b100,
                             STOP_II     = 3'b101,
                             DONE        = 3'b110;
reg [SIZE_STATUS-1:0] state, n_state;

localparam SIZE_INDEX = $clog2(SIZE_DATA); // 8bits
reg [SIZE_INDEX:0] index, n_index;

wire w_update_data;
assign w_update_data = (index == SIZE_DATA-1);

localparam SIZE_COUNT = $clog2(OVER_SAMPLE);
reg [SIZE_COUNT:0] count, n_count;
wire w_update_sample;
assign w_update_sample = (count == OVER_SAMPLE-1);

wire w_update_start;
assign w_update_start = i_tx_en & ~i_fifo_empty; 

logic [SIZE_DATA-1:0] w_i_data;
always_ff @( posedge i_clk or negedge i_rst_n ) begin
    if(~i_rst_n)
        w_i_data    <= '0;
    else begin
        if(w_update_start)
            w_i_data    <= i_tx_data;
    end
end

always @(*) begin : proc_state
    case(state) 
        IDLE: begin
            n_state = w_update_start ? START : IDLE;
            n_count = '0;
            n_index = '0;
        end
        START: begin
            n_state = (w_update_sample) ? TRANSMIT : START;
            n_count = (w_update_sample) ? '0 : (i_stick ? count + 1'b1 : count);
            n_index = '0;
        end
        TRANSMIT: begin
            n_state = (w_update_sample & w_update_data) ? STOP_I : TRANSMIT;
            n_count = (w_update_sample) ? '0 : (i_stick ? count + 1'b1 : count);
            n_index = (w_update_data) ? index : (w_update_sample ? index + 1'b1 : index);
        end
        STOP_I: begin
            n_state = (w_update_sample) ? STOP_II : STOP_I;
            n_count = (w_update_sample) ? '0 : (i_stick ? count + 1'b1 : count);
            n_index = index;
        end
        STOP_II: begin
            n_state = (w_update_sample) ? DONE : STOP_II;
            n_count = (w_update_sample) ? '0 : (i_stick ? count + 1'b1 : count);
            n_index = index;
        end
        DONE: begin
            n_state = w_update_start ? START : IDLE;
            n_count = '0;
            n_index = '0;
        end
        default: begin
            n_state = IDLE;
            n_count = '0;
            n_index = '0;
        end
    endcase
end
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_state_update
    if(~i_rst_n) begin
        state   <= IDLE;
        count   <= '0;
        index   <= '0;
    end else begin
        state   <= n_state;
        count   <= n_count;
        index   <= n_index;
    end
end

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_tx_out
    if(~i_rst_n) begin
        o_tx_serial <= 1'b1; // idle state is HIGH
    end else begin
        case(state)
            IDLE : begin 
                o_tx_serial <= 1'b1; // idle state is HIGH
            end
            START: begin
                o_tx_serial <= 1'b0; // start bit is LOW
            end
            TRANSMIT: begin
                o_tx_serial <= w_i_data[index[SIZE_INDEX-1:0]]; // data bits
            end
            STOP_I: begin
                o_tx_serial <= 1'b1; // stop bit I
            end
            STOP_II: begin
                o_tx_serial <= 1'b1;
            end
            default: begin
                o_tx_serial <= 1'b1; // idle state is HIGH
            end
        endcase
    end
end

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_tx_done
    if(~i_rst_n) begin
        o_tx_done   <= 1'b0;
    end else begin
        o_tx_done   <= state[2] & state[1] & (~state[0]);
    end
end

endmodule 
