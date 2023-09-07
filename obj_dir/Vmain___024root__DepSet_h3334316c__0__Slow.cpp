// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmain__Syms.h"
#include "Vmain___024root.h"

VL_ATTR_COLD void Vmain___024root___eval_static__TOP(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_static(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_static\n"); );
    // Body
    Vmain___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vmain___024root___eval_static__TOP(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction = 0x4380005U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter = 5U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update = 1U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[8U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[9U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xaU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xbU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xcU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xdU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xeU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xfU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm = 0ULL;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned = 0ULL;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp = 0ULL;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[8U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[9U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xaU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xbU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xcU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xdU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xeU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xfU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[8U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[9U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[0xaU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[0xbU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[0xcU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[0xdU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[0xeU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp[0xfU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q = 1U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store = 0ULL;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__lane = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8 = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[8U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[9U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xaU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xbU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xcU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xdU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xeU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xfU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback = 1U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[8U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[9U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xaU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xbU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xcU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xdU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xeU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xfU] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data = 0ULL;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_level_fail = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2 = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__test_state = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_test_address_counter = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_counter = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_counter = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__correct_read_data = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_read_data = 0U;
    vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero = 1U;
    vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero = 1U;
    vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero = 1U;
    vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero = 1U;
}

VL_ATTR_COLD void Vmain___024root___eval_initial__TOP(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_initial(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial\n"); );
    // Body
    Vmain___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
    vlSelf->__Vtrigprevexpr___TOP__main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant__0 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant;
    vlSelf->__Vtrigprevexpr___TOP__main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant__0 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant;
    vlSelf->__Vtrigprevexpr___TOP__main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant__0 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant;
    vlSelf->__Vtrigprevexpr___TOP__main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant__0 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant;
    vlSelf->__Vtrigprevexpr___TOP__main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant__0 
        = vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant;
    vlSelf->__Vtrigprevexpr___TOP__main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant__0 
        = vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant;
}

extern const VlWide<16>/*511:0*/ Vmain__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void Vmain___024root___eval_initial__TOP(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->main__DOT__wbwide_xbar__DOT__iM = 3U;
    vlSelf->main__DOT__wbwide_xbar__DOT__iN = 4U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__iM = 3U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__iM = 3U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__iM = 3U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__iM = 3U;
    vlSelf->main__DOT__wb32_xbar__DOT__iN = 1U;
    vlSelf->main__DOT__wb32_xbar__DOT__requested[0U] 
        = (0x7feU & vlSelf->main__DOT__wb32_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wb32_xbar__DOT__requested[0U] 
        = (0x7fdU & vlSelf->main__DOT__wb32_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wb32_xbar__DOT__requested[0U] 
        = (0x7fbU & vlSelf->main__DOT__wb32_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wb32_xbar__DOT__requested[0U] 
        = (0x7f7U & vlSelf->main__DOT__wb32_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wb32_xbar__DOT__requested[0U] 
        = (0x7efU & vlSelf->main__DOT__wb32_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wb32_xbar__DOT__requested[0U] 
        = (0x7dfU & vlSelf->main__DOT__wb32_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wb32_xbar__DOT__requested[0U] 
        = (0x7bfU & vlSelf->main__DOT__wb32_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wb32_xbar__DOT__requested[0U] 
        = (0x77fU & vlSelf->main__DOT__wb32_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wb32_xbar__DOT__requested[0U] 
        = (0x6ffU & vlSelf->main__DOT__wb32_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wb32_xbar__DOT__requested[0U] 
        = (0x5ffU & vlSelf->main__DOT__wb32_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wb32_xbar__DOT__requested[0U] 
        = (0x3ffU & vlSelf->main__DOT__wb32_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wb32_xbar__DOT__iM = 0xbU;
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__iM = 0xbU;
    vlSelf->main__DOT__wbu_xbar__DOT__iN = 1U;
    vlSelf->main__DOT__wbu_xbar__DOT__requested[0U] 
        = (2U & vlSelf->main__DOT__wbu_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wbu_xbar__DOT__requested[0U] 
        = (1U & vlSelf->main__DOT__wbu_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wbu_xbar__DOT__iM = 2U;
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__iM = 2U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__ik = 0x40U;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k = 0U;
    while (VL_GTS_III(32, 0x80U, vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k)) {
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv = 0x40U;
        if ((VL_LTES_III(32, 0x30U, vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k) 
             & VL_GTES_III(32, 0x39U, vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k))) {
            vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv 
                = (0x7fU & vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k);
            vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv 
                = (0x40U | (0xfU & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv)));
        } else {
            vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv 
                = ((VL_LTES_III(32, 0x41U, vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k) 
                    & VL_GTES_III(32, 0x5aU, vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k))
                    ? (0x40U | (0x3fU & ((IData)(9U) 
                                         + vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k)))
                    : ((VL_LTES_III(32, 0x61U, vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k) 
                        & VL_GTES_III(32, 0x7aU, vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k))
                        ? ((0x40U & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv)) 
                           | (0x3fU & ((IData)(3U) 
                                       + vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k)))
                        : ((0x40U == vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k)
                            ? (0x3eU | (0x40U & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv)))
                            : ((0x25U == vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k)
                                ? (0x3fU | (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv))
                                : 0U))));
        }
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__remap[(0x7fU 
                                                                           & vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k)] 
            = vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv;
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k 
            = ((IData)(1U) + vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k);
    }
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k = 0U;
    while (VL_GTS_III(32, 0x80U, vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k)) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__newv 
            = (VL_LTES_III(32, 0x40U, vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k)
                ? 0xaU : (0x7fU & ((9U >= vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k)
                                    ? ((IData)(0x30U) 
                                       + (0xfU & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k))
                                    : ((0x23U >= (0x3fU 
                                                  & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k))
                                        ? ((IData)(0x37U) 
                                           + (0x3fU 
                                              & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k))
                                        : ((0x3dU >= 
                                            (0x3fU 
                                             & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k))
                                            ? ((IData)(0x3dU) 
                                               + (0x3fU 
                                                  & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k))
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k))
                                                ? 0x40U
                                                : 0x25U))))));
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__remap[(0x7fU 
                                                                            & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k)] 
            = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__newv;
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k 
            = ((IData)(1U) + vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k);
    }
    vlSelf->main__DOT__wbu_xbar__DOT__s_data[2U] = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__s_data[3U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[9U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0xbU] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0xcU] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0xdU] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0xeU] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0xfU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][0U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][1U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[1U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][2U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[2U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][3U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[3U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][4U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[4U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][5U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[5U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][6U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[6U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][7U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[7U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][8U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[8U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][9U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[9U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][0xaU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][0xbU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][0xcU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][0xdU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][0xeU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3U][0xfU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
    vlSelf->main__DOT__wbwide_xbar__DOT__sindex[3U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[0U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[1U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[2U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[3U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[4U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[5U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[6U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[7U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[8U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[9U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[0xaU] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[0xbU] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[0xcU] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[0xdU] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[0xeU] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sindex[0xfU] = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__sindex[0U] = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__sindex[1U] = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__sindex[2U] = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__sindex[3U] = 0U;
    vlSelf->main__DOT__r_wb32_sio_ack = 0U;
    vlSelf->main__DOT__r_sirefclk_en = 0U;
    vlSelf->main__DOT__r_sirefclk_data = 0x4e20U;
    vlSelf->main__DOT__r_cfg_ack = 0U;
    vlSelf->o_wbu_uart_cts_n = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__sgrant = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__grant[0U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__mgrant = (0xeU 
                                                   & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
    vlSelf->main__DOT__wbwide_xbar__DOT__grant[1U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__mgrant = (0xdU 
                                                   & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
    vlSelf->main__DOT__wbwide_xbar__DOT__grant[2U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__mgrant = (0xbU 
                                                   & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
    vlSelf->main__DOT__wbwide_xbar__DOT__grant[3U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__mgrant = (7U 
                                                   & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc 
        = (6U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb 
        = (6U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc 
        = (5U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb 
        = (5U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc 
        = (3U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb 
        = (3U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb));
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
        = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
        = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
        = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
        = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__mempty = (1U 
                                                   | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
    vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull 
        = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull));
    vlSelf->main__DOT__wbwide_xbar__DOT__mfull = (0xeU 
                                                  & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__mempty = (2U 
                                                   | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
    vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull 
        = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull));
    vlSelf->main__DOT__wbwide_xbar__DOT__mfull = (0xdU 
                                                  & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__mempty = (4U 
                                                   | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
    vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull 
        = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull));
    vlSelf->main__DOT__wbwide_xbar__DOT__mfull = (0xbU 
                                                  & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__mempty = (8U 
                                                   | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
    vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull 
        = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull));
    vlSelf->main__DOT__wbwide_xbar__DOT__mfull = (7U 
                                                  & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[1U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[2U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[3U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[4U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[5U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[6U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[7U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[8U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[9U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xaU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xbU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xcU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xdU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xeU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xfU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0x10U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0x11U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0x12U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[1U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[2U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[3U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[4U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[5U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[6U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[7U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[8U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[9U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xaU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xbU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xcU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xdU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xeU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xfU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0x10U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0x11U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0x12U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[1U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[2U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[3U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[4U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[5U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[6U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[7U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[8U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[9U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xaU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xbU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xcU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xdU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xeU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xfU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0x10U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0x11U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0x12U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[1U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[2U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[3U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[4U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[5U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[6U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[7U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[8U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[9U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xaU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xbU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xcU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xdU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xeU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xfU] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0x10U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0x11U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0x12U] = 0U;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__sgrant = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__grant[0U] = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__mgrant = 0U;
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = (0x7feU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = (0x7feU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = (0x7fdU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = (0x7fdU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = (0x7fbU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = (0x7fbU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = (0x7f7U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = (0x7f7U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = (0x7efU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = (0x7efU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = (0x7dfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = (0x7dfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = (0x7bfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = (0x7bfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = (0x77fU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = (0x77fU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = (0x6ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = (0x6ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = (0x5ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = (0x5ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = (0x3ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = (0x3ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__mempty = 1U;
    vlSelf->main__DOT__wb32_xbar__DOT__mnearfull = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__mfull = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data = 0ULL;
    vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data = 0ULL;
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__sgrant = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__grant[0U] = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__mgrant = 0U;
    vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc 
        = (2U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb 
        = (2U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb));
    vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc 
        = (1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc));
    vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb 
        = (1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb));
    vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__mempty = 1U;
    vlSelf->main__DOT__wbu_xbar__DOT__mnearfull = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__mfull = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U] = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U] = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U] = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr = 0U;
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data = 0ULL;
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__br_config = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff = 0x1fcU;
    vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr = 1U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr = 1U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__waddr = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack = 0U;
    vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__br_config = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff = 0x1fcU;
    vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr = 1U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr = 1U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__waddr = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack = 0U;
    vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt = 0U;
    vlSelf->o_ddr3_controller_bitslip = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q 
        = (0xfeU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = (0xfeU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q 
        = (0xfdU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = (0xfdU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q 
        = (0xfbU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = (0xfbU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q 
        = (0xf7U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = (0xf7U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q 
        = (0xefU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = (0xefU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q 
        = (0xdfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = (0xdfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q 
        = (0xbfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = (0xbfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q 
        = (0x7fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = (0x7fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][0U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][1U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[1U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][2U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[2U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][3U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[3U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][4U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[4U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][5U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[5U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][6U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[6U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][7U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[7U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][8U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[8U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][9U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[9U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][0xaU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][0xbU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][0xcU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][0xdU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][0xeU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U][0xfU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] = 0ULL;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][1U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[1U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][2U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[2U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][3U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[3U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][4U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[4U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][5U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[5U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][6U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[6U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][7U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[7U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][8U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[8U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][9U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[9U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xaU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xbU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xcU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xdU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xeU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xfU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1U] = 0ULL;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0U] = 0xffffffU;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1U] = 0xffffffU;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2U] = 0xffffffU;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3U] = 0xffffffU;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[0U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[1U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[1U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[1U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[2U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[2U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[2U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[3U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[3U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[3U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[4U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[4U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[4U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[5U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[5U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[5U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[6U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[6U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[6U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[7U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[7U] = 8U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[7U] = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 8U;
    VL_WRITEF("TEST FUNCTIONS\n-----------------------------\n\nTest ns_to_cycles() function:\n");
    VL_WRITEF("\tns_to_cycles(15) = 2 [exact]\n");
    VL_WRITEF("\tns_to_cycles(14.5) = 2 [round-off]\n");
    VL_WRITEF("\tns_to_cycles(11) = 2 [round-up]\n\nTest nCK_to_cycles() function:\n");
    VL_WRITEF("\tns_to_cycles(16) = 4 [exact]\n");
    VL_WRITEF("\tns_to_cycles(15) = 4 [round-off]\n");
    VL_WRITEF("\tns_to_cycles(13) = 4 [round-up]\n\nTest ns_to_nCK() function:\n");
    VL_WRITEF("\tns_to_cycles(15) = 6 [exact]\n");
    VL_WRITEF("\tns_to_cycles(14.875) = 6 [round-off]\n");
    VL_WRITEF("\tns_to_cycles(13.875) = 6 [round-up] \n\nTest nCK_to_ns() function:\n");
    VL_WRITEF("\tns_to_cycles(4) =  10.000000 [exact]\n");
    VL_WRITEF("\tns_to_cycles(14.875) = 8.000000 [round-off]\n");
    VL_WRITEF("\tns_to_cycles(13.875) = 13.000000 [round-up]\n\nTest nCK_to_ns() function:\n");
    VL_WRITEF("\tns_to_cycles(4) = 10.000000 [exact]\n");
    VL_WRITEF("\tns_to_cycles(14.875) = 8.000000 [round-off]\n");
    VL_WRITEF("\tns_to_cycles(13.875) = 13.000000 [round-up]\n\n");
    VL_WRITEF("Test $floor() function:\n\t$floor(5/2) = 2.000000\n\t$floor(9/4) = 2.000000\n\t$floor(9/4) = 2.000000\n\t$floor(9/5) = 1.000000\n\n\nDISPLAY CONTROLLER PARAMETERS\n-----------------------------\n\nMICRON_SIM = 0\nODELAY_SUPPORTED = 1\nCONTROLLER_CLK_PERIOD = 10.00\nDDR3_CLK_PERIOD = 2.50\nROW_BITS = 14\nCOL_BITS = 10\nBA_BITS = 3\nDQ_BITS = 8\nLANES = 8\nAUX_WIDTH = 1\nWB2_ADDR_BITS = 7\nWB2_DATA_BITS = 32\nserdes_ratio = 4\nwb_addr_bits = 24\nwb_data_bits = 512\nwb_sel_bits  = 64\nwb2_sel_bits = 4\ncmd_len = 24\n");
    VL_WRITEF("DELAY_COUNTER_WIDTH = 16\nDELAY_SLOT_WIDTH = 19\nserdes_ratio = 4\nwb_addr_bits = 24\nwb_data_bits = 512\nwb_sel_bits = 64\n\n\nREAD_SLOT = 2\nWRITE_SLOT = 3\nACTIVATE_SLOT = 0\nPRECHARGE_SLOT = 1\n\n\nDELAYS:\n");
    VL_WRITEF("\tns_to_nCK(tRCD): 6\n");
    VL_WRITEF("\tns_to_nCK(tRP): 6\n");
    VL_WRITEF("\tns_to_nCK(tRTP): 4\n\ttCCD: 4\n\t(CL_nCK + tCCD + 2 - CWL_nCK): 7\n");
    VL_WRITEF("\t(CWL_nCK + 4 + ns_to_nCK(tWR)): 15\n");
    VL_WRITEF("\t(CWL_nCK + 4 + ns_to_nCK(tWTR)): 13\n\n\nPRECHARGE_TO_ACTIVATE_DELAY = 1\nACTIVATE_TO_WRITE_DELAY = 0\nACTIVATE_TO_READ_DELAY =  0\nACTIVATE_TO_PRECHARGE_DELAY =  3\nREAD_TO_WRITE_DELAY = 1\nREAD_TO_READ_DELAY = 0\nREAD_TO_PRECHARGE_DELAY = 1\nWRITE_TO_WRITE_DELAY = 0\nWRITE_TO_READ_DELAY = 3\nWRITE_TO_PRECHARGE_DELAY = 4\nSTAGE2_DATA_DEPTH = 2\nREAD_ACK_PIPE_WIDTH = 5\n");
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb = 0U;
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb = 0U;
    vlSelf->main__DOT__wbwide_bkram_ack = 0U;
    vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr = 0U;
    vlSelf->main__DOT__u_i2cdma__DOT__r_memlen = 0U;
    vlSelf->main__DOT__u_i2cdma__DOT__r_reset = 1U;
    vlSelf->main__DOT__wb32_i2cdma_ack = 0U;
    vlSelf->main__DOT__wb32_i2cdma_idata = 0U;
    vlSelf->main__DOT__wbwide_i2cdma_cyc = 0U;
    vlSelf->main__DOT__wbwide_i2cdma_stb = 0U;
    vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid = 0U;
    vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data = 0U;
    vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid = 0U;
    vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data = 0U;
    vlSelf->main__DOT__u_fan__DOT__ctl_fpga = 0x1387U;
    vlSelf->main__DOT__u_fan__DOT__ctl_sys = 0x1387U;
    vlSelf->main__DOT__u_fan__DOT__pre_ack = 0U;
    vlSelf->main__DOT__wb32_fan_ack = 0U;
    vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl = 1U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda = 1U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl = 1U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda = 1U;
    vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc = 0U;
    vlSelf->main__DOT__u_fan__DOT__mem_stb = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle = 0U;
    vlSelf->main__DOT__u_fan__DOT__mem_addr = 0x1fU;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl = 1U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl = 1U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl = 1U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda = 1U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda = 1U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda = 1U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 0U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg = 0xffU;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 1U;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort = 0U;
    vlSelf->main__DOT__wb32_i2cs_ack = 0U;
    vlSelf->main__DOT__i2ci__DOT__half_valid = 0U;
    vlSelf->main__DOT__i2ci__DOT__imm_cycle = 0U;
    vlSelf->main__DOT__i2ci__DOT__insn_valid = 0U;
    vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual = 0U;
    vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl = 1U;
    vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda = 1U;
    vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl = 1U;
    vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda = 1U;
    vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid = 0U;
    vlSelf->main__DOT__wbwide_i2cm_cyc = 0U;
    vlSelf->main__DOT__wbwide_i2cm_stb = 0U;
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight = 0U;
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle = 0U;
    vlSelf->main__DOT__wbwide_i2cm_addr = 0x1ffffffU;
    vlSelf->main__DOT__i2ci__DOT__pf_valid = 0U;
    vlSelf->main__DOT__i2ci__DOT__pf_illegal = 0U;
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid = 0U;
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal = 0U;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl = 1U;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl = 1U;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl = 1U;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda = 1U;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda = 1U;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda = 1U;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit = 0U;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy = 0U;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0U;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 0U;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg = 0xffU;
    vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
    vlSelf->main__DOT__i2ci__DOT__w_sda = 1U;
    vlSelf->main__DOT__i2ci__DOT__i2c_abort = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[1U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[2U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[3U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[4U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[5U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[6U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[7U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[8U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[9U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xaU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xbU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xcU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xdU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xeU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel = 0ULL;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[1U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[2U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[3U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[4U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[5U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[6U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[7U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[8U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[9U] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xaU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xbU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xcU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xdU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xeU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xfU] = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty = 1U;
    vlSelf->main__DOT__console__DOT__rxf_wb_read = 0U;
    vlSelf->main__DOT__console__DOT__rx_uart_reset = 1U;
    vlSelf->main__DOT__console__DOT__txf_wb_write = 0U;
    vlSelf->main__DOT__console__DOT__tx_uart_reset = 1U;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow = 0U;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr = 0U;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow = 1U;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr = 0U;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next = 1U;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc = 0U;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill = 0U;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow = 0U;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr = 0U;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow = 1U;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr = 0U;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next = 1U;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc = 0U;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill = 0x3fU;
    vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter = 0x14U;
    vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold = 1U;
    vlSelf->main__DOT__swic__DOT__cmd_reset = 1U;
    vlSelf->main__DOT__swic__DOT__cmd_halt = 1U;
    vlSelf->main__DOT__swic__DOT__cmd_clear_cache = 0U;
    vlSelf->main__DOT__swic__DOT__cmd_step = 0U;
    vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch = 1U;
    vlSelf->main__DOT__swic__DOT__cmd_write = 0U;
    vlSelf->main__DOT__swic__DOT__cmd_read = 0U;
    vlSelf->main__DOT__swic__DOT__cmd_read_ack = 0U;
    vlSelf->main__DOT__swic__DOT__r_wdbus_data = 0U;
    vlSelf->main__DOT__swic__DOT__wdbus_ack = 0U;
    vlSelf->main__DOT__swic__DOT__r_mmus_ack = 0U;
    vlSelf->main__DOT__swic__DOT__last_sys_stb = 0U;
    vlSelf->main__DOT__swic__DOT__dbg_pre_ack = 0U;
    vlSelf->main__DOT__swic__DOT__dbg_ack = 0U;
    vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running = 0U;
    vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value = 0U;
    vlSelf->main__DOT__swic__DOT__wdt_reset = 0U;
    vlSelf->main__DOT__swic__DOT__wdt_ack = 0U;
    vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value = 0x3fffU;
    vlSelf->main__DOT__swic__DOT__wdbus_int = 0U;
    vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running = 0U;
    vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload = 0U;
    vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value = 0U;
    vlSelf->main__DOT__swic__DOT__tma_int = 0U;
    vlSelf->main__DOT__swic__DOT__tma_ack = 0U;
    vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running = 0U;
    vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload = 0U;
    vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value = 0U;
    vlSelf->main__DOT__swic__DOT__tmb_int = 0U;
    vlSelf->main__DOT__swic__DOT__tmb_ack = 0U;
    vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running = 0U;
    vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload = 0U;
    vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value = 0U;
    vlSelf->main__DOT__swic__DOT__tmc_int = 0U;
    vlSelf->main__DOT__swic__DOT__tmc_ack = 0U;
    vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter = 0U;
    vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now = 0U;
    vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set = 0U;
    vlSelf->main__DOT__swic__DOT__jif_int = 0U;
    vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set = 0U;
    vlSelf->main__DOT__swic__DOT__jif_ack = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc 
        = (0x7ffffffeU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc);
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc = 0x4000000U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc = 0x4000000U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache = 1U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache = 1U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc = 1U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted = 1U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall = 1U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay = 3U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel = 0xffffffffffffffffULL;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0U] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[1U] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[2U] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[3U] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[4U] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[5U] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[6U] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[7U] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[8U] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[9U] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xaU] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xbU] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xcU] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xdU] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xeU] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xfU] = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner = 1U;
    vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner = 1U;
    vlSelf->main__DOT__swic__DOT__dbg_cyc = 0U;
    vlSelf->main__DOT__swic__DOT__dbg_stb = 0U;
    vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb = 0U;
    vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we = 0U;
    vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr = 0U;
    vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data = 0U;
    vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel = 0U;
    vlSelf->main__DOT__swic__DOT__dbg_we = 0U;
    vlSelf->main__DOT__swic__DOT__dbg_addr = 0U;
    vlSelf->main__DOT__swic__DOT__dbg_idata = 0U;
    vlSelf->main__DOT__swic__DOT__dbg_sel = 0U;
    vlSelf->main__DOT__raw_cpu_dbg_ack = 0U;
    vlSelf->main__DOT__wbu_zip_idata = 0U;
    vlSelf->main__DOT__swic__DOT__no_dbg_err = 0U;
    vlSelf->main__DOT__swic__DOT__mtc_int = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack = 0U;
    vlSelf->main__DOT__swic__DOT__moc_int = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack = 0U;
    vlSelf->main__DOT__swic__DOT__mpc_int = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack = 0U;
    vlSelf->main__DOT__swic__DOT__mic_int = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack = 0U;
    vlSelf->main__DOT__swic__DOT__utc_int = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack = 0U;
    vlSelf->main__DOT__swic__DOT__uoc_int = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack = 0U;
    vlSelf->main__DOT__swic__DOT__upc_int = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack = 0U;
    vlSelf->main__DOT__swic__DOT__uic_int = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data = 0U;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack = 0U;
    vlSelf->main__DOT__swic__DOT__dmac_ack = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[1U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[2U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[3U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[4U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[5U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[6U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[7U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[8U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[9U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xaU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xbU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xcU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xdU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xeU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xfU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty = 1U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next = 1U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner = 1U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner = 0U;
    vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state = 0U;
    vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable = 0U;
    vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie = 0U;
    vlSelf->main__DOT__swic__DOT__ctri_int = 0U;
    vlSelf->main__DOT__swic__DOT__ctri_data = 0U;
    vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state = 0U;
    vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable = 0U;
    vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie = 0U;
    vlSelf->main__DOT__swic__DOT__pic_interrupt = 0U;
    vlSelf->main__DOT__swic__DOT__pic_data = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__br_config = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__br_holdoff = 0x1fcU;
    vlSelf->main__DOT__i2cscopei__DOT__dr_triggered = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__dr_stopped = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__ck_addr = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__dr_force_write = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__lst_adr = 1U;
    vlSelf->main__DOT__i2cscopei__DOT__imm_adr = 1U;
    vlSelf->main__DOT__i2cscopei__DOT__record_ce = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__waddr = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__dr_primed = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack = 0U;
    vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt = 0U;
    vlSelf->main__DOT__rcv__DOT__q_uart = 1U;
    vlSelf->main__DOT__rcv__DOT__qq_uart = 1U;
    vlSelf->main__DOT__rcv__DOT__ck_uart = 1U;
    vlSelf->main__DOT__rcv__DOT__chg_counter = 0x7fU;
    vlSelf->main__DOT__rcv__DOT__half_baud_time = 0U;
    vlSelf->main__DOT__rcv__DOT__state = 0xfU;
    vlSelf->main__DOT__wbu_rx_stb = 0U;
    vlSelf->main__DOT__wbu_rx_data = 0U;
    vlSelf->main__DOT__rcv__DOT__baud_counter = 0U;
    vlSelf->main__DOT__rcv__DOT__zero_baud_counter = 1U;
    vlSelf->main__DOT__txv__DOT__r_busy = 1U;
    vlSelf->main__DOT__txv__DOT__state = 0xfU;
    vlSelf->main__DOT__txv__DOT__lcl_data = 0xffU;
    vlSelf->o_wbu_uart_tx = 1U;
    vlSelf->main__DOT__txv__DOT__zero_baud_counter = 1U;
    vlSelf->main__DOT__txv__DOT__baud_counter = 0U;
    vlSelf->main__DOT__w_console_rx_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__ps_full = 0U;
    vlSelf->main__DOT__genbus__DOT__r_wdt_reset = 1U;
    vlSelf->main__DOT__genbus__DOT__r_wdt_timer = 0U;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__soft_reset = 1U;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len = 0U;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg = 0ULL;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw = 0U;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len = 0U;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr = 0U;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__in_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state = 0U;
    vlSelf->main__DOT__wbu_cyc = 0U;
    vlSelf->main__DOT__wbu_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 0U;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr = 1U;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed = 0U;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks = 1U;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len = 0U;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request = 1U;
    vlSelf->main__DOT__genbus__DOT__exec_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits = 0x40U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl = 1U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl = 1U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy = 0U;
    vlSelf->main__DOT__genbus__DOT__wbu_tx_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__wbu_tx_data = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__k = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__k)) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__compression_tbl[(0x3ffU 
                                                                                & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__k)] = 0U;
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__k 
            = ((IData)(1U) + vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__k);
    }
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table = 1U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch = 0U;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb = 0U;
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow = 0U;
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr = 0U;
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow = 1U;
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr = 0U;
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n = 0U;
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow = 0U;
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr = 0U;
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow = 1U;
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr = 0U;
    vlSelf->main__DOT__genbus__DOT__ofifo_empty_n = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__br_config = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff = 0x1fcU;
    vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr = 1U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr = 1U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__waddr = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack = 0U;
    vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt = 0U;
    vlSelf->o_gpio = 0x20U;
    vlSelf->main__DOT__spioi__DOT__r_led = 0U;
    vlSelf->main__DOT__spioi__DOT__led_demo = 1U;
    vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw = 0U;
    vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe = 0U;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner = 1U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel = 0ULL;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0U] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[1U] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[2U] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[3U] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[4U] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[5U] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[6U] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[7U] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[8U] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[9U] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xaU] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xbU] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xcU] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xdU] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xeU] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xfU] = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr = 0U;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty = 1U;
}

VL_ATTR_COLD void Vmain___024root___eval_final(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmain___024root___eval_triggers__stl(Vmain___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmain___024root___eval_stl(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_settle(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmain___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmain___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("main.v", 96, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmain___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 8> Vmain__ConstPool__TABLE_h611c22d1_0;
extern const VlWide<18>/*575:0*/ Vmain__ConstPool__CONST_hb679b2e5_0;
extern const VlWide<15>/*479:0*/ Vmain__ConstPool__CONST_hbd99daea_0;

VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0;
    main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 = 0;
    CData/*0:0*/ main__DOT__wb32_xbar__DOT____VdfgTmp_h4f7f05b5__0;
    main__DOT__wb32_xbar__DOT____VdfgTmp_h4f7f05b5__0 = 0;
    CData/*0:0*/ main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0;
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 = 0;
    CData/*0:0*/ main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0;
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 = 0;
    CData/*1:0*/ main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0;
    main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0 = 0;
    CData/*0:0*/ main__DOT__u_fan__DOT__u_i2ccpu__DOT____VdfgTmp_hfc6f1b73__0;
    main__DOT__u_fan__DOT__u_i2ccpu__DOT____VdfgTmp_hfc6f1b73__0 = 0;
    CData/*0:0*/ main__DOT__i2ci__DOT____VdfgTmp_hfc6f1b73__0;
    main__DOT__i2ci__DOT____VdfgTmp_hfc6f1b73__0 = 0;
    CData/*0:0*/ main__DOT__swic__DOT____VdfgTmp_h9a48e2a3__0;
    main__DOT__swic__DOT____VdfgTmp_h9a48e2a3__0 = 0;
    CData/*0:0*/ main__DOT__swic__DOT____VdfgTmp_hcb06aa5b__0;
    main__DOT__swic__DOT____VdfgTmp_hcb06aa5b__0 = 0;
    CData/*0:0*/ main__DOT__swic__DOT____VdfgTmp_hcb574c13__0;
    main__DOT__swic__DOT____VdfgTmp_hcb574c13__0 = 0;
    CData/*0:0*/ main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_ha0d5d2cf__0;
    main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_ha0d5d2cf__0 = 0;
    CData/*0:0*/ main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_h832f938f__0;
    main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_h832f938f__0 = 0;
    IData/*31:0*/ __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__old;
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__old = 0;
    CData/*3:0*/ __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__strb;
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__strb = 0;
    IData/*31:0*/ __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__nxt;
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__nxt = 0;
    IData/*31:0*/ __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__old;
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__old = 0;
    CData/*3:0*/ __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__strb;
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__strb = 0;
    IData/*31:0*/ __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__nxt;
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__nxt = 0;
    CData/*3:0*/ __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout;
    __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel;
    __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel = 0;
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    VlWide<16>/*511:0*/ __Vtemp_h3711b190__0;
    VlWide<16>/*511:0*/ __Vtemp_h18146fff__0;
    VlWide<16>/*511:0*/ __Vtemp_he3c3974d__0;
    VlWide<16>/*511:0*/ __Vtemp_hcd157907__0;
    VlWide<16>/*511:0*/ __Vtemp_hb780e8f4__0;
    VlWide<16>/*511:0*/ __Vtemp_hdb251f8c__0;
    VlWide<16>/*511:0*/ __Vtemp_h12b8adbe__0;
    VlWide<16>/*511:0*/ __Vtemp_hbc743227__0;
    VlWide<16>/*511:0*/ __Vtemp_h6409050d__0;
    VlWide<16>/*511:0*/ __Vtemp_h8c81192e__0;
    VlWide<16>/*511:0*/ __Vtemp_h5dad54bf__0;
    VlWide<16>/*511:0*/ __Vtemp_h01ff8f7b__0;
    VlWide<16>/*511:0*/ __Vtemp_hf1acda43__0;
    VlWide<32>/*1023:0*/ __Vtemp_h63caa0d2__0;
    VlWide<32>/*1023:0*/ __Vtemp_h448dc795__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb435d831__0;
    VlWide<4>/*127:0*/ __Vtemp_h36bd3276__0;
    VlWide<4>/*127:0*/ __Vtemp_h0df24fd8__0;
    // Body
    vlSelf->o_fan_sda = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda;
    vlSelf->o_fan_scl = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl;
    vlSelf->o_i2c_sda = vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda;
    vlSelf->o_i2c_scl = vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl;
    vlSelf->main__DOT__raw_cpu_dbg_stall = vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb;
    vlSelf->main__DOT__wbwide_wbu_arbiter_cyc = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc;
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_merr 
        = vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wb32_wbdown_cyc = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc;
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__scope1_ddr3i__DOT__bw_reset_request 
        = (1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                    >> 2U)));
    vlSelf->main__DOT__scope2_ddr3i__DOT__bw_reset_request 
        = (1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                    >> 2U)));
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__r_valid 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_phase 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ubreak 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_u 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ubus_err_flag 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_valid 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid;
    vlSelf->main__DOT__i2cscopei__DOT__bw_reset_request 
        = (1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                    >> 2U)));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_busy 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb;
    vlSelf->main__DOT__scope3_ddr3i__DOT__bw_reset_request 
        = (1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                    >> 2U)));
    vlSelf->o_ddr3_controller_dqs_tri_control = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs) 
                                                     >> 2U)));
    vlSelf->o_ddr3_controller_dq_tri_control = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq) 
                                                    >> 2U)));
    vlSelf->o_ddr3_controller_toggle_dqs = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val));
    vlSelf->o_ddr3_controller_data[0U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][0U];
    vlSelf->o_ddr3_controller_data[1U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][1U];
    vlSelf->o_ddr3_controller_data[2U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][2U];
    vlSelf->o_ddr3_controller_data[3U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][3U];
    vlSelf->o_ddr3_controller_data[4U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][4U];
    vlSelf->o_ddr3_controller_data[5U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][5U];
    vlSelf->o_ddr3_controller_data[6U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][6U];
    vlSelf->o_ddr3_controller_data[7U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][7U];
    vlSelf->o_ddr3_controller_data[8U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][8U];
    vlSelf->o_ddr3_controller_data[9U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][9U];
    vlSelf->o_ddr3_controller_data[0xaU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][0xaU];
    vlSelf->o_ddr3_controller_data[0xbU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][0xbU];
    vlSelf->o_ddr3_controller_data[0xcU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][0xcU];
    vlSelf->o_ddr3_controller_data[0xdU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][0xdU];
    vlSelf->o_ddr3_controller_data[0xeU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][0xeU];
    vlSelf->o_ddr3_controller_data[0xfU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U][0xfU];
    vlSelf->o_ddr3_controller_dm = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
        [1U];
    vlSelf->o_sirefclk_ce = vlSelf->main__DOT__r_sirefclk_en;
    vlSelf->cpu_sim_idata = vlSelf->main__DOT__wbu_zip_idata;
    vlSelf->cpu_prof_stb = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb;
    vlSelf->cpu_prof_addr = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr;
    vlSelf->cpu_prof_ticks = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks;
    vlSelf->o_led = vlSelf->main__DOT__w_led;
    vlSelf->main__DOT__i2cdma_ready = (1U & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wb32_wbdown_err = vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr;
    vlSelf->main__DOT__wb32_xbar__DOT__m_data[0U] = (IData)(
                                                            (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                                             >> 4U));
    vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0U] = 
        (0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data));
    vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0U] = vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0U] 
        = vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    vlSelf->main__DOT__wbu_err = vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr;
    vlSelf->main__DOT__wbu_xbar__DOT__m_data[0U] = (IData)(
                                                           (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                                            >> 4U));
    vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0U] = (0xfU 
                                                   & (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data));
    vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0U] = vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0U] 
        = vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value 
        = (0x3fU & ((1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))
                     ? ((IData)(2U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))
                     : ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))));
    vlSelf->main__DOT__u_i2cdma__DOT__skd_valid = vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_waddr_plus_one 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)));
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_waddr_plus_one 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I 
        = (((- (IData)((1U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I 
                              >> 0x16U)))) << 0x16U) 
           | (0x3fffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cline 
        = (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                 >> 3U));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_ctag 
        = (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                        >> 3U));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__rx_valid 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid;
    vlSelf->main__DOT__genbus__DOT__w_bus_busy = vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__cod_busy 
        = (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb));
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr 
        = (((- (IData)((1U & (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr 
                              >> 0x18U)))) << 0x19U) 
           | vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr);
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck 
        = (((0U == (0xffU & (IData)((vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword 
                                     >> 0x18U)))) << 3U) 
           | (((0U == (0x3fU & (IData)((vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword 
                                        >> 0x12U)))) 
               << 2U) | (((0U == (0x3fU & (IData)((vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword 
                                                   >> 0xcU)))) 
                          << 1U) | (0U == (0x3fU & (IData)(
                                                           (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword 
                                                            >> 6U)))))));
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__nxt_wrptr 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)));
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__nxt_wrptr 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)));
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr 
        = ((0x10U & (vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr 
                     << 4U)) | ((8U & (vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr 
                                       << 2U)) | ((4U 
                                                   & vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr) 
                                                  | ((2U 
                                                      & (vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & (vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr 
                                                           >> 4U))))));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[1U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[2U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[3U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[4U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[5U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[6U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[7U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[8U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[9U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xaU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xbU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xcU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xdU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xeU] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xfU] = 0U;
    if ((0U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xfU] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xfU]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xfU]));
    }
    if ((1U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xfU] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xfU]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xfU]));
    }
    if ((2U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xfU] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xfU]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xfU]));
    }
    if ((3U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xfU] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xfU]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xfU]));
    }
    if ((4U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xeU] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xeU]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xeU]));
    }
    if ((5U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xeU] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xeU]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xeU]));
    }
    if ((6U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xeU] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xeU]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xeU]));
    }
    if ((7U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xeU] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xeU]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xeU]));
    }
    if ((8U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xdU] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xdU]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xdU]));
    }
    if ((9U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xdU] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xdU]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xdU]));
    }
    if ((0xaU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xdU] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xdU]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xdU]));
    }
    if ((0xbU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xdU] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xdU]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xdU]));
    }
    if ((0xcU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xcU] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xcU]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xcU]));
    }
    if ((0xdU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xcU] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xcU]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xcU]));
    }
    if ((0xeU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xcU] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xcU]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xcU]));
    }
    if ((0xfU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xcU] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xcU]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xcU]));
    }
    if ((0x10U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xbU] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xbU]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xbU]));
    }
    if ((0x11U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xbU] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xbU]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xbU]));
    }
    if ((0x12U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xbU] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xbU]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xbU]));
    }
    if ((0x13U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xbU] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xbU]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xbU]));
    }
    if ((0x14U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xaU] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xaU]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xaU]));
    }
    if ((0x15U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xaU] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xaU]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xaU]));
    }
    if ((0x16U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xaU] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xaU]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xaU]));
    }
    if ((0x17U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xaU] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xaU]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xaU]));
    }
    if ((0x18U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[9U] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[9U]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[9U]));
    }
    if ((0x19U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[9U] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[9U]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[9U]));
    }
    if ((0x1aU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[9U] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[9U]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[9U]));
    }
    if ((0x1bU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[9U] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[9U]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[9U]));
    }
    if ((0x1cU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[8U] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[8U]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[8U]));
    }
    if ((0x1dU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[8U] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[8U]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[8U]));
    }
    if ((0x1eU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[8U] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[8U]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[8U]));
    }
    if ((0x1fU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[8U] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[8U]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[8U]));
    }
    if ((0x20U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[7U] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[7U]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[7U]));
    }
    if ((0x21U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[7U] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[7U]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[7U]));
    }
    if ((0x22U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[7U] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[7U]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[7U]));
    }
    if ((0x23U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[7U] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[7U]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[7U]));
    }
    if ((0x24U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[6U] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[6U]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[6U]));
    }
    if ((0x25U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[6U] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[6U]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[6U]));
    }
    if ((0x26U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[6U] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[6U]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[6U]));
    }
    if ((0x27U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[6U] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[6U]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[6U]));
    }
    if ((0x28U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[5U] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[5U]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[5U]));
    }
    if ((0x29U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[5U] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[5U]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[5U]));
    }
    if ((0x2aU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[5U] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[5U]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[5U]));
    }
    if ((0x2bU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[5U] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[5U]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[5U]));
    }
    if ((0x2cU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[4U] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[4U]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[4U]));
    }
    if ((0x2dU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[4U] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[4U]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[4U]));
    }
    if ((0x2eU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[4U] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[4U]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[4U]));
    }
    if ((0x2fU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[4U] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[4U]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[4U]));
    }
    if ((0x30U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[3U] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[3U]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[3U]));
    }
    if ((0x31U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[3U] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[3U]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[3U]));
    }
    if ((0x32U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[3U] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[3U]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[3U]));
    }
    if ((0x33U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[3U] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[3U]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[3U]));
    }
    if ((0x34U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[2U] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[2U]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[2U]));
    }
    if ((0x35U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[2U] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[2U]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[2U]));
    }
    if ((0x36U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[2U] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[2U]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[2U]));
    }
    if ((0x37U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[2U] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[2U]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[2U]));
    }
    if ((0x38U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[1U] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[1U]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[1U]));
    }
    if ((0x39U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[1U] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[1U]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[1U]));
    }
    if ((0x3aU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[1U] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[1U]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[1U]));
    }
    if ((0x3bU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[1U] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[1U]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[1U]));
    }
    if ((0x3cU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0U] 
            = ((0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0U]) 
               | (0xff000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0U]));
    }
    if ((0x3dU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0U] 
            = ((0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0U]) 
               | (0xff0000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0U]));
    }
    if ((0x3eU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0U] 
            = ((0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0U]) 
               | (0xff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0U]));
    }
    if ((0x3fU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0U] 
            = ((0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0U]) 
               | (0xffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0U]));
    }
    vlSelf->o_ddr3_controller_odelay_data_cntvaluein 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane];
    vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane];
    vlSelf->o_ddr3_controller_idelay_data_cntvaluein 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane];
    vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane];
    vlSelf->cpu_sim_stall = (1U & ((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                   | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)));
    vlSelf->cpu_sim_ack = ((IData)(vlSelf->cpu_sim_cyc) 
                           & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack));
    vlSelf->main__DOT__wb32_sirefclk_stb = (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                             >> 8U) 
                                            & (2U == 
                                               (7U 
                                                & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])));
    vlSelf->main__DOT____Vcellinp__swic__i_reset = 
        ((IData)(vlSelf->i_cpu_reset) | (IData)(vlSelf->i_reset));
    vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc 
        = (IData)((((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                    >> 1U) | (IData)(vlSelf->cpu_sim_cyc)));
    vlSelf->main__DOT__wbwide_xbar__DOT__s_err = (8U 
                                                  | ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                                     & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err)));
    vlSelf->main__DOT__wbu_xbar__DOT__s_err = (0xcU 
                                               | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                                  & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset 
        = ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN 
        = (1U & (~ ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual))));
    vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset 
        = ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__i2ci__DOT__r_halted));
    vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN 
        = (1U & (~ ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual))));
    __Vtemp_h3711b190__0[0U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x10U];
    __Vtemp_h3711b190__0[1U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x11U];
    __Vtemp_h3711b190__0[2U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x12U];
    __Vtemp_h3711b190__0[3U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x13U];
    __Vtemp_h3711b190__0[4U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x14U];
    __Vtemp_h3711b190__0[5U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x15U];
    __Vtemp_h3711b190__0[6U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x16U];
    __Vtemp_h3711b190__0[7U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x17U];
    __Vtemp_h3711b190__0[8U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x18U];
    __Vtemp_h3711b190__0[9U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x19U];
    __Vtemp_h3711b190__0[0xaU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1aU];
    __Vtemp_h3711b190__0[0xbU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1bU];
    __Vtemp_h3711b190__0[0xcU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1cU];
    __Vtemp_h3711b190__0[0xdU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1dU];
    __Vtemp_h3711b190__0[0xeU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1eU];
    __Vtemp_h3711b190__0[0xfU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1fU];
    VL_SHIFTL_WWI(512,512,32, __Vtemp_h18146fff__0, __Vtemp_h3711b190__0, 
                  ((IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift) 
                   << 3U));
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[0U] 
        = __Vtemp_h18146fff__0[0U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[1U] 
        = __Vtemp_h18146fff__0[1U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[2U] 
        = __Vtemp_h18146fff__0[2U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[3U] 
        = __Vtemp_h18146fff__0[3U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[4U] 
        = __Vtemp_h18146fff__0[4U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[5U] 
        = __Vtemp_h18146fff__0[5U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[6U] 
        = __Vtemp_h18146fff__0[6U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[7U] 
        = __Vtemp_h18146fff__0[7U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[8U] 
        = __Vtemp_h18146fff__0[8U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[9U] 
        = __Vtemp_h18146fff__0[9U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[0xaU] 
        = __Vtemp_h18146fff__0[0xaU];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[0xbU] 
        = __Vtemp_h18146fff__0[0xbU];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[0xcU] 
        = __Vtemp_h18146fff__0[0xcU];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[0xdU] 
        = __Vtemp_h18146fff__0[0xdU];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[0xeU] 
        = __Vtemp_h18146fff__0[0xeU];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[0xfU] 
        = __Vtemp_h18146fff__0[0xfU];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel 
        = ((0x3fU >= (0x1ffffffcU & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift) 
                                     << 2U))) ? (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                                 << 
                                                 (0x1ffffffcU 
                                                  & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift) 
                                                     << 2U)))
            : 0ULL);
    vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read 
        = ((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)) 
           & (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_read));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
        [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
        [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid 
        = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
            << 4U) | (0xfU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result 
        = ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset 
        = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort) 
           | (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset));
    vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
           | (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__ps_full) 
           & (IData)(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd 
        = ((~ (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty)) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
              >> 3U));
    vlSelf->main__DOT__wbu_xbar__DOT__s_data[0U] = 
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU];
    vlSelf->main__DOT__wbu_xbar__DOT__s_data[1U] = vlSelf->main__DOT__wbu_zip_idata;
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[0U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0U];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[1U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][1U];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[2U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][2U];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[3U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][3U];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[4U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][4U];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[5U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][5U];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[6U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][6U];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[7U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][7U];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[8U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][8U];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[9U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][9U];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xaU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xaU];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xbU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xbU];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xcU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xcU];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xdU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xdU];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xeU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xeU];
    vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xfU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xfU];
    vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID 
        = ((IData)(vlSelf->main__DOT__i2c_valid) & 
           (2U == (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid)));
    vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data 
        = (((IData)(vlSelf->main__DOT__i2c_last) << 8U) 
           | (IData)(vlSelf->main__DOT__i2c_data));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff 
        = (0x1ffffffffULL & ((QData)((IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
                                              >> 0x1fU))) 
                             - (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor))));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][0U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[1U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][1U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[2U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][2U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[3U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][3U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[4U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][4U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[5U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][5U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[6U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][6U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[7U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][7U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[8U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][8U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[9U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][9U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xaU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][0xaU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xbU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][0xbU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xcU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][0xcU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xdU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][0xdU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xeU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][0xeU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xfU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][0xfU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr))][0x10U];
    vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any 
        = (0U != ((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable)));
    vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any 
        = (0U != ((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable)));
    vlSelf->main__DOT__genbus__DOT__rx_valid = ((IData)(vlSelf->main__DOT__wbu_rx_stb) 
                                                & ((IData)(vlSelf->main__DOT__wbu_rx_data) 
                                                   >> 7U));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy) 
           | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size 
        = (0x7fU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                     ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                         ? 1U : ((1U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)
                                  ? 1U : 2U)) : ((1U 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                                  ? 
                                                 ((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x3fU 
                                                   & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))));
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size) 
         > (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size 
            = (0x7fU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen));
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size;
    if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))) {
        if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size = 1U;
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel 
                = (((QData)((IData)((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel)))) 
                    << 0x3fU) | (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel 
                                 >> 1U));
        } else {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size 
                = ((3U == (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len))
                    ? 1U : 2U);
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel 
                = (((QData)((IData)((3U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel)))) 
                    << 0x3eU) | (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel 
                                 >> 2U));
        }
    } else if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size 
            = (((4U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len)) 
                & (8U > (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len)))
                ? (0x7fU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len) 
                            - (IData)(4U))) : 4U);
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel 
            = (((QData)((IData)((0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel)))) 
                << 0x3cU) | (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel 
                             >> 4U));
    } else {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size = 0x40U;
        if ((0x40U > ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len) 
                      - (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size)))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size 
                = (0x7fU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len) 
                            - (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size)));
        }
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel = 0xffffffffffffffffULL;
    }
    if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel;
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr;
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr 
            = (0x7fffffffU & ((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr 
                               + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen)) 
                              - (IData)(1U)));
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift 
        = (0x3fU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill));
    if (vlSelf->cpu_sim_cyc) {
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb 
            = (1U & (IData)(vlSelf->cpu_sim_stb));
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_we 
            = (1U & (IData)(vlSelf->cpu_sim_we));
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_addr 
            = (0x7fU & (IData)(vlSelf->cpu_sim_addr));
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_data 
            = vlSelf->cpu_sim_data;
    } else {
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb 
            = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                     >> 1U));
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_we 
            = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                     >> 1U));
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_addr 
            = (0x7fU & (IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                >> 0x1eU)));
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_data 
            = (IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                       >> 0x20U));
    }
    vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger 
        = ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed) 
           & (((~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config)) 
               & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
               [0U]) | ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                        >> 1U)));
    vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger 
        = ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed) 
           & (((~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config)) 
               & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
               [0U]) | ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                        >> 1U)));
    vlSelf->main__DOT__u_i2cdma__DOT__skd_ready = (1U 
                                                   & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT__r_reset) 
                                                      | ((~ (IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc)) 
                                                         | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__bus_err))));
    vlSelf->main__DOT__console__DOT__rxf_wb_data = 
        ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc)
          ? (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write)
          : (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data));
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write 
        = ((IData)(vlSelf->main__DOT__w_console_rx_stb) 
           & ((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow)) 
              | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_read)));
    vlSelf->main__DOT__i2cscopei__DOT__dw_trigger = 
        ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_primed) 
         & (((~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config)) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted)) 
            | ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
               >> 1U)));
    vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger 
        = ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed) 
           & (((~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config)) 
               & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
               [0U]) | ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                        >> 1U)));
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][0U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][1U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[1U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][2U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[2U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][3U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[3U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][4U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[4U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][5U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[5U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][6U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[6U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][7U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[7U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][8U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[8U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][9U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[9U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][0xaU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xaU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][0xbU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xbU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][0xcU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xcU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][0xdU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xdU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][0xeU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xeU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0U][0xfU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xfU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][0U] 
        = vlSelf->main__DOT__wbwide_bkram_idata[0U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][1U] 
        = vlSelf->main__DOT__wbwide_bkram_idata[1U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][2U] 
        = vlSelf->main__DOT__wbwide_bkram_idata[2U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][3U] 
        = vlSelf->main__DOT__wbwide_bkram_idata[3U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][4U] 
        = vlSelf->main__DOT__wbwide_bkram_idata[4U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][5U] 
        = vlSelf->main__DOT__wbwide_bkram_idata[5U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][6U] 
        = vlSelf->main__DOT__wbwide_bkram_idata[6U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][7U] 
        = vlSelf->main__DOT__wbwide_bkram_idata[7U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][8U] 
        = vlSelf->main__DOT__wbwide_bkram_idata[8U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][9U] 
        = vlSelf->main__DOT__wbwide_bkram_idata[9U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][0xaU] 
        = vlSelf->main__DOT__wbwide_bkram_idata[0xaU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][0xbU] 
        = vlSelf->main__DOT__wbwide_bkram_idata[0xbU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][0xcU] 
        = vlSelf->main__DOT__wbwide_bkram_idata[0xcU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][0xdU] 
        = vlSelf->main__DOT__wbwide_bkram_idata[0xdU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][0xeU] 
        = vlSelf->main__DOT__wbwide_bkram_idata[0xeU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1U][0xfU] 
        = vlSelf->main__DOT__wbwide_bkram_idata[0xfU];
    vlSelf->main__DOT__i2c_ready = (1U & ((~ (IData)(vlSelf->main__DOT__i2c_valid)) 
                                          | ((0U == (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid)) 
                                             | ((1U 
                                                 == (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid)) 
                                                | (((~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)) 
                                                    & (2U 
                                                       == (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid))) 
                                                   | (2U 
                                                      < (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid)))))));
    vlSelf->main__DOT__w_console_tx_data = ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc)
                                             ? (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write)
                                             : (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result 
        = ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn))
            ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result
            : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result);
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table) 
           & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch) 
              & (0xe00000000ULL == (0xe00000000ULL 
                                    & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word))));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn 
        = (0xffU & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted)
                     ? vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]
                     : (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn)));
    if (((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle)) 
         & (0U == (0xf0U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn))))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn 
            = (0xf0U & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn) 
                        << 4U));
    }
    vlSelf->main__DOT__i2ci__DOT__next_insn = (0xffU 
                                               & ((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted)
                                                   ? 
                                                  vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]
                                                   : (IData)(vlSelf->main__DOT__i2ci__DOT__pf_insn)));
    if (((~ (IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle)) 
         & (0U == (0xf0U & (IData)(vlSelf->main__DOT__i2ci__DOT__next_insn))))) {
        vlSelf->main__DOT__i2ci__DOT__next_insn = (0xf0U 
                                                   & ((IData)(vlSelf->main__DOT__i2ci__DOT__next_insn) 
                                                      << 4U));
    }
    __Vtableidx6 = (7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel 
        = Vmain__ConstPool__TABLE_h611c22d1_0[__Vtableidx6];
    vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control 
        = ((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
             & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
            >> 1U) & ((~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                          >> 8U)) & (0xf0ULL == (0xf0ULL 
                                                 & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))));
    vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data 
        = (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
            >> 1U) & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                          >> 1U)) & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                      >> 8U) & (0xf0ULL 
                                                == 
                                                (0xf0ULL 
                                                 & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel)))));
    vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control 
        = ((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
             & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
            >> 2U) & ((~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                          >> 0x10U)) & (0xf00ULL == 
                                        (0xf00ULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))));
    vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data 
        = (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
            >> 2U) & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                          >> 2U)) & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                      >> 0x10U) & (0xf00ULL 
                                                   == 
                                                   (0xf00ULL 
                                                    & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel)))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
           & ((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch) 
                  | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp))) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid)));
    vlSelf->main__DOT__i2cscopei__DOT__write_to_control 
        = (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
            & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
           & ((~ vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U]) 
              & (0xfU == (0xfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel)))));
    vlSelf->main__DOT__i2cscopei__DOT__read_from_data 
        = ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
           & ((~ (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
              & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                 & (0xfU == (0xfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))))));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__r_wdt_reset) 
           | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb)) 
                 & (0x200000000ULL == (0xe00000000ULL 
                                       & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword)))));
    vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control 
        = ((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
             & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
            >> 3U) & ((~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                          >> 0x18U)) & (0xf000ULL == 
                                        (0xf000ULL 
                                         & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))));
    vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data 
        = (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
            >> 3U) & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                          >> 3U)) & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                      >> 0x18U) & (0xf000ULL 
                                                   == 
                                                   (0xf000ULL 
                                                    & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel)))));
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][0U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][1U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][1U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][2U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][2U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][3U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][3U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][4U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][4U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][5U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][5U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][6U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][6U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][7U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][7U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][8U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][8U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][9U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][9U];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][0xaU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xaU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][0xbU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xbU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][0xcU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xcU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][0xdU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xdU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][0xeU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xeU];
    vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2U][0xfU] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xfU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_we = ((8U 
                                                  & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0x12U] 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0x12U] 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0x12U] 
                                                           << 1U)) 
                                                       | (1U 
                                                          & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[2U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[3U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[4U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][3U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[5U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][4U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[6U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][5U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[7U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][6U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[8U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][7U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[9U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][8U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xaU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][9U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xbU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][0xaU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xcU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][0xbU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xdU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][0xcU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xeU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][0xdU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xfU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][0xeU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0x10U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0U][0xfU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0x11U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[2U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[3U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[4U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][3U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[5U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][4U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[6U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][5U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[7U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][6U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[8U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][7U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[9U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][8U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xaU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][9U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xbU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][0xaU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xcU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][0xbU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xdU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][0xcU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xeU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][0xdU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xfU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][0xeU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0x10U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1U][0xfU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0x11U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[2U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[3U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[4U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][3U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[5U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][4U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[6U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][5U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[7U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][6U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[8U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][7U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[9U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][8U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xaU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][9U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xbU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][0xaU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xcU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][0xbU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xdU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][0xcU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xeU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][0xdU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xfU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][0xeU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0x10U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2U][0xfU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0x11U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[2U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[3U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[4U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][3U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[5U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][4U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[6U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][5U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[7U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][6U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[8U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][7U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[9U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][8U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xaU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][9U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xbU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][0xaU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xcU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][0xbU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xdU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][0xcU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xeU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][0xdU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xfU];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][0xeU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0x10U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3U][0xfU] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0x11U];
    vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[0U] 
        = (((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0U])));
    vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[1U] 
        = (((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0U])));
    vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[2U] 
        = (((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0U])));
    vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[3U] 
        = (((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0U])));
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending;
    vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending;
    vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill = 0U;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill 
        = ((0x3c0U & (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill)) 
           | (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v 
        = ((0x80000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v) 
           | (((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                      >> 4U)) == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))
               ? (0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc)
               : ((0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc) 
                  | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
                     << 1U))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v 
        = ((0x80000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v) 
           | (((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                      >> 4U)) == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))
               ? (0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc)
               : ((0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc) 
                  | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
                     << 1U))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc 
        = ((0x80000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc) 
           | ((0x10U & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))
               ? ((0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc) 
                  | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
                     << 1U)) : ((0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc) 
                                | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase) 
                                   << 1U))));
    vlSelf->main__DOT__wbwide_xbar__DOT__s_ack = ((0xfffffffcU 
                                                   & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                                      & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                                          [0U] 
                                                          & (0x10U 
                                                             == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                                                         << 2U))) 
                                                  | ((0xfffffffeU 
                                                      & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                                         & ((IData)(vlSelf->main__DOT__wbwide_bkram_ack) 
                                                            << 1U))) 
                                                     | ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                                        & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack))));
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill = 0U;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill 
        = ((0x3c0U & (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill)) 
           | (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset 
        = ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
    vlSelf->__VdfgTmp_ha46ae6a3__0 = ((2U & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                             >> 4U)) 
                                      | (1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 5U;
    __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
        = (((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])));
    __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout = 0U;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 0xfU;
    if ((0U != (0xfU & (IData)(__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel)))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 0xeU;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 4U))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 0xdU;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 8U))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 0xcU;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0xcU))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 0xbU;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x10U))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 0xaU;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x14U))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 9U;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x18U))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 8U;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x1cU))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 7U;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x20U))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 6U;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x24U))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 5U;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x28U))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 4U;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x2cU))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 3U;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x30U))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 2U;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x34U))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 1U;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x38U))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm = 0U;
    if ((0U != (0xfU & (IData)((__Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel 
                                >> 0x3cU))))) {
        __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout 
            = (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm);
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr 
        = __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid 
        = ((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy))) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update = 1U;
    vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4 
        = ((0x7f800000U & ((IData)(vlSelf->i_ddr3_controller_iserdes_dqs) 
                           << 0x17U)) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate) 
                                          << 0x12U) 
                                         | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address) 
                                             << 0xdU) 
                                            | ((0x1000U 
                                                & (((IData)(vlSelf->o_ddr3_controller_idelay_dqs_ld) 
                                                    >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)) 
                                                   << 0xcU)) 
                                               | ((0x800U 
                                                   & (((IData)(vlSelf->o_ddr3_controller_odelay_dqs_ld) 
                                                       >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)) 
                                                      << 0xbU)) 
                                                  | ((0x700U 
                                                      & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data) 
                                                         << 8U)) 
                                                     | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback) 
                                                         << 3U) 
                                                        | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))))))));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup;
        __Vtemp_he3c3974d__0[0U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0U];
        __Vtemp_he3c3974d__0[1U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[1U];
        __Vtemp_he3c3974d__0[2U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[2U];
        __Vtemp_he3c3974d__0[3U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[3U];
        __Vtemp_he3c3974d__0[4U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[4U];
        __Vtemp_he3c3974d__0[5U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[5U];
        __Vtemp_he3c3974d__0[6U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[6U];
        __Vtemp_he3c3974d__0[7U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[7U];
        __Vtemp_he3c3974d__0[8U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[8U];
        __Vtemp_he3c3974d__0[9U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[9U];
        __Vtemp_he3c3974d__0[0xaU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xaU];
        __Vtemp_he3c3974d__0[0xbU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xbU];
        __Vtemp_he3c3974d__0[0xcU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xcU];
        __Vtemp_he3c3974d__0[0xdU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xdU];
        __Vtemp_he3c3974d__0[0xeU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xeU];
        __Vtemp_he3c3974d__0[0xfU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xfU];
    } else {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup;
        __Vtemp_he3c3974d__0[0U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0U];
        __Vtemp_he3c3974d__0[1U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[1U];
        __Vtemp_he3c3974d__0[2U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[2U];
        __Vtemp_he3c3974d__0[3U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[3U];
        __Vtemp_he3c3974d__0[4U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[4U];
        __Vtemp_he3c3974d__0[5U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[5U];
        __Vtemp_he3c3974d__0[6U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[6U];
        __Vtemp_he3c3974d__0[7U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[7U];
        __Vtemp_he3c3974d__0[8U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[8U];
        __Vtemp_he3c3974d__0[9U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[9U];
        __Vtemp_he3c3974d__0[0xaU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xaU];
        __Vtemp_he3c3974d__0[0xbU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xbU];
        __Vtemp_he3c3974d__0[0xcU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xcU];
        __Vtemp_he3c3974d__0[0xdU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xdU];
        __Vtemp_he3c3974d__0[0xeU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xeU];
        __Vtemp_he3c3974d__0[0xfU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xfU];
    }
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid 
        = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid) 
           & ((~ ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn) 
                  >> 0xbU)) & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg 
        = ((0x1fffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg) 
           | (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy) 
               << 0x1fU) | ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err)) 
                             << 0x1eU) | ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger) 
                                          << 0x1dU))));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg 
        = ((0xe0ffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg) 
           | ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel) 
              << 0x18U));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg 
        = ((0xfffff800U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg) 
           | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg 
        = ((0xff8fffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg) 
           | ((0x400000U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc)) 
                            << 0x16U)) | ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size) 
                                          << 0x14U)));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg 
        = ((0xfff8ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg) 
           | ((0x40000U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc)) 
                           << 0x12U)) | ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size) 
                                         << 0x10U)));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
           & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0U] = vlSelf->main__DOT__i2cscopei__DOT__o_bus_data;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[1U] = vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[2U] = vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[3U] = vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[4U] = vlSelf->main__DOT__i2ci__DOT__bus_read_data;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[5U] = vlSelf->main__DOT__wb32_i2cdma_idata;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[6U] = vlSelf->main__DOT__wb32_uart_idata;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[7U] = vlSelf->main__DOT__wb32_fan_idata;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[8U] = vlSelf->main__DOT__r_wb32_sio_data;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0xaU] 
        = vlSelf->main__DOT__wb32_ddr3_phy_idata;
    vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr = 0U;
    vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr 
        = ((0x80000000U & vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr) 
           | vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr);
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__nxt 
        = vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U];
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__strb 
        = (0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                           >> 0x14U)));
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__old 
        = vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr;
    vlSelf->__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__Vfuncout 
        = ((0xffffU & vlSelf->__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__Vfuncout) 
           | ((((8U & (IData)(__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__strb))
                 ? (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__nxt 
                    >> 0x18U) : (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__old 
                                 >> 0x18U)) << 0x18U) 
              | (0xff0000U & (((4U & (IData)(__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__strb))
                                ? (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__nxt 
                                   >> 0x10U) : (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__old 
                                                >> 0x10U)) 
                              << 0x10U))));
    vlSelf->__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__Vfuncout 
        = ((0xffff0000U & vlSelf->__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__Vfuncout) 
           | ((0xff00U & (((2U & (IData)(__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__strb))
                            ? (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__nxt 
                               >> 8U) : (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__old 
                                         >> 8U)) << 8U)) 
              | (0xffU & ((1U & (IData)(__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__strb))
                           ? __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__nxt
                           : __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__old))));
    vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr 
        = vlSelf->__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__28__Vfuncout;
    vlSelf->main__DOT__u_i2cdma__DOT__next_memlen = 0U;
    vlSelf->main__DOT__u_i2cdma__DOT__next_memlen = 
        ((0x80000000U & vlSelf->main__DOT__u_i2cdma__DOT__next_memlen) 
         | vlSelf->main__DOT__u_i2cdma__DOT__r_memlen);
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__nxt 
        = vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U];
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__strb 
        = (0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                           >> 0x14U)));
    __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__old 
        = vlSelf->main__DOT__u_i2cdma__DOT__next_memlen;
    vlSelf->__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__Vfuncout 
        = ((0xffffU & vlSelf->__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__Vfuncout) 
           | ((((8U & (IData)(__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__strb))
                 ? (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__nxt 
                    >> 0x18U) : (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__old 
                                 >> 0x18U)) << 0x18U) 
              | (0xff0000U & (((4U & (IData)(__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__strb))
                                ? (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__nxt 
                                   >> 0x10U) : (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__old 
                                                >> 0x10U)) 
                              << 0x10U))));
    vlSelf->__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__Vfuncout 
        = ((0xffff0000U & vlSelf->__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__Vfuncout) 
           | ((0xff00U & (((2U & (IData)(__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__strb))
                            ? (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__nxt 
                               >> 8U) : (__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__old 
                                         >> 8U)) << 8U)) 
              | (0xffU & ((1U & (IData)(__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__strb))
                           ? __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__nxt
                           : __Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__old))));
    vlSelf->main__DOT__u_i2cdma__DOT__next_memlen = vlSelf->__Vfunc_main__DOT__u_i2cdma__DOT__apply_strb__29__Vfuncout;
    main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q
        [1U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0U] 
        = main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0;
    main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q
        [2U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1U] 
        = main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0;
    main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q
        [3U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2U] 
        = main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0;
    main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q
        [4U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3U] 
        = main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4U] = 0U;
    vlSelf->main__DOT__wb32_spio_stb = (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                         >> 8U) & (3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])));
    vlSelf->main__DOT__swic__DOT____VdfgTmp_h29ee39ef__0 
        = (((IData)(vlSelf->main__DOT__spio_int) << 2U) 
           | ((2U & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                     >> 4U)) | (1U & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                      >> 5U))));
    vlSelf->main__DOT__genbus__DOT__ofifo_rd = ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb)) 
                                                & (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd 
        = ((~ (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy)) 
           & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n));
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy 
        = (((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb) 
            & (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
           & (((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len) 
               == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len)) 
              & (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len))));
    if (((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb) 
           & (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
          & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid))) 
         & (1U == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw)))) {
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy = 1U;
    }
    if (((((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid)) 
           & (1U == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw))) 
          & (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len))) 
         & ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len) 
            == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len)))) {
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy = 1U;
    }
    vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data 
        = (((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last) 
            << 4U) | (0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT____VdfgTmp_h05977c6b__0 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr))];
    vlSelf->main__DOT__i2ci__DOT__s_tvalid = ((IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid) 
                                              & ((~ 
                                                  ((IData)(vlSelf->main__DOT__i2ci__DOT__insn) 
                                                   >> 0xbU)) 
                                                 & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_haf314c36__0 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb));
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbu_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0U] 
        = (IData)((0xfULL | ((QData)((IData)(vlSelf->main__DOT__wbu_data)) 
                             << 4U)));
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[1U] 
        = ((vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr 
            << 4U) | (IData)(((0xfULL | ((QData)((IData)(vlSelf->main__DOT__wbu_data)) 
                                         << 4U)) >> 0x20U)));
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[2U] 
        = (((IData)(vlSelf->main__DOT__wbu_we) << 2U) 
           | (3U & (vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr 
                    >> 0x1cU)));
    vlSelf->main__DOT__swic__DOT__dc_ack = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                                  & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                                     >> 2U)));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last)) 
                 & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last)) 
                    & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid)) 
                       | ((0x40U > (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill)) 
                          | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))))));
    vlSelf->main__DOT__scope3_ddr3_int = (IData)(((
                                                   ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                                    >> 4U) 
                                                   & (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))) 
                                                  & (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt))));
    vlSelf->main__DOT__i2cscope_int = (IData)(((((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                                 >> 4U) 
                                                & (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))) 
                                               & (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt))));
    vlSelf->main__DOT__scope2_ddr3_int = (IData)(((
                                                   ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                                    >> 4U) 
                                                   & (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))) 
                                                  & (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt))));
    vlSelf->main__DOT__scope1_ddr3_int = (IData)(((
                                                   ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                                    >> 4U) 
                                                   & (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))) 
                                                  & (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt))));
    vlSelf->main__DOT__w_console_busy = ((IData)(vlSelf->main__DOT__genbus__DOT__ps_full) 
                                         | (IData)(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
    vlSelf->main__DOT__wb32_xbar__DOT__mindex[0U] = vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    vlSelf->main__DOT__wbu_xbar__DOT__mindex[0U] = vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    if (vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U];
    } else {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[2U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[3U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[4U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[5U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[6U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[7U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[8U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[9U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xaU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xbU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xcU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xdU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xeU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xfU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x10U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x11U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
            = vlSelf->main__DOT__wbwide_i2cm_addr;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__s_stall = (0xf800U 
                                                  | (0xfffffc00U 
                                                     & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                                        & ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                                           << 0xaU))));
    vlSelf->main__DOT__i2ci__DOT____VdfgTmp_h373818eb__0 
        = (((IData)(vlSelf->main__DOT__i2ci__DOT__r_wait) 
            << 0x17U) | (((IData)(vlSelf->main__DOT__i2ci__DOT__soft_halt_request) 
                          << 0x16U) | (((IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->main__DOT__i2ci__DOT__r_err) 
                                         << 0x14U) 
                                        | (((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                                            << 0x13U) 
                                           | (((IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid) 
                                               << 0x12U) 
                                              | (((IData)(vlSelf->main__DOT__i2ci__DOT__half_valid) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSelf->i_i2c_scl) 
                                                              << 0xdU) 
                                                             | (((IData)(vlSelf->i_i2c_sda) 
                                                                 << 0xcU) 
                                                                | (IData)(vlSelf->main__DOT__i2ci__DOT__insn)))))))))))));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbwide_i2cm_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__swic__DOT__dbg_cmd_write = ((IData)(vlSelf->main__DOT__swic__DOT__dbg_stb) 
                                                   & ((IData)(vlSelf->main__DOT__swic__DOT__dbg_we) 
                                                      & (0U 
                                                         == 
                                                         (0x60U 
                                                          & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr)))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted)) 
                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall)));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0U] 
        = (IData)(vlSelf->main__DOT__wbwide_i2cdma_sel);
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[1U] 
        = (IData)((vlSelf->main__DOT__wbwide_i2cdma_sel 
                   >> 0x20U));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[2U] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[0U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[3U] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[1U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[4U] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[2U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[5U] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[3U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[6U] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[4U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[7U] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[5U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[8U] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[6U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[9U] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[7U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xaU] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[8U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xbU] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[9U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xcU] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[0xaU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xdU] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[0xbU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xeU] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[0xcU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xfU] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[0xdU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0x10U] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[0xeU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0x11U] 
        = vlSelf->main__DOT__wbwide_i2cdma_data[0xfU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0x12U] 
        = (0x2000000U | vlSelf->main__DOT__wbwide_i2cdma_addr);
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0U] 
        = (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel);
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[1U] 
        = (IData)((vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel 
                   >> 0x20U));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[2U] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[3U] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[1U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[4U] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[2U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[5U] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[3U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[6U] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[4U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[7U] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[5U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[8U] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[6U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[9U] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[7U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xaU] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[8U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xbU] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[9U];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xcU] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xaU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xdU] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xbU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xeU] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xcU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xfU] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xdU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0x10U] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xeU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0x11U] 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xfU];
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0x12U] 
        = (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we) 
            << 0x19U) | vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr);
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data 
        = (((QData)((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we)) 
            << 0x2cU) | (((QData)((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr)) 
                          << 0x24U) | (((QData)((IData)(
                                                        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU])) 
                                        << 4U) | (QData)((IData)(
                                                                 (0xfU 
                                                                  & (IData)(
                                                                            (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                                                             >> 0x3cU))))))));
    vlSelf->main__DOT__wbu_wbu_arbiter_stall = ((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb) 
                                                & ((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full) 
                                                   | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__swic__DOT__ext_err = (1U & (
                                                   ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                                                    >> 2U) 
                                                   | (IData)(vlSelf->main__DOT__swic__DOT__wdbus_int)));
    vlSelf->main__DOT__wbwide_wbu_arbiter_stb = ((~ (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full)) 
                                                 & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner) {
        vlSelf->main__DOT__swic__DOT__dc_stb = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb;
        vlSelf->main__DOT__swic__DOT__dc_cyc = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc;
    } else {
        vlSelf->main__DOT__swic__DOT__dc_stb = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb;
        vlSelf->main__DOT__swic__DOT__dc_cyc = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc)
            ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc)
            : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
    vlSelf->main__DOT__i2ci__DOT__bus_write = (1U & 
                                               (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                                 & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                                >> 4U));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt 
        = ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q) 
           | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en 
        = (1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                 >> 0x18U));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n 
        = (1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                 >> 0x17U));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy = 0U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = ((0xfeU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d)) 
           | (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[0U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
        [0U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = ((0xfdU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d)) 
           | (2U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[1U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
        [1U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = ((0xfbU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d)) 
           | (4U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[2U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
        [2U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = ((0xf7U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d)) 
           | (8U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[3U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
        [3U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = ((0xefU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d)) 
           | (0x10U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[4U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
        [4U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = ((0xdfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d)) 
           | (0x20U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[5U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
        [5U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = ((0xbfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d)) 
           | (0x40U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[6U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
        [6U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
        = ((0x7fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d)) 
           | (0x80U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[7U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
        [7U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1U] 
        = ((0x800000U & ((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero)) 
                         << 0x17U)) | ((0x700000U & 
                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                                         << 1U)) | 
                                       (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt) 
                                         << 0x13U) 
                                        | ((0x40000U 
                                            & (vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                                               >> 6U)) 
                                           | ((0x20000U 
                                               & (vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                                                  >> 6U)) 
                                              | ((0x1c000U 
                                                  & (vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                                                     >> 2U)) 
                                                 | (0x3fffU 
                                                    & vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction)))))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1U] 
        = ((0xfffbffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
            [1U]) | (0x400U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                               >> 0xfU)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2U] 
        = (0x500000U | ((0x800000U & ((~ ((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                                          & (0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data)))) 
                                      << 0x17U)) | 
                        (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt) 
                          << 0x13U) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en) 
                                        << 0x12U) | 
                                       ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n) 
                                        << 0x11U)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3U] 
        = (0xc00000U | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt) 
                         << 0x13U) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en) 
                                       << 0x12U) | 
                                      ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n) 
                                       << 0x11U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0U] 
        = (0xb00000U | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt) 
                         << 0x13U) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en) 
                                       << 0x12U) | 
                                      ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n) 
                                       << 0x11U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[0U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
            [0U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                                  [0U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[0U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
            [0U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
                                  [0U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[0U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
            [0U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
                                  [0U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
            [0U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
                                  [0U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[1U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
            [1U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                                  [1U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[1U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
            [1U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
                                  [1U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[1U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
            [1U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
                                  [1U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
            [1U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
                                  [1U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[2U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
            [2U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                                  [2U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[2U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
            [2U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
                                  [2U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[2U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
            [2U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
                                  [2U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
            [2U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
                                  [2U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[3U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
            [3U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                                  [3U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[3U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
            [3U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
                                  [3U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[3U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
            [3U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
                                  [3U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
            [3U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
                                  [3U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[4U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
            [4U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                                  [4U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[4U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
            [4U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
                                  [4U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[4U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
            [4U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
                                  [4U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
            [4U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
                                  [4U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[5U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
            [5U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                                  [5U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[5U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
            [5U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
                                  [5U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[5U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
            [5U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
                                  [5U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
            [5U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
                                  [5U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[6U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
            [6U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                                  [6U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[6U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
            [6U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
                                  [6U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[6U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
            [6U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
                                  [6U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
            [6U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
                                  [6U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[7U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
            [7U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                                  [7U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[7U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
            [7U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
                                  [7U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[7U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
            [7U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
                                  [7U] - (IData)(1U))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7U] 
        = ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
            [7U]) ? 0U : (0xfU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
                                  [7U] - (IData)(1U))));
    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall = 1U;
        if ((((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q) 
              >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank)) 
             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
                [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] 
                == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row)))) {
            if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we) 
                 & (0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
                    [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank]))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 8U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4U] 
                    = (1U | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux) 
                             << 1U));
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt = 1U;
                if ((4U >= vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                     [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank])) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] = 4U;
                }
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0U] = 3U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3U] 
                    = (0x480000U | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en) 
                                     << 0x12U) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank) 
                                                      << 0xeU) 
                                                     | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col)))));
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1U] = 3U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0U] 
                    = (0x80000U | vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                       [0U]);
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2U] = 3U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1U] 
                    = (0x80000U | vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                       [1U]);
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3U] = 3U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2U] 
                    = (0x80000U | vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                       [2U]);
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4U] = 3U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3U] 
                    = (0x80000U | vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                       [3U]);
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5U] = 3U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6U] = 3U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7U] = 3U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] = 3U;
            } else if (((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we)) 
                        & (0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
                           [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank]))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4U] 
                    = (1U | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux) 
                             << 1U));
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt = 0U;
                if ((1U >= vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                     [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank])) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] = 1U;
                }
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2U] 
                    = (0x500000U | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en) 
                                     << 0x12U) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank) 
                                                      << 0xeU) 
                                                     | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col)))));
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0U] 
                    = (0xf7ffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                       [0U]);
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1U] 
                    = (0xf7ffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                       [1U]);
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2U] 
                    = (0xf7ffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                       [2U]);
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3U] 
                    = (0xf7ffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                       [3U]);
            }
        } else if (((~ ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q) 
                        >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank))) 
                    & (0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
                       [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank]))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy = 1U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] = 3U;
            if ((0U >= vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
                 [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank])) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] = 0U;
            }
            vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] = 0U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0U] 
                = (0x300000U | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt) 
                                 << 0x13U) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en) 
                                               << 0x12U) 
                                              | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank) 
                                                     << 0xeU) 
                                                    | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row))))));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
                = ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank))));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row;
        } else if (((((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q) 
                      >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank)) 
                     & (vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
                        [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] 
                        != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row))) 
                    & (0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                       [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank]))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy = 1U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] = 1U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1U] 
                = (0x200000U | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt) 
                                 << 0x13U) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en) 
                                               << 0x12U) 
                                              | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank) 
                                                     << 0xeU) 
                                                    | (0x3ffU 
                                                       & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row)))))));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
                = ((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank))) 
                   & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d));
        }
    }
    if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending) 
         & (~ (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank) 
                == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank)) 
               & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending))))) {
        if ((((((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q) 
                >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank)) 
               & (vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
                  [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank] 
                  != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row))) 
              & (0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q
                 [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank])) 
             & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy)))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank] = 1U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1U] 
                = (0x200000U | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt) 
                                 << 0x13U) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en) 
                                               << 0x12U) 
                                              | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank) 
                                                     << 0xeU) 
                                                    | (0x3ffU 
                                                       & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row)))))));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
                = ((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank))) 
                   & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d));
        } else if ((((~ ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q) 
                         >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank))) 
                     & (0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q
                        [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank])) 
                    & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy)))) {
            if ((0U >= vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d
                 [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank])) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank] = 0U;
            }
            vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank] = 3U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank] = 0U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0U] 
                = (0x300000U | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt) 
                                 << 0x13U) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en) 
                                               << 0x12U) 
                                              | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank) 
                                                     << 0xeU) 
                                                    | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row))))));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d 
                = ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank))));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row;
        }
    }
    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending) {
        if ((((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d) 
              >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank)) 
             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d
                [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] 
                == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row)))) {
            if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we) 
                 & (0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d
                    [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank]))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall = 0U;
            } else if (((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we)) 
                        & (0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d
                           [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank]))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall = 0U;
            }
        }
    }
    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending) {
        if ((1U & ((~ ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d) 
                       >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank))) 
                   | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d) 
                       >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank)) 
                      & (vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d
                         [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank] 
                         != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row)))))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall = 1U;
        } else if (((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we)) 
                    & (0U != vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d
                       [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank]))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall = 1U;
        } else if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we) 
                    & (0U != vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d
                       [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank]))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall = 1U;
        }
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d 
        = ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q)
            ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall)
            : ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__test_stb) 
               & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending)
                   ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall)
                   : (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall))));
    if ((1U & (~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                  >> 2U)))) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d = 0U;
    }
    vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb 
        = (1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                  >> 7U) & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                            >> 0x1aU)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0 
        = ((0U == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state)) 
           | (2U == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid) 
           | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error))));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF)) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce = 0U;
    }
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0 
        = ((0U == (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state)) 
           | (2U == (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign) 
           != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
               >> 0x1fU));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
        = ((0U == (3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index)))
            ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val
            : ((1U == (3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index)))
                ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result
                : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result));
    vlSelf->main__DOT__swic__DOT__cpu_we = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                                            & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl 
        = ((4U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index))
            ? 0U : ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index))
                     ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index))
                         ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result
                         : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)
                     : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index))
                         ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result
                         : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_he857573c__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h39e03a19__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid) 
           | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy) 
              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy)));
    vlSelf->main__DOT__wbu_xbar__DOT____VdfgTmp_h4f7f05b5__0 
        = ((IData)(vlSelf->main__DOT__wbu_cyc) & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
    vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    VL_SHIFTL_WWI(512,512,32, __Vtemp_hcd157907__0, __Vtemp_he3c3974d__0, 
                  (0x1e0U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                             << 3U)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0U] 
        = __Vtemp_hcd157907__0[0U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[1U] 
        = __Vtemp_hcd157907__0[1U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[2U] 
        = __Vtemp_hcd157907__0[2U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[3U] 
        = __Vtemp_hcd157907__0[3U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[4U] 
        = __Vtemp_hcd157907__0[4U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[5U] 
        = __Vtemp_hcd157907__0[5U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[6U] 
        = __Vtemp_hcd157907__0[6U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[7U] 
        = __Vtemp_hcd157907__0[7U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[8U] 
        = __Vtemp_hcd157907__0[8U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[9U] 
        = __Vtemp_hcd157907__0[9U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xaU] 
        = __Vtemp_hcd157907__0[0xaU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xbU] 
        = __Vtemp_hcd157907__0[0xbU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xcU] 
        = __Vtemp_hcd157907__0[0xcU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xdU] 
        = __Vtemp_hcd157907__0[0xdU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xeU] 
        = __Vtemp_hcd157907__0[0xeU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU] 
        = __Vtemp_hcd157907__0[0xfU];
    vlSelf->__VdfgTmp_h503d14d1__0 = (7U & (~ ((4U 
                                                & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
    main__DOT__wb32_xbar__DOT____VdfgTmp_h4f7f05b5__0 
        = ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
           & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full 
        = ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)) 
           & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
    vlSelf->main__DOT__wbwide_xbar__DOT__request[0U] 
        = (((IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc) 
            & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))
            ? (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded)
            : 0U);
    vlSelf->main__DOT__wbwide_xbar__DOT__request[1U] 
        = (((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
            & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid))
            ? (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded)
            : 0U);
    vlSelf->main__DOT__wbwide_xbar__DOT__request[3U] 
        = (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc) 
            & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid))
            ? (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded)
            : 0U);
    vlSelf->main__DOT__swic__DOT__cpu_break = ((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                                                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en)) 
                                                & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
                                                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending))) 
                                               | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i) 
                                                  | ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                                                     & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err) 
                                                        | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error) 
                                                           | ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
                                                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal)))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
    if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR) 
          & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid)) 
         | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid) 
            & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error))))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce 
            = (1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                     | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid)
            ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg)
            : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) {
        vlSelf->main__DOT__swic__DOT__cpu_addr = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr;
        vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl;
    } else {
        vlSelf->main__DOT__swic__DOT__cpu_addr = vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr;
        vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc = vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc;
    }
    vlSelf->main__DOT__console__DOT__rxf_status = (0x6000U 
                                                   | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                                             >> 4U)) 
                                                         | (1U 
                                                            & (~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
    vlSelf->main__DOT__console__DOT__txf_status = (0x6000U 
                                                   | (((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill) 
                                                       << 2U) 
                                                      | (IData)(vlSelf->__VdfgTmp_ha46ae6a3__0)));
    vlSelf->main__DOT__swic__DOT__cpu_i_count = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last 
        = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
            == (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                             >> 9U))) & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                         >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                                   >> 9U))));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
           & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
    vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn 
        = vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn;
    if ((((IData)(vlSelf->main__DOT__wb32_spio_stb) 
          & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
             >> 8U)) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                >> 0x22U)))) {
        vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn 
            = ((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn) 
               & (~ ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                      << 0x10U) | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                   >> 0x10U))));
    }
    vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn 
        = ((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn) 
           | (IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn));
    vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int 
        = (0U != (IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn));
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift 
            = (0x3fU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill));
    }
    vlSelf->main__DOT__swic__DOT__main_int_vector = 
        (((IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h29ee39ef__0) 
          << 6U) | (((IData)(vlSelf->main__DOT__swic__DOT__ctri_int) 
                     << 5U) | (((IData)(vlSelf->main__DOT__swic__DOT__tma_int) 
                                << 4U) | (((IData)(vlSelf->main__DOT__swic__DOT__tmb_int) 
                                           << 3U) | 
                                          (((IData)(vlSelf->main__DOT__swic__DOT__tmc_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__swic__DOT__jif_int) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__swic__DOT__dmac_int)))))));
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
           & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow)) 
              | (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)));
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read 
        = (1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)) 
                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                    | (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd))));
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
           & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow)) 
              | (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)));
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read 
        = (1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)) 
                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                    | (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd))));
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb 
        = ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len) 
             == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)) 
            & (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len))) 
           | ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy)) 
                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid)) 
                    & (1U == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw))))));
    vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem
        [(0x1fU & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr))];
    if (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty) {
        vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data 
            = vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data 
        = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie) 
            << 0xcU) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT____VdfgTmp_h05977c6b__0));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_haf314c36__0)
            ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc
            : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc);
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_haf314c36__0));
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbu_stb) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    if (vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) {
        vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U] 
            = vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U];
        vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
            = vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U];
        vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
            = vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U];
    } else {
        vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U] 
            = vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0U];
        vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
            = vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[1U];
        vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
            = vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[2U];
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__dc_ack));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack 
        = ((IData)(vlSelf->main__DOT__swic__DOT__dc_ack) 
           & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill;
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill 
            = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last)
                ? 0U : ((0x3fU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill)) 
                        | (0xc0U & ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill) 
                                      >> 6U) - (IData)(1U)) 
                                    << 6U))));
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid) 
         & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill 
            = (0xffU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill) 
                        + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes)));
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last = 0U;
    if ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid) 
          & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready)) 
         & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last 
            = ((0U == (3U & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill) 
                             >> 6U))) | (IData)((0x40U 
                                                 == (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill))));
    }
    vlSelf->main__DOT__swic__DOT__alt_int_vector = 
        (((IData)(vlSelf->main__DOT__scope3_ddr3_int) 
          << 0xeU) | (((IData)(vlSelf->main__DOT__i2cscope_int) 
                       << 0xdU) | ((0x1000U & ((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)) 
                                               << 0xcU)) 
                                   | ((0x800U & ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)) 
                                                 << 0xbU)) 
                                      | (((IData)(vlSelf->main__DOT__scope2_ddr3_int) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->main__DOT__scope1_ddr3_int) 
                                             << 9U) 
                                            | (((IData)(vlSelf->main__DOT__swic__DOT__mtc_int) 
                                                << 7U) 
                                               | (((IData)(vlSelf->main__DOT__swic__DOT__moc_int) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->main__DOT__swic__DOT__mpc_int) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->main__DOT__swic__DOT__mic_int) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->main__DOT__swic__DOT__utc_int) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->main__DOT__swic__DOT__uoc_int) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->main__DOT__swic__DOT__upc_int) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->main__DOT__swic__DOT__uic_int))))))))))))));
    vlSelf->main__DOT__console__DOT____VdfgTmp_h60af6732__0 
        = (1U & ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)) 
                 | (IData)(vlSelf->main__DOT__w_console_busy)));
    vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6 
        = (1U & ((~ (IData)(vlSelf->main__DOT__w_console_busy)) 
                 & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow))));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1f80000U & (0x80000U ^ (0x1ffffffU 
                                            & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest 
        = ((6U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)) 
           | (IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1f80000U & (0x100000U ^ (0x1ffffffU 
                                             & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest 
        = ((5U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0) 
              << 1U));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1000000U & (0x1000000U ^ (0x1ffffffU 
                                              & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest 
        = ((3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0) 
              << 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_i2cdma_stb) 
              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__dbg_cmd_write) 
           & (IData)(vlSelf->main__DOT__swic__DOT__dbg_sel));
    if (vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U];
    } else {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0x12U];
    }
    if (vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U];
    } else {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0x12U];
    }
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)
            ? vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data
            : vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data);
    vlSelf->main__DOT__wbu_xbar__DOT__s_stall = (0xcU 
                                                 | ((0xfffffffeU 
                                                     & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                                        & (((IData)(vlSelf->cpu_sim_cyc) 
                                                            | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                                           << 1U))) 
                                                    | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                                       & (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))));
    vlSelf->main__DOT__swic__DOT__dc_err = ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                            & (IData)(vlSelf->main__DOT__swic__DOT__ext_err));
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr 
        = ((~ (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full)) 
           & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
              & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
              | (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
    vlSelf->main__DOT__i2ci__DOT__bus_manual = ((IData)(vlSelf->main__DOT__i2ci__DOT__bus_write) 
                                                & ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                                                   & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U] 
                                                       >> 0xbU) 
                                                      & (IData)(
                                                                (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                                 >> 0x11U)))));
    vlSelf->main__DOT__i2ci__DOT__bus_jump = ((IData)(vlSelf->main__DOT__i2ci__DOT__bus_write) 
                                              & ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                                                 & (IData)(
                                                           (((0xf0000ULL 
                                                              == 
                                                              (0xf0000ULL 
                                                               & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel)) 
                                                             & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted))) 
                                                            & (IData)(vlSelf->main__DOT__i2ci__DOT__r_halted)))));
    vlSelf->main__DOT__i2ci__DOT__bus_override = ((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                                                  & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted)) 
                                                     & ((IData)(vlSelf->main__DOT__i2ci__DOT__bus_write) 
                                                        & ((1U 
                                                            == 
                                                            (3U 
                                                             & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                                                           & (IData)(
                                                                     (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                                      >> 0x10U))))));
    vlSelf->o_ddr3_controller_cmd[0U] = (IData)((((QData)((IData)(
                                                                  vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                                                                  [1U])) 
                                                  << 0x18U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                                                                   [0U]))));
    vlSelf->o_ddr3_controller_cmd[1U] = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                                          [2U] << 0x10U) 
                                         | (IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                                                                      [1U])) 
                                                      << 0x18U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                                                                       [0U]))) 
                                                    >> 0x20U)));
    vlSelf->o_ddr3_controller_cmd[2U] = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                                          [3U] << 8U) 
                                         | (vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d
                                            [2U] >> 0x10U));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write 
        = ((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
           & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
              >> 7U));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch 
        = (((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl)) 
            & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl)) 
           | ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid)) 
              & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready 
        = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge) 
           & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0));
    vlSelf->main__DOT__i2ci__DOT__i2c_stretch = (((~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl)) 
                                                  & (IData)(vlSelf->main__DOT__i2ci__DOT__w_scl)) 
                                                 | ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__s_tvalid)) 
                                                    & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0)));
    vlSelf->main__DOT__i2ci__DOT__insn_ready = ((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge) 
                                                & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags 
        = ((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index))
            ? ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0)) 
                << 3U) | ((4U & ((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                                        >> 0x1dU)) 
                                 ^ (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                                     & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0)) 
                                    << 2U))) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c) 
                                                 << 1U) 
                                                | (0U 
                                                   == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result))))
            : ((3U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index))
                ? ((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                          >> 0x1dU)) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
                                         << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z)))
                : 0U));
    if (vlSelf->main__DOT__wbu_xbar__DOT____VdfgTmp_h4f7f05b5__0) {
        vlSelf->main__DOT__wbu_xbar__DOT__m_stb = (1U 
                                                   & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__mfull)));
        vlSelf->main__DOT__wbu_xbar__DOT__request[0U] 
            = vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded;
    } else {
        vlSelf->main__DOT__wbu_xbar__DOT__m_stb = 0U;
        vlSelf->main__DOT__wbu_xbar__DOT__request[0U] = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)
            ? (0x80000000U | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half) 
                               << 0x10U) | (0xffffU 
                                            & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU])))
            : vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]);
    vlSelf->main__DOT__swic__DOT__dc_stall = (IData)(
                                                     (((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                                       >> 2U) 
                                                      | (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)));
    if (main__DOT__wb32_xbar__DOT____VdfgTmp_h4f7f05b5__0) {
        vlSelf->main__DOT__wb32_xbar__DOT__m_stb = 
            (1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull)));
        vlSelf->main__DOT__wb32_xbar__DOT__request[0U] 
            = vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded;
    } else {
        vlSelf->main__DOT__wb32_xbar__DOT__m_stb = 0U;
        vlSelf->main__DOT__wb32_xbar__DOT__request[0U] = 0U;
    }
    vlSelf->main__DOT__wb32_wbdown_stb = ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full)) 
                                          & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
    vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB)
            ? (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                   == (0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))))
                ? 1U : ((0x40U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))
                         ? 2U : 3U)) : 0U);
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
           & ((~ (IData)(vlSelf->main__DOT__swic__DOT__pic_interrupt)) 
              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                 & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                     >> 5U) & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h740acd49__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
           == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
           & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt) 
               & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase)) 
                  & ((~ (IData)((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock)))) 
                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy))))) 
              | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error) 
                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err) 
                    | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                       & ((~ (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                              >> 5U)) & (IData)((0x1eU 
                                                 == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
        = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
            & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid)) 
               & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB)))
            ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl
            : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv);
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
           & (0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy) 
           & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb));
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0U];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[1U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[1U];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[2U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[2U];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[3U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[3U];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[4U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[4U];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[5U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[5U];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[6U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[6U];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[7U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[7U];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[8U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[8U];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[9U] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[9U];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xaU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xaU];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xbU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xbU];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xcU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xcU];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xdU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xdU];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xeU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xeU];
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xfU] 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xfU];
    if (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0U] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[1U] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[2U] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[3U] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[4U] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[5U] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[6U] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[7U] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[8U] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[9U] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xaU] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xbU] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xcU] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xdU] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xeU] = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xfU] = 0U;
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) {
        __Vtemp_hdb251f8c__0[0U] = Vmain__ConstPool__CONST_hbd99daea_0[0U];
        __Vtemp_hdb251f8c__0[1U] = Vmain__ConstPool__CONST_hbd99daea_0[1U];
        __Vtemp_hdb251f8c__0[2U] = Vmain__ConstPool__CONST_hbd99daea_0[2U];
        __Vtemp_hdb251f8c__0[3U] = Vmain__ConstPool__CONST_hbd99daea_0[3U];
        __Vtemp_hdb251f8c__0[4U] = Vmain__ConstPool__CONST_hbd99daea_0[4U];
        __Vtemp_hdb251f8c__0[5U] = Vmain__ConstPool__CONST_hbd99daea_0[5U];
        __Vtemp_hdb251f8c__0[6U] = Vmain__ConstPool__CONST_hbd99daea_0[6U];
        __Vtemp_hdb251f8c__0[7U] = Vmain__ConstPool__CONST_hbd99daea_0[7U];
        __Vtemp_hdb251f8c__0[8U] = Vmain__ConstPool__CONST_hbd99daea_0[8U];
        __Vtemp_hdb251f8c__0[9U] = Vmain__ConstPool__CONST_hbd99daea_0[9U];
        __Vtemp_hdb251f8c__0[0xaU] = Vmain__ConstPool__CONST_hbd99daea_0[0xaU];
        __Vtemp_hdb251f8c__0[0xbU] = Vmain__ConstPool__CONST_hbd99daea_0[0xbU];
        __Vtemp_hdb251f8c__0[0xcU] = Vmain__ConstPool__CONST_hbd99daea_0[0xcU];
        __Vtemp_hdb251f8c__0[0xdU] = Vmain__ConstPool__CONST_hbd99daea_0[0xdU];
        __Vtemp_hdb251f8c__0[0xeU] = Vmain__ConstPool__CONST_hbd99daea_0[0xeU];
        __Vtemp_hdb251f8c__0[0xfU] = vlSelf->main__DOT__wb32_wbdown_idata;
        VL_SHIFTR_WWI(512,512,32, __Vtemp_h12b8adbe__0, __Vtemp_hdb251f8c__0, 
                      (0x1e0U & ((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                                 << 5U)));
        __Vtemp_hb780e8f4__0[1U] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[1U] 
                                    | __Vtemp_h12b8adbe__0[1U]);
        __Vtemp_hb780e8f4__0[2U] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[2U] 
                                    | __Vtemp_h12b8adbe__0[2U]);
        __Vtemp_hb780e8f4__0[3U] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[3U] 
                                    | __Vtemp_h12b8adbe__0[3U]);
        __Vtemp_hb780e8f4__0[4U] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[4U] 
                                    | __Vtemp_h12b8adbe__0[4U]);
        __Vtemp_hb780e8f4__0[5U] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[5U] 
                                    | __Vtemp_h12b8adbe__0[5U]);
        __Vtemp_hb780e8f4__0[6U] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[6U] 
                                    | __Vtemp_h12b8adbe__0[6U]);
        __Vtemp_hb780e8f4__0[7U] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[7U] 
                                    | __Vtemp_h12b8adbe__0[7U]);
        __Vtemp_hb780e8f4__0[8U] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[8U] 
                                    | __Vtemp_h12b8adbe__0[8U]);
        __Vtemp_hb780e8f4__0[9U] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[9U] 
                                    | __Vtemp_h12b8adbe__0[9U]);
        __Vtemp_hb780e8f4__0[0xaU] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xaU] 
                                      | __Vtemp_h12b8adbe__0[0xaU]);
        __Vtemp_hb780e8f4__0[0xbU] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xbU] 
                                      | __Vtemp_h12b8adbe__0[0xbU]);
        __Vtemp_hb780e8f4__0[0xcU] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xcU] 
                                      | __Vtemp_h12b8adbe__0[0xcU]);
        __Vtemp_hb780e8f4__0[0xdU] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xdU] 
                                      | __Vtemp_h12b8adbe__0[0xdU]);
        __Vtemp_hb780e8f4__0[0xeU] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xeU] 
                                      | __Vtemp_h12b8adbe__0[0xeU]);
        __Vtemp_hb780e8f4__0[0xfU] = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xfU] 
                                      | __Vtemp_h12b8adbe__0[0xfU]);
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0U] 
            = (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0U] 
               | __Vtemp_h12b8adbe__0[0U]);
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[1U] 
            = __Vtemp_hb780e8f4__0[1U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[2U] 
            = __Vtemp_hb780e8f4__0[2U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[3U] 
            = __Vtemp_hb780e8f4__0[3U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[4U] 
            = __Vtemp_hb780e8f4__0[4U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[5U] 
            = __Vtemp_hb780e8f4__0[5U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[6U] 
            = __Vtemp_hb780e8f4__0[6U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[7U] 
            = __Vtemp_hb780e8f4__0[7U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[8U] 
            = __Vtemp_hb780e8f4__0[8U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[9U] 
            = __Vtemp_hb780e8f4__0[9U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xaU] 
            = __Vtemp_hb780e8f4__0[0xaU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xbU] 
            = __Vtemp_hb780e8f4__0[0xbU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xcU] 
            = __Vtemp_hb780e8f4__0[0xcU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xdU] 
            = __Vtemp_hb780e8f4__0[0xdU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xeU] 
            = __Vtemp_hb780e8f4__0[0xeU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xfU] 
            = __Vtemp_hb780e8f4__0[0xfU];
    }
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbu_cyc));
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((2U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | (0U == (0x20000000U & ((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                     << 0x1cU) | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                                  >> 4U)))));
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((1U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((0U == (0x38000000U & (0x20000000U ^ 
                                     (0x3fffffffU & 
                                      ((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                        << 0x1cU) | 
                                       (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                        >> 4U)))))) 
              << 1U));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill;
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill 
            = (0xffU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill) 
                        - (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes)));
    }
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill 
            = (0xffU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill) 
                        + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size)));
    }
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read 
        = ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)) 
           & (IData)(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6));
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write 
        = ((IData)(vlSelf->main__DOT__console__DOT__txf_wb_write) 
           & ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)) 
              | (IData)(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6)));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbwide_i2cm_cyc));
    vlSelf->main__DOT__swic__DOT__reset_request = ((IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0) 
                                                   & (vlSelf->main__DOT__swic__DOT__dbg_idata 
                                                      >> 3U));
    vlSelf->main__DOT__swic__DOT__step_request = ((IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0) 
                                                  & (vlSelf->main__DOT__swic__DOT__dbg_idata 
                                                     >> 2U));
    vlSelf->main__DOT__swic__DOT__halt_request = ((IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0) 
                                                  & vlSelf->main__DOT__swic__DOT__dbg_idata);
    vlSelf->main__DOT__swic__DOT__clear_cache_request 
        = ((IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0) 
           & (vlSelf->main__DOT__swic__DOT__dbg_idata 
              >> 4U));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1f80000U & (0x80000U ^ (0x1ffffffU 
                                            & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((6U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | (IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1f80000U & (0x100000U ^ (0x1ffffffU 
                                             & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((5U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0) 
              << 1U));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1000000U & (0x1000000U ^ (0x1ffffffU 
                                              & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0) 
              << 2U));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1f80000U & (0x80000U ^ (0x1ffffffU 
                                            & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest 
        = ((6U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)) 
           | (IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1f80000U & (0x100000U ^ (0x1ffffffU 
                                             & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest 
        = ((5U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0) 
              << 1U));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1000000U & (0x1000000U ^ (0x1ffffffU 
                                              & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest 
        = ((3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0) 
              << 2U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 
        = (0U == (0xf8U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                   >> 0x24U))));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((0x7feU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | (IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 
        = (0U == (0xf8U & (8U ^ (0xffU & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                  >> 0x24U))))));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((0x7fdU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0) 
              << 1U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 
        = (0U == (0xf8U & (0x10U ^ (0xffU & (IData)(
                                                    (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                     >> 0x24U))))));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((0x7fbU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0) 
              << 2U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 
        = (0U == (0xf8U & (0x18U ^ (0xffU & (IData)(
                                                    (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                     >> 0x24U))))));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((0x7f7U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0) 
              << 3U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 
        = (0U == (0xf8U & (0x20U ^ (0xffU & (IData)(
                                                    (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                     >> 0x24U))))));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((0x7efU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0) 
              << 4U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 
        = (0U == (0xf8U & (0x28U ^ (0xffU & (IData)(
                                                    (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                     >> 0x24U))))));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((0x7dfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0) 
              << 5U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 
        = (0U == (0xf8U & (0x30U ^ (0xffU & (IData)(
                                                    (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                     >> 0x24U))))));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((0x7bfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0) 
              << 6U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 
        = (0U == (0xf8U & (0x38U ^ (0xffU & (IData)(
                                                    (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                     >> 0x24U))))));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((0x77fU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0) 
              << 7U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 
        = (0U == (0xf8U & (0x40U ^ (0xffU & (IData)(
                                                    (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                     >> 0x24U))))));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((0x6ffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0) 
              << 8U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 
        = (0U == (0xe0U & (0x60U ^ (0xffU & (IData)(
                                                    (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                     >> 0x24U))))));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((0x5ffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0) 
              << 9U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 
        = (0U == (0x80U & (0x80U ^ (0xffU & (IData)(
                                                    (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                     >> 0x24U))))));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((0x3ffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0) 
              << 0xaU));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err 
        = ((IData)(vlSelf->main__DOT__swic__DOT__dc_err) 
           & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__dc_err));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual 
        = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) 
           & (IData)((((0x1000000U == (0x3000000U & 
                                       vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                       & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U] 
                          >> 0xbU)) & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                       >> 0x1dU))));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump 
        = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) 
           & (IData)(((((0x2000000U == (0x3000000U 
                                        & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                        & (0xf0000000ULL == (0xf0000000ULL 
                                             & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))) 
                       & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted))) 
                      & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted))));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override 
        = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
           & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted)) 
              & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) 
                 & (IData)(((0x1000000U == (0x3000000U 
                                            & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                            & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                               >> 0x1cU))))));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready 
        = (1U & (((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait)) 
                  & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready) 
                     | ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn) 
                        >> 0xbU))) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual)));
    vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4 
        = ((0x40000000U & ((IData)(vlSelf->main__DOT__i2ci__DOT__ovw_data) 
                           << 0x15U)) | (((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_abort) 
                                          << 0x1dU) 
                                         | (((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_stretch) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->main__DOT__i2ci__DOT__half_insn) 
                                                << 0x18U) 
                                               | vlSelf->main__DOT__i2ci__DOT____VdfgTmp_h373818eb__0))));
    vlSelf->main__DOT__i2ci__DOT__half_ready = (1U 
                                                & (((~ (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait)) 
                                                    & ((IData)(vlSelf->main__DOT__i2ci__DOT__insn_ready) 
                                                       | ((IData)(vlSelf->main__DOT__i2ci__DOT__insn) 
                                                          >> 0xbU))) 
                                                   | (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0 
        = (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
            & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce))
            ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags)
            : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0 
        = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
            & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce))
            ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags)
            : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags));
    vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel 
        = (0U != (vlSelf->main__DOT__wbu_xbar__DOT__request
                  [0U] & vlSelf->main__DOT__wbu_xbar__DOT__grant
                  [0U]));
    vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available 
        = (0U != (3U & ((vlSelf->main__DOT__wbu_xbar__DOT__request
                         [0U] & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant))) 
                        & (~ vlSelf->main__DOT__wbu_xbar__DOT__requested
                           [0U]))));
    if ((4U & vlSelf->main__DOT__wbu_xbar__DOT__request
         [0U])) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available = 1U;
    }
    vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available 
        = vlSelf->main__DOT__wbu_xbar__DOT__m_stb;
    vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
    if ((1U & vlSelf->main__DOT__wbu_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant)) 
                      & (~ vlSelf->main__DOT__wbu_xbar__DOT__requested
                         [0U])))) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ vlSelf->main__DOT__wbu_xbar__DOT__request
               [0U]))) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (6U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((2U & vlSelf->main__DOT__wbu_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant) 
                          >> 1U)) & (~ (vlSelf->main__DOT__wbu_xbar__DOT__requested
                                        [0U] >> 1U))))) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbu_xbar__DOT__request
                  [0U] >> 1U)))) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (5U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((4U & vlSelf->main__DOT__wbu_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbu_xbar__DOT__request
                  [0U] >> 2U)))) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (3U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if (((IData)(vlSelf->main__DOT__wbu_xbar__DOT__mgrant) 
         & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__mempty)))) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel = 1U;
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
    }
    vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                     [0U]) & ((IData)(vlSelf->main__DOT__wbu_cyc) 
                              >> vlSelf->main__DOT__wbu_xbar__DOT__sindex
                              [0U]))));
    if ((((~ ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
               [0U]) ? vlSelf->main__DOT__wbu_xbar__DOT__request
              [vlSelf->main__DOT__wbu_xbar__DOT__sindex
              [0U]] : 0U)) & ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                               [0U]) & ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stb) 
                                        >> vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                        [0U]))) & (
                                                   (0U 
                                                    >= 
                                                    vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                                    [0U]) 
                                                   & ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__mempty) 
                                                      >> 
                                                      vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                                      [0U])))) {
        vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant)))) {
        vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                     [1U]) & ((IData)(vlSelf->main__DOT__wbu_cyc) 
                              >> vlSelf->main__DOT__wbu_xbar__DOT__sindex
                              [1U]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                [1U]) ? vlSelf->main__DOT__wbu_xbar__DOT__request
               [vlSelf->main__DOT__wbu_xbar__DOT__sindex
               [1U]] : 0U) >> 1U)) & ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                       [1U]) & ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stb) 
                                                >> 
                                                vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                                [1U]))) 
         & ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
             [1U]) & ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__mempty) 
                      >> vlSelf->main__DOT__wbu_xbar__DOT__sindex
                      [1U])))) {
        vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant) 
                  >> 1U)))) {
        vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wbu_xbar__DOT__m_stall = (1U 
                                                 & ((vlSelf->main__DOT__wbu_xbar__DOT__grant
                                                     [0U] 
                                                     >> 2U) 
                                                    | (((IData)(vlSelf->main__DOT__wbu_xbar__DOT__mgrant) 
                                                        & ((2U 
                                                            >= 
                                                            vlSelf->main__DOT__wbu_xbar__DOT__mindex
                                                            [0U]) 
                                                           & (vlSelf->main__DOT__wbu_xbar__DOT__request
                                                              [0U] 
                                                              >> 
                                                              vlSelf->main__DOT__wbu_xbar__DOT__mindex
                                                              [0U])))
                                                        ? 
                                                       ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__mfull) 
                                                        | ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_stall) 
                                                           >> 
                                                           vlSelf->main__DOT__wbu_xbar__DOT__mindex
                                                           [0U]))
                                                        : (IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stb))));
    if (vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) {
        vlSelf->main__DOT__wbu_xbar__DOT__m_stall = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase) 
           & (0xfcf8U == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                          >> 0x10U)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div 
        = (IData)((0x3800000U == (0x87800000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu 
        = (IData)(((0x6000000U == (0x86000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)) 
                   & ((7U != (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                    >> 0x1cU))) & (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                       >> 0x17U))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI 
        = (0xffU & ((6U == (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                  >> 0x18U))) ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                 >> 0x10U)
                     : ((0x800000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)
                         ? ((0xfcU & ((- (IData)((1U 
                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                     >> 0x12U)))) 
                                      << 2U)) | (3U 
                                                 & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                    >> 0x10U)))
                         : ((0x80U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                      >> 0xfU)) | (0x7fU 
                                                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                      >> 0x10U))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special 
        = (IData)((0x77000000U == (0xf7000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)) 
                 | (IData)(vlSelf->main__DOT__swic__DOT__dc_stall)));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall 
        = ((IData)(vlSelf->main__DOT__swic__DOT__dc_stall) 
           | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel 
        = (0U != (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] & vlSelf->main__DOT__wb32_xbar__DOT__grant
                  [0U]));
    vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available 
        = (0U != (0x7ffU & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                             [0U] & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) 
                            & (~ vlSelf->main__DOT__wb32_xbar__DOT__requested
                               [0U]))));
    if ((0x800U & vlSelf->main__DOT__wb32_xbar__DOT__request
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available = 1U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available 
        = vlSelf->main__DOT__wb32_xbar__DOT__m_stb;
    vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
    if ((1U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)) 
                      & (~ vlSelf->main__DOT__wb32_xbar__DOT__requested
                         [0U])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ vlSelf->main__DOT__wb32_xbar__DOT__request
               [0U]))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xffeU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((2U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                          >> 1U)) & (~ (vlSelf->main__DOT__wb32_xbar__DOT__requested
                                        [0U] >> 1U))))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] >> 1U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xffdU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((4U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (4U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                          >> 2U)) & (~ (vlSelf->main__DOT__wb32_xbar__DOT__requested
                                        [0U] >> 2U))))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (4U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] >> 2U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xffbU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((8U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (8U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                          >> 3U)) & (~ (vlSelf->main__DOT__wb32_xbar__DOT__requested
                                        [0U] >> 3U))))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (8U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] >> 3U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xff7U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((0x10U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x10U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                          >> 4U)) & (~ (vlSelf->main__DOT__wb32_xbar__DOT__requested
                                        [0U] >> 4U))))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x10U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] >> 4U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xfefU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((0x20U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x20U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                          >> 5U)) & (~ (vlSelf->main__DOT__wb32_xbar__DOT__requested
                                        [0U] >> 5U))))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x20U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] >> 5U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xfdfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((0x40U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x40U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                          >> 6U)) & (~ (vlSelf->main__DOT__wb32_xbar__DOT__requested
                                        [0U] >> 6U))))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x40U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] >> 6U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xfbfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((0x80U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x80U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                          >> 7U)) & (~ (vlSelf->main__DOT__wb32_xbar__DOT__requested
                                        [0U] >> 7U))))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x80U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] >> 7U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xf7fU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((0x100U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x100U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                          >> 8U)) & (~ (vlSelf->main__DOT__wb32_xbar__DOT__requested
                                        [0U] >> 8U))))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x100U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] >> 8U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xeffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((0x200U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x200U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                          >> 9U)) & (~ (vlSelf->main__DOT__wb32_xbar__DOT__requested
                                        [0U] >> 9U))))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x200U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] >> 9U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xdffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((0x400U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x400U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                          >> 0xaU)) & (~ (vlSelf->main__DOT__wb32_xbar__DOT__requested
                                          [0U] >> 0xaU))))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x400U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] >> 0xaU)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xbffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((0x800U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x800U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wb32_xbar__DOT__request
                  [0U] >> 0xbU)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0x7ffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if (((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant) 
         & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [0U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                              >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                              [0U]))));
    if ((((~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [0U]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
              [vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [0U]] : 0U)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                               [0U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                        >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [0U]))) & (
                                                   (0U 
                                                    >= 
                                                    vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                    [0U]) 
                                                   & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                                                      >> 
                                                      vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                      [0U])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [1U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                              >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                              [1U]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                [1U]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [1U]] : 0U) >> 1U)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [1U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                                >> 
                                                vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                [1U]))) 
         & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
             [1U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                      >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                      [1U])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                  >> 1U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [2U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                              >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                              [2U]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                [2U]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [2U]] : 0U) >> 2U)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [2U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                                >> 
                                                vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                [2U]))) 
         & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
             [2U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                      >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                      [2U])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                  >> 2U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [3U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                              >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                              [3U]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                [3U]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [3U]] : 0U) >> 3U)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [3U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                                >> 
                                                vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                [3U]))) 
         & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
             [3U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                      >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                      [3U])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                  >> 3U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [4U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                              >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                              [4U]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                [4U]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [4U]] : 0U) >> 4U)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [4U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                                >> 
                                                vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                [4U]))) 
         & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
             [4U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                      >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                      [4U])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                  >> 4U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [5U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                              >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                              [5U]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                [5U]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [5U]] : 0U) >> 5U)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [5U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                                >> 
                                                vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                [5U]))) 
         & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
             [5U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                      >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                      [5U])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                  >> 5U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [6U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                              >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                              [6U]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                [6U]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [6U]] : 0U) >> 6U)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [6U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                                >> 
                                                vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                [6U]))) 
         & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
             [6U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                      >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                      [6U])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                  >> 6U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [7U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                              >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                              [7U]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                [7U]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [7U]] : 0U) >> 7U)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [7U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                                >> 
                                                vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                [7U]))) 
         & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
             [7U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                      >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                      [7U])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                  >> 7U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [8U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                              >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                              [8U]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                [8U]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [8U]] : 0U) >> 8U)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [8U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                                >> 
                                                vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                [8U]))) 
         & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
             [8U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                      >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                      [8U])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                  >> 8U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [9U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                              >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                              [9U]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                [9U]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [9U]] : 0U) >> 9U)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [9U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                                >> 
                                                vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                [9U]))) 
         & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
             [9U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                      >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                      [9U])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                  >> 9U)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [0xaU]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                [0xaU]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                [0xaU]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [0xaU]] : 0U) >> 0xaU)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [0xaU]) 
                                          & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                             >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [0xaU]))) 
         & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
             [0xaU]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                        >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [0xaU])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                  >> 0xaU)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__m_stall = (1U 
                                                  & ((vlSelf->main__DOT__wb32_xbar__DOT__grant
                                                      [0U] 
                                                      >> 0xbU) 
                                                     | (((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant) 
                                                         & ((0xbU 
                                                             >= 
                                                             vlSelf->main__DOT__wb32_xbar__DOT__mindex
                                                             [0U]) 
                                                            & (vlSelf->main__DOT__wb32_xbar__DOT__request
                                                               [0U] 
                                                               >> 
                                                               vlSelf->main__DOT__wb32_xbar__DOT__mindex
                                                               [0U])))
                                                         ? 
                                                        ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                         | ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                                            >> 
                                                            vlSelf->main__DOT__wb32_xbar__DOT__mindex
                                                            [0U]))
                                                         : (IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb))));
    if (vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) {
        vlSelf->main__DOT__wb32_xbar__DOT__m_stall = 0U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0U] 
        = (IData)(((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                    ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                        ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                        : 0xffffffffffffffffULL) : 
                   ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                     ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                     : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[1U] 
        = (IData)((((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                     ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                         ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                         : 0xffffffffffffffffULL) : 
                    ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                      ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                      : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)) 
                   >> 0x20U));
    if (vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner) {
        vlSelf->main__DOT__wbwide_zip_stb = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                              ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                                              : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
        vlSelf->main__DOT__wbwide_zip_addr = vlSelf->main__DOT__swic__DOT__cpu_addr;
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[2U] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[3U] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[4U] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[5U] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[6U] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[7U] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[8U] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[9U] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xaU] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xbU] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xcU] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xdU] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xeU] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xfU] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x10U] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x11U] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xfU];
        vlSelf->main__DOT__wbwide_zip_cyc = vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc;
    } else {
        vlSelf->main__DOT__wbwide_zip_stb = vlSelf->main__DOT__swic__DOT__dc_stb;
        vlSelf->main__DOT__wbwide_zip_addr = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                               ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr
                                               : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr);
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[2U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[3U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[4U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[5U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[6U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[7U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[8U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[9U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xaU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xbU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xcU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xdU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xeU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xfU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x10U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x11U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xfU];
        vlSelf->main__DOT__wbwide_zip_cyc = vlSelf->main__DOT__swic__DOT__dc_cyc;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x12U] 
        = ((0x2000000U & (((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                            ? (IData)(vlSelf->main__DOT__swic__DOT__cpu_we)
                            : (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))) 
                          << 0x19U)) | vlSelf->main__DOT__wbwide_zip_addr);
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
              | (IData)(vlSelf->main__DOT__wb32_wbdown_stb)));
    vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr 
        = ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
           & (IData)(vlSelf->main__DOT__wb32_wbdown_stb));
    vlSelf->main__DOT__swic__DOT__sys_cyc = ((IData)(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc) 
                                             | (IData)(vlSelf->main__DOT__swic__DOT__dbg_cyc));
    vlSelf->main__DOT__swic__DOT__dbg_stall = ((IData)(vlSelf->main__DOT__swic__DOT__cmd_read) 
                                               | (((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                                                   & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall) 
                                                      & (0x20U 
                                                         == 
                                                         (0x60U 
                                                          & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))))) 
                                                  | (((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                                      >> 6U) 
                                                     & (IData)(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc))));
    if (vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc) {
        vlSelf->main__DOT__swic__DOT__sys_data = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0U];
        vlSelf->main__DOT__swic__DOT__sys_we = vlSelf->main__DOT__swic__DOT__cpu_we;
        vlSelf->main__DOT__swic__DOT__sys_addr = (0xffU 
                                                  & vlSelf->main__DOT__swic__DOT__cpu_addr);
        vlSelf->main__DOT__swic__DOT__sys_stb = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
    } else {
        vlSelf->main__DOT__swic__DOT__sys_data = vlSelf->main__DOT__swic__DOT__dbg_idata;
        vlSelf->main__DOT__swic__DOT__sys_we = vlSelf->main__DOT__swic__DOT__dbg_we;
        vlSelf->main__DOT__swic__DOT__sys_addr = (0xffU 
                                                  & (0x1fU 
                                                     & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr)));
        vlSelf->main__DOT__swic__DOT__sys_stb = ((IData)(vlSelf->main__DOT__swic__DOT__dbg_stb) 
                                                 & (0x40U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
        = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
            & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h740acd49__0))
            ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl
            : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av);
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result 
        = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
            << 0x1fU) | ((0x40000000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow 
        = (1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid) 
                    & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v) 
                        >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                  >> 9U))) & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag 
                                              == (0x3fffffU 
                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                     >> 9U)))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address = 0U;
    if ((0x4000000U == (0x7e000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address = 1U;
    }
    if ((0x40000000U == (0x40000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address = 1U;
    }
    main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_h832f938f__0 
        = ((0U != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U)) | ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                               >> 5U) & (0U != (0x1fU 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce 
        = (1U & ((~ (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                      | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc)) 
                     | ((IData)(vlSelf->main__DOT__swic__DOT__cpu_break) 
                        | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep)))) 
                 & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                    | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase))));
    if (vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc) {
        vlSelf->main__DOT__swic__DOT__cpu_err = ((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner));
        vlSelf->main__DOT__swic__DOT__cpu_idata[0U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x20U];
        vlSelf->main__DOT__swic__DOT__cpu_idata[1U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x21U];
        vlSelf->main__DOT__swic__DOT__cpu_idata[2U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x22U];
        vlSelf->main__DOT__swic__DOT__cpu_idata[3U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x23U];
        vlSelf->main__DOT__swic__DOT__cpu_idata[4U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x24U];
        vlSelf->main__DOT__swic__DOT__cpu_idata[5U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x25U];
        vlSelf->main__DOT__swic__DOT__cpu_idata[6U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x26U];
        vlSelf->main__DOT__swic__DOT__cpu_idata[7U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x27U];
        vlSelf->main__DOT__swic__DOT__cpu_idata[8U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x28U];
        vlSelf->main__DOT__swic__DOT__cpu_idata[9U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x29U];
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xaU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2aU];
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xbU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2bU];
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xcU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2cU];
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xdU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2dU];
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xeU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2eU];
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xfU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2fU];
    } else {
        vlSelf->main__DOT__swic__DOT__cpu_err = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[0U] 
            = vlSelf->main__DOT__swic__DOT__sys_idata;
        vlSelf->main__DOT__swic__DOT__cpu_idata[1U] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[2U] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[3U] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[4U] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[5U] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[6U] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[7U] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[8U] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[9U] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xaU] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xbU] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xcU] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xdU] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xeU] = 0U;
        vlSelf->main__DOT__swic__DOT__cpu_idata[0xfU] = 0U;
    }
    vlSelf->main__DOT__swic__DOT__cpu_ack = (((IData)(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc) 
                                              & (IData)(vlSelf->main__DOT__swic__DOT__sys_ack)) 
                                             | ((IData)(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc) 
                                                & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                                    >> 2U) 
                                                   & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    vlSelf->main__DOT__swic__DOT__cpu_stall = ((IData)(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc) 
                                               & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                                  | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                                     >> 2U)));
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid) 
           & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((6U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | (IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest) 
              >> 1U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((5U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0) 
              << 1U));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest) 
              >> 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0) 
              << 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((6U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | (IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 1U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((5U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0) 
              << 1U));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0) 
              << 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid) 
           & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((6U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | (IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest) 
              >> 1U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((5U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0) 
              << 1U));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest) 
              >> 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0) 
              << 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    main__DOT__u_fan__DOT__u_i2ccpu__DOT____VdfgTmp_hfc6f1b73__0 
        = (1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid)) 
                 | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready)));
    main__DOT__i2ci__DOT____VdfgTmp_hfc6f1b73__0 = 
        (1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid)) 
               | (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags 
        = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase) 
            << 0xdU) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag) 
                         << 0xbU) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag) 
                                      << 0xaU) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap) 
                                                   << 9U) 
                                                  | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en) 
                                                         << 7U) 
                                                        | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep) 
                                                            << 4U) 
                                                           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags 
        = (0x20U | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
                     << 0xdU) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag) 
                                  << 0xbU) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak) 
                                                        << 7U) 
                                                       | ((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                                                            & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step)) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep) 
                                                              << 4U) 
                                                             | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0))))))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond 
        = ((((8U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F)) 
             | (7U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F) 
                      >> 4U))) & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                                   ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0)
                                   : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))) 
           == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F)));
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall 
        = ((IData)(vlSelf->main__DOT__wbu_cyc) & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
           & (0x7800000U == (0x7800000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
           & (0x7400000U == (0x7c00000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    if ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
         >> 0x1fU)) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0 
            = (0xfU & ((IData)((0x4000000U == (0x6800000U 
                                               & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))
                        ? 0xdU : (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                  >> 0x13U)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op 
            = (0x1fU & ((0x4000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)
                         ? ((0x2000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)
                             ? ((0x1000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)
                                 ? 0xdU : 0x18U) : 
                            ((0x1000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)
                              ? 0x13U : 0x12U)) : (
                                                   (0x2000000U 
                                                    & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)
                                                    ? 
                                                   ((0x1000000U 
                                                     & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)
                                                     ? 0x10U
                                                     : 2U)
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)
                                                     ? 1U
                                                     : 0U))));
    } else {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0 
            = (0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                       >> 0xeU));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op 
            = (0x1fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                        >> 0x16U));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU 
        = ((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
               >> 4U)) & (7U != (7U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                       >> 1U))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0 
        = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
            | (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
               >> 0x1fU)) | (0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                              >> 1U))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc 
        = ((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                             >> 1U))) ? 0U : ((0xdU 
                                               == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))
                                               ? 1U
                                               : ((0x40000U 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)
                                                   ? 3U
                                                   : 2U)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I 
        = (0x7fffffU & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                         >> 0x1fU) ? ((0x7fff00U & 
                                       ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI) 
                                                       >> 7U)))) 
                                        << 8U)) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI))
                         : ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
                             ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
                                 ? ((0x7fc000U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                                 >> 0xdU)))) 
                                                  << 0xeU)) 
                                    | (0x3fffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword))
                                 : ((0x7c0000U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                                 >> 0x11U)))) 
                                                  << 0x12U)) 
                                    | (0x3ffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))
                             : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
                                 ? ((0x7fe000U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                                 >> 0xcU)))) 
                                                  << 0xdU)) 
                                    | (0x1fffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword))
                                 : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem 
        = (IData)(((0x10U == (0x18U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))) 
                   & (0U != (3U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                   >> 1U)))));
    main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_ha0d5d2cf__0 
        = ((~ (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
               >> 0x1fU)) & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                             & (0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr 
        = ((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
            << 6U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr));
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr 
            = (0x7fffffffU & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr 
                              + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size)));
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last)) 
           & ((~ ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full) 
                  | ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall) 
                     & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb)))) 
              & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy)));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
        = ((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
            << 6U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr));
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall)))) {
        if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size))) {
            if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size))) {
                if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc) {
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
                        = ((IData)(1U) + vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr);
                }
            } else {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
                    = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc)
                        ? ((IData)(2U) + vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr)
                        : (0xfffffffeU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr));
            }
        } else {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
                = ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size))
                    ? ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc)
                        ? ((IData)(4U) + vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr)
                        : (0xfffffffcU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr))
                    : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc)
                        ? ((IData)(0x40U) + vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr)
                        : (0xffffffc0U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr)));
        }
    }
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall 
        = ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
           & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
    if (vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U];
    } else {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x12U];
    }
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr 
        = ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full)) 
           & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty 
        = ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr)) 
           & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
    main__DOT__swic__DOT____VdfgTmp_h9a48e2a3__0 = 
        ((~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stall)) 
         & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src 
        = ((0x80000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src) 
           | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src);
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src 
        = vlSelf->main__DOT__swic__DOT__sys_data;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst 
        = ((0x80000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst) 
           | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst);
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst 
        = vlSelf->main__DOT__swic__DOT__sys_data;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len 
        = ((0x80000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len) 
           | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length);
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len 
        = vlSelf->main__DOT__swic__DOT__sys_data;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen 
        = ((0xfffffc00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen) 
           | (0x3ffU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen)));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen 
        = vlSelf->main__DOT__swic__DOT__sys_data;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen 
        = (0x3ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen);
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen 
        = ((0xfffffbffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen) 
           | ((0U == (0x3ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen)) 
              << 0xaU));
    vlSelf->main__DOT__swic__DOT__sel_bus_watchdog 
        = ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
           & (2U == (IData)(vlSelf->main__DOT__swic__DOT__sys_addr)));
    vlSelf->main__DOT__swic__DOT__sel_dmac = ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                              & (0x10U 
                                                 == 
                                                 (0xf0U 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT__sel_watchdog = ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                                  & (1U 
                                                     == (IData)(vlSelf->main__DOT__swic__DOT__sys_addr)));
    vlSelf->main__DOT__swic__DOT__sel_apic = ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                              & (3U 
                                                 == (IData)(vlSelf->main__DOT__swic__DOT__sys_addr)));
    vlSelf->main__DOT__swic__DOT__sel_pic = ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                             & (0U 
                                                == (IData)(vlSelf->main__DOT__swic__DOT__sys_addr)));
    vlSelf->main__DOT__swic__DOT__sel_timer = ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                               & (4U 
                                                  == 
                                                  (0xfcU 
                                                   & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT__actr_ack = ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                              & (8U 
                                                 == 
                                                 (0xf8U 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result 
        = (0x1ffffffffULL & ((0U != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                     >> 5U)) ? (- (QData)((IData)(
                                                                  (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                                   >> 0x1fU))))
                              : VL_SHIFTRS_QQI(33,33,5, 
                                               ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                << 1U), 
                                               (0x1fU 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))));
    if ((0U == (2U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                      >> 1U)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
    } else if ((2U == (3U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                             >> 1U)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift 
            = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
               << 0x10U);
    } else if ((3U == (3U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                             >> 1U)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift 
            = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
               << 0x18U);
    }
    if ((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 0x18U))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0U] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[1U] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[2U] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[3U] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[4U] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[5U] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[6U] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[7U] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[8U] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[9U] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xaU] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xbU] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xcU] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xdU] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xeU] = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xfU] = 0U;
        VL_SHIFTR_WWI(512,512,32, __Vtemp_hbc743227__0, vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift, 
                      (0x18U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                << 3U)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0U] 
            = __Vtemp_hbc743227__0[0U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[1U] 
            = __Vtemp_hbc743227__0[1U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[2U] 
            = __Vtemp_hbc743227__0[2U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[3U] 
            = __Vtemp_hbc743227__0[3U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[4U] 
            = __Vtemp_hbc743227__0[4U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[5U] 
            = __Vtemp_hbc743227__0[5U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[6U] 
            = __Vtemp_hbc743227__0[6U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[7U] 
            = __Vtemp_hbc743227__0[7U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[8U] 
            = __Vtemp_hbc743227__0[8U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[9U] 
            = __Vtemp_hbc743227__0[9U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xaU] 
            = __Vtemp_hbc743227__0[0xaU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xbU] 
            = __Vtemp_hbc743227__0[0xbU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xcU] 
            = __Vtemp_hbc743227__0[0xcU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xdU] 
            = __Vtemp_hbc743227__0[0xdU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xeU] 
            = __Vtemp_hbc743227__0[0xeU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xfU] 
            = __Vtemp_hbc743227__0[0xfU];
    } else {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0U] 
            = Vmain__ConstPool__CONST_hbd99daea_0[0U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[1U] 
            = Vmain__ConstPool__CONST_hbd99daea_0[1U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[2U] 
            = Vmain__ConstPool__CONST_hbd99daea_0[2U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[3U] 
            = Vmain__ConstPool__CONST_hbd99daea_0[3U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[4U] 
            = Vmain__ConstPool__CONST_hbd99daea_0[4U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[5U] 
            = Vmain__ConstPool__CONST_hbd99daea_0[5U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[6U] 
            = Vmain__ConstPool__CONST_hbd99daea_0[6U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[7U] 
            = Vmain__ConstPool__CONST_hbd99daea_0[7U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[8U] 
            = Vmain__ConstPool__CONST_hbd99daea_0[8U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[9U] 
            = Vmain__ConstPool__CONST_hbd99daea_0[9U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xaU] 
            = Vmain__ConstPool__CONST_hbd99daea_0[0xaU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xbU] 
            = Vmain__ConstPool__CONST_hbd99daea_0[0xbU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xcU] 
            = Vmain__ConstPool__CONST_hbd99daea_0[0xcU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xdU] 
            = Vmain__ConstPool__CONST_hbd99daea_0[0xdU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xeU] 
            = Vmain__ConstPool__CONST_hbd99daea_0[0xeU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift[0xfU] 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift;
        VL_SHIFTR_WWI(512,512,32, __Vtemp_h6409050d__0, vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift, 
                      (0x1f8U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                 << 3U)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0U] 
            = __Vtemp_h6409050d__0[0U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[1U] 
            = __Vtemp_h6409050d__0[1U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[2U] 
            = __Vtemp_h6409050d__0[2U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[3U] 
            = __Vtemp_h6409050d__0[3U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[4U] 
            = __Vtemp_h6409050d__0[4U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[5U] 
            = __Vtemp_h6409050d__0[5U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[6U] 
            = __Vtemp_h6409050d__0[6U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[7U] 
            = __Vtemp_h6409050d__0[7U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[8U] 
            = __Vtemp_h6409050d__0[8U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[9U] 
            = __Vtemp_h6409050d__0[9U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xaU] 
            = __Vtemp_h6409050d__0[0xaU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xbU] 
            = __Vtemp_h6409050d__0[0xbU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xcU] 
            = __Vtemp_h6409050d__0[0xcU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xdU] 
            = __Vtemp_h6409050d__0[0xdU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xeU] 
            = __Vtemp_h6409050d__0[0xeU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data[0xfU] 
            = __Vtemp_h6409050d__0[0xfU];
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable 
        = ((0xffU != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                      >> 0x18U)) & ((~ (IData)((0U 
                                                != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock)))) 
                                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address)));
    if (main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_h832f938f__0) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result = 0ULL;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result = 0ULL;
    } else if ((0x20U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result 
            = (0x1ffffffffULL & (QData)((IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                 >> 0x1fU))));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result 
            = (0x1ffffffffULL & ((QData)((IData)((1U 
                                                  & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))) 
                                 << 0x20U));
    } else {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result 
            = (0x1ffffffffULL & (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                  << 1U) >> (0x1fU 
                                             & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result 
            = (0x1ffffffffULL & ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                 << (0x1fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)));
    }
    vlSelf->main__DOT__swic__DOT__cpu_pf_stall = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid)) 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce)) 
                 | ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid)) 
                    | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i) 
                       | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step) 
                           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped)) 
                          | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag) 
                             | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag) 
                                | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt) 
                                    & ((~ (IData)((0U 
                                                   != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock)))) 
                                       & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase)))) 
                                   | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy) 
                                      | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy) 
                                         | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break) 
                                            | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall) 
                                               | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal) 
                                                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy)) 
                                                  | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div) 
                                                      & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy)) 
                                                     | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal) 
                                                        | (IData)(vlSelf->main__DOT__swic__DOT__cpu_break))))))))))))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__cpu_err));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err 
        = ((IData)(vlSelf->main__DOT__swic__DOT__cpu_err) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
    VL_SHIFTL_WWI(512,512,32, __Vtemp_h8c81192e__0, vlSelf->main__DOT__swic__DOT__cpu_idata, 0x1e0U);
    VL_SHIFTL_WWI(512,512,32, __Vtemp_h5dad54bf__0, __Vtemp_h8c81192e__0, 
                  (0x18U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT____VdfgTmp_h05977c6b__0) 
                            << 3U)));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid) {
        __Vtemp_h01ff8f7b__0[0U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0U];
        __Vtemp_h01ff8f7b__0[1U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[1U];
        __Vtemp_h01ff8f7b__0[2U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[2U];
        __Vtemp_h01ff8f7b__0[3U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[3U];
        __Vtemp_h01ff8f7b__0[4U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[4U];
        __Vtemp_h01ff8f7b__0[5U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[5U];
        __Vtemp_h01ff8f7b__0[6U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[6U];
        __Vtemp_h01ff8f7b__0[7U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[7U];
        __Vtemp_h01ff8f7b__0[8U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[8U];
        __Vtemp_h01ff8f7b__0[9U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[9U];
        __Vtemp_h01ff8f7b__0[0xaU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xaU];
        __Vtemp_h01ff8f7b__0[0xbU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xbU];
        __Vtemp_h01ff8f7b__0[0xcU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xcU];
        __Vtemp_h01ff8f7b__0[0xdU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xdU];
        __Vtemp_h01ff8f7b__0[0xeU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xeU];
        __Vtemp_h01ff8f7b__0[0xfU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xfU];
    } else if ((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state))) {
        __Vtemp_h01ff8f7b__0[0U] = vlSelf->main__DOT__swic__DOT__cpu_idata[0U];
        __Vtemp_h01ff8f7b__0[1U] = vlSelf->main__DOT__swic__DOT__cpu_idata[1U];
        __Vtemp_h01ff8f7b__0[2U] = vlSelf->main__DOT__swic__DOT__cpu_idata[2U];
        __Vtemp_h01ff8f7b__0[3U] = vlSelf->main__DOT__swic__DOT__cpu_idata[3U];
        __Vtemp_h01ff8f7b__0[4U] = vlSelf->main__DOT__swic__DOT__cpu_idata[4U];
        __Vtemp_h01ff8f7b__0[5U] = vlSelf->main__DOT__swic__DOT__cpu_idata[5U];
        __Vtemp_h01ff8f7b__0[6U] = vlSelf->main__DOT__swic__DOT__cpu_idata[6U];
        __Vtemp_h01ff8f7b__0[7U] = vlSelf->main__DOT__swic__DOT__cpu_idata[7U];
        __Vtemp_h01ff8f7b__0[8U] = vlSelf->main__DOT__swic__DOT__cpu_idata[8U];
        __Vtemp_h01ff8f7b__0[9U] = vlSelf->main__DOT__swic__DOT__cpu_idata[9U];
        __Vtemp_h01ff8f7b__0[0xaU] = vlSelf->main__DOT__swic__DOT__cpu_idata[0xaU];
        __Vtemp_h01ff8f7b__0[0xbU] = vlSelf->main__DOT__swic__DOT__cpu_idata[0xbU];
        __Vtemp_h01ff8f7b__0[0xcU] = vlSelf->main__DOT__swic__DOT__cpu_idata[0xcU];
        __Vtemp_h01ff8f7b__0[0xdU] = vlSelf->main__DOT__swic__DOT__cpu_idata[0xdU];
        __Vtemp_h01ff8f7b__0[0xeU] = vlSelf->main__DOT__swic__DOT__cpu_idata[0xeU];
        __Vtemp_h01ff8f7b__0[0xfU] = vlSelf->main__DOT__swic__DOT__cpu_idata[0xfU];
    } else {
        __Vtemp_h01ff8f7b__0[0U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0U];
        __Vtemp_h01ff8f7b__0[1U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[1U];
        __Vtemp_h01ff8f7b__0[2U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[2U];
        __Vtemp_h01ff8f7b__0[3U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[3U];
        __Vtemp_h01ff8f7b__0[4U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[4U];
        __Vtemp_h01ff8f7b__0[5U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[5U];
        __Vtemp_h01ff8f7b__0[6U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[6U];
        __Vtemp_h01ff8f7b__0[7U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[7U];
        __Vtemp_h01ff8f7b__0[8U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[8U];
        __Vtemp_h01ff8f7b__0[9U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[9U];
        __Vtemp_h01ff8f7b__0[0xaU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xaU];
        __Vtemp_h01ff8f7b__0[0xbU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xbU];
        __Vtemp_h01ff8f7b__0[0xcU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xcU];
        __Vtemp_h01ff8f7b__0[0xdU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xdU];
        __Vtemp_h01ff8f7b__0[0xeU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xeU];
        __Vtemp_h01ff8f7b__0[0xfU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xfU];
    }
    VL_SHIFTL_WWI(512,512,32, __Vtemp_hf1acda43__0, __Vtemp_h01ff8f7b__0, 
                  (0x1f8U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT____VdfgTmp_h05977c6b__0) 
                             << 3U)));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0U] 
            = __Vtemp_h5dad54bf__0[0U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[1U] 
            = __Vtemp_h5dad54bf__0[1U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[2U] 
            = __Vtemp_h5dad54bf__0[2U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[3U] 
            = __Vtemp_h5dad54bf__0[3U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[4U] 
            = __Vtemp_h5dad54bf__0[4U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[5U] 
            = __Vtemp_h5dad54bf__0[5U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[6U] 
            = __Vtemp_h5dad54bf__0[6U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[7U] 
            = __Vtemp_h5dad54bf__0[7U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[8U] 
            = __Vtemp_h5dad54bf__0[8U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[9U] 
            = __Vtemp_h5dad54bf__0[9U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xaU] 
            = __Vtemp_h5dad54bf__0[0xaU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xbU] 
            = __Vtemp_h5dad54bf__0[0xbU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xcU] 
            = __Vtemp_h5dad54bf__0[0xcU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xdU] 
            = __Vtemp_h5dad54bf__0[0xdU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xeU] 
            = __Vtemp_h5dad54bf__0[0xeU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xfU] 
            = __Vtemp_h5dad54bf__0[0xfU];
    } else {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0U] 
            = __Vtemp_hf1acda43__0[0U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[1U] 
            = __Vtemp_hf1acda43__0[1U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[2U] 
            = __Vtemp_hf1acda43__0[2U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[3U] 
            = __Vtemp_hf1acda43__0[3U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[4U] 
            = __Vtemp_hf1acda43__0[4U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[5U] 
            = __Vtemp_hf1acda43__0[5U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[6U] 
            = __Vtemp_hf1acda43__0[6U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[7U] 
            = __Vtemp_hf1acda43__0[7U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[8U] 
            = __Vtemp_hf1acda43__0[8U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[9U] 
            = __Vtemp_hf1acda43__0[9U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xaU] 
            = __Vtemp_hf1acda43__0[0xaU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xbU] 
            = __Vtemp_hf1acda43__0[0xbU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xcU] 
            = __Vtemp_hf1acda43__0[0xcU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xdU] 
            = __Vtemp_hf1acda43__0[0xdU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xeU] 
            = __Vtemp_hf1acda43__0[0xeU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xfU] 
            = __Vtemp_hf1acda43__0[0xfU];
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__cpu_ack));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack 
        = ((IData)(vlSelf->main__DOT__swic__DOT__cpu_ack) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
    vlSelf->main__DOT__zip_cpu_int = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cpu_stall)) 
                                      & (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall 
        = ((IData)(vlSelf->main__DOT__swic__DOT__cpu_stall) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)) 
                 | (IData)(vlSelf->main__DOT__swic__DOT__cpu_stall)));
    vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2 
        = (1U & ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                 | ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                    | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                       | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                          >> 2U)))));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc 
        = (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc) 
            << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_cyc) 
                       << 2U) | (((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
                                  << 1U) | (IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc))));
    vlSelf->main__DOT__wbwide_xbar__DOT__m_stb = ((
                                                   ((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull) 
                                                         >> 3U)) 
                                                       & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid))) 
                                                   << 3U) 
                                                  | ((((IData)(vlSelf->main__DOT__wbwide_zip_cyc) 
                                                       & ((~ 
                                                           ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull) 
                                                            >> 2U)) 
                                                          & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid))) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
                                                          & ((~ 
                                                              ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull) 
                                                               >> 1U)) 
                                                             & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc) 
                                                           & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull)) 
                                                              & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))))));
    vlSelf->main__DOT__wbwide_xbar__DOT__request[2U] 
        = (((IData)(vlSelf->main__DOT__wbwide_zip_cyc) 
            & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid))
            ? (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded)
            : 0U);
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready 
        = ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid)) 
           & (IData)(main__DOT__u_fan__DOT__u_i2ccpu__DOT____VdfgTmp_hfc6f1b73__0));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready 
        = ((~ ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
               | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))) 
           & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid)) 
              & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc)) 
                 & (IData)(main__DOT__u_fan__DOT__u_i2ccpu__DOT____VdfgTmp_hfc6f1b73__0))));
    if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid 
            = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override) 
               & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid = 0U;
        }
    } else {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid 
            = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
               & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
        if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid) 
             & (0x900U == (0xf00U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid = 0U;
        }
    }
    vlSelf->main__DOT__i2ci__DOT__ovw_ready = ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__half_valid)) 
                                               & (IData)(main__DOT__i2ci__DOT____VdfgTmp_hfc6f1b73__0));
    vlSelf->main__DOT__i2ci__DOT__pf_ready = ((~ ((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                                                  | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))) 
                                              & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__half_valid)) 
                                                 & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc)) 
                                                    & (IData)(main__DOT__i2ci__DOT____VdfgTmp_hfc6f1b73__0))));
    if (vlSelf->main__DOT__i2ci__DOT__r_halted) {
        vlSelf->main__DOT__i2ci__DOT__next_valid = 
            ((IData)(vlSelf->main__DOT__i2ci__DOT__bus_override) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
        if (vlSelf->main__DOT__i2ci__DOT__bus_manual) {
            vlSelf->main__DOT__i2ci__DOT__next_valid = 0U;
        }
    } else {
        vlSelf->main__DOT__i2ci__DOT__next_valid = 
            ((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready));
        if (((IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid) 
             & (0x900U == (0xf00U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))))) {
            vlSelf->main__DOT__i2ci__DOT__next_valid = 0U;
        }
    }
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall) 
           & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB 
        = ((0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
           | ((IData)((((0x40000U == (0x80040000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)) 
                        & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special))) 
                       & (0xcU != (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                           >> 1U))))) 
              | ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                  >> 0x1fU) & (((0xcU != (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                  >> 1U))) 
                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                   >> 0x17U)) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem)))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB 
        = ((0x10U & (((IData)(main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_ha0d5d2cf__0)
                       ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                          >> 0xdU) : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                     << 4U)) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA 
        = ((0x10U & (((IData)(main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_ha0d5d2cf__0)
                       ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                          >> 0x12U) : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                     << 4U)) | (0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                        >> 0x1bU)));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid)) 
                 | ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next))));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[1U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[1U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[2U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[2U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[3U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[3U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[4U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[4U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[5U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[5U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[6U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[6U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[7U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[7U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[8U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[8U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[9U] 
        = Vmain__ConstPool__CONST_h93e1b771_0[9U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xaU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xbU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xcU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xdU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xeU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xfU] 
        = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[1U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[2U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[3U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[4U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[5U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[6U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[7U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[8U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[9U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xaU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xbU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xcU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xdU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xeU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xfU];
    if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 1U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 2U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 3U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 4U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 5U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 6U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 7U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 8U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 9U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0xaU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0xbU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0xcU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0xdU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0xeU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0xfU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x10U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x11U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x12U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x13U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x14U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x15U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x16U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x17U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x18U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x19U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x1aU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x1bU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x1cU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x1dU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x1eU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x1fU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x20U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x21U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x22U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x23U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x24U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x25U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x26U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x27U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x28U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x29U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x2aU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x2bU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x2cU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x2dU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x2eU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x2fU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x30U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x31U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x32U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x33U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x34U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x35U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x36U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x37U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x38U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x39U))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x3aU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x3bU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x3cU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU] 
            = (0xffffff00U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x3dU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU] 
            = (0xffff00ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x3eU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU] 
            = (0xff00ffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU]);
    }
    if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                          >> 0x3fU))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU] 
            = (0xffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU]);
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[0U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[1U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] = 0U;
    if ((0U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x80000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((1U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x40000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((2U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x20000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((3U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x10000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((4U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x8000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((5U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x4000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((6U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x2000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((7U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x1000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((8U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x800000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((9U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x400000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0xaU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x200000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0xbU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x100000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0xcU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x80000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0xdU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x40000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0xeU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x20000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0xfU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x10000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x10U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x8000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x11U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x4000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x12U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x2000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x13U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x1000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x14U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x800U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x15U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x400U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x16U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x200U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x17U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x100U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x18U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x80U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x19U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x40U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x1aU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x20U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x1bU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (0x10U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x1cU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (8U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x1dU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (4U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x1eU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (2U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x1fU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U] 
            = (1U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[3U]);
    }
    if ((0x20U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x80000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x21U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x40000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x22U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x20000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x23U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x10000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x24U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x8000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x25U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x4000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x26U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x2000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x27U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x1000000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x28U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x800000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x29U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x400000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x2aU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x200000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x2bU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x100000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x2cU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x80000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x2dU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x40000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x2eU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x20000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x2fU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x10000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x30U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x8000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x31U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x4000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x32U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x2000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x33U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x1000U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x34U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x800U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x35U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x400U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x36U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x200U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x37U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x100U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x38U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x80U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x39U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x40U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x3aU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x20U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x3bU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (0x10U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x3cU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (8U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x3dU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (4U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x3eU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (2U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    if ((0x3fU < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U] 
            = (1U | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel[2U]);
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[0U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[1U] = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[2U] 
        = (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel);
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[3U] 
        = (IData)((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel 
                   >> 0x20U));
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last)))) {
        __Vtemp_h448dc795__0[0U] = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h448dc795__0[1U] = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h448dc795__0[2U] = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h448dc795__0[3U] = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h448dc795__0[4U] = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h448dc795__0[5U] = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h448dc795__0[6U] = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h448dc795__0[7U] = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h448dc795__0[8U] = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h448dc795__0[9U] = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h448dc795__0[0xaU] = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h448dc795__0[0xbU] = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h448dc795__0[0xcU] = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h448dc795__0[0xdU] = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h448dc795__0[0xeU] = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h448dc795__0[0xfU] = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
        __Vtemp_h448dc795__0[0x10U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U];
        __Vtemp_h448dc795__0[0x11U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U];
        __Vtemp_h448dc795__0[0x12U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U];
        __Vtemp_h448dc795__0[0x13U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U];
        __Vtemp_h448dc795__0[0x14U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U];
        __Vtemp_h448dc795__0[0x15U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U];
        __Vtemp_h448dc795__0[0x16U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U];
        __Vtemp_h448dc795__0[0x17U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U];
        __Vtemp_h448dc795__0[0x18U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U];
        __Vtemp_h448dc795__0[0x19U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U];
        __Vtemp_h448dc795__0[0x1aU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU];
        __Vtemp_h448dc795__0[0x1bU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU];
        __Vtemp_h448dc795__0[0x1cU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU];
        __Vtemp_h448dc795__0[0x1dU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU];
        __Vtemp_h448dc795__0[0x1eU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU];
        __Vtemp_h448dc795__0[0x1fU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU];
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_hb435d831__0, __Vtemp_h448dc795__0, 
                      (0x1f8U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
                                 << 3U)));
        __Vtemp_h63caa0d2__0[1U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[1U] 
                                    | __Vtemp_hb435d831__0[1U]);
        __Vtemp_h63caa0d2__0[2U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[2U] 
                                    | __Vtemp_hb435d831__0[2U]);
        __Vtemp_h63caa0d2__0[3U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[3U] 
                                    | __Vtemp_hb435d831__0[3U]);
        __Vtemp_h63caa0d2__0[4U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[4U] 
                                    | __Vtemp_hb435d831__0[4U]);
        __Vtemp_h63caa0d2__0[5U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[5U] 
                                    | __Vtemp_hb435d831__0[5U]);
        __Vtemp_h63caa0d2__0[6U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[6U] 
                                    | __Vtemp_hb435d831__0[6U]);
        __Vtemp_h63caa0d2__0[7U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[7U] 
                                    | __Vtemp_hb435d831__0[7U]);
        __Vtemp_h63caa0d2__0[8U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[8U] 
                                    | __Vtemp_hb435d831__0[8U]);
        __Vtemp_h63caa0d2__0[9U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[9U] 
                                    | __Vtemp_hb435d831__0[9U]);
        __Vtemp_h63caa0d2__0[0xaU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xaU] 
                                      | __Vtemp_hb435d831__0[0xaU]);
        __Vtemp_h63caa0d2__0[0xbU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xbU] 
                                      | __Vtemp_hb435d831__0[0xbU]);
        __Vtemp_h63caa0d2__0[0xcU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xcU] 
                                      | __Vtemp_hb435d831__0[0xcU]);
        __Vtemp_h63caa0d2__0[0xdU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xdU] 
                                      | __Vtemp_hb435d831__0[0xdU]);
        __Vtemp_h63caa0d2__0[0xeU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xeU] 
                                      | __Vtemp_hb435d831__0[0xeU]);
        __Vtemp_h63caa0d2__0[0xfU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xfU] 
                                      | __Vtemp_hb435d831__0[0xfU]);
        __Vtemp_h63caa0d2__0[0x10U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U] 
                                       | __Vtemp_hb435d831__0[0x10U]);
        __Vtemp_h63caa0d2__0[0x11U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U] 
                                       | __Vtemp_hb435d831__0[0x11U]);
        __Vtemp_h63caa0d2__0[0x12U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U] 
                                       | __Vtemp_hb435d831__0[0x12U]);
        __Vtemp_h63caa0d2__0[0x13U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U] 
                                       | __Vtemp_hb435d831__0[0x13U]);
        __Vtemp_h63caa0d2__0[0x14U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U] 
                                       | __Vtemp_hb435d831__0[0x14U]);
        __Vtemp_h63caa0d2__0[0x15U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U] 
                                       | __Vtemp_hb435d831__0[0x15U]);
        __Vtemp_h63caa0d2__0[0x16U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U] 
                                       | __Vtemp_hb435d831__0[0x16U]);
        __Vtemp_h63caa0d2__0[0x17U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U] 
                                       | __Vtemp_hb435d831__0[0x17U]);
        __Vtemp_h63caa0d2__0[0x18U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U] 
                                       | __Vtemp_hb435d831__0[0x18U]);
        __Vtemp_h63caa0d2__0[0x19U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U] 
                                       | __Vtemp_hb435d831__0[0x19U]);
        __Vtemp_h63caa0d2__0[0x1aU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU] 
                                       | __Vtemp_hb435d831__0[0x1aU]);
        __Vtemp_h63caa0d2__0[0x1bU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU] 
                                       | __Vtemp_hb435d831__0[0x1bU]);
        __Vtemp_h63caa0d2__0[0x1cU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU] 
                                       | __Vtemp_hb435d831__0[0x1cU]);
        __Vtemp_h63caa0d2__0[0x1dU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU] 
                                       | __Vtemp_hb435d831__0[0x1dU]);
        __Vtemp_h63caa0d2__0[0x1eU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU] 
                                       | __Vtemp_hb435d831__0[0x1eU]);
        __Vtemp_h63caa0d2__0[0x1fU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU] 
                                       | __Vtemp_hb435d831__0[0x1fU]);
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0U] 
            = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0U] 
               | __Vtemp_hb435d831__0[0U]);
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[1U] 
            = __Vtemp_h63caa0d2__0[1U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[2U] 
            = __Vtemp_h63caa0d2__0[2U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[3U] 
            = __Vtemp_h63caa0d2__0[3U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[4U] 
            = __Vtemp_h63caa0d2__0[4U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[5U] 
            = __Vtemp_h63caa0d2__0[5U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[6U] 
            = __Vtemp_h63caa0d2__0[6U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[7U] 
            = __Vtemp_h63caa0d2__0[7U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[8U] 
            = __Vtemp_h63caa0d2__0[8U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[9U] 
            = __Vtemp_h63caa0d2__0[9U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xaU] 
            = __Vtemp_h63caa0d2__0[0xaU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xbU] 
            = __Vtemp_h63caa0d2__0[0xbU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xcU] 
            = __Vtemp_h63caa0d2__0[0xcU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xdU] 
            = __Vtemp_h63caa0d2__0[0xdU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xeU] 
            = __Vtemp_h63caa0d2__0[0xeU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xfU] 
            = __Vtemp_h63caa0d2__0[0xfU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U] 
            = __Vtemp_h63caa0d2__0[0x10U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U] 
            = __Vtemp_h63caa0d2__0[0x11U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U] 
            = __Vtemp_h63caa0d2__0[0x12U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U] 
            = __Vtemp_h63caa0d2__0[0x13U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U] 
            = __Vtemp_h63caa0d2__0[0x14U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U] 
            = __Vtemp_h63caa0d2__0[0x15U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U] 
            = __Vtemp_h63caa0d2__0[0x16U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U] 
            = __Vtemp_h63caa0d2__0[0x17U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U] 
            = __Vtemp_h63caa0d2__0[0x18U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U] 
            = __Vtemp_h63caa0d2__0[0x19U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU] 
            = __Vtemp_h63caa0d2__0[0x1aU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU] 
            = __Vtemp_h63caa0d2__0[0x1bU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU] 
            = __Vtemp_h63caa0d2__0[0x1cU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU] 
            = __Vtemp_h63caa0d2__0[0x1dU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU] 
            = __Vtemp_h63caa0d2__0[0x1eU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU] 
            = __Vtemp_h63caa0d2__0[0x1fU];
        VL_SHIFTR_WWI(128,128,6, __Vtemp_h0df24fd8__0, vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel, 
                      (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr));
        __Vtemp_h36bd3276__0[1U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[1U] 
                                    | __Vtemp_h0df24fd8__0[1U]);
        __Vtemp_h36bd3276__0[2U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[2U] 
                                    | __Vtemp_h0df24fd8__0[2U]);
        __Vtemp_h36bd3276__0[3U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[3U] 
                                    | __Vtemp_h0df24fd8__0[3U]);
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[0U] 
            = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[0U] 
               | __Vtemp_h0df24fd8__0[0U]);
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[1U] 
            = __Vtemp_h36bd3276__0[1U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[2U] 
            = __Vtemp_h36bd3276__0[2U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[3U] 
            = __Vtemp_h36bd3276__0[3U];
    }
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall) 
           & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1f80000U & (0x80000U ^ (0x1ffffffU 
                                            & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest 
        = ((6U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)) 
           | (IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1f80000U & (0x100000U ^ (0x1ffffffU 
                                             & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest 
        = ((5U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0) 
              << 1U));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 
        = (0U == (0x1000000U & (0x1000000U ^ (0x1ffffffU 
                                              & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U]))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest 
        = ((3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0) 
              << 2U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x7feU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | (IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 1U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x7fdU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0) 
              << 1U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 2U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x7fbU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0) 
              << 2U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 3U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x7f7U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0) 
              << 3U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 4U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x7efU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0) 
              << 4U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 5U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x7dfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0) 
              << 5U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 6U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x7bfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0) 
              << 6U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 7U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x77fU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0) 
              << 7U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 8U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x6ffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0) 
              << 8U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 9U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x5ffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0) 
              << 9U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 0xaU));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x3ffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0) 
              << 0xaU));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd 
        = ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty)) 
           & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    vlSelf->main__DOT__wbwide_wbdown_stall = (1U & 
                                              ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first) 
                                               | (((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb) 
                                                   & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
                                                      | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full))) 
                                                  | ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last)) 
                                                     | ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty)) 
                                                        & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null))))));
    vlSelf->main__DOT__swic__DOT__dbg_cpu_read = ((IData)(main__DOT__swic__DOT____VdfgTmp_h9a48e2a3__0) 
                                                  & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_we)) 
                                                     & (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr)))));
    vlSelf->main__DOT__swic__DOT__dbg_cpu_write = ((IData)(main__DOT__swic__DOT____VdfgTmp_h9a48e2a3__0) 
                                                   & ((IData)(vlSelf->main__DOT__swic__DOT__dbg_we) 
                                                      & (IData)(
                                                                ((0x20U 
                                                                  == 
                                                                  (0x60U 
                                                                   & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))) 
                                                                 & (0xfU 
                                                                    == (IData)(vlSelf->main__DOT__swic__DOT__dbg_sel))))));
    vlSelf->main__DOT__swic__DOT__dmac_stb = ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                              & (IData)(vlSelf->main__DOT__swic__DOT__sel_dmac));
    vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb 
        = ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
           & (IData)(vlSelf->main__DOT__swic__DOT__sel_watchdog));
    vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write 
        = (((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
            & (IData)(vlSelf->main__DOT__swic__DOT__sel_apic)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__sys_we));
    vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write 
        = (((IData)(vlSelf->main__DOT__swic__DOT__sys_cyc) 
            & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
               & (IData)(vlSelf->main__DOT__swic__DOT__sel_pic))) 
           & (IData)(vlSelf->main__DOT__swic__DOT__sys_we));
    main__DOT__swic__DOT____VdfgTmp_hcb06aa5b__0 = 
        ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
         & (IData)(vlSelf->main__DOT__swic__DOT__sel_timer));
    vlSelf->main__DOT__swic__DOT__w_ack_idx = 0U;
    if (vlSelf->main__DOT__swic__DOT__sel_watchdog) {
        vlSelf->main__DOT__swic__DOT__w_ack_idx = (1U 
                                                   | (IData)(vlSelf->main__DOT__swic__DOT__w_ack_idx));
    }
    if (vlSelf->main__DOT__swic__DOT__sel_bus_watchdog) {
        vlSelf->main__DOT__swic__DOT__w_ack_idx = (2U 
                                                   | (IData)(vlSelf->main__DOT__swic__DOT__w_ack_idx));
    }
    if (vlSelf->main__DOT__swic__DOT__sel_apic) {
        vlSelf->main__DOT__swic__DOT__w_ack_idx = (3U 
                                                   | (IData)(vlSelf->main__DOT__swic__DOT__w_ack_idx));
    }
    if (vlSelf->main__DOT__swic__DOT__sel_timer) {
        vlSelf->main__DOT__swic__DOT__w_ack_idx = (4U 
                                                   | (IData)(vlSelf->main__DOT__swic__DOT__w_ack_idx));
    }
    if (vlSelf->main__DOT__swic__DOT__actr_ack) {
        vlSelf->main__DOT__swic__DOT__w_ack_idx = (5U 
                                                   | (IData)(vlSelf->main__DOT__swic__DOT__w_ack_idx));
    }
    if (vlSelf->main__DOT__swic__DOT__sel_dmac) {
        vlSelf->main__DOT__swic__DOT__w_ack_idx = (6U 
                                                   | (IData)(vlSelf->main__DOT__swic__DOT__w_ack_idx));
    }
    if (vlSelf->main__DOT__swic__DOT__sel_pic) {
        vlSelf->main__DOT__swic__DOT__w_ack_idx = 7U;
    }
    main__DOT__swic__DOT____VdfgTmp_hcb574c13__0 = 
        ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
         & (IData)(vlSelf->main__DOT__swic__DOT__actr_ack));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall)) 
                 & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem)) 
                    & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy)) 
                       & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy)) 
                          | (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR) 
                                & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R) 
                                   == (0xeU | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                                               << 4U))))))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled 
        = (1U & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) 
                  & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we)) 
                     | ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb)) 
                        | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall)))) 
                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending) 
                    | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending) 
                       >> 4U))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
              | (IData)(vlSelf->main__DOT__wbwide_zip_stb)));
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel 
        = (0U != (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [0U] & vlSelf->main__DOT__wbwide_xbar__DOT__grant
                  [0U]));
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel 
        = (0U != (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [1U] & vlSelf->main__DOT__wbwide_xbar__DOT__grant
                  [1U]));
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel 
        = (0U != (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [2U] & vlSelf->main__DOT__wbwide_xbar__DOT__grant
                  [2U]));
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel 
        = (0U != (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [3U] & vlSelf->main__DOT__wbwide_xbar__DOT__grant
                  [3U]));
    vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant 
        = (1U & (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                    >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U])));
    if ((1U & (((~ vlSelf->main__DOT__wbwide_xbar__DOT__request
                 [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                 [0U]]) & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                           >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                           [0U])) & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                     >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                     [0U])))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant 
        = (1U & (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                    >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U])));
    if ((1U & (((~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]] >> 1U)) & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                                     >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                     [1U])) & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                               >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                               [1U])))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                  >> 1U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 0U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant 
        = (1U & (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                    >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U])));
    if ((1U & (((~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]] >> 2U)) & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                                     >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                     [2U])) & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                               >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                               [2U])))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                  >> 2U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant = 0U;
    }
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant = 1U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[0U] 
        = (6U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
           [0U]);
    main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0 
        = (1U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[1U] 
        = ((6U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [1U]) | (IData)(main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0));
    if ((1U & (vlSelf->main__DOT__wbwide_xbar__DOT__request
               [0U] & (vlSelf->main__DOT__wbwide_xbar__DOT__grant
                       [0U] | ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[1U] 
            = (1U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [1U]);
    }
    main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0 
        = (1U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
           [1U]);
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[2U] 
        = ((6U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [2U]) | (IData)(main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0));
    if ((1U & (vlSelf->main__DOT__wbwide_xbar__DOT__request
               [1U] & (vlSelf->main__DOT__wbwide_xbar__DOT__grant
                       [1U] | ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                   >> 1U)) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                              >> 1U)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[2U] 
            = (1U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [2U]);
    }
    main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0 
        = (1U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
           [2U]);
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[3U] 
        = ((6U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [3U]) | (IData)(main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0));
    if ((1U & (vlSelf->main__DOT__wbwide_xbar__DOT__request
               [2U] & (vlSelf->main__DOT__wbwide_xbar__DOT__grant
                       [2U] | ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                   >> 2U)) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                              >> 2U)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[3U] 
            = (1U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [3U]);
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[0U] 
        = (5U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
           [0U]);
    main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0 
        = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                 [0U] >> 1U));
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[1U] 
        = ((5U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [1U]) | ((IData)(main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0) 
                     << 1U));
    if ((1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                [0U] >> 1U) & ((vlSelf->main__DOT__wbwide_xbar__DOT__grant
                                [0U] >> 1U) | ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant)) 
                                               | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[1U] 
            = (2U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [1U]);
    }
    main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0 
        = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                 [1U] >> 1U));
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[2U] 
        = ((5U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [2U]) | ((IData)(main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0) 
                     << 1U));
    if ((1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                [1U] >> 1U) & ((vlSelf->main__DOT__wbwide_xbar__DOT__grant
                                [1U] >> 1U) | ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                                   >> 1U)) 
                                               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                                  >> 1U)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[2U] 
            = (2U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [2U]);
    }
    main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0 
        = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                 [2U] >> 1U));
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[3U] 
        = ((5U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [3U]) | ((IData)(main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0) 
                     << 1U));
    if ((1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                [2U] >> 1U) & ((vlSelf->main__DOT__wbwide_xbar__DOT__grant
                                [2U] >> 1U) | ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                                  >> 2U)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[3U] 
            = (2U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [3U]);
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[0U] 
        = (3U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
           [0U]);
    main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0 
        = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                 [0U] >> 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[1U] 
        = ((3U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [1U]) | ((IData)(main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0) 
                     << 2U));
    if ((1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                [0U] >> 2U) & ((vlSelf->main__DOT__wbwide_xbar__DOT__grant
                                [0U] >> 2U) | ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant)) 
                                               | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[1U] 
            = (4U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [1U]);
    }
    main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0 
        = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                 [1U] >> 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[2U] 
        = ((3U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [2U]) | ((IData)(main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0) 
                     << 2U));
    if ((1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                [1U] >> 2U) & ((vlSelf->main__DOT__wbwide_xbar__DOT__grant
                                [1U] >> 2U) | ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                                   >> 1U)) 
                                               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                                  >> 1U)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[2U] 
            = (4U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [2U]);
    }
    main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0 
        = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                 [2U] >> 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[3U] 
        = ((3U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [3U]) | ((IData)(main__DOT__wbwide_xbar__DOT____Vlvbound_he62f6d27__0) 
                     << 2U));
    if ((1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                [2U] >> 2U) & ((vlSelf->main__DOT__wbwide_xbar__DOT__grant
                                [2U] >> 2U) | ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                                  >> 2U)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[3U] 
            = (4U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [3U]);
    }
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb 
        = (2U <= ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight) 
                  + (((IData)(vlSelf->main__DOT__u_fan__DOT__mem_stb)
                       ? 1U : 0U) + ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
                                     & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready))))));
    if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid = 0U;
    }
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb 
        = ((~ (((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                >> 1U) & (IData)(vlSelf->main__DOT__wbwide_i2cm_stb))) 
           & (2U <= ((IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight) 
                     + (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb)
                          ? 1U : 0U) + ((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
                                        & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
                                           | (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid)))))));
    if (vlSelf->main__DOT__i2ci__DOT__bus_jump) {
        vlSelf->main__DOT__i2ci__DOT__next_valid = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA) 
           == (0xeU | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                       << 4U)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA) 
           == (0xfU | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                       << 4U)));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
    vlSelf->main__DOT__wbwide_xbar__DOT__s_stall = 
        (8U | ((0xfffffffcU & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                               & ((IData)(vlSelf->main__DOT__wbwide_ddr3_controller_stall) 
                                  << 2U))) | ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                              & (IData)(vlSelf->main__DOT__wbwide_wbdown_stall))));
    vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write 
        = ((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb) 
           & (IData)(vlSelf->main__DOT__swic__DOT__sys_we));
    vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints 
        = ((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write) 
           & (vlSelf->main__DOT__swic__DOT__sys_data 
              >> 0xfU));
    vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints 
        = ((~ (vlSelf->main__DOT__swic__DOT__sys_data 
               >> 0xfU)) & (IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write));
    vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints 
        = ((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write) 
           & (vlSelf->main__DOT__swic__DOT__sys_data 
              >> 0xfU));
    vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints 
        = ((~ (vlSelf->main__DOT__swic__DOT__sys_data 
               >> 0xfU)) & (IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write));
    vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb06aa5b__0) 
           & (3U == (3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb06aa5b__0) 
           & (0U == (3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb06aa5b__0) 
           & (1U == (3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb06aa5b__0) 
           & (2U == (3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb574c13__0) 
           & (0U == (7U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb574c13__0) 
           & (1U == (7U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb574c13__0) 
           & (2U == (7U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb574c13__0) 
           & (3U == (7U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb574c13__0) 
           & (4U == (7U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb574c13__0) 
           & (5U == (7U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb574c13__0) 
           & (6U == (7U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5 
        = ((IData)(main__DOT__swic__DOT____VdfgTmp_hcb574c13__0) 
           & (7U == (7U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_stalled 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall) 
           | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem) 
              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled) 
                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err) 
                    | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error) 
                       | (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe)) 
                           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy)) 
                          | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                             & ((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))) 
                                | (0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))))))))));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbwide_zip_cyc));
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available 
        = (0U != (7U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                         [0U] & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) 
                        & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                           [0U]))));
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__request
         [0U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available = 1U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available 
        = (0U != (7U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                         [1U] & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) 
                        & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                           [1U]))));
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__request
         [1U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available = 1U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available 
        = (0U != (7U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                         [2U] & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) 
                        & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                           [2U]))));
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__request
         [2U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available = 1U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available 
        = (0U != (7U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                         [3U] & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) 
                        & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                           [3U]))));
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__request
         [3U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available = 1U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
    if ((1U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant)) 
                      & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                         [0U])))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ vlSelf->main__DOT__wbwide_xbar__DOT__request
               [0U]))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((2U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 1U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [0U] >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [0U] >> 1U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((4U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 2U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [0U] >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [0U] >> 2U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [0U] >> 3U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
    if ((1U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [1U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant)) 
                      & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                         [1U])))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ vlSelf->main__DOT__wbwide_xbar__DOT__request
               [1U]))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((2U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [1U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 1U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [1U] >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [1U] >> 1U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((4U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [1U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 2U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [1U] >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [1U] >> 2U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [1U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [1U] >> 3U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
    if ((1U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [2U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant)) 
                      & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                         [2U])))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ vlSelf->main__DOT__wbwide_xbar__DOT__request
               [2U]))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((2U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [2U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 1U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [2U] >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [2U] >> 1U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((4U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [2U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 2U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [2U] >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [2U] >> 2U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [2U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [2U] >> 3U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
    if ((1U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [3U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant)) 
                      & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                         [3U])))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ vlSelf->main__DOT__wbwide_xbar__DOT__request
               [3U]))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((2U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [3U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 1U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [3U] >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [3U] >> 1U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((4U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [3U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 2U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [3U] >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [3U] >> 2U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [3U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [3U] >> 3U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant = 0U;
    if ((1U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant)) 
                      & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                         [0U])))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ vlSelf->main__DOT__wbwide_xbar__DOT__request
               [0U]))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
               & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel = 1U;
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [1U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant)) 
                      & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                         [1U])))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ vlSelf->main__DOT__wbwide_xbar__DOT__request
               [1U]))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                >> 1U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                             >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel = 1U;
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [2U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant)) 
                      & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                         [2U])))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ vlSelf->main__DOT__wbwide_xbar__DOT__request
               [2U]))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                >> 2U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                             >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel = 1U;
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [3U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant)) 
                      & (~ vlSelf->main__DOT__wbwide_xbar__DOT__requested
                         [3U])))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ vlSelf->main__DOT__wbwide_xbar__DOT__request
               [3U]))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant = 0U;
    if ((2U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 1U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [0U] >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [0U] >> 1U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
               & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((2U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [1U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 1U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [1U] >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [1U] >> 1U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                >> 1U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                             >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((2U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [2U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 1U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [2U] >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [2U] >> 1U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                >> 2U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                             >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((2U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [3U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 1U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [3U] >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [3U] >> 1U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant = 0U;
    if ((4U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 2U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [0U] >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [0U] >> 2U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
               & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((4U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [1U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 2U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [1U] >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [1U] >> 2U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                >> 1U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                             >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((4U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [2U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 2U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [2U] >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [2U] >> 2U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                >> 2U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                             >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((4U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [3U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    } else if ((1U & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                          >> 2U)) & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__requested
                                        [3U] >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((1U & (~ (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [3U] >> 2U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if ((IData)((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                  >> 3U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                               >> 3U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel = 1U;
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__m_stall = 
        ((0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall)) 
         | (1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__grant
                   [0U] >> 3U) | ((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                         & (vlSelf->main__DOT__wbwide_xbar__DOT__request
                                            [0U] >> 
                                            vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                                            [0U])))
                                   ? ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull) 
                                      | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall) 
                                         >> vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                                         [0U])) : (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb)))));
    if ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__m_stall 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__m_stall = 
        ((0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall)) 
         | (2U & ((0x3ffffffeU & (vlSelf->main__DOT__wbwide_xbar__DOT__grant
                                  [1U] >> 2U)) | ((
                                                   (1U 
                                                    & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                                        >> 1U) 
                                                       & (vlSelf->main__DOT__wbwide_xbar__DOT__request
                                                          [1U] 
                                                          >> 
                                                          vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                                                          [1U])))
                                                    ? 
                                                   (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull) 
                                                     >> 1U) 
                                                    | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall) 
                                                       >> 
                                                       vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                                                       [1U]))
                                                    : 
                                                   ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                                                    >> 1U)) 
                                                  << 1U))));
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__m_stall 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__m_stall = 
        ((0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall)) 
         | (4U & ((0x7ffffffcU & (vlSelf->main__DOT__wbwide_xbar__DOT__grant
                                  [2U] >> 1U)) | ((
                                                   (1U 
                                                    & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                                        >> 2U) 
                                                       & (vlSelf->main__DOT__wbwide_xbar__DOT__request
                                                          [2U] 
                                                          >> 
                                                          vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                                                          [2U])))
                                                    ? 
                                                   (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull) 
                                                     >> 2U) 
                                                    | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall) 
                                                       >> 
                                                       vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                                                       [2U]))
                                                    : 
                                                   ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                                                    >> 2U)) 
                                                  << 2U))));
    if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__m_stall 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__m_stall = 
        ((7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall)) 
         | (8U & ((0xfffffff8U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
                   [3U]) | (((IData)((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                       >> 3U) & (vlSelf->main__DOT__wbwide_xbar__DOT__request
                                                 [3U] 
                                                 >> 
                                                 vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                                                 [3U])))
                              ? (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull) 
                                  >> 3U) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall) 
                                            >> vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                                            [3U])) : 
                             ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                              >> 3U)) << 3U))));
    if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__m_stall 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall));
    }
    vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write 
        = ((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb) 
           & (IData)(vlSelf->main__DOT__swic__DOT__sys_we));
    vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write 
        = ((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb) 
           & (IData)(vlSelf->main__DOT__swic__DOT__sys_we));
    vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write 
        = ((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb) 
           & (IData)(vlSelf->main__DOT__swic__DOT__sys_we));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__this_is_a_multiply_op 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce) 
           & ((5U == (7U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                            >> 1U))) | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem) 
              & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_stalled)) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)))));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid) 
           & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((6U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | (IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest) 
              >> 1U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((5U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0) 
              << 1U));
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest) 
              >> 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0) 
              << 2U));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex = 0U;
    if ((0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex 
            = vlSelf->main__DOT__wbwide_xbar__DOT__sindex
            [0U];
    } else {
        if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex 
                = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex));
        }
        if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex 
                = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex));
        }
        if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex = 3U;
        }
    }
    if ((0U != (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__iN = 4U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex = 0U;
    if ((0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex 
            = vlSelf->main__DOT__wbwide_xbar__DOT__sindex
            [1U];
    } else {
        if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex 
                = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex));
        }
        if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex 
                = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex));
        }
        if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex = 3U;
        }
    }
    if ((0U != (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__iN = 4U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex = 0U;
    if ((0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex 
            = vlSelf->main__DOT__wbwide_xbar__DOT__sindex
            [2U];
    } else {
        if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex 
                = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex));
        }
        if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex 
                = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex));
        }
        if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex = 3U;
        }
    }
    if ((0U != (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__iN = 4U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
           & (IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall 
        = (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
            >> 1U) & (IData)(vlSelf->main__DOT__wbwide_i2cm_cyc));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall 
        = (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
            >> 2U) & (IData)(vlSelf->main__DOT__wbwide_zip_cyc));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall 
        = (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
            >> 3U) & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_stall 
        = (((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
                | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce))) 
            & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid)) 
           | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid) 
              & ((IData)(vlSelf->main__DOT__swic__DOT__cmd_halt) 
                 | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA) 
                     & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h39e03a19__0) 
                         & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_he857573c__0) 
                            & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                               >> 6U))) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                            >> 6U) 
                                           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd)))) 
                    | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB) 
                        & ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h39e03a19__0) 
                             | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy)) 
                            & (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI)) 
                                & ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R) 
                                     == (0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))) 
                                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR)) 
                                   | (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe)) 
                                       & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy)) 
                                      | ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy) 
                                           | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy) 
                                              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy))) 
                                          & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg) 
                                             == (0x1fU 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B)))) 
                                         | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                                            & (0xeU 
                                               == (0xeU 
                                                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))))))) 
                               | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_he857573c__0) 
                                  & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                     >> 6U)))) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                                   >> 6U) 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd)))) 
                       | (((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
                               >> 3U)) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA) 
                                           & (IData)(
                                                     ((0xeU 
                                                       == 
                                                       (0xeU 
                                                        & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))) 
                                                      & ((0x1fU 
                                                          & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A)) 
                                                         != 
                                                         (0xfU 
                                                          | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                                                             << 4U)))))) 
                                          | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB) 
                                             & (IData)(
                                                       ((0xeU 
                                                         == 
                                                         (0xeU 
                                                          & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))) 
                                                        & ((0x1fU 
                                                            & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B)) 
                                                           != 
                                                           (0xfU 
                                                            | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                                                               << 4U)))))))) 
                          & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR) 
                                 & (IData)(((0xeU == 
                                             (0xeU 
                                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R))) 
                                            & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R) 
                                               != (0xfU 
                                                   | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                                                      << 4U))))))) 
                             | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write))))))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall) 
           & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall) 
           & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall) 
           & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall) 
           & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid));
    vlSelf->main__DOT__swic__DOT__cpu_op_stall = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce) 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_stall));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_stall)) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid) 
              | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal) 
                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_stalled 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_stall));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc = 0U;
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc 
            = ((0x20U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))
                ? 5U : ((0x40U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))
                         ? 6U : 7U));
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) {
        if (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce)) 
             & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h740acd49__0) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc = 4U;
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) 
                    & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                       == (0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc = 4U;
        }
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc = 0U;
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc 
            = ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                 >> 5U) & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB))
                ? 4U : 5U);
    } else if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce)) 
                & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid) 
                   == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc = 6U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid)) 
                 | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_stalled))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ready 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_stalled)) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc) 
           | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ready)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc = 0U;
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset = 1U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc = 0U;
    } else if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce)) 
                & (((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                           >> 4U)) == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                   & (0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset = 1U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc = 1U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt) 
                | ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                   & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache) 
                      | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe))))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset = 1U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc = 2U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt) 
                | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                   & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache) 
                      | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe))))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset = 1U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc = 3U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                & (((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                           >> 4U)) == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                   & (0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset = 1U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc = 1U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset = 1U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc = 4U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) 
                | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ready) 
                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset = 1U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc = 5U;
    }
}
