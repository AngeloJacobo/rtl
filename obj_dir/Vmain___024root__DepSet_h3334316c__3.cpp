// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmain__Syms.h"
#include "Vmain___024root.h"

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__11(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data];
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v0;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v1;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v2;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v3;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v4;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v5;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v6;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v7;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v8;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v9;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xaU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v10;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xbU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v11;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xcU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v12;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xdU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v13;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xeU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v14;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xfU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[vlSelf->__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v16] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v16;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v17) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xaU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xbU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xcU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xdU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xeU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v3) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xaU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xbU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xcU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xdU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xeU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xfU] = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0xbU] 
        = (IData)(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data);
}

VL_INLINE_OPT void Vmain___024root___nba_comb__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->main__DOT__wb32_xbar__DOT__s_stall = (0xf000U 
                                                  | ((0xfffff800U 
                                                      & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                                         & ((IData)(vlSelf->main__DOT__wb32_ddr3_controller_stall) 
                                                            << 0xbU))) 
                                                     | (0xfffffc00U 
                                                        & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                                           & ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                                              << 0xaU)))));
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
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall = 1U;
        if ((((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q) 
              >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank)) 
             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
                [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] 
                == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row)))) {
            if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we) 
                 & (0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
                    [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank]))) {
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
            : (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                >> 0xbU) & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending)
                             ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall)
                             : (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall))));
    if ((1U & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                  >> 0xbU)))) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d = 0U;
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
    vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger 
        = ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed) 
           & (((~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config)) 
               & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
               [0U]) | ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                        >> 1U)));
    vlSelf->main__DOT__wb32_xbar__DOT__m_stall = (1U 
                                                  & ((vlSelf->main__DOT__wb32_xbar__DOT__grant
                                                      [0U] 
                                                      >> 0xcU) 
                                                     | (((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant) 
                                                         & ((0xcU 
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
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall 
        = ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
           & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall) 
           & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
}

void Vmain___024root___nba_sequent__TOP__0(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__1(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__2(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__3(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__4(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__5(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__6(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__7(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__8(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__9(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__10(Vmain___024root* vlSelf);

void Vmain___024root___eval_nba(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vmain___024root___nba_sequent__TOP__1(vlSelf);
        Vmain___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x81ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmain___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void Vmain___024root___eval_triggers__ico(Vmain___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__ico(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
void Vmain___024root___eval_ico(Vmain___024root* vlSelf);
void Vmain___024root___eval_triggers__act(Vmain___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
void Vmain___024root___eval_act(Vmain___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__nba(Vmain___024root* vlSelf);
#endif  // VL_DEBUG

void Vmain___024root___eval(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<8> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmain___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmain___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("main.v", 96, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmain___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmain___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmain___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("main.v", 96, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vmain___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmain___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("main.v", 96, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmain___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmain___024root___eval_debug_assertions(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_reset & 0xfeU))) {
        Verilated::overWidthError("i_reset");}
    if (VL_UNLIKELY((vlSelf->i_ddr3_controller_idelayctrl_rdy 
                     & 0xfeU))) {
        Verilated::overWidthError("i_ddr3_controller_idelayctrl_rdy");}
    if (VL_UNLIKELY((vlSelf->i_fan_sda & 0xfeU))) {
        Verilated::overWidthError("i_fan_sda");}
    if (VL_UNLIKELY((vlSelf->i_fan_scl & 0xfeU))) {
        Verilated::overWidthError("i_fan_scl");}
    if (VL_UNLIKELY((vlSelf->i_fan_tach & 0xfeU))) {
        Verilated::overWidthError("i_fan_tach");}
    if (VL_UNLIKELY((vlSelf->i_i2c_sda & 0xfeU))) {
        Verilated::overWidthError("i_i2c_sda");}
    if (VL_UNLIKELY((vlSelf->i_i2c_scl & 0xfeU))) {
        Verilated::overWidthError("i_i2c_scl");}
    if (VL_UNLIKELY((vlSelf->cpu_sim_cyc & 0xfeU))) {
        Verilated::overWidthError("cpu_sim_cyc");}
    if (VL_UNLIKELY((vlSelf->cpu_sim_stb & 0xfeU))) {
        Verilated::overWidthError("cpu_sim_stb");}
    if (VL_UNLIKELY((vlSelf->cpu_sim_we & 0xfeU))) {
        Verilated::overWidthError("cpu_sim_we");}
    if (VL_UNLIKELY((vlSelf->cpu_sim_addr & 0x80U))) {
        Verilated::overWidthError("cpu_sim_addr");}
    if (VL_UNLIKELY((vlSelf->i_cpu_reset & 0xfeU))) {
        Verilated::overWidthError("i_cpu_reset");}
    if (VL_UNLIKELY((vlSelf->i_clk200 & 0xfeU))) {
        Verilated::overWidthError("i_clk200");}
    if (VL_UNLIKELY((vlSelf->i_wbu_uart_rx & 0xfeU))) {
        Verilated::overWidthError("i_wbu_uart_rx");}
    if (VL_UNLIKELY((vlSelf->i_btn & 0xe0U))) {
        Verilated::overWidthError("i_btn");}
}
#endif  // VL_DEBUG
