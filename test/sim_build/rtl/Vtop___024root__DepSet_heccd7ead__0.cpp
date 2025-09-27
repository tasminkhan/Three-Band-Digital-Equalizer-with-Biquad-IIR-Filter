// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelf->tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__test_harness__DOT__rst_reg_n__0 
        = vlSelf->tb__DOT__test_harness__DOT__rst_reg_n;
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__test_harness__DOT__uio_in = vlSelf->tb__DOT__uio_in;
    vlSelf->tb__DOT__test_harness__DOT__ena = vlSelf->tb__DOT__ena;
    vlSelf->tb__DOT__test_harness__DOT__rst_n = vlSelf->tb__DOT__rst_n;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__ui_in;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__rst_n 
        = vlSelf->tb__DOT__test_harness__DOT__rst_reg_n;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__ena 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__ena;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__ena 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__ena;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__ena 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__ena;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__ena 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__ena;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__user_interrupt 
        = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__user_interrupt;
    vlSelf->tb__DOT__uio_oe = vlSelf->tb__DOT__test_harness__DOT__uio_oe;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_data = 0U;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_addr = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
                if ((0x20U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter))) {
                    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_data = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
                if ((0x20U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter))) {
                    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_addr = 1U;
                }
            }
        }
    }
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_sync[0U] 
        = vlSelf->tb__DOT__ui_in;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_sync[1U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_sync[2U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_sync[0U] 
        = (1U & ((IData)(vlSelf->tb__DOT__uio_in) >> 4U));
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_sync[1U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_sync[2U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_sync[0U] 
        = (1U & ((IData)(vlSelf->tb__DOT__uio_in) >> 5U));
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_sync[1U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_sync[2U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_sync[0U] 
        = (1U & ((IData)(vlSelf->tb__DOT__uio_in) >> 6U));
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_sync[1U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_sync[2U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__ui_in = vlSelf->tb__DOT__ui_in;
    vlSelf->tb__DOT__test_harness__DOT__uo_out = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__uo_out;
    vlSelf->tb__DOT__test_harness__DOT__spi_cs_n = 
        (1U & ((IData)(vlSelf->tb__DOT__uio_in) >> 4U));
    vlSelf->tb__DOT__test_harness__DOT__spi_clk = (1U 
                                                   & ((IData)(vlSelf->tb__DOT__uio_in) 
                                                      >> 5U));
    vlSelf->tb__DOT__test_harness__DOT__spi_mosi = 
        (1U & ((IData)(vlSelf->tb__DOT__uio_in) >> 6U));
    vlSelf->tb__DOT__test_harness__DOT__data_in = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer;
    vlSelf->tb__DOT__test_harness__DOT__address = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr;
    vlSelf->tb__DOT__test_harness__DOT__ui_in_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__spi_mosi_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__pos_edge 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__data_dly)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__neg_edge 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__data_dly));
    vlSelf->tb__DOT__test_harness__DOT__data_ready 
        = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_ready;
    vlSelf->tb__DOT__test_harness__DOT__data_valid 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__dv;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb 
        = vlSelf->tb__DOT__test_harness__DOT__rst_reg_n;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__neg_edge 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__data_dly));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__data_dly)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync));
    vlSelf->tb__DOT__test_harness__DOT__spi_miso = 
        ((5U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state)) 
         & (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer 
            >> 0x1fU));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__tx_buffer_load = 0U;
    vlSelf->tb__DOT__test_harness__DOT__spi_cs_n_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__spi_clk_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__data_rw = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_out 
        = ((0U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
            ? (((- (IData)((1U & ((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yout_reg) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yout_reg))
            : ((4U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
                ? (((- (IData)((1U & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL
                                      [0U] >> 0xfU)))) 
                    << 0x10U) | vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL
                   [0U]) : ((8U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
                             ? (((- (IData)((1U & (
                                                   vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM
                                                   [0U] 
                                                   >> 0xfU)))) 
                                 << 0x10U) | vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM
                                [0U]) : ((0xcU == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH
                                                             [0U] 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH
                                             [0U]) : 
                                         ((0x10U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                                              [0U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                              [0U])
                                           : ((0x14U 
                                               == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
                                               ? (((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gH) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gM) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gL)))
                                               : 0U))))));
    vlSelf->tb__DOT__test_harness__DOT__txn_n = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_width;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumL 
        = ((((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                            vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bL
                                            [0U]), 
                          VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                        [0U])) + VL_MULS_III(32, 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bL
                                                                           [1U]), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                                                           [1U]))) 
             + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                             vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bL
                                             [2U]), 
                           VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                         [2U]))) - 
            VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aL
                                          [0U]), VL_EXTENDS_II(32,16, 
                                                               vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL
                                                               [0U]))) 
           - VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aL
                                           [1U]), VL_EXTENDS_II(32,16, 
                                                                vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL
                                                                [1U])));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumM 
        = ((((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                            vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bM
                                            [0U]), 
                          VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                        [0U])) + VL_MULS_III(32, 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bM
                                                                           [1U]), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                                                           [1U]))) 
             + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                             vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bM
                                             [2U]), 
                           VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                         [2U]))) - 
            VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aM
                                          [0U]), VL_EXTENDS_II(32,16, 
                                                               vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM
                                                               [0U]))) 
           - VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aM
                                           [1U]), VL_EXTENDS_II(32,16, 
                                                                vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM
                                                                [1U])));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumH 
        = ((((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                            vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bH
                                            [0U]), 
                          VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                        [0U])) + VL_MULS_III(32, 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bH
                                                                           [1U]), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                                                           [1U]))) 
             + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                             vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bH
                                             [2U]), 
                           VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                         [2U]))) - 
            VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aH
                                          [0U]), VL_EXTENDS_II(32,16, 
                                                               vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH
                                                               [0U]))) 
           - VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aH
                                           [1U]), VL_EXTENDS_II(32,16, 
                                                                vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH
                                                                [1U])));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtL 
        = (0xffffU & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumL 
                      >> 0xeU));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtM 
        = (0xffffU & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumM 
                      >> 0xeU));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtH 
        = (0xffffU & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumH 
                      >> 0xeU));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumout 
        = ((((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtL) 
             * (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gL)) 
            + ((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtM) 
               * (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gM))) 
           + ((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtH) 
              * (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gH)));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yout 
        = (0xffffU & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumout 
                      >> 8U));
    vlSelf->tb__DOT__test_harness__DOT__clk = vlSelf->tb__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__ui_in;
    vlSelf->tb__DOT__uo_out = vlSelf->tb__DOT__test_harness__DOT__uo_out;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__spi_cs_n;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__spi_cs_n;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__spi_clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__spi_clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__spi_mosi;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__spi_mosi;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__data_in;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_o 
        = vlSelf->tb__DOT__test_harness__DOT__data_in;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__address 
        = vlSelf->tb__DOT__test_harness__DOT__address;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_addr 
        = vlSelf->tb__DOT__test_harness__DOT__address;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__ui_in 
        = vlSelf->tb__DOT__test_harness__DOT__ui_in_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__ui_in_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__ui_in_sync;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_mosi 
        = vlSelf->tb__DOT__test_harness__DOT__spi_mosi_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_mosi_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_mosi_sync;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__pos_edge;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos_gated 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__pos_edge));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__neg_edge;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg_gated 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__neg_edge));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_i_dv 
        = vlSelf->tb__DOT__test_harness__DOT__data_ready;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_o_dv 
        = vlSelf->tb__DOT__test_harness__DOT__data_valid;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__rstb 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__rstb 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__rstb 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__rstb 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sof 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__neg_edge;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__eof 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state;
    if ((4U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state)))) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__tx_buffer_load = 1U;
            }
        }
        if ((2U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
            if ((0x20U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter))) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
            } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
            }
        } else if (vlSelf->tb__DOT__test_harness__DOT__data_ready) {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
            if ((0x20U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter))) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
            } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
            }
        } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw) {
            if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 3U;
            } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
            }
        } else {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 4U;
        }
    } else if ((1U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
        if ((0x20U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter))) {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 2U;
        } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge) {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
        }
    } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__neg_edge) {
        vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 1U;
    }
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_miso 
        = vlSelf->tb__DOT__test_harness__DOT__spi_miso;
    vlSelf->tb__DOT__test_harness__DOT__uio_out = (
                                                   ((IData)(vlSelf->tb__DOT__test_harness__DOT__spi_miso) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_ready) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__user_interrupt)));
    vlSelf->tb__DOT__test_harness__DOT__addr_valid 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__tx_buffer_load;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_cs_n_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_cs_n_sync;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_cs_n 
        = vlSelf->tb__DOT__test_harness__DOT__spi_cs_n_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_clk_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_clk_sync;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk 
        = vlSelf->tb__DOT__test_harness__DOT__spi_clk_sync;
    vlSelf->tb__DOT__test_harness__DOT__data_out = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_out;
    vlSelf->tb__DOT__test_harness__DOT__data_out_masked 
        = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_out;
    if ((1U & (~ ((IData)(vlSelf->tb__DOT__test_harness__DOT__txn_n) 
                  >> 1U)))) {
        vlSelf->tb__DOT__test_harness__DOT__data_out_masked 
            = (0xffffU & vlSelf->tb__DOT__test_harness__DOT__data_out_masked);
    }
    if ((0U == (IData)(vlSelf->tb__DOT__test_harness__DOT__txn_n))) {
        vlSelf->tb__DOT__test_harness__DOT__data_out_masked 
            = (0xffff00ffU & vlSelf->tb__DOT__test_harness__DOT__data_out_masked);
    }
    vlSelf->tb__DOT__test_harness__DOT__data_write_n = 3U;
    if (((IData)(vlSelf->tb__DOT__test_harness__DOT__data_valid) 
         & (IData)(vlSelf->tb__DOT__test_harness__DOT__data_rw))) {
        vlSelf->tb__DOT__test_harness__DOT__data_write_n 
            = vlSelf->tb__DOT__test_harness__DOT__txn_n;
    }
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_data_sample 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos_gated;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_data_change 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg_gated;
    vlSelf->tb__DOT__uio_out = vlSelf->tb__DOT__test_harness__DOT__uio_out;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_addr_v 
        = vlSelf->tb__DOT__test_harness__DOT__addr_valid;
    vlSelf->tb__DOT__test_harness__DOT__data_read_n = 3U;
    if (((IData)(vlSelf->tb__DOT__test_harness__DOT__addr_valid) 
         & (~ (IData)(vlSelf->tb__DOT__test_harness__DOT__data_rw)))) {
        vlSelf->tb__DOT__test_harness__DOT__data_read_n 
            = vlSelf->tb__DOT__test_harness__DOT__txn_n;
    }
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__data 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_cs_n;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__data 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_cs_n;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__data 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__data 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_i 
        = vlSelf->tb__DOT__test_harness__DOT__data_out_masked;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_write_n 
        = vlSelf->tb__DOT__test_harness__DOT__data_write_n;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__clk 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__clk;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_read_n 
        = vlSelf->tb__DOT__test_harness__DOT__data_read_n;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v0;
    __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v0;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v0 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v1;
    __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v2;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v4;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v4 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v0;
    __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v0;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v0 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v1;
    __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v2;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v4;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v4 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v0;
    __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v0;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v0 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v1;
    __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v2;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v4;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v4 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v0;
    __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v0;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v0 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v1;
    __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v1 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v2;
    __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v3;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v6;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v6 = 0;
    IData/*31:0*/ __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer;
    __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer = 0;
    CData/*5:0*/ __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter;
    __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter = 0;
    // Body
    __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter;
    __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v0 = 0U;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v2 = 0U;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v4 = 0U;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v0 = 0U;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v2 = 0U;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v4 = 0U;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v0 = 0U;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v2 = 0U;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v4 = 0U;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v0 = 0U;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v3 = 0U;
    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v6 = 0U;
    if (vlSelf->tb__DOT__test_harness__DOT__rst_reg_n) {
        if ((0x20U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter))) {
            __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter = 0U;
        } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos_gated) {
            __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter)));
        }
        if ((0U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
            __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer = 0U;
        } else if ((4U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
            __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer 
                = vlSelf->tb__DOT__test_harness__DOT__data_out_masked;
        } else if ((5U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
            if (((IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg_gated) 
                 & (0U != (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter)))) {
                __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer 
                    = (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer 
                       << 1U);
            }
        } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos_gated) {
            __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer 
                = ((vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer 
                    << 1U) | (IData)(vlSelf->tb__DOT__test_harness__DOT__spi_mosi_sync));
        }
        if ((1U & (~ (IData)((3U == (IData)(vlSelf->tb__DOT__test_harness__DOT__data_write_n)))))) {
            if ((0x10U == (IData)(vlSelf->tb__DOT__test_harness__DOT__address))) {
                __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v0 
                    = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtL;
                __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v0 = 1U;
                __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v1 
                    = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL
                    [0U];
                __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v0 
                    = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtM;
                __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v0 = 1U;
                __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v1 
                    = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM
                    [0U];
                __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v0 
                    = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtH;
                __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v0 = 1U;
                __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v1 
                    = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH
                    [0U];
                __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v0 
                    = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                    [1U];
                __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v0 = 1U;
                __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v1 
                    = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                    [0U];
                __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v2 
                    = (0xffffU & vlSelf->tb__DOT__test_harness__DOT__data_in);
                vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yout_reg 
                    = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yout;
            } else if ((0x14U == (IData)(vlSelf->tb__DOT__test_harness__DOT__address))) {
                if ((vlSelf->tb__DOT__test_harness__DOT__data_in 
                     >> 0x1fU)) {
                    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v2 = 1U;
                    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v2 = 1U;
                    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v2 = 1U;
                    __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v3 = 1U;
                }
            }
            if ((0x10U != (IData)(vlSelf->tb__DOT__test_harness__DOT__address))) {
                if ((0x14U == (IData)(vlSelf->tb__DOT__test_harness__DOT__address))) {
                    if ((0x40000000U & vlSelf->tb__DOT__test_harness__DOT__data_in)) {
                        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gH 
                            = (0xffU & (vlSelf->tb__DOT__test_harness__DOT__data_in 
                                        >> 0x10U));
                    }
                    if ((0x10000000U & vlSelf->tb__DOT__test_harness__DOT__data_in)) {
                        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gL 
                            = (0xffU & vlSelf->tb__DOT__test_harness__DOT__data_in);
                    }
                    if ((0x20000000U & vlSelf->tb__DOT__test_harness__DOT__data_in)) {
                        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gM 
                            = (0xffU & (vlSelf->tb__DOT__test_harness__DOT__data_in 
                                        >> 8U));
                    }
                }
            }
        }
        vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__dv = 0U;
        if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_data) {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__dv 
                = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw;
        }
        if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_addr) {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_width 
                = (3U & (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer 
                         >> 0x1dU));
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr 
                = (0x3fU & vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer);
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw 
                = (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer 
                   >> 0x1fU);
        }
        vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state 
            = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state;
    } else {
        __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter = 0U;
        __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer = 0U;
        __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v4 = 1U;
        __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v4 = 1U;
        __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v4 = 1U;
        __Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v6 = 1U;
        vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_width = 3U;
        vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yout_reg = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gH = 0xffU;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gL = 0xffU;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gM = 0xffU;
        vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__dv = 0U;
        vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state = 0U;
        vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw = 0U;
    }
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__data_dly 
        = ((IData)(vlSelf->tb__DOT__test_harness__DOT__rst_reg_n) 
           && (IData)(vlSelf->tb__DOT__test_harness__DOT__spi_clk_sync));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__data_dly 
        = ((IData)(vlSelf->tb__DOT__test_harness__DOT__rst_reg_n) 
           && (IData)(vlSelf->tb__DOT__test_harness__DOT__spi_clk_sync));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__data_dly 
        = ((IData)(vlSelf->tb__DOT__test_harness__DOT__rst_reg_n) 
           && (IData)(vlSelf->tb__DOT__test_harness__DOT__spi_cs_n_sync));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__data_dly 
        = ((IData)(vlSelf->tb__DOT__test_harness__DOT__rst_reg_n) 
           && (IData)(vlSelf->tb__DOT__test_harness__DOT__spi_cs_n_sync));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter 
        = __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter;
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL[0U] 
            = __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v0;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL[1U] 
            = __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v1;
    }
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v2) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL[0U] = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL[1U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yL__v4) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL[0U] = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL[1U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM[0U] 
            = __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v0;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM[1U] 
            = __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v1;
    }
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v2) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM[0U] = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM[1U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yM__v4) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM[0U] = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM[1U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH[0U] 
            = __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v0;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH[1U] 
            = __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v1;
    }
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v2) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH[0U] = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH[1U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__yH__v4) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH[0U] = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH[1U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v0) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x[2U] 
            = __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v0;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x[1U] 
            = __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v1;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x[0U] 
            = __Vdlyvval__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v2;
    }
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v3) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x[2U] = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x[1U] = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x[0U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__test_harness__DOT__user_peripheral__DOT__x__v6) {
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x[2U] = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x[1U] = 0U;
        vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x[0U] = 0U;
    }
    vlSelf->tb__DOT__test_harness__DOT__txn_n = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_width;
    vlSelf->tb__DOT__test_harness__DOT__address = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_out 
        = ((0U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
            ? (((- (IData)((1U & ((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yout_reg) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yout_reg))
            : ((4U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
                ? (((- (IData)((1U & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL
                                      [0U] >> 0xfU)))) 
                    << 0x10U) | vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL
                   [0U]) : ((8U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
                             ? (((- (IData)((1U & (
                                                   vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM
                                                   [0U] 
                                                   >> 0xfU)))) 
                                 << 0x10U) | vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM
                                [0U]) : ((0xcU == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH
                                                             [0U] 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH
                                             [0U]) : 
                                         ((0x10U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                                              [0U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                              [0U])
                                           : ((0x14U 
                                               == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr))
                                               ? (((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gH) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gM) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gL)))
                                               : 0U))))));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumL 
        = ((((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                            vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bL
                                            [0U]), 
                          VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                        [0U])) + VL_MULS_III(32, 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bL
                                                                           [1U]), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                                                           [1U]))) 
             + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                             vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bL
                                             [2U]), 
                           VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                         [2U]))) - 
            VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aL
                                          [0U]), VL_EXTENDS_II(32,16, 
                                                               vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL
                                                               [0U]))) 
           - VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aL
                                           [1U]), VL_EXTENDS_II(32,16, 
                                                                vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yL
                                                                [1U])));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumM 
        = ((((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                            vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bM
                                            [0U]), 
                          VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                        [0U])) + VL_MULS_III(32, 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bM
                                                                           [1U]), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                                                           [1U]))) 
             + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                             vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bM
                                             [2U]), 
                           VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                         [2U]))) - 
            VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aM
                                          [0U]), VL_EXTENDS_II(32,16, 
                                                               vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM
                                                               [0U]))) 
           - VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aM
                                           [1U]), VL_EXTENDS_II(32,16, 
                                                                vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yM
                                                                [1U])));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumH 
        = ((((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                            vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bH
                                            [0U]), 
                          VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                        [0U])) + VL_MULS_III(32, 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bH
                                                                           [1U]), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                                                           [1U]))) 
             + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                             vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__bH
                                             [2U]), 
                           VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__x
                                         [2U]))) - 
            VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aH
                                          [0U]), VL_EXTENDS_II(32,16, 
                                                               vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH
                                                               [0U]))) 
           - VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__aH
                                           [1U]), VL_EXTENDS_II(32,16, 
                                                                vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yH
                                                                [1U])));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtL 
        = (0xffffU & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumL 
                      >> 0xeU));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtM 
        = (0xffffU & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumM 
                      >> 0xeU));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtH 
        = (0xffffU & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumH 
                      >> 0xeU));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumout 
        = ((((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtL) 
             * (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gL)) 
            + ((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtM) 
               * (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gM))) 
           + ((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__youtH) 
              * (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__gH)));
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__yout 
        = (0xffffU & (vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__sumout 
                      >> 8U));
    vlSelf->tb__DOT__test_harness__DOT__data_valid 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__dv;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__address 
        = vlSelf->tb__DOT__test_harness__DOT__address;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_addr 
        = vlSelf->tb__DOT__test_harness__DOT__address;
    vlSelf->tb__DOT__test_harness__DOT__data_out = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_out;
    vlSelf->tb__DOT__test_harness__DOT__data_out_masked 
        = vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_out;
    if ((1U & (~ ((IData)(vlSelf->tb__DOT__test_harness__DOT__txn_n) 
                  >> 1U)))) {
        vlSelf->tb__DOT__test_harness__DOT__data_out_masked 
            = (0xffffU & vlSelf->tb__DOT__test_harness__DOT__data_out_masked);
    }
    if ((0U == (IData)(vlSelf->tb__DOT__test_harness__DOT__txn_n))) {
        vlSelf->tb__DOT__test_harness__DOT__data_out_masked 
            = (0xffff00ffU & vlSelf->tb__DOT__test_harness__DOT__data_out_masked);
    }
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_o_dv 
        = vlSelf->tb__DOT__test_harness__DOT__data_valid;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer 
        = __Vdly__tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_data = 0U;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_addr = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
                if ((0x20U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter))) {
                    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_data = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
                if ((0x20U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter))) {
                    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_addr = 1U;
                }
            }
        }
    }
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__tx_buffer_load = 0U;
    if ((4U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state)))) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__tx_buffer_load = 1U;
            }
        }
    }
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_i 
        = vlSelf->tb__DOT__test_harness__DOT__data_out_masked;
    vlSelf->tb__DOT__test_harness__DOT__data_in = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer;
    vlSelf->tb__DOT__test_harness__DOT__spi_miso = 
        ((5U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state)) 
         & (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer 
            >> 0x1fU));
    vlSelf->tb__DOT__test_harness__DOT__data_rw = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw;
    vlSelf->tb__DOT__test_harness__DOT__addr_valid 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__tx_buffer_load;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__data_in;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_o 
        = vlSelf->tb__DOT__test_harness__DOT__data_in;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_miso 
        = vlSelf->tb__DOT__test_harness__DOT__spi_miso;
    vlSelf->tb__DOT__test_harness__DOT__uio_out = (
                                                   ((IData)(vlSelf->tb__DOT__test_harness__DOT__spi_miso) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_ready) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__user_interrupt)));
    vlSelf->tb__DOT__test_harness__DOT__data_write_n = 3U;
    if (((IData)(vlSelf->tb__DOT__test_harness__DOT__data_valid) 
         & (IData)(vlSelf->tb__DOT__test_harness__DOT__data_rw))) {
        vlSelf->tb__DOT__test_harness__DOT__data_write_n 
            = vlSelf->tb__DOT__test_harness__DOT__txn_n;
    }
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_addr_v 
        = vlSelf->tb__DOT__test_harness__DOT__addr_valid;
    vlSelf->tb__DOT__test_harness__DOT__data_read_n = 3U;
    if (((IData)(vlSelf->tb__DOT__test_harness__DOT__addr_valid) 
         & (~ (IData)(vlSelf->tb__DOT__test_harness__DOT__data_rw)))) {
        vlSelf->tb__DOT__test_harness__DOT__data_read_n 
            = vlSelf->tb__DOT__test_harness__DOT__txn_n;
    }
    vlSelf->tb__DOT__uio_out = vlSelf->tb__DOT__test_harness__DOT__uio_out;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_write_n 
        = vlSelf->tb__DOT__test_harness__DOT__data_write_n;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__data_read_n 
        = vlSelf->tb__DOT__test_harness__DOT__data_read_n;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_sync[2U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__ui_in_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync 
        = vlSelf->tb__DOT__ui_in;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_sync[2U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__spi_mosi_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync 
        = vlSelf->tb__DOT__test_harness__DOT__spi_mosi;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync 
        = vlSelf->tb__DOT__test_harness__DOT__spi_clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_sync[2U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__spi_clk_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync 
        = vlSelf->tb__DOT__test_harness__DOT__spi_cs_n;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_sync[2U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__spi_cs_n_sync 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__ui_in 
        = vlSelf->tb__DOT__test_harness__DOT__ui_in_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__ui_in_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__ui_in_sync;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_mosi 
        = vlSelf->tb__DOT__test_harness__DOT__spi_mosi_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_mosi_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_mosi_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_clk_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_clk_sync;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk 
        = vlSelf->tb__DOT__test_harness__DOT__spi_clk_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_cs_n_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__spi_cs_n_sync;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_cs_n 
        = vlSelf->tb__DOT__test_harness__DOT__spi_cs_n_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_sync[1U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_sync[1U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_sync[1U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__data 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__data 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_sync[1U] 
        = vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__data 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_cs_n;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__data 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_cs_n;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb__DOT__test_harness__DOT__rst_reg_n = vlSelf->tb__DOT__rst_n;
    vlSelf->tb__DOT__test_harness__DOT__user_peripheral__DOT__rst_n 
        = vlSelf->tb__DOT__test_harness__DOT__rst_reg_n;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb 
        = vlSelf->tb__DOT__test_harness__DOT__rst_reg_n;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__rstb 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__rstb 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__rstb 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__rstb 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__pos_edge 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__data_dly)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__neg_edge 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__data_dly));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__neg_edge 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__data_dly));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__data_dly)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__pos_edge;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos_gated 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__pos_edge));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__neg_edge;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg_gated 
        = ((~ (IData)(vlSelf->tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync)) 
           & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__neg_edge));
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__sof 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__neg_edge;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__eof 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state;
    if ((4U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
            if ((0x20U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter))) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
            } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
            }
        } else if (vlSelf->tb__DOT__test_harness__DOT__data_ready) {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
            if ((0x20U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter))) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
            } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
            }
        } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw) {
            if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 3U;
            } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge) {
                vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
            }
        } else {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 4U;
        }
    } else if ((1U & (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__state))) {
        if ((0x20U == (IData)(vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter))) {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 2U;
        } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge) {
            vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 0U;
        }
    } else if (vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__neg_edge) {
        vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state = 1U;
    }
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_data_sample 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos_gated;
    vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_data_change 
        = vlSelf->tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg_gated;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___timing_resume(vlSelf);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/tasminwsl/eqv/ttsky25a-tinyQVb_Digital-Equalizer/test/tb.v", 7, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/tasminwsl/eqv/ttsky25a-tinyQVb_Digital-Equalizer/test/tb.v", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/tasminwsl/eqv/ttsky25a-tinyQVb_Digital-Equalizer/test/tb.v", 7, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
