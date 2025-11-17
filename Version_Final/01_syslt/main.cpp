#include <iostream>
#include <iomanip>
#include <cstdint>
#include <bitset>
#include <cstring>
#include <algorithm>
#include <cmath>

void Trans_floating_point(float data_in, bool &sign, unsigned int &exponent, unsigned int &mantissa);
void Trans_float(bool sign, unsigned int exponent, unsigned int mantissa, float &data_out);
void Display_floating_point(char data_char,float data_in, bool &sign, unsigned int &exponent, unsigned int &mantissa);
void Sum_floating_point(
    bool sign_a, bool sign_b,
    unsigned int exponent_a, unsigned int exponent_b,
    unsigned int mantissa_a, unsigned int mantissa_b,
    bool &sign_sum, unsigned int &exponent_sum, unsigned int &mantissa_sum);
void Sub_floating_point(
    bool sign_a, bool sign_b,
    unsigned int exponent_a, unsigned int exponent_b,
    unsigned int mantissa_a, unsigned int mantissa_b,
    bool &sign_sum, unsigned int &exponent_sum, unsigned int &mantissa_sum);
void Mul_floating_point(
    bool sign_a, bool sign_b,
    unsigned int exponent_a, unsigned int exponent_b,
    unsigned int mantissa_a, unsigned int mantissa_b,
    bool &sign_res, unsigned int &exponent_res, unsigned int &mantissa_res);
void Div_floating_point(
    bool sign_a, bool sign_b,
    unsigned int exponent_a, unsigned int exponent_b,
    unsigned int mantissa_a, unsigned int mantissa_b,
    bool &sign_res, unsigned int &exponent_res, unsigned int &mantissa_res);

void Trans_hex_float(uint32_t data_in, float &data_float) {
    // copy bit pattern của data_in vào biến float mà không thay đổi bit
    static_assert(sizeof(float) == 4, "float must be 32-bit");
    std::memcpy(&data_float, &data_in, sizeof(float));
}

// helper: giải nén các thành phần IEEE-754 single
void DecodeIEEE754(uint32_t bits) {
    uint32_t sign = (bits >> 31) & 0x1;
    uint32_t exp  = (bits >> 23) & 0xff;
    uint32_t frac = bits & 0x7fffff;

    std::cout << "  Raw bits : 0x" << std::hex << std::setw(8) << std::setfill('0') << bits << std::dec << "\n";
    std::cout << "  Sign     : " << sign << "\n";
    std::cout << "  Exponent : " << exp << " (raw)\n";
    std::cout << "  Mantissa : 0x" << std::hex << frac << std::dec << " (" << frac << ")\n";

    if (exp == 0) {
        if (frac == 0) {
            std::cout << "  Value    : Zero (" << (sign ? "-" : "+") << "0.0)\n";
        } else {
            std::cout << "  Value    : Denormalized (subnormal) number\n";
        }
    } else if (exp == 0xff) {
        if (frac == 0) {
            std::cout << "  Value    : Infinity (" << (sign ? "-" : "+") << "inf)\n";
        } else {
            std::cout << "  Value    : NaN (Not a Number)\n";
        }
    } else {
        int unbiased = static_cast<int>(exp) - 127;
        std::cout << "  Value    : Normalized, exponent (unbiased) = " << unbiased << "\n";
    }
}

