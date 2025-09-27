// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__rst_reg_n;
        CData/*0:0*/ tb__DOT__rst_n;
        CData/*0:0*/ tb__DOT__ena;
        CData/*7:0*/ tb__DOT__ui_in;
        CData/*7:0*/ tb__DOT__uio_in;
        CData/*7:0*/ tb__DOT__uo_out;
        CData/*7:0*/ tb__DOT__uio_out;
        CData/*7:0*/ tb__DOT__uio_oe;
        CData/*7:0*/ tb__DOT__test_harness__DOT__ui_in;
        CData/*7:0*/ tb__DOT__test_harness__DOT__uo_out;
        CData/*7:0*/ tb__DOT__test_harness__DOT__uio_in;
        CData/*7:0*/ tb__DOT__test_harness__DOT__uio_out;
        CData/*7:0*/ tb__DOT__test_harness__DOT__uio_oe;
        CData/*0:0*/ tb__DOT__test_harness__DOT__ena;
        CData/*0:0*/ tb__DOT__test_harness__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__rst_n;
        CData/*5:0*/ tb__DOT__test_harness__DOT__address;
        CData/*1:0*/ tb__DOT__test_harness__DOT__data_write_n;
        CData/*1:0*/ tb__DOT__test_harness__DOT__data_read_n;
        CData/*0:0*/ tb__DOT__test_harness__DOT__data_ready;
        CData/*0:0*/ tb__DOT__test_harness__DOT__user_interrupt;
        CData/*7:0*/ tb__DOT__test_harness__DOT__ui_in_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT__addr_valid;
        CData/*0:0*/ tb__DOT__test_harness__DOT__data_valid;
        CData/*0:0*/ tb__DOT__test_harness__DOT__data_rw;
        CData/*1:0*/ tb__DOT__test_harness__DOT__txn_n;
        CData/*0:0*/ tb__DOT__test_harness__DOT__spi_cs_n;
        CData/*0:0*/ tb__DOT__test_harness__DOT__spi_clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__spi_miso;
        CData/*0:0*/ tb__DOT__test_harness__DOT__spi_mosi;
        CData/*0:0*/ tb__DOT__test_harness__DOT__spi_cs_n_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT__spi_clk_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT__spi_mosi_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT___unused;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__clk;
        CData/*7:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_in;
        CData/*7:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_out;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk;
        CData/*7:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in;
        CData/*7:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out;
        CData/*7:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk;
        CData/*7:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in;
        CData/*7:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out;
        CData/*7:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__rst_n;
        CData/*7:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__ui_in;
        CData/*7:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__uo_out;
        CData/*5:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__address;
        CData/*1:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__data_write_n;
        CData/*1:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__data_read_n;
        CData/*0:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__data_ready;
        CData/*0:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__user_interrupt;
        CData/*7:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__gL;
        CData/*7:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__gM;
        CData/*7:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__gH;
        CData/*0:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT___unused;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_in;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_out;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in;
    };
    struct {
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_in;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_out;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_in;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_out;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out;
        CData/*0:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__ena;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_mosi;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_miso;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_cs_n;
        CData/*5:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_addr;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_addr_v;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_i_dv;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_o_dv;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw;
        CData/*1:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_width;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__sof;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__eof;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos_gated;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg_gated;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_data_sample;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_data_change;
        CData/*2:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__state;
        CData/*2:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state;
        CData/*5:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__tx_buffer_load;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_addr;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_data;
        CData/*5:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__dv;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__rstb;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__ena;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__data;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__neg_edge;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__data_dly;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__rstb;
    };
    struct {
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__ena;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__data;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__data_dly;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__rstb;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__ena;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__data;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__pos_edge;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__data_dly;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__rstb;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__clk;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__ena;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__data;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__neg_edge;
        CData/*0:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__data_dly;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__test_harness__DOT__rst_reg_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__yout_reg;
        SData/*15:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__youtL;
        SData/*15:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__youtM;
        SData/*15:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__youtH;
        SData/*15:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__yout;
        IData/*31:0*/ tb__DOT__test_harness__DOT__data_in;
        IData/*31:0*/ tb__DOT__test_harness__DOT__data_out;
        IData/*31:0*/ tb__DOT__test_harness__DOT__data_out_masked;
        IData/*31:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__data_in;
        IData/*31:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__data_out;
        IData/*31:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__sumL;
        IData/*31:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__sumM;
        IData/*31:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__sumH;
        IData/*31:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__sumout;
        IData/*31:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_i;
        IData/*31:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_o;
        IData/*31:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 3> tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_sync;
        VlUnpacked<SData/*15:0*/, 3> tb__DOT__test_harness__DOT__user_peripheral__DOT__bL;
        VlUnpacked<SData/*15:0*/, 2> tb__DOT__test_harness__DOT__user_peripheral__DOT__aL;
        VlUnpacked<SData/*15:0*/, 3> tb__DOT__test_harness__DOT__user_peripheral__DOT__bM;
        VlUnpacked<SData/*15:0*/, 2> tb__DOT__test_harness__DOT__user_peripheral__DOT__aM;
        VlUnpacked<SData/*15:0*/, 3> tb__DOT__test_harness__DOT__user_peripheral__DOT__bH;
        VlUnpacked<SData/*15:0*/, 2> tb__DOT__test_harness__DOT__user_peripheral__DOT__aH;
        VlUnpacked<SData/*15:0*/, 3> tb__DOT__test_harness__DOT__user_peripheral__DOT__x;
        VlUnpacked<SData/*15:0*/, 2> tb__DOT__test_harness__DOT__user_peripheral__DOT__yL;
        VlUnpacked<SData/*15:0*/, 2> tb__DOT__test_harness__DOT__user_peripheral__DOT__yM;
        VlUnpacked<SData/*15:0*/, 2> tb__DOT__test_harness__DOT__user_peripheral__DOT__yH;
        VlUnpacked<CData/*0:0*/, 3> tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_sync;
        VlUnpacked<CData/*0:0*/, 3> tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_sync;
        VlUnpacked<CData/*0:0*/, 3> tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_sync;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__STAGES = 2U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__N = 2U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__user_peripheral__DOT__width = 0x00000010U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__STAGES = 2U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__STAGES = 2U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__STAGES = 2U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__ADDR_W = 6U;
    static constexpr IData/*31:0*/ tb__DOT__test_harness__DOT__i_spi_reg__DOT__REG_W = 0x00000020U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
