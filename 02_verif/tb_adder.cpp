#include "VBlock_adder_total.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <random>
#include <cassert>

int main(int argc, char** argv) {
    // Khởi tạo Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // Tạo instance của module và waveform trace
    VBlock_adder_total* top = new VBlock_adder_total;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    // Thiết lập mô phỏng
    vluint64_t main_time = 0;
    const vluint64_t sim_time = 1000;
    bool test_passed = true;

    // Bộ sinh số ngẫu nhiên
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<uint32_t> distrib(0, UINT32_MAX);

    std::cout << "Bắt đầu kiểm tra các bộ adder 32-bit..." << std::endl;

    // Vòng lặp mô phỏng chính
    while (!Verilated::gotFinish() && main_time < sim_time) {
        if (main_time % 10 == 0) {
            top->i_a = distrib(gen);
            top->i_b = distrib(gen);

            // Tính toán kết quả mong đợi
            uint64_t expected_sum = (uint64_t)top->i_a + (uint64_t)top->i_b;
            uint32_t expected_sum_32 = expected_sum & 0xFFFFFFFF;

            top->eval();
            tfp->dump(main_time);

            // Hiển thị kết quả từng bộ cộng
            std::cout << "Time = " << main_time 
                      << " | a = " << top->i_a 
                      << " | b = " << top->i_b 
                      << " | Expected = " << expected_sum_32 << std::endl;

            std::cout << "  CRA  = " << top->o_CRA << std::endl;
            std::cout << "  CLA  = " << top->o_CLA << std::endl;
            std::cout << "  CSA  = " << top->o_CSA << std::endl;
            std::cout << "  CSKA = " << top->o_CSKA << std::endl;
            std::cout << "  KSA  = " << top->o_KSA << std::endl;

            // Kiểm tra từng kết quả
            bool cra_ok = (top->o_CRA == expected_sum_32);
            bool cla_ok = (top->o_CLA == expected_sum_32);
            bool csa_ok = (top->o_CSA == expected_sum_32);
            bool cska_ok = (top->o_CSKA == expected_sum_32);
            bool ksa_ok = (top->o_KSA == expected_sum_32);

            // Nếu có lỗi, hiển thị chi tiết
            if (!cra_ok || !cla_ok || !csa_ok || !cska_ok || !ksa_ok) {
                std::cout << "\n❌ LỖI tại thời điểm " << main_time << std::endl;
                std::cout << "  Input: a = " << top->i_a << ", b = " << top->i_b << std::endl;
                std::cout << "  Expected sum = " << expected_sum_32 << std::endl;

                if (!cra_ok)  std::cout << "  ❌ CRA error: " << top->o_CRA << std::endl;
                if (!cla_ok)  std::cout << "  ❌ CLA error: " << top->o_CLA << std::endl;
                if (!csa_ok)  std::cout << "  ❌ CSA error: " << top->o_CSA << std::endl;
                if (!cska_ok) std::cout << "  ❌ CSKA error: " << top->o_CSKA << std::endl;
                if (!ksa_ok)  std::cout << "  ❌ KSA error: " << top->o_KSA << std::endl;

                test_passed = false;
                break;
            }

            if (main_time % 100 == 0) {
                std::cout << "✅ Kiểm tra tại thời điểm: " << main_time << " OK.\n" << std::endl;
            } else {
                std::cout << "----------------------------------------" << std::endl;
            }
        }

        main_time++;
    }

    // Dọn dẹp
    tfp->close();
    top->final();
    delete top;
    delete tfp;

    // Kết quả cuối
    if (test_passed) {
        std::cout << "\n✅ Tất cả các bộ adder hoạt động chính xác!" << std::endl;
        return 0;
    } else {
        std::cout << "\n❌ Phát hiện lỗi trong một hoặc nhiều bộ adder!" << std::endl;
        return 1;
    }
}