// IEEE 754 Single precision
int main(int argc, char** argv) {
    // Input data
    float a, b;
    std::cout << "Input data A: ";
    std::cin >> a;
    std::cout << "Input data B: ";
    std::cin >> b;
    //
    bool sign_a, sign_b;
    unsigned int exponent_a, exponent_b;
    unsigned int mantissa_a, mantissa_b;
    Display_floating_point('A', a, sign_a, exponent_a, mantissa_a);
    Display_floating_point('B', b, sign_b, exponent_b, mantissa_b);

    float sum;
    bool sign_sum;
    unsigned int exponent_sum;
    unsigned int mantissa_sum;
    Sum_floating_point(sign_a, sign_b, exponent_a, exponent_b, mantissa_a, mantissa_b, sign_sum, exponent_sum, mantissa_sum);
    Trans_float(sign_sum, exponent_sum, mantissa_sum, sum);
    Display_floating_point('+', sum, sign_sum, exponent_sum, mantissa_sum);

    float sub;
    bool sign_sub;
    unsigned int exponent_sub;
    unsigned int mantissa_sub;
    Sub_floating_point(sign_a, sign_b, exponent_a, exponent_b, mantissa_a, mantissa_b, sign_sub, exponent_sub, mantissa_sub);
    Trans_float(sign_sub, exponent_sub, mantissa_sub, sub);
    Display_floating_point('-', sub, sign_sub, exponent_sub, mantissa_sub);

    float mul;
    bool sign_mul;
    unsigned int exponent_mul;
    unsigned int mantissa_mul;
    Mul_floating_point(sign_a, sign_b, exponent_a, exponent_b, mantissa_a, mantissa_b, sign_mul, exponent_mul, mantissa_mul);
    Trans_float(sign_mul, exponent_mul, mantissa_mul, mul);
    Display_floating_point('*', mul, sign_mul, exponent_mul, mantissa_mul);

    float div;
    bool sign_div;
    unsigned int exponent_div;
    unsigned int mantissa_div;
    Div_floating_point(sign_a, sign_b, exponent_a, exponent_b, mantissa_a, mantissa_b, sign_div, exponent_div, mantissa_div);
    Trans_float(sign_div, exponent_div, mantissa_div, div);
    Display_floating_point('/', div, sign_div, exponent_div, mantissa_div);

    std::string hexstr;
    std::cout << "Nhập mã HEX 32-bit (ví dụ: 3f800000): ";
    if (!(std::cin >> hexstr)) return 0;

    // loại bỏ "0x" hoặc "0X" nếu có
    if (hexstr.size() > 1 && hexstr[0] == '0' && (hexstr[1] == 'x' || hexstr[1] == 'X')) {
        hexstr = hexstr.substr(2);
    }
    // đảm bảo đúng 8 hex digit (không bắt buộc nhưng in đẹp)
    while (hexstr.size() < 8) hexstr = std::string("0") + hexstr;

    // parse
    uint32_t bits = 0;
    std::stringstream ss;
    ss << std::hex << hexstr;
    ss >> bits;

    float value = 0.0f;
    Trans_hex_float(bits, value);

    std::cout << std::fixed << std::setprecision(9);
    std::cout << "Kết quả float: " << value << "\n";
    DecodeIEEE754(bits);

    // in theo dạng khoa học / hex float (nếu compiler hỗ trợ printf %a)
    std::cout << "As hex float (printf style) : ";
    std::printf("%a\n", value); // in dạng hex-float (C99 style), hữu ích để debug

    return 0;
}

