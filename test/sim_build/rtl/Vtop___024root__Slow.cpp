// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__STAGES;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__user_peripheral__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__user_peripheral__DOT__width;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__STAGES;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__STAGES;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__STAGES;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__i_spi_reg__DOT__ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::tb__DOT__test_harness__DOT__i_spi_reg__DOT__REG_W;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop___024root::~Vtop___024root() {
}
