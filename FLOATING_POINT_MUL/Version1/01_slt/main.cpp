#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cstring>

#define NAN_VALU    0x7fc00000
#define NAN_POS     0x7fc00000
#define NAN_NEG     0xffc00000
#define INF_POS     0x7f800000
#define INF_NEG     0xff800000
#define ZERO_POS    0x00000000
#define ZERO_NEG    0x80000000

// Prototype
uint32_t fpu_mul(uint32_t a, uint32_t b);

static uint32_t float_to_u32(float f){
    uint32_t u;
    std::memcpy(&u, &f, sizeof(float));
    return u;
}

static float u32_to_float(uint32_t u){
    float f;
    std::memcpy(&f, &u, sizeof(uint32_t));
    return f;
}

int main(void)
{
    std::cout << "===== TEST IEEE-754 SPECIAL CASES =====\n";

    struct TestCase {
        const char* name;
        uint32_t a;
        uint32_t b;
    };

    TestCase tests[] = {
        {"+0 * +0",     ZERO_POS, ZERO_POS},
        {"-0 * +0",     ZERO_NEG, ZERO_POS},
        {"+0 * -0",     ZERO_POS, ZERO_NEG},
        {"+0 * +INF",   ZERO_POS, INF_POS},
        {"+INF * +0",   INF_POS,  ZERO_POS},
        {"+INF * +INF", INF_POS,  INF_POS},
        {"+INF * -INF", INF_POS,  INF_NEG},
        {"NaN * 1.0",   NAN_VALU, float_to_u32(1.0f)},
        {"1.0 * NaN",   float_to_u32(1.0f), NAN_VALU},
    };

    for (auto &t : tests) {
        float a_f = u32_to_float(t.a);
        float b_f = u32_to_float(t.b);

        uint32_t hw = fpu_mul(t.a, t.b);
        float    hw_f = u32_to_float(hw);

        float ref_f = a_f * b_f;
        uint32_t ref = float_to_u32(ref_f);

        std::cout << "\n[" << t.name << "]\n";
        std::cout << "a = " << a_f << " | 0x"
                  << std::hex << std::setw(8) << std::setfill('0') << t.a << std::dec << "\n";
        std::cout << "b = " << b_f << " | 0x"
                  << std::hex << std::setw(8) << std::setfill('0') << t.b << std::dec << "\n";

        std::cout << "FPU = " << hw_f << " | 0x"
                  << std::hex << std::setw(8) << hw << std::dec << "\n";
        std::cout << "REF = " << ref_f << " | 0x"
                  << std::hex << std::setw(8) << ref << std::dec << "\n";

        if (hw == ref)
            std::cout << "RESULT: PASS\n";
        else
            std::cout << "RESULT: FAIL\n";
    }

    // =====================================================
    // USER INPUT AFTER SPECIAL TESTS
    // =====================================================
    std::cout << "\n===== USER INPUT TEST =====\n";
    std::cout << "(Co the nhap: nan, inf, -inf)\n";

    float a, b;
    std::cout << "Nhap so a (float): ";
    std::cin  >> a;
    std::cout << "Nhap so b (float): ";
    std::cin  >> b;

    uint32_t a_hex = float_to_u32(a);
    uint32_t b_hex = float_to_u32(b);

    uint32_t mul_hex = fpu_mul(a_hex, b_hex);
    float    mul_fpu = u32_to_float(mul_hex);

    float ref = a * b;
    uint32_t ref_hex = float_to_u32(ref);

    std::cout << "\n===== RESULT =====\n";
    std::cout << "a = " << a << " | 0x"
              << std::hex << std::setw(8) << a_hex << std::dec << "\n";
    std::cout << "b = " << b << " | 0x"
              << std::hex << std::setw(8) << b_hex << std::dec << "\n";

    std::cout << "FPU = " << mul_fpu << " | 0x"
              << std::hex << std::setw(8) << mul_hex << std::dec << "\n";
    std::cout << "REF = " << ref << " | 0x"
              << std::hex << std::setw(8) << ref_hex << std::dec << "\n";

    if (mul_hex == ref_hex)
        std::cout << "FINAL RESULT: PASS\n";
    else
        std::cout << "FINAL RESULT: FAIL\n";

    return 0;
}


