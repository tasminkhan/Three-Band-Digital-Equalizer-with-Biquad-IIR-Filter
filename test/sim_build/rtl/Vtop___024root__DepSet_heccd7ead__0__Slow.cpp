// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bL[0U] = 7U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bL[1U] = 0xfU;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bL[2U] = 7U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aL[0U] = 0x83e0U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aL[1U] = 0x3c3dU;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bM[0U] = 0x1d05U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bM[1U] = 0U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bM[2U] = 0xe2fbU;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aM[0U] = 0xbc98U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aM[1U] = 0x5f5U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bH[0U] = 0x1581U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bH[1U] = 0xd4feU;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bH[2U] = 0x1581U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aH[0U] = 0xf549U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aH[1U] = 0xb4cU;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb__DOT__test_harness__DOT___unused = 0U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_ready = 1U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__user_interrupt = 0U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__uo_out = 0U;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT___unused = 0U;
    vlSelf->tb__DOT__test_harness__DOT__uio_oe = 0xbU;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__ena = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/tasminwsl/eqv/ttsky25a-tinyQVb_Digital-Equalizer/test/tb.v", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb.clk or negedge tb.test_harness.rst_reg_n)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb.clk or negedge tb.test_harness.rst_reg_n)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__ui_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uio_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uo_out = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uio_out = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uio_oe = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__ui_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__uo_out = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__uio_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__uio_out = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__uio_oe = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__address = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__test_harness__DOT__data_in = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__data_write_n = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__test_harness__DOT__data_read_n = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__test_harness__DOT__data_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__user_interrupt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__ui_in_sync = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__rst_reg_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__addr_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__data_rw = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__txn_n = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__test_harness__DOT__data_out_masked = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__spi_cs_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__spi_clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__spi_miso = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__spi_cs_n_sync = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__spi_clk_sync = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__spi_mosi_sync = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT___unused = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_out = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_sync[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__ui_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__uo_out = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__address = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_in = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_write_n = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_read_n = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__user_interrupt = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bL[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aL[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bM[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aM[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bH[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aH[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yout_reg = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gL = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gM = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gH = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtL = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtM = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtH = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yout = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumL = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumM = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumH = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumout = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT___unused = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_in = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_sync[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_in = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_sync[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_in = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_sync[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_miso = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_cs_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_addr = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_i = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_o = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_addr_v = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_i_dv = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_o_dv = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_width = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sof = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__eof = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos_gated = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg_gated = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_data_sample = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_data_change = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__tx_buffer_load = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_addr = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_data = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__dv = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__rstb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__neg_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__data_dly = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__rstb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__data_dly = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__rstb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__pos_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__data_dly = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__rstb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__neg_edge = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__data_dly = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__test_harness__DOT__rst_reg_n__0 = VL_RAND_RESET_I(1);
}