void Trans_floating_point(float data_in, bool &sign, unsigned int &exponent, unsigned int &mantissa) {
    uint32_t bits;
    std::memcpy(&bits, &data_in, sizeof(bits));

    sign = (bits >> 31) & 0x1;          // 1bit: signed
    exponent = (bits >> 23) & 0xFF;     // 8bit: exponent
    mantissa = bits & 0x7FFFFF;         // 23bit: mantissa
}
void Trans_float(bool sign, unsigned int exponent, unsigned int mantissa, float &data_out){
    uint32_t bits = 0;

    bits |= (static_cast<uint32_t>(sign) & 0x1) << 31;
    bits |= (exponent & 0xFF) << 23;
    bits |= (mantissa & 0x7FFFFF);

    std::memcpy(&data_out, &bits, sizeof(bits));
}
void Display_floating_point(char data_char,float data_in, bool &sign, unsigned int &exponent, unsigned int &mantissa){
    Trans_floating_point(data_in, sign, exponent, mantissa);

    std::cout << "\n" << data_char << " = " << data_in << "\n";
    std::cout << "\t|-> Sign_" << data_char << " = " << sign << std::endl; 
    std::cout << "\t|-> Exp_" << data_char << " = " << exponent << " (bias=127, exp=" << (int)exponent - 127 << ")" << std::endl;
    std::cout << "\t|-> Mant_" << data_char << " = " << std::bitset<23>(mantissa) << "\n";
}
void Sum_floating_point(
    bool sign_a, bool sign_b,
    unsigned int exponent_a, unsigned int exponent_b,
    unsigned int mantissa_a, unsigned int mantissa_b,
    bool &sign_sum, unsigned int &exponent_sum, unsigned int &mantissa_sum)
{
    // Step 1. Add hidden bit (implicit leading 1)
    uint32_t mantA = mantissa_a | (1U << 23);
    uint32_t mantB = mantissa_b | (1U << 23);

    // Step 2. Align exponents
    int diff = (int)exponent_a - (int)exponent_b;
    if (diff > 0) {
        mantB >>= diff;
        exponent_sum = exponent_a;
    } else if (diff < 0) {
        mantA >>= -diff;
        exponent_sum = exponent_b;
    } else {
        exponent_sum = exponent_a;
    }

    // Step 3. Add/Sub mantissas depending on sign
    uint32_t mantR;
    bool signR;

    if (sign_a == sign_b) {
        mantR = mantA + mantB;
        signR = sign_a;
    } else {
        if (mantA > mantB) {
            mantR = mantA - mantB;
            signR = sign_a;
        } else {
            mantR = mantB - mantA;
            signR = sign_b;
        }
    }

    // Step 4. Normalize result
    // If overflow (carry out)
    if (mantR & (1U << 24)) { // 24->(1)0.xxx 
        mantR >>= 1;
        exponent_sum += 1;
    } else {
        // Normalize left if result < 1.0
        while ((mantR & (1U << 23)) == 0 && exponent_sum > 0) {
            mantR <<= 1;
            exponent_sum -= 1;
        }
    }
    
    // Step 5. Remove hidden bit
    mantissa_sum = mantR & 0x7FFFFF;
    sign_sum = signR;
}
void Sub_floating_point(
    bool sign_a, bool sign_b,
    unsigned int exponent_a, unsigned int exponent_b,
    unsigned int mantissa_a, unsigned int mantissa_b,
    bool &sign_sum, unsigned int &exponent_sum, unsigned int &mantissa_sum)
{
    // Step 1. Restore the hidden bit (1.xxxxx)
    if (exponent_a != 0) mantissa_a |= (1 << 23);
    if (exponent_b != 0) mantissa_b |= (1 << 23);

    // Step 2. Convert subtraction into addition: A - B = A + (-B)
    sign_b = !sign_b;

    // Step 3. Align exponents
    int exp_diff = (int)exponent_a - (int)exponent_b;
    if (exp_diff > 0) {
        mantissa_b >>= exp_diff;
        exponent_sum = exponent_a;
    } else if (exp_diff < 0) {
        mantissa_a >>= (-exp_diff);
        exponent_sum = exponent_b;
    } else {
        exponent_sum = exponent_a;
    }

    // Step 4. Add or subtract mantissas based on signs
    unsigned int mantissa_result;
    if (sign_a == sign_b) {
        mantissa_result = mantissa_a + mantissa_b;
        sign_sum = sign_a;
    } else {
        if (mantissa_a >= mantissa_b) {
            mantissa_result = mantissa_a - mantissa_b;
            sign_sum = sign_a;
        } else {
            mantissa_result = mantissa_b - mantissa_a;
            sign_sum = sign_b;
        }
    }

    // Step 5. Normalize result
    if (mantissa_result == 0) {
        exponent_sum = 0;
        mantissa_sum = 0;
        sign_sum = 0;
        return;
    }

    // Case 1: overflow (e.g., 1.111111... + 1.000000...)
    if (mantissa_result & (1 << 24)) {
        mantissa_result >>= 1;
        exponent_sum++;
    }
    // Case 2: underflow — shift left until hidden bit = 1
    else {
        while ((mantissa_result & (1 << 23)) == 0 && exponent_sum > 0) {
            mantissa_result <<= 1;
            exponent_sum--;
        }
    }

    // Step 6. Remove hidden bit before output
    mantissa_sum = mantissa_result & 0x7FFFFF;
}
void Mul_floating_point(
    bool sign_a, bool sign_b,
    unsigned int exponent_a, unsigned int exponent_b,
    unsigned int mantissa_a, unsigned int mantissa_b,
    bool &sign_res, unsigned int &exponent_res, unsigned int &mantissa_res)
{
    // Step 1: Restore hidden bit
    if (exponent_a != 0) mantissa_a |= (1 << 23);
    if (exponent_b != 0) mantissa_b |= (1 << 23);

    // Step 2: Compute sign
    sign_res = sign_a ^ sign_b;

    // Step 3: Exponent addition (bias = 127)
    int exp_tmp = (int)exponent_a + (int)exponent_b - 127;

    // Step 4: Multiply mantissas (24-bit × 24-bit = 48-bit)
    uint64_t product = (uint64_t)mantissa_a * (uint64_t)mantissa_b;

    // Step 5: Normalize
    // The result is in [1.0, 4.0)
    if (product & (1ULL << 47)) {
        // Overflow: shift right and increase exponent
        product >>= 24;  // Keep 24 bits
        exp_tmp++;
    } else {
        // Normal: shift to make bit 23 = hidden 1
        product >>= 23;
    }

    // Step 6: Assign
    exponent_res = (exp_tmp > 0) ? exp_tmp : 0;
    mantissa_res = (unsigned int)(product & 0x7FFFFF);  // Keep 23 bits
}
void Div_floating_point(
    bool sign_a, bool sign_b,
    unsigned int exponent_a, unsigned int exponent_b,
    unsigned int mantissa_a, unsigned int mantissa_b,
    bool &sign_res, unsigned int &exponent_res, unsigned int &mantissa_res)
{
    // Step 1: Restore hidden bit
    if (exponent_a != 0) mantissa_a |= (1 << 23);
    if (exponent_b != 0) mantissa_b |= (1 << 23);

    // Step 2: Compute sign
    sign_res = sign_a ^ sign_b;

    // Step 3: Compute exponent difference (bias = 127)
    int exp_tmp = (int)exponent_a - (int)exponent_b + 127;

    // Step 4: Divide mantissas (use 48-bit precision)
    uint64_t dividend = ((uint64_t)mantissa_a << 23); // scale up to preserve precision
    uint64_t quotient = dividend / mantissa_b;

    // Step 5: Normalize
    if (quotient & (1ULL << 24)) {
        // too large -> shift right
        quotient >>= 1;
        exp_tmp++;
    } else {
        while ((quotient & (1ULL << 23)) == 0 && exp_tmp > 0) {
            quotient <<= 1;
            exp_tmp--;
        }
    }

    // Step 6: Assign results
    exponent_res = (exp_tmp > 0) ? exp_tmp : 0;
    mantissa_res = (unsigned int)(quotient & 0x7FFFFF);
}