uint32_t fpu_mul(uint32_t a, uint32_t b){
    // ===== Extract fields =====
    uint32_t sign_a = a >> 31;
    uint32_t exp_a  = (a >> 23) & 0xFF;
    uint32_t frac_a = a & 0x7FFFFF;

    uint32_t sign_b = b >> 31;
    uint32_t exp_b  = (b >> 23) & 0xFF;
    uint32_t frac_b = b & 0x7FFFFF;

    bool a_zero = (exp_a == 0) && (frac_a == 0);
    bool b_zero = (exp_b == 0) && (frac_b == 0);

    bool a_inf  = (exp_a == 0xFF) && (frac_a == 0);
    bool b_inf  = (exp_b == 0xFF) && (frac_b == 0);

    bool a_nan  = (exp_a == 0xFF) && (frac_a != 0);
    bool b_nan  = (exp_b == 0xFF) && (frac_b != 0);

    uint32_t sign_res = (sign_a ^ sign_b) << 31;

    // ===== Special cases =====
    if (a_nan || b_nan){
        if(sign_a ^ sign_b){
            return NAN_NEG;
        } else {
            return NAN_NEG;
        }
    }
    else if ((a_zero && b_inf) || (a_inf && b_zero)){
        if(sign_a ^ sign_b){
            return NAN_NEG;
        } else {
            return NAN_POS;
        }
    }
    else if(a_zero || b_zero) {
        if((sign_a ^ sign_b)) return ZERO_NEG;
        else                  return ZERO_POS;
    }
    else if (a_inf || b_inf) return sign_res ? INF_NEG : INF_POS;
    else if (a_zero || b_zero) return sign_res;
    else {
        // ===== Normalize mantissa =====
        uint32_t man_a = exp_a ? frac_a : frac_a | 0x800000;
        uint32_t man_b = exp_b ? frac_b : frac_b | 0x800000;

        int32_t exp_res = (exp_a ? exp_a : 1) + (exp_b ? exp_b : 1) - 127;
        // int32_t exp_res = (exp_a) + (exp_b) - 127;
    
        // ===== Mantissa multiply =====
        uint64_t man_mul = (uint64_t)man_a * man_b;
    
        // ===== Normalization =====
        uint64_t man_norm;
        bool guard, round, sticky;

        if (man_mul & (1ULL << 47)) {
            // dạng 1x.xxxxx
            man_norm = man_mul >> 24;
            exp_res++;

            guard  = (man_mul >> 23) & 1;
            round  = (man_mul >> 22) & 1;
            sticky = (man_mul & ((1ULL << 22) - 1)) != 0;
        } else {
            // dạng 01.xxxxx
            man_norm = man_mul >> 23;

            guard  = (man_mul >> 22) & 1;
            round  = (man_mul >> 21) & 1;
            sticky = (man_mul & ((1ULL << 21) - 1)) != 0;
        }

        // mantissa 24-bit (hidden + frac)
        uint32_t mantissa = man_norm & 0xFFFFFF;

        // ===== Rounding: Round to Nearest Even =====
        bool lsb = mantissa & 1;
        bool round_up = guard && (round || sticky || lsb);

        if (round_up) {
            mantissa += 1;
        }

        // ===== Mantissa overflow after rounding =====
        if (mantissa & (1 << 24)) {
            mantissa >>= 1;
            exp_res++;
        }

        // ===== Extract fraction =====
        uint32_t frac_res = mantissa & 0x7FFFFF;

        // ===== Overflow / Underflow =====
        if (exp_res >= 255)
            return sign_res ? INF_NEG : INF_POS;
    
        if (exp_res <= 0) {
            // tạo subnormal
            int shift = 1 - exp_res;
            if (shift < 24) {
                mantissa >>= shift;
                exp_res = 0;
            } else {
                // quá nhỏ → flush to zero
                mantissa = 0;
                exp_res = 0;
            }
        }

        // ===== Pack result =====
        return sign_res | ((uint32_t)exp_res << 23) | frac_res;
    }
}
