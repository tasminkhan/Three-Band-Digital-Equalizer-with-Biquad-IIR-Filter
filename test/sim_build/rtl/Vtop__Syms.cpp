// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_tb);
    __Vhier.remove(&__Vscope_tb, &__Vscope_tb__test_harness);
    __Vhier.remove(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__i_spi_reg);
    __Vhier.remove(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__synchronizer_spi_clk_inst);
    __Vhier.remove(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__synchronizer_spi_cs_n_inst);
    __Vhier.remove(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__synchronizer_spi_mosi_inst);
    __Vhier.remove(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__synchronizer_ui_in_inst);
    __Vhier.remove(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__user_peripheral);
    __Vhier.remove(&__Vscope_tb__test_harness__i_spi_reg, &__Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_sof);
    __Vhier.remove(&__Vscope_tb__test_harness__i_spi_reg, &__Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_spi_clk);
    __Vhier.remove(&__Vscope_tb__test_harness__i_spi_reg, &__Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_eof);
    __Vhier.remove(&__Vscope_tb__test_harness__i_spi_reg, &__Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_spi_clk);
    __Vhier.remove(&__Vscope_tb__test_harness__synchronizer_spi_clk_inst, &__Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__0__KET____reclocking_i0);
    __Vhier.remove(&__Vscope_tb__test_harness__synchronizer_spi_clk_inst, &__Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__1__KET____reclocking_i0);
    __Vhier.remove(&__Vscope_tb__test_harness__synchronizer_spi_cs_n_inst, &__Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__0__KET____reclocking_i0);
    __Vhier.remove(&__Vscope_tb__test_harness__synchronizer_spi_cs_n_inst, &__Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__1__KET____reclocking_i0);
    __Vhier.remove(&__Vscope_tb__test_harness__synchronizer_spi_mosi_inst, &__Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__0__KET____reclocking_i0);
    __Vhier.remove(&__Vscope_tb__test_harness__synchronizer_spi_mosi_inst, &__Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__1__KET____reclocking_i0);
    __Vhier.remove(&__Vscope_tb__test_harness__synchronizer_ui_in_inst, &__Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__0__KET____reclocking_i0);
    __Vhier.remove(&__Vscope_tb__test_harness__synchronizer_ui_in_inst, &__Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__1__KET____reclocking_i0);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb.configure(this, name(), "tb", "tb", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness.configure(this, name(), "tb.test_harness", "test_harness", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__i_spi_reg.configure(this, name(), "tb.test_harness.i_spi_reg", "i_spi_reg", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_sof.configure(this, name(), "tb.test_harness.i_spi_reg.falling_edge_detector_sof", "falling_edge_detector_sof", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_spi_clk.configure(this, name(), "tb.test_harness.i_spi_reg.falling_edge_detector_spi_clk", "falling_edge_detector_spi_clk", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_eof.configure(this, name(), "tb.test_harness.i_spi_reg.rising_edge_detector_eof", "rising_edge_detector_eof", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_spi_clk.configure(this, name(), "tb.test_harness.i_spi_reg.rising_edge_detector_spi_clk", "rising_edge_detector_spi_clk", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_spi_clk_inst.configure(this, name(), "tb.test_harness.synchronizer_spi_clk_inst", "synchronizer_spi_clk_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__0__KET__.configure(this, name(), "tb.test_harness.synchronizer_spi_clk_inst.gen_reclocking[0]", "gen_reclocking[0]", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__0__KET____reclocking_i0.configure(this, name(), "tb.test_harness.synchronizer_spi_clk_inst.gen_reclocking[0].reclocking_i0", "reclocking_i0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__1__KET__.configure(this, name(), "tb.test_harness.synchronizer_spi_clk_inst.gen_reclocking[1]", "gen_reclocking[1]", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__1__KET____reclocking_i0.configure(this, name(), "tb.test_harness.synchronizer_spi_clk_inst.gen_reclocking[1].reclocking_i0", "reclocking_i0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst.configure(this, name(), "tb.test_harness.synchronizer_spi_cs_n_inst", "synchronizer_spi_cs_n_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__0__KET__.configure(this, name(), "tb.test_harness.synchronizer_spi_cs_n_inst.gen_reclocking[0]", "gen_reclocking[0]", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__0__KET____reclocking_i0.configure(this, name(), "tb.test_harness.synchronizer_spi_cs_n_inst.gen_reclocking[0].reclocking_i0", "reclocking_i0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__1__KET__.configure(this, name(), "tb.test_harness.synchronizer_spi_cs_n_inst.gen_reclocking[1]", "gen_reclocking[1]", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__1__KET____reclocking_i0.configure(this, name(), "tb.test_harness.synchronizer_spi_cs_n_inst.gen_reclocking[1].reclocking_i0", "reclocking_i0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_spi_mosi_inst.configure(this, name(), "tb.test_harness.synchronizer_spi_mosi_inst", "synchronizer_spi_mosi_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__0__KET__.configure(this, name(), "tb.test_harness.synchronizer_spi_mosi_inst.gen_reclocking[0]", "gen_reclocking[0]", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__0__KET____reclocking_i0.configure(this, name(), "tb.test_harness.synchronizer_spi_mosi_inst.gen_reclocking[0].reclocking_i0", "reclocking_i0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__1__KET__.configure(this, name(), "tb.test_harness.synchronizer_spi_mosi_inst.gen_reclocking[1]", "gen_reclocking[1]", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__1__KET____reclocking_i0.configure(this, name(), "tb.test_harness.synchronizer_spi_mosi_inst.gen_reclocking[1].reclocking_i0", "reclocking_i0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_ui_in_inst.configure(this, name(), "tb.test_harness.synchronizer_ui_in_inst", "synchronizer_ui_in_inst", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__0__KET__.configure(this, name(), "tb.test_harness.synchronizer_ui_in_inst.gen_reclocking[0]", "gen_reclocking[0]", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__0__KET____reclocking_i0.configure(this, name(), "tb.test_harness.synchronizer_ui_in_inst.gen_reclocking[0].reclocking_i0", "reclocking_i0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__1__KET__.configure(this, name(), "tb.test_harness.synchronizer_ui_in_inst.gen_reclocking[1]", "gen_reclocking[1]", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__1__KET____reclocking_i0.configure(this, name(), "tb.test_harness.synchronizer_ui_in_inst.gen_reclocking[1].reclocking_i0", "reclocking_i0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_tb__test_harness__user_peripheral.configure(this, name(), "tb.test_harness.user_peripheral", "user_peripheral", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_tb);
    __Vhier.add(&__Vscope_tb, &__Vscope_tb__test_harness);
    __Vhier.add(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__i_spi_reg);
    __Vhier.add(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__synchronizer_spi_clk_inst);
    __Vhier.add(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__synchronizer_spi_cs_n_inst);
    __Vhier.add(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__synchronizer_spi_mosi_inst);
    __Vhier.add(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__synchronizer_ui_in_inst);
    __Vhier.add(&__Vscope_tb__test_harness, &__Vscope_tb__test_harness__user_peripheral);
    __Vhier.add(&__Vscope_tb__test_harness__i_spi_reg, &__Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_sof);
    __Vhier.add(&__Vscope_tb__test_harness__i_spi_reg, &__Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_spi_clk);
    __Vhier.add(&__Vscope_tb__test_harness__i_spi_reg, &__Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_eof);
    __Vhier.add(&__Vscope_tb__test_harness__i_spi_reg, &__Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_spi_clk);
    __Vhier.add(&__Vscope_tb__test_harness__synchronizer_spi_clk_inst, &__Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__0__KET____reclocking_i0);
    __Vhier.add(&__Vscope_tb__test_harness__synchronizer_spi_clk_inst, &__Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__1__KET____reclocking_i0);
    __Vhier.add(&__Vscope_tb__test_harness__synchronizer_spi_cs_n_inst, &__Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__0__KET____reclocking_i0);
    __Vhier.add(&__Vscope_tb__test_harness__synchronizer_spi_cs_n_inst, &__Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__1__KET____reclocking_i0);
    __Vhier.add(&__Vscope_tb__test_harness__synchronizer_spi_mosi_inst, &__Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__0__KET____reclocking_i0);
    __Vhier.add(&__Vscope_tb__test_harness__synchronizer_spi_mosi_inst, &__Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__1__KET____reclocking_i0);
    __Vhier.add(&__Vscope_tb__test_harness__synchronizer_ui_in_inst, &__Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__0__KET____reclocking_i0);
    __Vhier.add(&__Vscope_tb__test_harness__synchronizer_ui_in_inst, &__Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__1__KET____reclocking_i0);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_tb.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb.varInsert(__Vfinal,"ena", &(TOP.tb__DOT__ena), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb.varInsert(__Vfinal,"rst_n", &(TOP.tb__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb.varInsert(__Vfinal,"ui_in", &(TOP.tb__DOT__ui_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb.varInsert(__Vfinal,"uio_in", &(TOP.tb__DOT__uio_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb.varInsert(__Vfinal,"uio_oe", &(TOP.tb__DOT__uio_oe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb.varInsert(__Vfinal,"uio_out", &(TOP.tb__DOT__uio_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb.varInsert(__Vfinal,"uo_out", &(TOP.tb__DOT__uo_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"_unused", &(TOP.tb__DOT__test_harness__DOT___unused), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"addr_valid", &(TOP.tb__DOT__test_harness__DOT__addr_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"address", &(TOP.tb__DOT__test_harness__DOT__address), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"data_out_masked", &(TOP.tb__DOT__test_harness__DOT__data_out_masked), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"data_read_n", &(TOP.tb__DOT__test_harness__DOT__data_read_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"data_ready", &(TOP.tb__DOT__test_harness__DOT__data_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"data_rw", &(TOP.tb__DOT__test_harness__DOT__data_rw), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"data_valid", &(TOP.tb__DOT__test_harness__DOT__data_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"data_write_n", &(TOP.tb__DOT__test_harness__DOT__data_write_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"ena", &(TOP.tb__DOT__test_harness__DOT__ena), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"rst_n", &(TOP.tb__DOT__test_harness__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"rst_reg_n", &(TOP.tb__DOT__test_harness__DOT__rst_reg_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"spi_clk", &(TOP.tb__DOT__test_harness__DOT__spi_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"spi_clk_sync", &(TOP.tb__DOT__test_harness__DOT__spi_clk_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"spi_cs_n", &(TOP.tb__DOT__test_harness__DOT__spi_cs_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"spi_cs_n_sync", &(TOP.tb__DOT__test_harness__DOT__spi_cs_n_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"spi_miso", &(TOP.tb__DOT__test_harness__DOT__spi_miso), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"spi_mosi", &(TOP.tb__DOT__test_harness__DOT__spi_mosi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"spi_mosi_sync", &(TOP.tb__DOT__test_harness__DOT__spi_mosi_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"txn_n", &(TOP.tb__DOT__test_harness__DOT__txn_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"ui_in", &(TOP.tb__DOT__test_harness__DOT__ui_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"ui_in_sync", &(TOP.tb__DOT__test_harness__DOT__ui_in_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"uio_in", &(TOP.tb__DOT__test_harness__DOT__uio_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"uio_oe", &(TOP.tb__DOT__test_harness__DOT__uio_oe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"uio_out", &(TOP.tb__DOT__test_harness__DOT__uio_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"uo_out", &(TOP.tb__DOT__test_harness__DOT__uo_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness.varInsert(__Vfinal,"user_interrupt", &(TOP.tb__DOT__test_harness__DOT__user_interrupt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__ADDR_W))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"REG_W", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__REG_W))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"addr", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"buffer_counter", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__buffer_counter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"dv", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__dv), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"ena", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__ena), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"eof", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__eof), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"next_state", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__next_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"reg_addr", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"reg_addr_v", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_addr_v), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"reg_data_i", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"reg_data_i_dv", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_i_dv), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"reg_data_o", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_o), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"reg_data_o_dv", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_data_o_dv), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"reg_rw", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__reg_rw), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"rstb", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rstb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"sample_addr", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"sample_data", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__sample_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"sof", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__sof), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"spi_clk", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"spi_clk_neg", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"spi_clk_neg_gated", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_neg_gated), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"spi_clk_pos", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"spi_clk_pos_gated", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_clk_pos_gated), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"spi_cs_n", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_cs_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"spi_data_change", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_data_change), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"spi_data_sample", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_data_sample), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"spi_miso", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_miso), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"spi_mosi", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__spi_mosi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"state", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"tx_buffer_load", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__tx_buffer_load), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"txn_buffer", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_buffer), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness__i_spi_reg.varInsert(__Vfinal,"txn_width", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__txn_width), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_sof.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_sof.varInsert(__Vfinal,"data", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_sof.varInsert(__Vfinal,"data_dly", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__data_dly), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_sof.varInsert(__Vfinal,"ena", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__ena), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_sof.varInsert(__Vfinal,"neg_edge", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__neg_edge), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_sof.varInsert(__Vfinal,"rstb", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_sof__DOT__rstb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_spi_clk.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_spi_clk.varInsert(__Vfinal,"data", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_spi_clk.varInsert(__Vfinal,"data_dly", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__data_dly), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_spi_clk.varInsert(__Vfinal,"ena", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__ena), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_spi_clk.varInsert(__Vfinal,"neg_edge", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__neg_edge), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__falling_edge_detector_spi_clk.varInsert(__Vfinal,"rstb", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__falling_edge_detector_spi_clk__DOT__rstb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_eof.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_eof.varInsert(__Vfinal,"data", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_eof.varInsert(__Vfinal,"data_dly", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__data_dly), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_eof.varInsert(__Vfinal,"ena", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__ena), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_eof.varInsert(__Vfinal,"pos_edge", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__pos_edge), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_eof.varInsert(__Vfinal,"rstb", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_eof__DOT__rstb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_spi_clk.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_spi_clk.varInsert(__Vfinal,"data", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_spi_clk.varInsert(__Vfinal,"data_dly", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__data_dly), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_spi_clk.varInsert(__Vfinal,"ena", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__ena), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_spi_clk.varInsert(__Vfinal,"pos_edge", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__pos_edge), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__i_spi_reg__rising_edge_detector_spi_clk.varInsert(__Vfinal,"rstb", &(TOP.tb__DOT__test_harness__DOT__i_spi_reg__DOT__rising_edge_detector_spi_clk__DOT__rstb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst.varInsert(__Vfinal,"STAGES", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__STAGES))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,0,0 ,0,2);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_clk_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_clk_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst.varInsert(__Vfinal,"STAGES", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__STAGES))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,0,0 ,0,2);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_cs_n_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_cs_n_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst.varInsert(__Vfinal,"STAGES", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__STAGES))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,0,0 ,0,2);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_spi_mosi_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_spi_mosi_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst.varInsert(__Vfinal,"STAGES", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__STAGES))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,7,0 ,0,2);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__0__KET____reclocking_i0.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__0__KET____DOT__reclocking_i0__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__synchronizer_ui_in_inst__gen_reclocking__BRA__1__KET____reclocking_i0.varInsert(__Vfinal,"data_sync", &(TOP.tb__DOT__test_harness__DOT__synchronizer_ui_in_inst__DOT__gen_reclocking__BRA__1__KET____DOT__reclocking_i0__DOT__data_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"N", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__N))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"_unused", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT___unused), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"aH", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__aH), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,1,2);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"aL", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__aL), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,1,2);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"aM", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__aM), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,1,2);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"address", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__address), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"bH", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__bH), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,2);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"bL", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__bL), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,2);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"bM", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__bM), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,2);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"clk", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"data_in", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"data_out", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"data_read_n", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__data_read_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"data_ready", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__data_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"data_write_n", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__data_write_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"gH", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__gH), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"gL", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__gL), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"gM", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__gM), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"rst_n", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"sumH", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__sumH), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"sumL", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__sumL), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"sumM", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__sumM), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"sumout", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__sumout), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"ui_in", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__ui_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"uo_out", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__uo_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"user_interrupt", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__user_interrupt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"width", const_cast<void*>(static_cast<const void*>(&(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__width))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"x", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__x), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,2);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"yH", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__yH), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,1,2);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"yL", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__yL), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,1,2);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"yM", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__yM), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,1,2);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"yout", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__yout), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"youtH", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__youtH), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"youtL", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__youtL), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"youtM", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__youtM), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_tb__test_harness__user_peripheral.varInsert(__Vfinal,"yout_reg", &(TOP.tb__DOT__test_harness__DOT__user_peripheral__DOT__yout_reg), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
    }
}
