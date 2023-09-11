// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmain__Syms.h"
#include "Vmain___024root.h"

extern const VlWide<16>/*511:0*/ Vmain__ConstPool__CONST_h93e1b771_0;
extern const VlWide<18>/*575:0*/ Vmain__ConstPool__CONST_hb679b2e5_0;
extern const VlWide<15>/*479:0*/ Vmain__ConstPool__CONST_hbd99daea_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vmain__ConstPool__TABLE_h13ae860a_0;
extern const VlUnpacked<CData/*7:0*/, 64> Vmain__ConstPool__TABLE_h3e5c4ef2_0;
extern const VlUnpacked<CData/*3:0*/, 8> Vmain__ConstPool__TABLE_h611c22d1_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vmain__ConstPool__TABLE_h92ecbd6e_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vmain__ConstPool__TABLE_h695e6748_0;

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__2(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_hc7d9c82c__0 = 0;
    CData/*0:0*/ main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0;
    main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT____Vlvbound_he5148a9b__0 = 0;
    SData/*8:0*/ main__DOT__ddr3_controller_inst__DOT____Vlvbound_h5b930a8e__0;
    main__DOT__ddr3_controller_inst__DOT____Vlvbound_h5b930a8e__0 = 0;
    CData/*3:0*/ __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout;
    __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel;
    __Vfunc_main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__30__sel = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v8;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v8 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v8;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v8;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v8 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v8;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v8;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v8 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v8;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v8;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v8 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v8;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v9;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v9 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v9;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v9 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v9;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v9 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v9;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v9 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v9;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v9 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v9;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v9 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v9;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v9 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v9;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v9 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v8;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v8 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v8;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v9;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v9 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v9;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v9 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v8;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v8 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v8;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v8;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v9;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v9 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v10;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v10 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v10;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v10 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v11;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v11 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v9;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v9 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v9;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v9 = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v10;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v10 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v10;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v10 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h81ed372a__0;
    VlWide<16>/*511:0*/ __Vtemp_hb780e8f4__0;
    VlWide<16>/*511:0*/ __Vtemp_hdb251f8c__0;
    VlWide<16>/*511:0*/ __Vtemp_h12b8adbe__0;
    // Body
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__i2ci__DOT__r_halted))) {
        vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel = 0U;
    } else if ((((IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid) 
                 & (0xd00U == (0xf00U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn)))) 
                & (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready))) {
        vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel 
            = (3U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn));
    }
    vlSelf->main__DOT__console__DOT__txf_wb_data = 
        (0x7fU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]);
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
           & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid 
        = ((((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable)) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow))) 
            & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr))) 
           & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb)));
    vlSelf->main__DOT__console__DOT__txf_wb_write = 
        (((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                    >> 6U) & (0x30000U == (0x30000U 
                                           & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])))) 
          & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
             >> 6U)) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                >> 0x18U)));
    if (vlSelf->main__DOT__console__DOT__tx_uart_reset) {
        vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr = 0U;
        vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__rd_addr = 0U;
        vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next = 1U;
    } else {
        if (vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write) {
            vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr 
                = vlSelf->main__DOT__console__DOT__txfifo__DOT__w_waddr_plus_one;
        }
        if (vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read) {
            vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__rd_addr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr)));
            vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next 
                = (0x3fU & ((IData)(2U) + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr)));
        }
    }
    vlSelf->main__DOT__console__DOT__rxf_wb_data = 
        ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc)
          ? (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write)
          : (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data));
    vlSelf->main__DOT__w_console_rx_stb = ((IData)(vlSelf->main__DOT__wbu_rx_stb) 
                                           & (~ ((IData)(vlSelf->main__DOT__wbu_rx_data) 
                                                 >> 7U)));
    vlSelf->main__DOT__console__DOT__rxf_wb_read = 
        (((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                    >> 6U) & (0x20000U == (0x30000U 
                                           & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])))) 
          & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                >> 6U))) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                    >> 0x18U)));
    if (vlSelf->main__DOT__console__DOT__rx_uart_reset) {
        vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr = 0U;
        vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__rd_addr = 0U;
        vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next = 1U;
    } else {
        if (vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write) {
            vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr 
                = vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_waddr_plus_one;
        }
        if (vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read) {
            vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__rd_addr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr)));
            vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next 
                = (0x3fU & ((IData)(2U) + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr)));
        }
    }
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[4U] = vlSelf->main__DOT__i2ci__DOT__bus_read_data;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset)) 
                 & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce) 
                     & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__this_is_a_multiply_op)) 
                    | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe))));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy = 1U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy = 1U;
    } else {
        if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign))) 
             | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy = 0U;
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy = 0U;
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit) 
             | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy = 0U;
        }
    }
    if ((1U & (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step))))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped = 0U;
    } else if ((((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid) 
                   & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase))) 
                  & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock))) 
                 & (1U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))) 
                & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
                   | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped = 1U;
    }
    vlSelf->cpu_sim_idata = vlSelf->main__DOT__wbu_zip_idata;
    vlSelf->main__DOT__swic__DOT__dbg_odata = ((1U 
                                                == (IData)(vlSelf->main__DOT__swic__DOT__dbg_pre_addr))
                                                ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->main__DOT__swic__DOT__dbg_pre_addr))
                                                    ? vlSelf->main__DOT__swic__DOT__dbg_cpu_status
                                                    : vlSelf->main__DOT__swic__DOT__sys_idata));
    if (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    } else if ((((IData)(vlSelf->main__DOT__wbwide_i2cdma_stb) 
                 & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskd_ready)) 
                & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb) 
                   & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim;
    if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
         & (0x1fU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc 
            = (0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl);
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                & ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid) 
                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal))) 
                   | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0xaU] 
        = vlSelf->main__DOT__wb32_ddr3_phy_idata;
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))) 
                | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err)) 
               | ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                  & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last = 1U;
    } else if (vlSelf->main__DOT__wbwide_wbdown_stall) {
        if (((((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first)) 
               & ((~ (IData)(vlSelf->main__DOT__wb32_wbdown_stb)) 
                  | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))) 
              & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last)) 
             & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty))) {
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wb32_wbdown_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))))) {
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last 
                = (0ULL == (0xfffffffffffffffULL & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel));
        }
    } else {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null 
            = ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
               & (0ULL == (((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))));
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last 
            = (0ULL == (0xfffffffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))));
        if ((1U & (~ (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb)))) {
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last = 1U;
        }
    }
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[7U] = vlSelf->main__DOT__wb32_fan_idata;
    vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack = ((~ (IData)(vlSelf->i_reset)) 
                                                 & (IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
    if ((1U & (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                               >> 7U))) 
               | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                  >> 0x1aU)))) {
        vlSelf->main__DOT__u_fan__DOT__pre_data = 0U;
    } else {
        vlSelf->main__DOT__u_fan__DOT__pre_data = 0U;
        if ((0x2000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) {
            if ((0x1000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) {
                vlSelf->main__DOT__u_fan__DOT__pre_data 
                    = vlSelf->main__DOT__u_fan__DOT__temp_data;
            } else {
                vlSelf->main__DOT__u_fan__DOT__pre_data 
                    = ((0xf8000000U & vlSelf->main__DOT__u_fan__DOT__pre_data) 
                       | vlSelf->main__DOT__u_fan__DOT__tach_count);
            }
        } else {
            vlSelf->main__DOT__u_fan__DOT__pre_data 
                = ((0xffffe000U & vlSelf->main__DOT__u_fan__DOT__pre_data) 
                   | ((0x1000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])
                       ? (IData)(vlSelf->main__DOT__u_fan__DOT__ctl_sys)
                       : (IData)(vlSelf->main__DOT__u_fan__DOT__ctl_fpga)));
        }
    }
    if (((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
         & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
               >> 7U)))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data = 0U;
        if ((0x2000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data 
                = ((0x1000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])
                    ? ((0xfffff000U & vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data) 
                       | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount))
                    : ((0xffffffe0U & vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data) 
                       | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr)));
        } else if ((0x1000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data 
                = ((0xffff0000U & vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data) 
                   | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl) 
                       << 0xfU) | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda) 
                                    << 0xeU) | (((IData)(vlSelf->i_fan_scl) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->i_fan_sda) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
                                                          << 0xaU) 
                                                         | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data))))))));
        } else {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data 
                = (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
                    << 0x1cU) | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual) 
                                  << 0x18U) | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
                                                      << 0x15U) 
                                                     | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
                                                            << 0x13U) 
                                                           | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid) 
                                                                  << 0x11U) 
                                                                 | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl) 
                                                                        << 0xfU) 
                                                                       | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->i_fan_scl) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->i_fan_sda) 
                                                                                << 0xcU) 
                                                                                | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn)))))))))))))));
        }
    }
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[5U] = vlSelf->main__DOT__wb32_i2cdma_idata;
    vlSelf->main__DOT__rcv__DOT__chg_counter = vlSelf->__Vdly__main__DOT__rcv__DOT__chg_counter;
    vlSelf->main__DOT__w_console_tx_data = ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc)
                                             ? (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write)
                                             : (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data));
    vlSelf->main__DOT__txv__DOT__r_busy = vlSelf->__Vdly__main__DOT__txv__DOT__r_busy;
    vlSelf->main__DOT__genbus__DOT__wbu_tx_stb = vlSelf->__Vdly__main__DOT__genbus__DOT__wbu_tx_stb;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow 
        = vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__will_underflow;
    vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe 
        = vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_stop_pipe;
    vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe 
        = vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_stop_pipe;
    vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe 
        = vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_stop_pipe;
    vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe 
        = vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_stop_pipe;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr 
        = (((- (IData)((1U & (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr 
                              >> 0x18U)))) << 0x19U) 
           | vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr);
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wide_addr;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner;
    vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
        = vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero 
        = vlSelf->__Vdly__main__DOT__swic__DOT__u_watchdog__DOT__r_zero;
    vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero 
        = vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_zero;
    vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero 
        = vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_zero;
    vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero 
        = vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_zero;
    vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb 
        = vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data 
        = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie) 
            << 0xcU) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT____VdfgTmp_h05977c6b__0));
    vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc = vlSelf->__Vdly__main__DOT__u_fan__DOT__ign_mem_cyc;
    vlSelf->main__DOT__i2ci__DOT__pf_jump_addr = vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_jump_addr;
    vlSelf->main__DOT__i2ci__DOT__pf_insn_addr = vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_insn_addr;
    vlSelf->main__DOT__wbwide_i2cm_cyc = vlSelf->__Vdly__main__DOT__wbwide_i2cm_cyc;
    vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
        = vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending 
        = vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending;
    vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending 
        = vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending;
    vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending 
        = vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending;
    vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
        = vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_aux;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_dm;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_col;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[1U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[1U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[2U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[2U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[3U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[3U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[4U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[4U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[5U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[5U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[6U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[6U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[7U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[7U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[8U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[8U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[9U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[9U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xaU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xaU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xbU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xbU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xcU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xcU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xdU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xdU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xeU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xeU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xfU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xfU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_we;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_bank;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_row;
    vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe;
    vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw;
    vlSelf->main__DOT__wbwide_i2cm_stb = vlSelf->__Vdly__main__DOT__wbwide_i2cm_stb;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__compression_tbl[vlSelf->__Vdlyvdim0__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__compression_tbl__v0] 
        = vlSelf->__Vdlyvval__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__compression_tbl__v0;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__ln_stb;
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
    if (vlSelf->__Vdlyvset__main__DOT__i2cscopei__DOT__mem__v0) {
        vlSelf->main__DOT__i2cscopei__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__i2cscopei__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__main__DOT__i2cscopei__DOT__mem__v0;
    }
    if (vlSelf->__Vdlyvset__main__DOT__scope3_ddr3i__DOT__mem__v0) {
        vlSelf->main__DOT__scope3_ddr3i__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__scope3_ddr3i__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__main__DOT__scope3_ddr3i__DOT__mem__v0;
    }
    if (vlSelf->__Vdlyvset__main__DOT__scope2_ddr3i__DOT__mem__v0) {
        vlSelf->main__DOT__scope2_ddr3i__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__scope2_ddr3i__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__main__DOT__scope2_ddr3i__DOT__mem__v0;
    }
    if (vlSelf->__Vdlyvset__main__DOT__scope1_ddr3i__DOT__mem__v0) {
        vlSelf->main__DOT__scope1_ddr3i__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__scope1_ddr3i__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__main__DOT__scope1_ddr3i__DOT__mem__v0;
    }
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness;
    vlSelf->main__DOT__wbwide_wbu_arbiter_stb = ((~ (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full)) 
                                                 & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr 
        = vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__rd_addr;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr 
        = vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__rd_addr;
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__i2ci__DOT__ovw_data = 0U;
        vlSelf->main__DOT__i2ci__DOT__ckcount = 0xfffU;
        vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl = 1U;
        vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda = 1U;
        vlSelf->main__DOT__i2ci__DOT__r_aborted = 0U;
    } else {
        if (vlSelf->main__DOT__i2ci__DOT__r_halted) {
            if (vlSelf->main__DOT__i2c_valid) {
                vlSelf->main__DOT__i2ci__DOT__ovw_data 
                    = (0x200U | (((IData)(vlSelf->main__DOT__i2c_last) 
                                  << 8U) | (IData)(vlSelf->main__DOT__i2c_data)));
            }
            if (vlSelf->main__DOT__i2ci__DOT__bus_jump) {
                vlSelf->main__DOT__i2ci__DOT__ovw_data 
                    = (0x1ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__ovw_data));
            }
        } else {
            vlSelf->main__DOT__i2ci__DOT__ovw_data 
                = (0x1ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__ovw_data));
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__bus_write) 
              & (3U == (3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]))) 
             & (0xf0000ULL == (0xf0000ULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel)))) {
            vlSelf->main__DOT__i2ci__DOT__ckcount = 
                (0xfffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]);
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__bus_write) 
              & (1U == (3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]))) 
             & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                        >> 0x11U)))) {
            vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl 
                = (IData)((0x800U != (0x8800U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U])));
            vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda 
                = (IData)((0x800U != (0x4800U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U])));
        } else if (vlSelf->main__DOT__i2ci__DOT__bus_jump) {
            vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl = 1U;
            vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda = 1U;
        }
        if (((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_abort) 
             & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__r_halted)))) {
            vlSelf->main__DOT__i2ci__DOT__r_aborted = 1U;
        }
        if (vlSelf->main__DOT__i2ci__DOT__bus_write) {
            if ((((0U == (3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                  & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U] 
                     >> 0x15U)) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                           >> 0x12U)))) {
                vlSelf->main__DOT__i2ci__DOT__r_aborted = 0U;
            }
            if (((IData)(vlSelf->main__DOT__i2ci__DOT__bus_jump) 
                 & (IData)(vlSelf->main__DOT__i2ci__DOT__r_halted))) {
                vlSelf->main__DOT__i2ci__DOT__r_aborted = 0U;
            }
        }
    }
    vlSelf->main__DOT__i2ci__DOT__r_halted = vlSelf->__Vdly__main__DOT__i2ci__DOT__r_halted;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock;
    __Vtemp_h81ed372a__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter))))))))))));
    __Vtemp_h81ed372a__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter))))))))))) 
                                        >> 0x20U));
    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst_controller) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[7U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[8U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[9U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xaU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xbU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xcU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xdU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xeU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xfU] = 0U;
    } else if ((0x17U != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
        if ((7U == vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
             [0U])) {
            if ((0U != ((((((((((((((((vlSelf->main__DOT__wbwide_ddr3_controller_idata[0U] 
                                       ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0U]) 
                                      | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[1U] 
                                         ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[1U])) 
                                     | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[2U] 
                                        ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[2U])) 
                                    | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[3U] 
                                       ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[3U])) 
                                   | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[4U] 
                                      ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[4U])) 
                                  | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[5U] 
                                     ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[5U])) 
                                 | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[6U] 
                                    ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[6U])) 
                                | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[7U] 
                                   ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[7U])) 
                               | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[8U] 
                                  ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[8U])) 
                              | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[9U] 
                                 ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[9U])) 
                             | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xaU] 
                                ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xaU])) 
                            | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xbU] 
                               ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xbU])) 
                           | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xcU] 
                              ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xcU])) 
                          | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xdU] 
                             ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xdU])) 
                         | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xeU] 
                            ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xeU])) 
                        | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xfU] 
                           ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xfU])))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[1U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[1U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[2U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[2U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[3U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[3U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[4U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[4U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[5U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[5U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[6U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[6U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[7U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[7U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[8U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[8U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[9U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[9U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xaU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xaU];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xbU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xbU];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xcU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xcU];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xdU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xdU];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xeU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xeU];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xfU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xfU];
            }
        } else if ((0xbU == vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                    [0U])) {
            if ((0U != ((((((((((((((((vlSelf->main__DOT__wbwide_ddr3_controller_idata[0U] 
                                       ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0U]) 
                                      | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[1U] 
                                         ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[1U])) 
                                     | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[2U] 
                                        ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[2U])) 
                                    | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[3U] 
                                       ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[3U])) 
                                   | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[4U] 
                                      ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[4U])) 
                                  | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[5U] 
                                     ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[5U])) 
                                 | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[6U] 
                                    ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[6U])) 
                                | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[7U] 
                                   ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[7U])) 
                               | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[8U] 
                                  ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[8U])) 
                              | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[9U] 
                                 ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[9U])) 
                             | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xaU] 
                                ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xaU])) 
                            | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xbU] 
                               ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xbU])) 
                           | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xcU] 
                              ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xcU])) 
                          | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xdU] 
                             ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xdU])) 
                         | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xeU] 
                            ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xeU])) 
                        | (vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xfU] 
                           ^ vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xfU])))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[1U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[1U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[2U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[2U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[3U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[3U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[4U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[4U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[5U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[5U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[6U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[6U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[7U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[7U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[8U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[8U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[9U] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[9U];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xaU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xaU];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xbU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xbU];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xcU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xcU];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xdU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xdU];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xeU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xeU];
                vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data[0xfU] 
                    = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xfU];
            }
        }
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0U] 
        = __Vtemp_h81ed372a__0[0U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[1U] 
        = __Vtemp_h81ed372a__0[1U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[2U] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[3U] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[4U] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[5U] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[6U] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[7U] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[8U] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[9U] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xaU] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xbU] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xcU] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xdU] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xeU] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read[0xfU] 
        = ((vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
            << 0x18U) | ((0xff0000U & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter) 
                                       << 0x10U)) | 
                         ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
                                      << 8U)) | (0xffU 
                                                 & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter)))));
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first 
        = vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first;
    vlSelf->main__DOT__u_fan__DOT__ctl_sys = vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_sys;
    vlSelf->main__DOT__u_fan__DOT__ctl_fpga = vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_fpga;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr;
    if (vlSelf->main__DOT__u_i2cdma__DOT__r_reset) {
        vlSelf->main__DOT__u_i2cdma__DOT__current_addr 
            = vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr;
    } else if (((IData)(vlSelf->main__DOT__wbwide_i2cdma_stb) 
                & (~ (IData)(vlSelf->__VdfgTmp_h503d14d1__0)))) {
        vlSelf->main__DOT__u_i2cdma__DOT__current_addr 
            = (0x7fffffffU & ((IData)(1U) + ((vlSelf->main__DOT__wbwide_i2cdma_addr 
                                              << 6U) 
                                             | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__subaddr))));
    }
    vlSelf->main__DOT__u_i2cdma__DOT__subaddr = vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__subaddr;
    vlSelf->main__DOT__wbwide_i2cdma_addr = vlSelf->__Vdly__main__DOT__wbwide_i2cdma_addr;
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
    vlSelf->main__DOT__w_console_busy = ((IData)(vlSelf->main__DOT__genbus__DOT__ps_full) 
                                         | (IData)(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
    if ((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy)))) {
        vlSelf->main__DOT__genbus__DOT__wbu_tx_data 
            = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__remap
            [vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits];
    }
    vlSelf->main__DOT__i2cscopei__DOT__lst_adr = (1U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                                       >> 2U)) 
                                                     | (IData)(vlSelf->main__DOT__i2cscopei__DOT__imm_adr)));
    if ((4U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))) {
        vlSelf->main__DOT__i2cscopei__DOT__lst_val 
            = vlSelf->main__DOT__i2cscopei__DOT__imm_val;
        vlSelf->main__DOT__i2cscopei__DOT__imm_val 
            = ((((IData)(vlSelf->main__DOT__i2cscopei__DOT__new_data) 
                 | (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write)) 
                | (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped))
                ? vlSelf->main__DOT__i2cscopei__DOT__qd_data
                : vlSelf->main__DOT__i2cscopei__DOT__ck_addr);
    } else {
        vlSelf->main__DOT__i2cscopei__DOT__lst_val = 0U;
        vlSelf->main__DOT__i2cscopei__DOT__imm_val = 0U;
    }
    vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr = 
        (1U & ((~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                   >> 2U)) | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr)));
    if ((4U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))) {
        vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val 
            = vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val;
        vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val 
            = ((((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data) 
                 | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write)) 
                | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped))
                ? vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data
                : vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr);
    } else {
        vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val = 0U;
        vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val = 0U;
    }
    vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr = 
        (1U & ((~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                   >> 2U)) | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr)));
    if ((4U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))) {
        vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val 
            = vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val;
        vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val 
            = ((((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data) 
                 | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write)) 
                | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped))
                ? vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data
                : vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr);
    } else {
        vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val = 0U;
        vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val = 0U;
    }
    vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr = 
        (1U & ((~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                   >> 2U)) | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr)));
    if ((4U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))) {
        vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val 
            = vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val;
        vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val 
            = ((((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data) 
                 | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write)) 
                | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped))
                ? vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data
                : vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr);
    } else {
        vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val = 0U;
        vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val = 0U;
    }
    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst_controller) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q = 1U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 8U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_store = 0ULL;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig = 0U;
        vlSelf->o_ddr3_controller_bitslip = 0U;
        vlSelf->__Vdly__o_ddr3_controller_odelay_data_ld = 0U;
        vlSelf->__Vdly__o_ddr3_controller_odelay_dqs_ld = 0U;
        vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld = 0U;
        vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane_times_8 = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__initial_dqs = 1U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback = 1U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[1U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[2U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[3U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[4U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[5U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[6U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[7U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[8U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[9U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xaU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xbU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xcU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xdU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xeU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xfU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[0U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[1U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[2U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[3U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_lane_data = 0ULL;
        vlSelf->o_ddr3_controller_leveling_calib = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_level_fail = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_test_address_counter = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_test_address_counter = 0U;
        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0 = 1U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib = 1U;
        vlSelf->main__DOT__wbwide_ddr3_controller_stall = 1U;
    } else {
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay 
            = ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))
                ? 0U : (0xfU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay) 
                                - (IData)(1U))));
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data 
            = ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data))
                ? 0U : (0xfU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data) 
                                - (IData)(1U))));
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback 
            = ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback))
                ? 0U : (0x1fU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback) 
                                 - (IData)(1U))));
        vlSelf->o_ddr3_controller_bitslip = 0U;
        vlSelf->__Vdly__o_ddr3_controller_odelay_data_ld = 0U;
        vlSelf->__Vdly__o_ddr3_controller_odelay_dqs_ld = 0U;
        vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld = 0U;
        vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane_times_8 
            = (0x3fU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                        << 3U));
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane];
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update) {
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v8 
                = ((1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld) 
                          >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)))
                    ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein)
                    : vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane]);
            vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v8 = 1U;
            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v8 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v8 
                = ((1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld) 
                          >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)))
                    ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein)
                    : vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein
                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane]);
            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v8 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v8 
                = ((1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld) 
                          >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)))
                    ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein)
                    : vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane]);
            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v8 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v8 
                = ((1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld) 
                          >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)))
                    ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein)
                    : vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane]);
            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v8 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
            vlSelf->__Vdly__o_ddr3_controller_odelay_data_ld 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld;
            vlSelf->__Vdly__o_ddr3_controller_odelay_dqs_ld 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld;
            vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld;
            vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
        } else if ((0x17U != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v9 
                = (0x1fU & ((1U & ((IData)(vlSelf->o_ddr3_controller_odelay_data_ld) 
                                   >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)))
                             ? ((IData)(1U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                             : vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                            [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]));
            vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v9 = 1U;
            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v9 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v9 
                = (0x1fU & ((1U & ((IData)(vlSelf->o_ddr3_controller_odelay_dqs_ld) 
                                   >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)))
                             ? ((IData)(1U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein
                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                             : vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein
                            [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]));
            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v9 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v9 
                = (0x1fU & ((1U & ((IData)(vlSelf->o_ddr3_controller_idelay_data_ld) 
                                   >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)))
                             ? ((IData)(1U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                             : vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
                            [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]));
            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v9 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v9 
                = (0x1fU & ((1U & ((IData)(vlSelf->o_ddr3_controller_idelay_dqs_ld) 
                                   >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)))
                             ? ((IData)(1U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                             : vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
                            [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]));
            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v9 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
        }
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs) {
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v8 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value;
            vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v8 = 1U;
            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v8 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value;
        }
        if ((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
             [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])) {
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index 
                = (0x3fU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig) 
                            - (IData)(2U)));
        }
        if (((0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
              [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]) 
             & (0x1fU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev)))) {
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v9 
                = (0x7fU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig) 
                            - (IData)(2U)));
            vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v9 = 1U;
            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v9 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
        }
        if (((((((((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                   | (1U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                  | (2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                 | (3U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                | (4U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
               | (5U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
              | (6U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
             | (7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))) {
            if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if (((IData)(vlSelf->i_ddr3_controller_idelayctrl_rdy) 
                     & (0xdU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address)))) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 1U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0U;
                    vlSelf->__Vdly__o_ddr3_controller_odelay_data_ld = 0xffU;
                    vlSelf->__Vdly__o_ddr3_controller_odelay_dqs_ld = 0xffU;
                    vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld = 0xffU;
                    vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld = 0xffU;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 0U;
                    vlSelf->o_ddr3_controller_leveling_calib = 0U;
                } else if ((0xdU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 1U;
                }
            } else if ((1U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))) {
                    if ((0x78U == (0xffU & (IData)(
                                                   (vlSelf->i_ddr3_controller_iserdes_bitslip_reference 
                                                    >> 
                                                    (0x3fU 
                                                     & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                        << 3U))))))) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 2U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__initial_dqs = 1U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat = 0U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored = 0U;
                    } else {
                        vlSelf->o_ddr3_controller_bitslip 
                            = ((IData)(vlSelf->o_ddr3_controller_bitslip) 
                               | (0xffU & ((IData)(1U) 
                                           << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay = 3U;
                    }
                }
            } else if ((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data))) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 3U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 3U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat = 0U;
                }
            } else if ((3U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data))) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_store 
                        = (((QData)((IData)((0xffU 
                                             & (IData)(
                                                       (vlSelf->i_ddr3_controller_iserdes_dqs 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                            << 3U))))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store 
                                                         >> 8U))));
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat)));
                    if ((4U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat))) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 4U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index = 0U;
                    }
                }
            } else if ((4U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0x154U == ((0x27U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index))
                                 ? (0x3ffU & (IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store 
                                                      >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index))))
                                 : 0U))) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat 
                        = (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index) 
                            == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))
                            ? (1U & ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat)))
                            : 0U);
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__initial_dqs = 0U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat = 0U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 5U;
                    } else {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 2U;
                    }
                } else if ((0x27U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index))) {
                    vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld 
                        = ((IData)(vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld) 
                           | (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 2U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 0xaU;
                    vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld 
                        = ((IData)(vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld) 
                           | (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                } else {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index)));
                }
            } else if ((5U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored) 
                     == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index))) {
                    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v8 
                        = (0xfU & ((3U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                          [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane] 
                                          >> 4U)) + 
                                   (0xdU <= (0xfU & 
                                             vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                             [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]))));
                    vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v8 = 1U;
                    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v8 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 6U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement 
                        = (0xffffU & (0x3c3cU >> (7U 
                                                  & vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                                  [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])));
                } else {
                    vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld 
                        = ((IData)(vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld) 
                           | (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 2U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 0xaU;
                    vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld 
                        = ((IData)(vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld) 
                           | (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                }
            } else if ((6U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))) {
                    if (((0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_bitslip_reference 
                                           >> (0x3fU 
                                               & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                  << 3U))))) 
                         == (0xffU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement)))) {
                        if ((7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                            vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated = 0U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback = 1U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat = 0U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback = 0U;
                            vlSelf->o_ddr3_controller_leveling_calib = 1U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 7U;
                        } else {
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 1U;
                        }
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max 
                            = (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max) 
                                > vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max)
                                : vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                               [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]);
                    } else {
                        vlSelf->o_ddr3_controller_bitslip 
                            = ((IData)(vlSelf->o_ddr3_controller_bitslip) 
                               | (0xffU & ((IData)(1U) 
                                           << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay = 3U;
                    }
                }
            } else if ((0x11U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 1U;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback = 0xdU;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 8U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 1U;
            }
        } else if (((((((((8U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                          | (9U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                         | (0xaU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                        | (0xbU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                       | (0xcU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                      | (0xdU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                     | (0xeU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                    | (0xfU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))) {
            if ((8U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback))) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat 
                        = (((1U & (vlSelf->i_ddr3_controller_iserdes_data[
                                   ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8) 
                                    >> 5U)] >> (0x1fU 
                                                & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8)))) 
                            == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat)))
                            : 0U);
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 0U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback 
                        = (1U & (vlSelf->i_ddr3_controller_iserdes_data[
                                 ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8) 
                                  >> 5U)] >> (0x1fU 
                                              & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8))));
                    if ((5U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat))) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat = 0U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback;
                        if ((1U & ((1U == (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback) 
                                            << 1U) 
                                           | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback))) 
                                   | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_level_fail) 
                                      >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))))) {
                            if ((7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 0U;
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0U;
                                vlSelf->o_ddr3_controller_leveling_calib = 0U;
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 9U;
                            } else {
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
                                    = (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated = 0U;
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback = 1U;
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat = 0U;
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 7U;
                            }
                        } else {
                            vlSelf->__Vdly__o_ddr3_controller_odelay_data_ld 
                                = ((IData)(vlSelf->__Vdly__o_ddr3_controller_odelay_data_ld) 
                                   | (0xffU & ((IData)(1U) 
                                               << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 7U;
                            vlSelf->__Vdly__o_ddr3_controller_odelay_dqs_ld 
                                = ((IData)(vlSelf->__Vdly__o_ddr3_controller_odelay_dqs_ld) 
                                   | (0xffU & ((IData)(1U) 
                                               << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_level_fail 
                                = (((~ ((IData)(1U) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                    & (IData)(vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_level_fail)) 
                                   | (0xffU & (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated) 
                                                & (2U 
                                                   == 
                                                   vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])) 
                                               << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                        }
                    }
                }
            } else if ((9U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if (((0x16U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address)) 
                     & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib)))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] = 0xc1c1c1c1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] = 0xc1c1c1c1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] = 0x51515151U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] = 0x51515151U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] = 0xadadadadU;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] = 0xadadadadU;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] = 0xd0d0d0d0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] = 0xd0d0d0d0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] = 0x8c8c8c8cU;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] = 0x8c8c8c8cU;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] = 0x29292929U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] = 0x29292929U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] = 0x77777777U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] = 0x77777777U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] = 0x91919191U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] = 0x91919191U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xaU;
                }
            } else if ((0xaU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] = 0x3d3d3d3dU;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] = 0x3d3d3d3dU;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] = 0x2c2c2c2cU;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] = 0x2c2c2c2cU;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] = 0xf1f1f1f1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] = 0xf1f1f1f1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] = 0x75757575U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] = 0x75757575U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] = 0xd2d2d2d2U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] = 0xd2d2d2d2U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] = 0xcfcfcfcfU;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] = 0xcfcfcfcfU;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] = 0xdbdbdbdbU;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] = 0xdbdbdbdbU;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] = 0x80808080U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] = 0x80808080U;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xbU;
            } else if ((0xbU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr = 0U;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xcU;
            } else if ((0xcU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((3U == vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                     [0U])) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0U] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0U];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[1U] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[1U];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[2U] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[2U];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[3U] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[3U];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[4U] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[4U];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[5U] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[5U];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[6U] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[6U];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[7U] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[7U];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[8U] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[8U];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[9U] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[9U];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xaU] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xaU];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xbU] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xbU];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xcU] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xcU];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xdU] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xdU];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xeU] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xeU];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xfU] 
                        = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xfU];
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xdU;
                    vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v8 = 1U;
                    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v8 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[0U] = 0xd0ad51c1U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[1U] = 0x9177298cU;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[2U] = 0x75f12c3dU;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[3U] = 0x80dbcfd2U;
                } else if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib)))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 0U;
                }
            } else if ((0xdU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if (((((QData)((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[
                                       (((IData)(0x3fU) 
                                         + vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                         [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]) 
                                        >> 5U)])) << 
                       ((0U == (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]))
                         ? 0x20U : ((IData)(0x40U) 
                                    - (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                       [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])))) 
                      | (((0U == (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                  [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]))
                           ? 0ULL : ((QData)((IData)(
                                                     vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                       [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]) 
                                                      >> 5U)])) 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                            [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])))) 
                         | ((QData)((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[
                                            (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                             [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane] 
                                             >> 5U)])) 
                            >> (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])))) 
                     == (((QData)((IData)((((((0U == 
                                               (0x1fU 
                                                & ((IData)(0x1c0U) 
                                                   + 
                                                   ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                    << 3U))))
                                               ? 0U
                                               : (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x1c0U) 
                                                        + 
                                                        ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                         << 3U)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x1c0U) 
                                                       + 
                                                       ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                        << 3U)))))) 
                                             | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                (0xfU 
                                                 & (((IData)(0x1c0U) 
                                                     + 
                                                     ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                      << 3U)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x1c0U) 
                                                    + 
                                                    ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                     << 3U))))) 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & ((((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x180U) 
                                                         + 
                                                         ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                          << 3U))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x180U) 
                                                           + 
                                                           ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                            << 3U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x180U) 
                                                          + 
                                                          ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                           << 3U)))))) 
                                                   | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                      (0xfU 
                                                       & (((IData)(0x180U) 
                                                           + 
                                                           ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                            << 3U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x180U) 
                                                          + 
                                                          ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                           << 3U))))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & ((((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x140U) 
                                                            + 
                                                            ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                             << 3U))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                        (((IData)(7U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x140U) 
                                                              + 
                                                              ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                               << 3U)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x140U) 
                                                             + 
                                                             ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                              << 3U)))))) 
                                                      | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                         (0xfU 
                                                          & (((IData)(0x140U) 
                                                              + 
                                                              ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                               << 3U)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x140U) 
                                                             + 
                                                             ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                              << 3U))))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x100U) 
                                                             + 
                                                             ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                              << 3U))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                         (((IData)(7U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x100U) 
                                                               + 
                                                               ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                << 3U)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x100U) 
                                                              + 
                                                              ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                               << 3U)))))) 
                                                       | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                          (0xfU 
                                                           & (((IData)(0x100U) 
                                                               + 
                                                               ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                << 3U)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x100U) 
                                                              + 
                                                              ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                               << 3U))))))))))) 
                          << 0x20U) | (QData)((IData)(
                                                      (((((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(0xc0U) 
                                                               + 
                                                               ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                << 3U))))
                                                           ? 0U
                                                           : 
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                           (((IData)(7U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0xc0U) 
                                                                 + 
                                                                 ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                  << 3U)))) 
                                                            >> 5U)] 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(0xc0U) 
                                                                + 
                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                 << 3U)))))) 
                                                         | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                            (0xfU 
                                                             & (((IData)(0xc0U) 
                                                                 + 
                                                                 ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                  << 3U)) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(0xc0U) 
                                                                + 
                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                 << 3U))))) 
                                                        << 0x18U) 
                                                       | ((0xff0000U 
                                                           & ((((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(0x80U) 
                                                                     + 
                                                                     ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                      << 3U))))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                                 (((IData)(7U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(0x80U) 
                                                                       + 
                                                                       ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                        << 3U)))) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(0x80U) 
                                                                      + 
                                                                      ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                       << 3U)))))) 
                                                               | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                                  (0xfU 
                                                                   & (((IData)(0x80U) 
                                                                       + 
                                                                       ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                        << 3U)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(0x80U) 
                                                                      + 
                                                                      ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                       << 3U))))) 
                                                              << 0x10U)) 
                                                          | ((0xff00U 
                                                              & ((((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(0x40U) 
                                                                        + 
                                                                        ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                         << 3U))))
                                                                    ? 0U
                                                                    : 
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                                    (((IData)(7U) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(0x40U) 
                                                                          + 
                                                                          ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                           << 3U)))) 
                                                                     >> 5U)] 
                                                                    << 
                                                                    ((IData)(0x20U) 
                                                                     - 
                                                                     (0x1fU 
                                                                      & ((IData)(0x40U) 
                                                                         + 
                                                                         ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                          << 3U)))))) 
                                                                  | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                                     (0xfU 
                                                                      & (((IData)(0x40U) 
                                                                          + 
                                                                          ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                           << 3U)) 
                                                                         >> 5U))] 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & ((IData)(0x40U) 
                                                                         + 
                                                                         ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                          << 3U))))) 
                                                                 << 8U)) 
                                                             | (0xffU 
                                                                & (((0U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                         << 3U)))
                                                                     ? 0U
                                                                     : 
                                                                    (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                                     (((IData)(7U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                           << 3U))) 
                                                                      >> 5U)] 
                                                                     << 
                                                                     ((IData)(0x20U) 
                                                                      - 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                          << 3U))))) 
                                                                   | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                                      (0xfU 
                                                                       & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                          >> 2U))] 
                                                                      >> 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                          << 3U))))))))))))) {
                    if ((7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x10U;
                    } else {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v9 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v9 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                    }
                } else {
                    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v10 
                        = (0x7fU & ((IData)(8U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                    [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]));
                    vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v10 = 1U;
                    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v10 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    if ((0x38U == vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                         [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])) {
                        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v11 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v11 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check = 0U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xeU;
                    }
                }
            } else if ((0xeU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if (((0xffffU & (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data 
                                         >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check)))) 
                     == (0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[0U]))) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xfU;
                    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v9 
                        = (0xfU & ((3U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                          [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane] 
                                          >> 4U)) + 
                                   (0xdU <= (0xfU & 
                                             vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                             [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]))));
                    vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v9 = 1U;
                    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v9 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement 
                        = (0xffffU & (0x3c3cU >> (7U 
                                                  & vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                                  [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])));
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xfU;
                } else {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check 
                        = (0x3fU & ((IData)(0x10U) 
                                    + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check)));
                    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v10 
                        = (0x7fU & ((IData)(2U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                    [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]));
                    vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v10 = 1U;
                    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v10 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                }
            } else if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))) {
                if (((0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_bitslip_reference 
                                       >> (0x3fU & 
                                           ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                            << 3U))))) 
                     == (0xffU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement)))) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max 
                        = (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max) 
                            > vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                            [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                            ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max)
                            : vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                           [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]);
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 9U;
                } else {
                    vlSelf->o_ddr3_controller_bitslip 
                        = ((IData)(vlSelf->o_ddr3_controller_bitslip) 
                           | (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay = 3U;
                }
            }
        } else if (((((((((0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                          | (0x11U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                         | (0x12U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                        | (0x13U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                       | (0x14U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                      | (0x15U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                     | (0x16U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                    | (0x17U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))) {
            if ((0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib)))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux = 2U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr 
                        = (0xffffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter);
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                        = ((IData)(1U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter);
                    if ((0xffffffU == (0xffffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x11U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we = 0U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_test_address_counter = 0U;
                    }
                }
            } else if ((0x11U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib)))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 0x40U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux = 2U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr 
                        = (0xffffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter);
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    if ((0x1fffffU == (0xffffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] = 1U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] = 0U;
                    }
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                        = ((IData)(1U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter);
                    if ((0x3fffffU == (0xffffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x12U;
                    }
                }
            } else if ((0x12U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib)))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux = 3U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__read_test_address_counter;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_test_address_counter 
                        = (0xffffffU & ((IData)(1U) 
                                        + vlSelf->main__DOT__ddr3_controller_inst__DOT__read_test_address_counter));
                    if ((0x3fffffU == vlSelf->main__DOT__ddr3_controller_inst__DOT__read_test_address_counter)) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x13U;
                    }
                }
            } else if ((0x13U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib)))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 0x40U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux = 2U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr 
                        = ((0xfffc00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                         << 0xaU)) 
                           | (0x3ffU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                        >> 0xeU)));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    if ((0x5fffffU == (0xffffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] = 1U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] = 0U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] = 0U;
                    }
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                        = ((IData)(1U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter);
                    if ((0x7fffffU == (0xffffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x14U;
                    }
                }
            } else if ((0x14U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib)))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux = 3U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr 
                        = ((0xfffc00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_test_address_counter 
                                         << 0xaU)) 
                           | (0x3ffU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_test_address_counter 
                                        >> 0xeU)));
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_test_address_counter 
                        = (0xffffffU & ((IData)(1U) 
                                        + vlSelf->main__DOT__ddr3_controller_inst__DOT__read_test_address_counter));
                    if ((0x7fffffU == vlSelf->main__DOT__ddr3_controller_inst__DOT__read_test_address_counter)) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x15U;
                    }
                }
            } else if ((0x15U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib)))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 0x40U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux 
                        = (0xffU & ((IData)(4U) + (1U 
                                                   & vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter)));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we 
                        = (1U & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr 
                        = (0x7fffffU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                        >> 1U));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[1U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[2U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[3U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[4U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[5U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[6U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[7U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[8U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[9U]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xaU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xbU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xcU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xdU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xeU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] 
                        = ((0xffff0000U & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU]) 
                           | ((0xff00U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                          << 8U)) | 
                              (0xffU & (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter))));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU] 
                        = ((0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data[0xfU]) 
                           | (0xffff0000U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & ((~ vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter) 
                                                   << 0x10U)))));
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
                        = ((IData)(1U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter);
                    if ((0xffffffffU == vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter)) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay = 0xfU;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x16U;
                    }
                }
            } else if ((0x16U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb = 0U;
                if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x17U;
                }
            } else {
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x17U;
            }
        }
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_lane_data 
            = (((QData)((IData)((((((0U == (0x1fU & 
                                            ((IData)(0x1c0U) 
                                             + ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                << 3U))))
                                     ? 0U : (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                             (((IData)(7U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x1c0U) 
                                                     + 
                                                     ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                      << 3U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x1c0U) 
                                                     + 
                                                     ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                      << 3U)))))) 
                                   | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                      (0xfU & (((IData)(0x1c0U) 
                                                + ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                   << 3U)) 
                                               >> 5U))] 
                                      >> (0x1fU & ((IData)(0x1c0U) 
                                                   + 
                                                   ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                    << 3U))))) 
                                  << 0x18U) | ((0xff0000U 
                                                & ((((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x180U) 
                                                          + 
                                                          ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                           << 3U))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                      (((IData)(7U) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x180U) 
                                                            + 
                                                            ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                             << 3U)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x180U) 
                                                           + 
                                                           ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                            << 3U)))))) 
                                                    | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                       (0xfU 
                                                        & (((IData)(0x180U) 
                                                            + 
                                                            ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                             << 3U)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x180U) 
                                                           + 
                                                           ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                            << 3U))))) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & ((((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x140U) 
                                                             + 
                                                             ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                              << 3U))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                         (((IData)(7U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x140U) 
                                                               + 
                                                               ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                << 3U)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x140U) 
                                                              + 
                                                              ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                               << 3U)))))) 
                                                       | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                          (0xfU 
                                                           & (((IData)(0x140U) 
                                                               + 
                                                               ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                << 3U)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x140U) 
                                                              + 
                                                              ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                               << 3U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x100U) 
                                                              + 
                                                              ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                               << 3U))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x100U) 
                                                                + 
                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                 << 3U)))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x100U) 
                                                               + 
                                                               ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                << 3U)))))) 
                                                        | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                           (0xfU 
                                                            & (((IData)(0x100U) 
                                                                + 
                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                 << 3U)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x100U) 
                                                               + 
                                                               ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                << 3U))))))))))) 
                << 0x20U) | (QData)((IData)((((((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     + 
                                                     ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                      << 3U))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0xc0U) 
                                                       + 
                                                       ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                        << 3U)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      + 
                                                      ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                       << 3U)))))) 
                                               | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                  (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       + 
                                                       ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                        << 3U)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      + 
                                                      ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                       << 3U))))) 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & ((((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x80U) 
                                                           + 
                                                           ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                            << 3U))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                       (((IData)(7U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x80U) 
                                                             + 
                                                             ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                              << 3U)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x80U) 
                                                            + 
                                                            ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                             << 3U)))))) 
                                                     | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                        (0xfU 
                                                         & (((IData)(0x80U) 
                                                             + 
                                                             ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                              << 3U)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x80U) 
                                                            + 
                                                            ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                             << 3U))))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & ((((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x40U) 
                                                              + 
                                                              ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                               << 3U))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(0x40U) 
                                                                + 
                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                 << 3U)))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x40U) 
                                                               + 
                                                               ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                << 3U)))))) 
                                                        | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                           (0xfU 
                                                            & (((IData)(0x40U) 
                                                                + 
                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                 << 3U)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x40U) 
                                                               + 
                                                               ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                << 3U))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                               << 3U)))
                                                           ? 0U
                                                           : 
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                           (((IData)(7U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                 << 3U))) 
                                                            >> 5U)] 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                << 3U))))) 
                                                         | (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[
                                                            (0xfU 
                                                             & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                >> 2U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                << 3U)))))))))));
        if ((0x1fU == vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
             [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])) {
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated = 1U;
        }
        if ((0x13U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 1U;
            if ((((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending)) 
                  & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending))) 
                 & (((IData)(vlSelf->main__DOT__wbwide_ddr3_controller_stall) 
                     & (0x17U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                    | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib) 
                       & (0x17U != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
            }
        }
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d;
            vlSelf->main__DOT__wbwide_ddr3_controller_stall 
                = ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d) 
                   | (0x17U != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)));
            if ((1U & (~ (vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                          >> 0x1bU)))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib = 1U;
                vlSelf->main__DOT__wbwide_ddr3_controller_stall = 1U;
            }
        }
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__repeat_test) {
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x10U;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_test_address_counter = 0U;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_test_address_counter = 0U;
        }
    }
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__nxt_wrptr 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)));
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword 
        = vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__compression_tbl
        [vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr];
    if (((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb) 
         & (~ (IData)((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))))) {
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word 
            = vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word;
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len 
            = (0x3ffU & ((1U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                        >> 0x22U)))
                          ? ((IData)(9U) + ((0x1c0U 
                                             & ((IData)(
                                                        (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                         >> 0x1fU)) 
                                                << 6U)) 
                                            | (0x3fU 
                                               & (IData)(
                                                         (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                          >> 0x18U)))))
                          : ((IData)(1U) + (7U & (IData)(
                                                         (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                          >> 0x1fU))))));
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr 
            = (0xffU & ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr) 
                        - ((0xc0U & ((IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                              >> 0x1fU)) 
                                     << 6U)) | (0x3fU 
                                                & (IData)(
                                                          (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                           >> 0x18U))))));
    }
    if ((0U == (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state))) {
        vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc 
            = (1U & (IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                             >> 0x1eU)));
        vlSelf->main__DOT__wbu_we = (1U & (~ (IData)(
                                                     (vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                                      >> 0x23U))));
    }
    vlSelf->main__DOT__wbu_idata = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__mgrant)
                                     ? vlSelf->main__DOT__wbu_xbar__DOT__s_data
                                    [vlSelf->main__DOT__wbu_xbar__DOT__mindex
                                    [0U]] : 0U);
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__nxt_wrptr 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)));
    vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
           | (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched)) 
               & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match))))) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd 
            = (7U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr) 
                     - (IData)(2U)));
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld 
            = (0x3ffU & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr) 
                         - (IData)(0xaU)));
    }
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch 
        = ((~ (((IData)(vlSelf->main__DOT__genbus__DOT__r_wdt_reset) 
                | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb)))) 
               | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch)))) 
           & (2U == (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr)));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch 
        = ((~ (((IData)(vlSelf->main__DOT__genbus__DOT__r_wdt_reset) 
                | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb)))) 
               | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch)))) 
           & (0xbU > (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr)));
    if ((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)))) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word 
            = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword;
    }
    vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0U] 
        = vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__wbu_cyc))) 
               | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->main__DOT__wbu_xbar__DOT__mfull = 0U;
    } else if ((1U == ((((IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        vlSelf->main__DOT__wbu_xbar__DOT__mfull = 0U;
    } else if ((2U == ((((IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        vlSelf->main__DOT__wbu_xbar__DOT__mfull = vlSelf->main__DOT__wbu_xbar__DOT__mnearfull;
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel 
        = ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))
            ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))
                ? (((QData)((IData)((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel)))) 
                    << 0x3fU) | (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel 
                                 >> 1U)) : (((QData)((IData)(
                                                             (3U 
                                                              & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel)))) 
                                             << 0x3eU) 
                                            | (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel 
                                               >> 2U)))
            : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))
                ? (((QData)((IData)((0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel)))) 
                    << 0x3cU) | (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel 
                                 >> 4U)) : 0xffffffffffffffffULL));
    if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel;
    }
    if (vlSelf->main__DOT__wbwide_wbdown_stall) {
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wb32_wbdown_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))))) {
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel;
        }
    } else {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
            = ((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb))
                ? (((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))
                : 0ULL);
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc)
            ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup
            : vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup);
    if ((1U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant))) {
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_stall)))) {
            vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                = ((0xfffffffc0000000ULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr) 
                   | (IData)((IData)(((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                       [0U]) ? vlSelf->main__DOT__wbu_xbar__DOT__m_addr
                                      [vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                      [0U]] : 0U))));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
            = (0xfffffffc0000000ULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr);
    }
    if ((2U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_stall) 
                      >> 1U)))) {
            vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                = ((0x3fffffffULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                        [1U]) ? vlSelf->main__DOT__wbu_xbar__DOT__m_addr
                                       [vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                       [1U]] : 0U))) 
                      << 0x1eU));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
            = (0x3fffffffULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr);
    }
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err 
        = ((((~ (IData)(vlSelf->i_reset)) & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc)) 
            & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc)) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
              >> 3U));
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__rx_valid)) 
                      | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full))))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid 
            = (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last) 
                | (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready)) 
                   & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last))) 
               | (0U != (3U & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill) 
                               >> 6U))));
    }
    vlSelf->cpu_sim_ack = ((IData)(vlSelf->cpu_sim_cyc) 
                           & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack));
    vlSelf->main__DOT__swic__DOT__dbg_ack = ((~ ((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
                                                 | (~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_cyc)))) 
                                             & ((IData)(vlSelf->main__DOT__swic__DOT__dbg_pre_ack) 
                                                | (IData)(vlSelf->main__DOT__swic__DOT__cmd_read_ack)));
    vlSelf->main__DOT__swic__DOT__ctri_int = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie) 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any)));
    vlSelf->main__DOT__swic__DOT__tma_int = ((~ (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                                                  | (IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write)) 
                                                 | (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt))) 
                                             & (1U 
                                                == vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value));
    vlSelf->main__DOT__swic__DOT__tmb_int = ((~ (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                                                  | (IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write)) 
                                                 | (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt))) 
                                             & (1U 
                                                == vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value));
    vlSelf->main__DOT__swic__DOT__tmc_int = ((~ (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                                                  | (IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write)) 
                                                 | (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt))) 
                                             & (1U 
                                                == vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbwide_i2cm_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending;
    vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending;
    vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending;
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc))) 
               | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    } else if ((1U == ((2U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                               & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall))) 
                              << 1U)) | (1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    } else if ((2U == ((2U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                               & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall))) 
                              << 1U)) | (1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = ((0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull)) 
               | (1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull)));
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                               >> 1U))) 
               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                  >> 1U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    } else if ((1U == ((2U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                              & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                     >> 1U)) << 1U))) 
                       | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    } else if ((2U == ((2U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                              & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                     >> 1U)) << 1U))) 
                       | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = ((0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull)) 
               | (2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull)));
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                               >> 2U))) 
               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                  >> 2U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    } else if ((1U == ((2U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                               >> 1U) & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                             >> 2U)) 
                                         << 1U))) | 
                       (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                              >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    } else if ((2U == ((2U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                               >> 1U) & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                             >> 2U)) 
                                         << 1U))) | 
                       (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                              >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = ((0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull)) 
               | (4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull)));
    }
    vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0U] 
        = vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    if ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) {
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall)))) {
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
                = ((6U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe)) 
                   | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_we) 
                            >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                            [0U])));
            if ((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_we) 
                       >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                       [0U]))) {
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][0U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[1U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][1U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[2U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][2U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[3U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][3U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[4U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][4U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[5U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][5U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[6U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][6U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[7U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][7U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[8U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][8U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[9U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][9U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xaU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][0xaU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xbU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][0xbU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xcU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][0xcU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xdU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][0xdU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xeU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][0xeU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xfU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [0U]][0xfU];
            } else {
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[1U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[2U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[3U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[4U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[5U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[6U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[7U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[8U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[9U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xaU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xbU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xcU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xdU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xeU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xfU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
                = ((0xfe000000U & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U]) 
                   | vlSelf->main__DOT__wbwide_xbar__DOT__m_addr
                   [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                   [0U]]);
        }
    } else {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
            = (6U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe));
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[1U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[2U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[3U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[4U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[5U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[6U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[7U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[8U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[9U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xaU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xbU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xcU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xdU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xeU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xfU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
            = (0xfe000000U & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U]);
    }
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall) 
                      >> 1U)))) {
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
                = ((5U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe)) 
                   | (2U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_we) 
                             >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                             [1U]) << 1U)));
            if ((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_we) 
                       >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                       [1U]))) {
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x10U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][0U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x11U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][1U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x12U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][2U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x13U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][3U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x14U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][4U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x15U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][5U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x16U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][6U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x17U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][7U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x18U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][8U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x19U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][9U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1aU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][0xaU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1bU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][0xbU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1cU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][0xcU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1dU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][0xdU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1eU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][0xeU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1fU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [1U]][0xfU];
            } else {
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x10U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x11U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x12U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x13U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x14U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x15U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x16U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x17U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x18U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x19U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1aU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1bU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1cU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1dU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1eU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1fU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
                = ((0x1ffffffU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U]) 
                   | (vlSelf->main__DOT__wbwide_xbar__DOT__m_addr
                      [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                      [1U]] << 0x19U));
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                = ((0xfffc0000U & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U]) 
                   | (vlSelf->main__DOT__wbwide_xbar__DOT__m_addr
                      [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                      [1U]] >> 7U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
            = (5U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe));
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x10U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x11U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x12U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x13U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x14U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x15U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x16U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x17U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x18U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x19U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1aU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1bU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1cU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1dU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1eU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1fU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
            = (0x1ffffffU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U]);
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
            = (0xfffc0000U & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U]);
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
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
    }
    if ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) {
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall)))) {
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U] 
                = (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel
                          [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                          [0U]]);
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U] 
                = (IData)((vlSelf->main__DOT__wbwide_xbar__DOT__m_sel
                           [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                           [0U]] >> 0x20U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U] = 0U;
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U] = 0U;
    }
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall) 
                      >> 1U)))) {
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U] 
                = (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel
                          [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                          [1U]]);
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U] 
                = (IData)((vlSelf->main__DOT__wbwide_xbar__DOT__m_sel
                           [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                           [1U]] >> 0x20U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U] = 0U;
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U] = 0U;
    }
    if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall) 
                      >> 2U)))) {
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
                = ((3U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe)) 
                   | (4U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_we) 
                             >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                             [2U]) << 2U)));
            if ((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_we) 
                       >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                       [2U]))) {
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x20U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][0U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x21U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][1U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x22U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][2U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x23U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][3U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x24U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][4U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x25U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][5U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x26U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][6U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x27U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][7U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x28U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][8U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x29U] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][9U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2aU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][0xaU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2bU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][0xbU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2cU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][0xcU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2dU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][0xdU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2eU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][0xeU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2fU] 
                    = vlSelf->main__DOT__wbwide_xbar__DOT__m_data
                    [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                    [2U]][0xfU];
            } else {
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x20U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x21U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x22U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x23U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x24U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x25U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x26U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x27U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x28U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x29U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2aU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2bU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2cU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2dU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2eU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2fU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                = ((0x3ffffU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U]) 
                   | (vlSelf->main__DOT__wbwide_xbar__DOT__m_addr
                      [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                      [2U]] << 0x12U));
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                = (0x7ffU & (vlSelf->main__DOT__wbwide_xbar__DOT__m_addr
                             [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                             [2U]] >> 0xeU));
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[4U] 
                = (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel
                          [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                          [2U]]);
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[5U] 
                = (IData)((vlSelf->main__DOT__wbwide_xbar__DOT__m_sel
                           [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                           [2U]] >> 0x20U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
            = (3U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe));
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x20U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x21U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x22U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x23U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x24U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x25U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x26U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x27U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x28U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x29U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2aU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2bU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2cU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2dU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2eU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2fU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
            = (0x3ffffU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U]);
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] = 0U;
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[4U] = 0U;
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[5U] = 0U;
    }
    if (vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) {
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
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    if (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled = 0U;
    } else if ((0x3ffU == (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr))) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled = 1U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__request[1U] 
        = (((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
            & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid))
            ? (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded)
            : 0U);
    vlSelf->main__DOT__i2cscopei__DOT__this_addr = 
        (0x3ffU & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__read_from_data)
                    ? ((IData)(1U) + ((IData)(vlSelf->main__DOT__i2cscopei__DOT__raddr) 
                                      + (IData)(vlSelf->main__DOT__i2cscopei__DOT__waddr)))
                    : ((IData)(vlSelf->main__DOT__i2cscopei__DOT__raddr) 
                       + (IData)(vlSelf->main__DOT__i2cscopei__DOT__waddr))));
    vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr 
        = (0x3ffU & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data)
                      ? ((IData)(1U) + ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr) 
                                        + (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr)))
                      : ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr) 
                         + (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr))));
    vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr 
        = (0x3ffU & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data)
                      ? ((IData)(1U) + ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr) 
                                        + (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr)))
                      : ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr) 
                         + (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr))));
    vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr 
        = (0x3ffU & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data)
                      ? ((IData)(1U) + ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr) 
                                        + (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr)))
                      : ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr) 
                         + (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_he857573c__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
    if (((IData)(vlSelf->main__DOT__wb32_sirefclk_stb) 
         & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
            >> 8U))) {
        if ((1U & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                           >> 0x20U)))) {
            vlSelf->main__DOT__r_sirefclk_data = ((0x3fffff00U 
                                                   & vlSelf->main__DOT__r_sirefclk_data) 
                                                  | (0xffU 
                                                     & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]));
        }
        if ((1U & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                           >> 0x21U)))) {
            vlSelf->main__DOT__r_sirefclk_data = ((0x3fff00ffU 
                                                   & vlSelf->main__DOT__r_sirefclk_data) 
                                                  | (0xff00U 
                                                     & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]));
        }
        if ((1U & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                           >> 0x22U)))) {
            vlSelf->main__DOT__r_sirefclk_data = ((0x3f00ffffU 
                                                   & vlSelf->main__DOT__r_sirefclk_data) 
                                                  | (0xff0000U 
                                                     & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]));
        }
        if ((1U & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                           >> 0x23U)))) {
            vlSelf->main__DOT__r_sirefclk_data = ((0xffffffU 
                                                   & vlSelf->main__DOT__r_sirefclk_data) 
                                                  | (0x3f000000U 
                                                     & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]));
        }
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr 
        = ((~ (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full)) 
           & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
              & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb)));
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
    vlSelf->main__DOT__wbu_wbu_arbiter_stall = ((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb) 
                                                & ((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full) 
                                                   | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb)) 
               | (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
            = (((QData)((IData)((1U & (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                       >> 2U)))) << 0x24U) 
               | (0xfffffffffULL & (((QData)((IData)(
                                                     vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))));
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
         & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr 
            = (7U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr) 
                     >> 3U));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask 
        = ((~ ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache))) 
           & ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack)) 
               & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack)) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload 
        = ((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc))) 
           & ((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance) 
                  & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal)))) 
              & (((0U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay)) 
                  & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last))) 
                 & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid)) 
                    | ((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                     >> 9U)) != vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache)))));
    vlSelf->o_sirefclk_ce = vlSelf->main__DOT__r_sirefclk_en;
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_abort))) {
        vlSelf->main__DOT__i2ci__DOT__insn_valid = 0U;
    } else if (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual) 
                | (IData)(vlSelf->main__DOT__i2ci__DOT__bus_manual))) {
        vlSelf->main__DOT__i2ci__DOT__insn_valid = 0U;
    } else if (vlSelf->main__DOT__i2ci__DOT__next_valid) {
        vlSelf->main__DOT__i2ci__DOT__insn_valid = 
            ((IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle) 
             | ((3U != (0xfU & ((IData)(vlSelf->main__DOT__i2ci__DOT__next_insn) 
                                >> 4U))) & (0xdU != 
                                            (0xfU & 
                                             ((IData)(vlSelf->main__DOT__i2ci__DOT__next_insn) 
                                              >> 4U)))));
    } else if (((((~ (IData)(vlSelf->main__DOT__i2ci__DOT__half_valid)) 
                  | (3U == (IData)(vlSelf->main__DOT__i2ci__DOT__half_insn))) 
                 | (0xdU == (IData)(vlSelf->main__DOT__i2ci__DOT__half_insn))) 
                & (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready))) {
        vlSelf->main__DOT__i2ci__DOT__insn_valid = 0U;
    }
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_waddr_plus_one 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)));
    vlSelf->main__DOT__console__DOT__tx_uart_reset 
        = (((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
              >> 6U) & (IData)(((0U == (0x30000U & 
                                        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                                & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                   >> 0x18U)))) & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                   >> 6U)) 
           | (((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                         >> 6U) & (0x30000U == (0x30000U 
                                                & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])))) 
               & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                  >> 6U)) & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U] 
                              >> 0xcU) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x19U)))));
    vlSelf->main__DOT__wbu_rx_stb = (((IData)(vlSelf->main__DOT__rcv__DOT__zero_baud_counter) 
                                      & (8U == (IData)(vlSelf->main__DOT__rcv__DOT__state))) 
                                     & (IData)(vlSelf->main__DOT__rcv__DOT__ck_uart));
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write 
        = ((IData)(vlSelf->main__DOT__w_console_rx_stb) 
           & ((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow)) 
              | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_read)));
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_waddr_plus_one 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)));
    vlSelf->main__DOT__console__DOT__rx_uart_reset = 0U;
    if ((0x40U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                  & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))) {
        if ((IData)(((0U == (0x30000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                     & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                        >> 0x18U)))) {
            vlSelf->main__DOT__console__DOT__rx_uart_reset = 1U;
        }
        if (((IData)(((0x20000U == (0x30000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                      & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                         >> 0x19U))) & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U] 
                                        >> 0xcU))) {
            vlSelf->main__DOT__console__DOT__rx_uart_reset = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__i2c_valid)) 
               | (IData)(vlSelf->main__DOT__i2c_ready)))) {
        vlSelf->main__DOT__i2c_data = vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg;
        vlSelf->main__DOT__i2c_last = vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte;
    }
    vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset 
        = ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__i2ci__DOT__r_halted));
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc = 0x4000000U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc 
            = (0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl);
    } else if ((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase))) 
                & ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid) 
                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal))) 
                   | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid 
        = ((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy))) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock)) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal)));
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim = 0U;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu 
            = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid) 
               & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU) 
                  | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal)));
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
                | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu = 0U;
    }
    vlSelf->main__DOT__swic__DOT__dbg_pre_addr = (3U 
                                                  & ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                                     >> 5U));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
        [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))];
    if ((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc;
    } else if ((0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg 
            = ((0xffff0000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg) 
               | ((0x10U & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))
                   ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags)
                   : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg 
            = (0xeb800000U | (0x7fffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg 
            = ((0xffffffdfU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg) 
               | (0x20U & ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                           << 1U)));
    }
    vlSelf->main__DOT__swic__DOT__dbg_cpu_status = 
        ((((IData)(vlSelf->main__DOT__gpio_int) << 0x1bU) 
          | (((IData)(vlSelf->main__DOT__scope3_ddr3_int) 
              << 0x1aU) | (((IData)(vlSelf->main__DOT__i2cscope_int) 
                            << 0x19U) | ((0x1000000U 
                                          & ((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)) 
                                                << 0x17U)) 
                                            | (((IData)(vlSelf->main__DOT__scope2_ddr3_int) 
                                                << 0x16U) 
                                               | (((IData)(vlSelf->main__DOT__scope1_ddr3_int) 
                                                   << 0x15U) 
                                                  | ((IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h29ee39ef__0) 
                                                     << 0xcU)))))))) 
         | (((IData)(vlSelf->main__DOT__swic__DOT__cpu_break) 
             << 0xbU) | (((IData)(vlSelf->main__DOT__swic__DOT__pic_interrupt) 
                          << 0xaU) | ((0x300U & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                                 << 8U)) 
                                      | (((IData)(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch) 
                                          << 5U) | 
                                         (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                                           << 3U) | 
                                          ((2U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt))))))));
    vlSelf->main__DOT__swic__DOT__sys_idata = ((4U 
                                                & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                                     ? vlSelf->main__DOT__swic__DOT__pic_data
                                                     : vlSelf->main__DOT__swic__DOT__dmac_data)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                                        ? vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data
                                                        : vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                                        ? vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data
                                                        : vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                                        ? vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data
                                                        : vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                                        ? vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data
                                                        : vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                                       ? vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter
                                                       : 
                                                      (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                                        << 0x1fU) 
                                                       | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                                       ? 
                                                      (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                                        << 0x1fU) 
                                                       | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)
                                                       : 
                                                      (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                                        << 0x1fU) 
                                                       | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                                     ? vlSelf->main__DOT__swic__DOT__ctri_data
                                                     : vlSelf->main__DOT__swic__DOT__r_wdbus_data)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                                     ? vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value
                                                     : 0U)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce));
    if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
         | ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem)) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))) 
            & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_stalled))))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal)));
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid = 0U;
    } else {
        if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase;
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
                    | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase = 0U;
        }
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem 
                = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal))) 
                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal 
                = ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid) 
                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp))) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch))) 
                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase) 
                   & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR)) 
                      | (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                            >> 5U))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid) 
                   | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch));
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
                    | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem = 0U;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid = 0U;
        }
    }
    if (((IData)(vlSelf->main__DOT__u_fan__DOT__i2cd_valid) 
         & (IData)(vlSelf->main__DOT__u_fan__DOT__i2cd_last))) {
        vlSelf->main__DOT__u_fan__DOT__temp_data = 
            ((vlSelf->main__DOT__u_fan__DOT__temp_tmp 
              << 8U) | (IData)(vlSelf->main__DOT__u_fan__DOT__i2cd_data));
    }
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request = 0U;
    } else if (((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) 
                  & (0U == (0x3000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]))) 
                 & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U] 
                    >> 0x16U)) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                          >> 0x1eU)))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request = 1U;
    }
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda 
        = ((IData)(vlSelf->i_reset) | ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual)
                                        ? (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda)
                                        : (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl 
        = ((IData)(vlSelf->i_reset) | ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual)
                                        ? (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl)
                                        : (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl)));
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
    if (((((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__r_reset)) 
          | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__bus_err)) 
         | ((IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc) 
            & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->__Vdly__main__DOT__wbwide_i2cdma_cyc = 0U;
        vlSelf->main__DOT__wbwide_i2cdma_stb = 0U;
    } else if (vlSelf->main__DOT__wbwide_i2cdma_cyc) {
        if ((1U & (~ (IData)(vlSelf->__VdfgTmp_h503d14d1__0)))) {
            vlSelf->main__DOT__wbwide_i2cdma_stb = 0U;
        }
        if ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))) {
            vlSelf->__Vdly__main__DOT__wbwide_i2cdma_cyc = 0U;
        }
    } else if (vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) {
        if (((IData)(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow) 
             & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__wb_last)))) {
            vlSelf->__Vdly__main__DOT__wbwide_i2cdma_cyc = 0U;
            vlSelf->main__DOT__wbwide_i2cdma_stb = 0U;
        } else {
            vlSelf->__Vdly__main__DOT__wbwide_i2cdma_cyc = 1U;
            vlSelf->main__DOT__wbwide_i2cdma_stb = 1U;
        }
    }
    if (vlSelf->main__DOT__u_i2cdma__DOT__r_reset) {
        vlSelf->main__DOT__u_i2cdma__DOT__wb_last = 1U;
    } else if (((IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
                & (IData)(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready))) {
        vlSelf->main__DOT__u_i2cdma__DOT__wb_last = 
            (1U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                   >> 8U));
    }
    vlSelf->main__DOT__console__DOT____VdfgTmp_h60af6732__0 
        = (1U & ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)) 
                 | (IData)(vlSelf->main__DOT__w_console_busy)));
    vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6 
        = (1U & ((~ (IData)(vlSelf->main__DOT__w_console_busy)) 
                 & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow))));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__ps_full) 
           & (IData)(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
    if (vlSelf->__Vdlyvset__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__compression_tbl__v0) {
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__compression_tbl[vlSelf->__Vdlyvdim0__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__compression_tbl__v0] 
            = vlSelf->__Vdlyvval__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__compression_tbl__v0;
    }
    vlSelf->main__DOT__wbu_xbar__DOT__s_data[0U] = 
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU];
    vlSelf->main__DOT__wbu_xbar__DOT__s_data[1U] = vlSelf->main__DOT__wbu_zip_idata;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched;
    vlSelf->main__DOT__wbu_xbar__DOT__mnearfull = vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__mnearfull;
    vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0U] = vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc 
        = vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last;
    vlSelf->main__DOT__swic__DOT__cmd_read_ack = vlSelf->__Vdly__main__DOT__swic__DOT__cmd_read_ack;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    if ((1U & (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                               >> 3U))) 
               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                  >> 3U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    } else if ((1U == (((IData)((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                                  >> 3U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                               >> 3U)))) 
                        << 1U) | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                        >> 3U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull));
    } else if ((2U == (((IData)((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                                  >> 3U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                               >> 3U)))) 
                        << 1U) | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                        >> 3U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mfull 
            = ((7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull)) 
               | (8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull)));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull 
        = vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull;
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc))) 
               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__mfull = 0U;
    } else if ((1U == ((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__mfull = 0U;
    } else if ((2U == ((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__mfull = vlSelf->main__DOT__wb32_xbar__DOT__mnearfull;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__mnearfull = vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__mnearfull;
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
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid = 0U;
    } else {
        if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) 
              & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid)) 
                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal))) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable = 0U;
        } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable = 0U;
        } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable 
                = (((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem) 
                      & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB)) 
                     & (7U != (7U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB) 
                                     >> 1U)))) & (7U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA) 
                                                      >> 1U)))) 
                   & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                      | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB) 
                         != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA))));
        }
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid 
                = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid) 
                    | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                   & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp)));
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_stalled)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid = 0U;
        }
    }
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
    vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig;
    vlSelf->o_ddr3_controller_odelay_data_ld = vlSelf->__Vdly__o_ddr3_controller_odelay_data_ld;
    vlSelf->o_ddr3_controller_odelay_dqs_ld = vlSelf->__Vdly__o_ddr3_controller_odelay_dqs_ld;
    vlSelf->o_ddr3_controller_idelay_data_ld = vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld;
    vlSelf->o_ddr3_controller_idelay_dqs_ld = vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane_times_8;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__initial_dqs;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[1U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[1U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[2U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[2U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[3U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[3U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[4U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[4U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[5U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[5U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[6U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[6U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[7U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[7U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[8U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[8U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[9U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[9U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xaU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xaU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xbU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xbU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xcU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xcU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xdU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xdU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xeU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xeU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0xfU] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store[0xfU];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[0U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[0U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[1U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[1U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[2U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[2U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[3U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[3U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_lane_data;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_level_fail 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_level_fail;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_test_address_counter 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_test_address_counter;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_test_address_counter;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_store;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored;
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
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__instruction_address;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__lane 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane;
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v0) {
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
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v16) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v16;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v17) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v17;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v18) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v18;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v19) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v19;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v20) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v20;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v21) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v21;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v22) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v22;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v23) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v23;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v24) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v24;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v25) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v25;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v26) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xaU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v26;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v27) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xbU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v27;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v28) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xcU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v28;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v29) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xdU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v29;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v30) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xeU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v30;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v31) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xfU] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[vlSelf->__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v32] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v32;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v33) {
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
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data;
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[7U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[7U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[7U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[1U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[2U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[3U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[4U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[5U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[6U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[7U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[7U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[1U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[2U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[3U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[4U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[5U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[6U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[7U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v8] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v8;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v9) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v9] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v9;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v8] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v8;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v9) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v9] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v9;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v10) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v10] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v10;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v8] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v9) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v9] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v10) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v10] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v10;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v11) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v11] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v8] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v8;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v8] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v8;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v8] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v8;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v8] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v8;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v9) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v9] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v9;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v9] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v9;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v9] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v9;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v9] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v9;
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending;
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
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr;
    vlSelf->main__DOT__i2cscopei__DOT__raddr = vlSelf->__Vdly__main__DOT__i2cscopei__DOT__raddr;
    vlSelf->main__DOT__i2cscopei__DOT__waddr = vlSelf->__Vdly__main__DOT__i2cscopei__DOT__waddr;
    vlSelf->main__DOT__scope3_ddr3i__DOT__raddr = vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__raddr;
    vlSelf->main__DOT__scope3_ddr3i__DOT__waddr = vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__waddr;
    vlSelf->main__DOT__scope2_ddr3i__DOT__raddr = vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__raddr;
    vlSelf->main__DOT__scope2_ddr3i__DOT__waddr = vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__waddr;
    vlSelf->main__DOT__scope1_ddr3i__DOT__raddr = vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__raddr;
    vlSelf->main__DOT__scope1_ddr3i__DOT__waddr = vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__waddr;
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay;
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel = 0U;
        vlSelf->main__DOT__swic__DOT__jif_int = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel = 0xffffffffffffffffULL;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state = 0U;
    } else {
        if (((((IData)(vlSelf->main__DOT__swic__DOT__dmac_stb) 
               & (IData)(vlSelf->main__DOT__swic__DOT__sys_we)) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request))) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)))) {
            if ((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__sys_addr)))) {
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc 
                        = (1U & (~ (vlSelf->main__DOT__swic__DOT__sys_data 
                                    >> 0x12U)));
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger 
                        = (1U & (vlSelf->main__DOT__swic__DOT__sys_data 
                                 >> 0x1dU));
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel 
                        = (0x1fU & (vlSelf->main__DOT__swic__DOT__sys_data 
                                    >> 0x18U));
                }
            }
        }
        vlSelf->main__DOT__swic__DOT__jif_int = 0U;
        if ((((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
              & (IData)(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set)) 
             & (vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter 
                == vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when))) {
            vlSelf->main__DOT__swic__DOT__jif_int = 1U;
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set) 
                    & VL_GTES_III(32, 0U, vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb))) {
            vlSelf->main__DOT__swic__DOT__jif_int = 1U;
        }
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag = 0U;
        if (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v 
                = ((IData)(vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v) 
                   | (0xffU & ((IData)(1U) << (7U & 
                                               ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr) 
                                                >> 3U)))));
        }
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb = 0U;
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) {
            if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line)))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line 
                    = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack)
                        ? (5U == (7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr)))
                        : (6U == (7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr))));
            }
        } else {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line = 0U;
        }
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb 
            = ((~ ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc)) 
                   | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb)))) 
               & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall)
                   ? (7U == (7U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr))
                   : (3U == (3U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
                                   >> 1U)))));
        if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state))) {
            if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state))) {
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr 
                    = (0x3fU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr) 
                                + ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack)
                                    ? 1U : 0U)));
                if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb) 
                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall)))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
                        = ((0x1fffff8U & vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr) 
                           | (7U & ((IData)(1U) + vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr)));
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb 
                        = (1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb)));
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl 
                        = (1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb)));
                }
                if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v 
                        = ((~ ((IData)(1U) << (7U & 
                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                                >> 3U)))) 
                           & (IData)(vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v));
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr = 1U;
                } else {
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr = 0U;
                }
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0U] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[0U];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[1U] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[1U];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[2U] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[2U];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[3U] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[3U];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[4U] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[4U];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[5U] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[5U];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[6U] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[6U];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[7U] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[7U];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[8U] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[8U];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[9U] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[9U];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xaU] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[0xaU];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xbU] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[0xbU];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xcU] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[0xcU];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xdU] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[0xdU];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xeU] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[0xeU];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xfU] 
                    = vlSelf->main__DOT__swic__DOT__cpu_idata[0xfU];
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel = 0xffffffffffffffffULL;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag 
                    = (1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err)));
                if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack) 
                      & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line)) 
                     | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state = 0U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc = 0U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 0U;
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl = 0U;
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl = 0U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = 0U;
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl = 0U;
                }
            } else {
                if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall)) 
                           & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce))))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 0U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = 0U;
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl = 0U;
                }
                if (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall)) 
                     & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
                        = (0x1ffffffU & ((0xffU == 
                                          (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                           >> 0x18U))
                                          ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                             >> 2U)
                                          : (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                             >> 6U)));
                }
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr = 0U;
                if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack) 
                      & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack)) 
                     | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state = 0U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc = 0U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 0U;
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl = 0U;
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl = 0U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = 0U;
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr 
                = (0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr);
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr 
                = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl) 
                    & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v) 
                       >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
                                 >> 3U)))) & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag 
                                              == (0x3fffffU 
                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
                                                     >> 3U))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0U];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[1U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[1U];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[2U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[2U];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[3U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[3U];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[4U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[4U];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[5U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[5U];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[6U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[6U];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[7U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[7U];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[8U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[8U];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[9U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[9U];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xaU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xaU];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xbU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xbU];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xcU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xcU];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xdU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xdU];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xeU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xeU];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xfU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xfU];
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb 
                = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall))) 
                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache));
            if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall)) 
                       & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce))))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 0U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = 0U;
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl = 0U;
            }
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall)))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
                    = (0x1ffffffU & ((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                >> 0x18U))
                                      ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 2U) : (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                   >> 6U)));
            }
            if (((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack) 
                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack)) 
                  & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce))) 
                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state = 0U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc = 0U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 0U;
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl = 0U;
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl = 0U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = 0U;
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl = 0U;
            }
        } else {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we = 0U;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable));
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc = 0U;
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 0U;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl = 0U;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl = 0U;
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = 0U;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl = 0U;
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state = 1U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
                    = (0x1ffffffU & ((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                >> 0x18U))
                                      ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 2U) : (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                   >> 6U)));
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we = 1U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc = 1U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 1U;
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl 
                    = (0xffU != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                 >> 0x18U));
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl 
                    = (0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                 >> 0x18U));
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl 
                    = (0xffU != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                 >> 0x18U));
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl 
                    = (0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                 >> 0x18U));
            } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss) {
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr 
                    = (0x3fU & ((0x38U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr) 
                                - (IData)(1U)));
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state = 3U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
                    = (0x1fffff8U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr);
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc = 1U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 1U;
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl = 1U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = 1U;
            } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
                        & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable)))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state = 2U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
                    = (0x1ffffffU & ((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                >> 0x18U))
                                      ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 2U) : (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                   >> 6U)));
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc = 1U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 1U;
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl 
                    = (0xffU != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                 >> 0x18U));
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl 
                    = (0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                 >> 0x18U));
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl 
                    = (0xffU != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                 >> 0x18U));
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl 
                    = (0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                 >> 0x18U));
            }
        }
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v = 0U;
        }
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit;
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset__v0) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset__v0] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset__v0;
    }
    vlSelf->main__DOT__swic__DOT____VdfgTmp_h29ee39ef__0 
        = (((IData)(vlSelf->main__DOT__spio_int) << 2U) 
           | ((2U & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                     >> 4U)) | (1U & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                      >> 5U))));
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow 
        = vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__will_underflow;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow 
        = vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__will_overflow;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data 
        = vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data 
        = vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data 
        = vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data 
        = vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data 
        = vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data 
        = vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data 
        = vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data 
        = vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data;
    vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value 
        = vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_value;
    vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value 
        = vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_value;
    vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value 
        = vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_value;
    vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value 
        = vlSelf->__Vdly__main__DOT__swic__DOT__u_watchdog__DOT__r_value;
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc = 1U;
        vlSelf->main__DOT__i2ci__DOT__cpu_new_pc = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_reset = 1U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_counter = 0U;
        vlSelf->main__DOT__u_fan__DOT__tach_count = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_timer = 0U;
        vlSelf->main__DOT__u_fan__DOT__tach_reset = vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_reset;
        vlSelf->main__DOT__u_fan__DOT__tach_counter 
            = vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_counter;
        vlSelf->main__DOT__u_fan__DOT__tach_timer = vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_timer;
        vlSelf->main__DOT__u_fan__DOT__temp_tmp = vlSelf->__Vdly__main__DOT__u_fan__DOT__temp_tmp;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount = 0xc8U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal 
            = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait = 0U;
    } else {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc = 0U;
        if ((((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
                & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)) 
               & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle))) 
              & (0xc0U == (0xf0U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn)))) 
             | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid) 
                 & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready)) 
                & (0xcU == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn))))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc = 1U;
        }
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc = 1U;
        }
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc = 1U;
        }
        vlSelf->main__DOT__i2ci__DOT__cpu_new_pc = 0U;
        if ((((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
                & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
               & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle))) 
              & (0xc0U == (0xf0U & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_insn)))) 
             | (((IData)(vlSelf->main__DOT__i2ci__DOT__half_valid) 
                 & (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready)) 
                & (0xcU == (IData)(vlSelf->main__DOT__i2ci__DOT__half_insn))))) {
            vlSelf->main__DOT__i2ci__DOT__cpu_new_pc = 1U;
        }
        if (vlSelf->main__DOT__i2ci__DOT__i2c_abort) {
            vlSelf->main__DOT__i2ci__DOT__cpu_new_pc = 1U;
        }
        if (vlSelf->main__DOT__i2ci__DOT__bus_jump) {
            vlSelf->main__DOT__i2ci__DOT__cpu_new_pc = 1U;
        }
        if (vlSelf->main__DOT__u_fan__DOT__tach_reset) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_reset = 0U;
            vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_timer = 0x5f5e0ffU;
            vlSelf->main__DOT__u_fan__DOT__tach_count 
                = vlSelf->main__DOT__u_fan__DOT__tach_counter;
            vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_counter 
                = (((IData)(vlSelf->main__DOT__u_fan__DOT__ck_tach) 
                    & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__last_tach)))
                    ? 1U : 0U);
        } else {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_counter 
                = (0x7ffffffU & (vlSelf->main__DOT__u_fan__DOT__tach_counter 
                                 + (((IData)(vlSelf->main__DOT__u_fan__DOT__ck_tach) 
                                     & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__last_tach)))
                                     ? 1U : 0U)));
            vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_timer 
                = (0x7ffffffU & (vlSelf->main__DOT__u_fan__DOT__tach_timer 
                                 - (IData)(1U)));
            vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_reset 
                = (1U >= vlSelf->main__DOT__u_fan__DOT__tach_timer);
        }
        vlSelf->main__DOT__u_fan__DOT__tach_reset = vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_reset;
        vlSelf->main__DOT__u_fan__DOT__tach_counter 
            = vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_counter;
        vlSelf->main__DOT__u_fan__DOT__tach_timer = vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_timer;
        vlSelf->main__DOT__u_fan__DOT__temp_tmp = vlSelf->__Vdly__main__DOT__u_fan__DOT__temp_tmp;
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) {
            if (vlSelf->main__DOT__u_fan__DOT__i2cd_valid) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data 
                    = (0x200U | (((IData)(vlSelf->main__DOT__u_fan__DOT__i2cd_last) 
                                  << 8U) | (IData)(vlSelf->main__DOT__u_fan__DOT__i2cd_data)));
            }
            if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data 
                    = (0x1ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data));
            }
        } else {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data 
                = (0x1ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data));
        }
        if ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) 
              & (0x3000000U == (0x3000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]))) 
             & (0xf0000000ULL == (0xf0000000ULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel)))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount 
                = (0xfffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]);
        }
        if ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
              & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)) 
             & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err = 1U;
        }
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal 
            = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal;
        if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort) 
             & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted)))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted = 1U;
        }
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) {
            if (((IData)(((0U == (0x3000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                          & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U] 
                             >> 0x14U))) & (IData)(
                                                   (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                    >> 0x1eU)))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err = 0U;
            }
            if (((IData)(((0U == (0x3000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                          & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U] 
                             >> 0x15U))) & (IData)(
                                                   (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                    >> 0x1eU)))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted = 0U;
            }
            if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) 
                 & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err = 0U;
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted = 0U;
            }
        }
        if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
             | (IData)(vlSelf->main__DOT__u_fan__DOT__pp_ms))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait = 0U;
        } else {
            if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid) 
                 & (0x800U == (0xf00U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait = 1U;
            }
            if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait = 0U;
            }
        }
    }
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted;
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
    vlSelf->main__DOT__u_i2cdma__DOT__r_overflow = vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__r_overflow;
    vlSelf->__VdfgTmp_h503d14d1__0 = (7U & (~ ((4U 
                                                & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))))));
    vlSelf->main__DOT__wbwide_i2cdma_cyc = vlSelf->__Vdly__main__DOT__wbwide_i2cdma_cyc;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read 
        = ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)) 
           & (IData)(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6));
    if (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
         & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy)))) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits 
            = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy)))) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits = 0x40U;
    }
    vlSelf->main__DOT__i2cscopei__DOT__imm_adr = (1U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                                       >> 2U)) 
                                                     | (~ 
                                                        (((IData)(vlSelf->main__DOT__i2cscopei__DOT__new_data) 
                                                          | (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write)) 
                                                         | (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped)))));
    vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr = 
        (1U & ((~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                   >> 2U)) | (~ (((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data) 
                                  | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write)) 
                                 | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped)))));
    vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr = 
        (1U & ((~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                   >> 2U)) | (~ (((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data) 
                                  | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write)) 
                                 | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped)))));
    vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr = 
        (1U & ((~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                   >> 2U)) | (~ (((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data) 
                                  | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write)) 
                                 | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped)))));
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
    if ((1U & ((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__wbu_cyc))))) {
        vlSelf->main__DOT__wbu_xbar__DOT__mgrant = 0U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available) {
            vlSelf->main__DOT__wbu_xbar__DOT__mgrant = 1U;
        } else if (vlSelf->main__DOT__wbu_xbar__DOT__m_stb) {
            vlSelf->main__DOT__wbu_xbar__DOT__mgrant = 0U;
        }
    }
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch 
        = ((~ (IData)(vlSelf->main__DOT__genbus__DOT__r_wdt_reset)) 
           & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table) 
           & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch) 
              & (0xe00000000ULL == (0xe00000000ULL 
                                    & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word))));
    if ((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy)))) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword 
            = ((2U != (0xfU & (IData)((vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword 
                                       >> 0x20U))))
                ? vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword
                : ((8U & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck))
                    ? ((4U & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck))
                        ? ((2U & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck))
                            ? ((1U & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck))
                                ? (0x300000000ULL | (QData)((IData)(
                                                                    (0x3f000000U 
                                                                     & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword) 
                                                                        << 0x18U)))))
                                : (0x340000000ULL | (QData)((IData)(
                                                                    (0x3ffc0000U 
                                                                     & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword) 
                                                                        << 0x12U))))))
                            : (0x380000000ULL | (QData)((IData)(
                                                                (0x3ffff000U 
                                                                 & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword) 
                                                                    << 0xcU))))))
                        : (0x3c0000000ULL | (QData)((IData)(
                                                            (0x3fffffc0U 
                                                             & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword) 
                                                                << 6U))))))
                    : vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword));
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel 
        = ((0x3fU >= (0x1ffffffcU & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift) 
                                     << 2U))) ? (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                                 << 
                                                 (0x1ffffffcU 
                                                  & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift) 
                                                     << 2U)))
            : 0ULL);
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
    vlSelf->main__DOT__wbwide_wbu_arbiter_cyc = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbwide_xbar__DOT__request[3U] 
        = (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc) 
            & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid))
            ? (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded)
            : 0U);
    vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc 
        = ((2U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc)) 
           | ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant) 
              & ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                  [0U]) & ((IData)(vlSelf->main__DOT__wbu_cyc) 
                           >> vlSelf->main__DOT__wbu_xbar__DOT__sindex
                           [0U]))));
    if ((1U & ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_err)))) {
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc 
            = (2U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc 
        = ((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc)) 
           | (0xfffffffeU & ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant) 
                             & (((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                  [1U]) & ((IData)(vlSelf->main__DOT__wbu_cyc) 
                                           >> vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                           [1U])) << 1U))));
    if ((1U & ((IData)(vlSelf->i_reset) | ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_err) 
                                           >> 1U)))) {
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc 
            = (1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc));
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__rx_valid 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset)) 
           & ((1U != (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr) 
                       << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd))) 
              & ((2U == (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr) 
                          << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd)))
                  ? (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill))
                  : (0x10U == (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill)))));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid)) 
               | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn 
            = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid)
                ? (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word)
                : (IData)(vlSelf->main__DOT__u_fan__DOT__mem_data));
    }
    vlSelf->main__DOT__swic__DOT__dbg_cyc = (1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
                                                     | (~ (IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc)))) 
                                                   & (~ (IData)(vlSelf->main__DOT__swic__DOT__no_dbg_err))));
    vlSelf->main__DOT__swic__DOT__dbg_pre_ack = ((~ 
                                                  ((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
                                                   | (~ (IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc)))) 
                                                 & (((IData)(vlSelf->main__DOT__swic__DOT__dbg_stb) 
                                                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stall))) 
                                                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_cpu_read))));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbwide_i2cm_cyc));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid)) 
               | (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)))) {
        vlSelf->main__DOT__i2ci__DOT__pf_insn = (0xffU 
                                                 & ((IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid)
                                                     ? 
                                                    ((vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xfU] 
                                                      << 8U) 
                                                     | (vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xfU] 
                                                        >> 0x18U))
                                                     : 
                                                    ((IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid)
                                                      ? 
                                                     ((vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[0xfU] 
                                                       << 8U) 
                                                      | (vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[0xfU] 
                                                         >> 0x18U))
                                                      : 
                                                     ((vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[0xfU] 
                                                       << 8U) 
                                                      | (vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted[0xfU] 
                                                         >> 0x18U)))));
    }
    vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant) 
           & (((0xfffffc00U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                               & ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_ack) 
                                  << 0xaU))) | ((0xfffffe00U 
                                                 & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                    & ((IData)(vlSelf->main__DOT__r_cfg_ack) 
                                                       << 9U))) 
                                                | ((0xffffff00U 
                                                    & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                       & ((IData)(vlSelf->main__DOT__r_wb32_sio_ack) 
                                                          << 8U))) 
                                                   | ((0xffffff80U 
                                                       & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                          & ((IData)(vlSelf->main__DOT__wb32_fan_ack) 
                                                             << 7U))) 
                                                      | ((0xffffffc0U 
                                                          & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                             & ((IData)(vlSelf->main__DOT__wb32_uart_ack) 
                                                                << 6U))) 
                                                         | ((0xffffffe0U 
                                                             & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                                & ((IData)(vlSelf->main__DOT__wb32_i2cdma_ack) 
                                                                   << 5U))) 
                                                            | ((0xfffffff0U 
                                                                & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                                   & ((IData)(vlSelf->main__DOT__wb32_i2cs_ack) 
                                                                      << 4U))) 
                                                               | ((0xfffffff8U 
                                                                   & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                                      & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack) 
                                                                         << 3U))) 
                                                                  | ((0xfffffffcU 
                                                                      & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                                         & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack) 
                                                                            << 2U))) 
                                                                     | ((0xfffffffeU 
                                                                         & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                                            & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack) 
                                                                               << 1U))) 
                                                                        | ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                                           & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack)))))))))))) 
              >> vlSelf->main__DOT__wb32_xbar__DOT__mindex
              [0U]));
    if ((0x800U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack = 0U;
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc))) 
               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack = 0U;
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value 
        = (0x3fU & ((1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))
                     ? ((IData)(2U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))
                     : ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))));
    vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane];
    vlSelf->o_ddr3_controller_idelay_data_cntvaluein 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane];
    vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane];
    vlSelf->o_ddr3_controller_odelay_data_cntvaluein 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs;
    if (vlSelf->main__DOT__genbus__DOT__r_wdt_reset) {
        vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr = 1U;
    } else if (((((~ (IData)(vlSelf->main__DOT__wbu_cyc)) 
                  & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                 & (~ (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy))) 
                & (2U != (3U & (IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                        >> 0x22U)))))) {
        vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr 
            = ((0U == (0xfU & (IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                       >> 0x20U)))) 
               | (1U == (7U & (IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                       >> 0x21U)))));
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update = 1U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 5U;
    main__DOT__ddr3_controller_inst__DOT____Vlvbound_h5b930a8e__0 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q
        [1U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0U] 
        = main__DOT__ddr3_controller_inst__DOT____Vlvbound_h5b930a8e__0;
    main__DOT__ddr3_controller_inst__DOT____Vlvbound_h5b930a8e__0 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q
        [2U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1U] 
        = main__DOT__ddr3_controller_inst__DOT____Vlvbound_h5b930a8e__0;
    main__DOT__ddr3_controller_inst__DOT____Vlvbound_h5b930a8e__0 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q
        [3U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2U] 
        = main__DOT__ddr3_controller_inst__DOT____Vlvbound_h5b930a8e__0;
    main__DOT__ddr3_controller_inst__DOT____Vlvbound_h5b930a8e__0 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q
        [4U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3U] 
        = main__DOT__ddr3_controller_inst__DOT____Vlvbound_h5b930a8e__0;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4U] = 0U;
    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update = 0U;
        if ((((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q) 
              >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank)) 
             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q
                [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank] 
                == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row)))) {
            if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we) 
                 & (0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q
                    [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank]))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 8U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4U] 
                    = (1U | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux) 
                             << 1U));
            } else if (((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we)) 
                        & (0U == vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q
                           [vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank]))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 8U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4U] 
                    = (1U | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux) 
                             << 1U));
            }
        }
    }
    vlSelf->main__DOT__wbu_xbar__DOT__m_data[0U] = (IData)(
                                                           (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                                            >> 4U));
    vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0U] = (0xfU 
                                                   & (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data));
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache = 0U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid = 1U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache 
            = (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr 
                            >> 3U));
    } else if ((((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack)) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack)) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort))) 
                & ((7U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr) 
                          >> 3U)) == (7U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid = 0U;
    }
    if (((((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_abort)) 
          | (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual)) 
         | (IData)(vlSelf->main__DOT__i2ci__DOT__bus_manual))) {
        vlSelf->main__DOT__i2ci__DOT__half_valid = 0U;
    } else if (((~ (IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle)) 
                & (IData)(vlSelf->main__DOT__i2ci__DOT__next_valid))) {
        vlSelf->main__DOT__i2ci__DOT__half_valid = 0U;
        if (((((3U != (0xfU & ((IData)(vlSelf->main__DOT__i2ci__DOT__next_insn) 
                               >> 4U))) & (0xdU != 
                                           (0xfU & 
                                            ((IData)(vlSelf->main__DOT__i2ci__DOT__next_insn) 
                                             >> 4U)))) 
              & (0U != (0xfU & (IData)(vlSelf->main__DOT__i2ci__DOT__next_insn)))) 
             & (9U != (0xfU & ((IData)(vlSelf->main__DOT__i2ci__DOT__next_insn) 
                               >> 4U))))) {
            vlSelf->main__DOT__i2ci__DOT__half_valid = 1U;
        }
    } else if (vlSelf->main__DOT__i2ci__DOT__half_ready) {
        vlSelf->main__DOT__i2ci__DOT__half_valid = 0U;
    }
    vlSelf->main__DOT__swic__DOT__cpu_we = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                                            & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags
        [(7U & ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled)) 
                       & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending))))
                 ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                    >> 9U) : (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                              >> 3U)))];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
           & (((IData)(vlSelf->main__DOT__swic__DOT__cmd_clear_cache) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall))) 
              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                  & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))) 
                 & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                    >> 0xfU))));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy)) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall))))) {
        if ((0U == (2U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                          >> 1U)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[1U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[2U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[3U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[4U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[5U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[6U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[7U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[8U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[9U] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xaU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xbU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xcU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xdU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xeU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xfU] 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
        } else if ((2U == (3U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                                 >> 1U)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[1U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[2U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[3U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[4U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[5U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[6U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[7U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[8U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[9U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xaU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xbU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xcU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xdU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xeU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xfU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x10U) | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
        } else if ((3U == (3U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                                 >> 1U)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[1U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[2U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[3U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[4U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[5U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[6U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[7U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[8U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[9U] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xaU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xbU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xcU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xdU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xeU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xfU] 
                = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    << 0x18U) | ((0xff0000U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                << 8U)) 
                                    | (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata))));
        }
    }
    if (vlSelf->main__DOT__i2ci__DOT__i2c_ckedge) {
        if ((8U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
            if ((4U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
                if ((2U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
                    vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 1U;
                    if ((1U & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy)))) {
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0U;
                    }
                } else if ((1U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
                    vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 1U;
                    if ((1U & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy)))) {
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0U;
                    }
                } else if ((1U & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_stretch)))) {
                    vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 1U;
                    if ((1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda)) 
                               | (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl))))) {
                        vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 1U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0xaU;
                    }
                }
            } else if ((2U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
                if ((1U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_stretch)))) {
                        vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 1U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0xcU;
                        if (((IData)(vlSelf->main__DOT__i2ci__DOT__w_sda) 
                             != (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda))) {
                            vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 1U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0xaU;
                        }
                    }
                } else {
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 1U;
                    vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                    if ((((~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy)) 
                          & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl)) 
                         & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda))) {
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
                vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                if ((1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl)) 
                           & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda))))) {
                    vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 3U;
                }
            } else {
                vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                if (vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl) {
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                    vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state 
                        = (((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir) 
                            & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda))
                            ? 9U : 2U);
                }
            }
        } else if ((4U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
            if ((2U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
                if ((1U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda 
                        = (1U & ((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir) 
                                 | (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack))));
                    vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 8U;
                } else {
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda 
                        = (1U & ((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir) 
                                 | (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack))));
                    vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                    if ((1U & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl)))) {
                        if (vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir) {
                            if (vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir) {
                                vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 7U;
                            }
                        } else if (((IData)(vlSelf->main__DOT__i2ci__DOT__w_sda) 
                                    != (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack))) {
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 7U;
                        }
                    }
                    if (vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl) {
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 6U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
                if (vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl) {
                    vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg 
                        = ((0xfeU & ((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg) 
                                     << 1U)) | (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda));
                    if ((0U < (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits))) {
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits 
                            = (7U & ((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits) 
                                     - (IData)(1U)));
                    }
                    if (((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir) 
                         & ((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda) 
                            != (1U & ((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg) 
                                      >> 7U))))) {
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 1U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0xaU;
                        vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                    } else {
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state 
                            = ((0U == (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits))
                                ? 6U : 4U);
                    }
                } else {
                    vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                }
            } else {
                vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda 
                    = (1U & (((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg) 
                              >> 7U) | (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir))));
                vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                if (((IData)(vlSelf->main__DOT__i2ci__DOT__w_sda) 
                     == (1U & (((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg) 
                                >> 7U) | (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir)))))) {
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 5U;
                }
                if (vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl) {
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 4U;
                }
            }
        } else if ((2U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
            if ((1U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
                vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                if (vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl) {
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 1U;
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0U;
                }
            } else {
                vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 0U;
                vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack = 1U;
                vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte = 0U;
                vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg 
                    = (0xffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn));
                vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__dir = 0U;
                vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                if (((IData)(vlSelf->main__DOT__i2ci__DOT__s_tvalid) 
                     & (IData)(vlSelf->main__DOT__i2ci__DOT__insn_ready))) {
                    if ((0x400U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                        if ((0x200U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                            if ((0x100U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                                vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                                vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte = 1U;
                                vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack = 0U;
                                vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 7U;
                                vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                                vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 4U;
                            } else {
                                vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                                vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte = 1U;
                                vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 7U;
                                vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                                vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 4U;
                            }
                        } else if ((0x100U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                            vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack = 0U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 7U;
                            vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 4U;
                        } else {
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 7U;
                            vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 4U;
                        }
                    } else if ((0x200U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                        if ((0x100U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__dir = 1U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 7U;
                            vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 4U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg 
                                = (0xffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn));
                        } else {
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                            vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 3U;
                        }
                    } else if ((0x100U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 1U;
                        vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0xbU;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state 
                = ((4U & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits))
                    ? 4U : 2U);
            vlSelf->main__DOT__i2ci__DOT__w_scl = 0U;
        } else {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 0U;
            vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack = 1U;
            vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte = 0U;
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg 
                = (0xffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn));
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__dir = 0U;
            if (((IData)(vlSelf->main__DOT__i2ci__DOT__s_tvalid) 
                 & (IData)(vlSelf->main__DOT__i2ci__DOT__insn_ready))) {
                if ((0x400U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                    if ((0x200U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                        if ((0x100U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                            vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 1U;
                            vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte = 1U;
                            vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack = 0U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 7U;
                        } else {
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                            vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 1U;
                            vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte = 1U;
                            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 7U;
                        }
                    } else if ((0x100U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                        vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack = 0U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 7U;
                        vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 1U;
                    } else {
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                        vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 1U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 7U;
                    }
                } else if ((0x200U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                    if ((0x100U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                        vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 1U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__dir = 1U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits = 7U;
                        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg 
                            = (0xffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn));
                    }
                } else if ((0x100U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))) {
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 0U;
                    vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 1U;
                }
            }
        }
    }
    if (vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN) {
        if (((((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge) 
               & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_stretch))) 
              & (8U == (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) 
             & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir)))) {
            vlSelf->main__DOT__i2c_valid = 1U;
        } else if (vlSelf->main__DOT__i2c_ready) {
            vlSelf->main__DOT__i2c_valid = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge)) 
                   | ((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_stretch) 
                      & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__insn_ready)))))) {
            vlSelf->main__DOT__i2ci__DOT__i2c_abort = 0U;
        } else {
            vlSelf->main__DOT__i2ci__DOT__i2c_abort = 0U;
            if (((((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl) 
                   & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir)) 
                  & (8U == (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) 
                 & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda))) {
                vlSelf->main__DOT__i2ci__DOT__i2c_abort = 1U;
            }
            if (((((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl) 
                   & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir)) 
                  & (5U == (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state))) 
                 & ((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda) 
                    != (1U & ((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg) 
                              >> 7U))))) {
                vlSelf->main__DOT__i2ci__DOT__i2c_abort = 1U;
            }
            if (((0xbU == (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state)) 
                 & ((IData)(vlSelf->main__DOT__i2ci__DOT__w_sda) 
                    != (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda)))) {
                vlSelf->main__DOT__i2ci__DOT__i2c_abort = 1U;
            }
            if (((0xcU == (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state)) 
                 & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl)) 
                    | (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda))))) {
                vlSelf->main__DOT__i2ci__DOT__i2c_abort = 1U;
            }
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl)) 
                   | (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda))))) {
            vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy = 1U;
        } else if (vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit) {
            vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy = 0U;
        }
    } else {
        vlSelf->main__DOT__i2c_valid = 0U;
        vlSelf->main__DOT__i2ci__DOT__i2c_abort = 0U;
        vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)))) {
        vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 1U;
        vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0U;
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor 
            = (0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr);
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
        [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))];
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break 
            = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
               & (0x7000000U == (0x7c00000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF 
            = ((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                               >> 1U))) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0) 
                                            | (0U == 
                                               (7U 
                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                   >> 0x13U)))) 
                                           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                                              | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                                 & ((0xdU 
                                                     != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                                    & ((9U 
                                                        != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                                       & ((8U 
                                                           != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                                          & (7U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                                 >> 0x1cU))))))))));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B 
            = ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                 & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0))) 
                << 6U) | ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                            & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0))) 
                           << 5U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB)));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
        [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))];
    if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb)) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stall))))) {
        vlSelf->main__DOT__swic__DOT__dbg_addr = ((IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)
                                                   ? (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr)
                                                   : (IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_addr));
    }
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read 
        = ((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)) 
           & (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_read));
    vlSelf->main__DOT__console__DOT__rxf_status = (0x6000U 
                                                   | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                                             >> 4U)) 
                                                         | (1U 
                                                            & (~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow))))));
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write 
        = ((IData)(vlSelf->main__DOT__console__DOT__txf_wb_write) 
           & ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)) 
              | (IData)(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6)));
    vlSelf->__VdfgTmp_ha46ae6a3__0 = ((2U & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                             >> 4U)) 
                                      | (1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow))));
    vlSelf->main__DOT__gpio_int = ((IData)(vlSelf->main__DOT__gpioi__DOT__q_gpio) 
                                   != (IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio));
    vlSelf->main__DOT__gpioi__DOT__r_gpio = vlSelf->main__DOT__gpioi__DOT__q_gpio;
    vlSelf->main__DOT__swic__DOT__cpu_dbg_cc = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep)));
    if (((IData)(vlSelf->main__DOT__swic__DOT__wdbus_int) 
         | (IData)(vlSelf->main__DOT__swic__DOT__cpu_err))) {
        vlSelf->main__DOT__swic__DOT__r_wdbus_data 
            = vlSelf->main__DOT__wbwide_zip_addr;
    }
    if (vlSelf->main__DOT__swic__DOT__sys_stb) {
        vlSelf->main__DOT__swic__DOT__ack_idx = vlSelf->main__DOT__swic__DOT__w_ack_idx;
    }
    vlSelf->main__DOT__swic__DOT__pic_data = 0U;
    vlSelf->main__DOT__swic__DOT__pic_data = (((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie) 
                                               << 0x1fU) 
                                              | (((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any) 
                                                     << 0xfU) 
                                                    | (IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state))));
    vlSelf->main__DOT__swic__DOT__ctri_data = 0U;
    vlSelf->main__DOT__swic__DOT__ctri_data = (((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie) 
                                                << 0x1fU) 
                                               | (((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any) 
                                                      << 0xfU) 
                                                     | (IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state))));
    vlSelf->main__DOT__swic__DOT__dmac_data = 0U;
    if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))) {
        vlSelf->main__DOT__swic__DOT__dmac_data = (
                                                   (0x80000000U 
                                                    & vlSelf->main__DOT__swic__DOT__dmac_data) 
                                                   | ((1U 
                                                       & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                                       ? 
                                                      ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)
                                                        ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length
                                                        : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length)
                                                       : 
                                                      ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)
                                                        ? 
                                                       (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                                                        << 6U)
                                                        : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst)));
    } else if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))) {
        vlSelf->main__DOT__swic__DOT__dmac_data = (
                                                   (0x80000000U 
                                                    & vlSelf->main__DOT__swic__DOT__dmac_data) 
                                                   | ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)
                                                       ? 
                                                      (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                                                       << 6U)
                                                       : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src));
    } else {
        vlSelf->main__DOT__swic__DOT__dmac_data = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg;
    }
    vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data 
        = (((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last) 
            << 4U) | (0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr)));
    if (vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset) {
        vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    } else if ((((IData)(vlSelf->main__DOT__wb32_wbdown_stb) 
                 & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskd_ready)) 
                & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb) 
                   & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    }
    vlSelf->main__DOT__u_fan__DOT__last_tach = vlSelf->main__DOT__u_fan__DOT__ck_tach;
    vlSelf->main__DOT__u_fan__DOT__i2cd_data = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg;
    vlSelf->main__DOT__u_fan__DOT__i2cd_valid = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN) 
                                                 & ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge) 
                                                      & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch))) 
                                                     & (8U 
                                                        == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) 
                                                    & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir))));
    vlSelf->main__DOT__u_fan__DOT__i2cd_last = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte;
    vlSelf->o_fan_sda = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda;
    vlSelf->o_fan_scl = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset 
        = ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid = 0U;
    } else if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual) 
                | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid = 0U;
    } else if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid 
            = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle) 
               | ((3U != (0xfU & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn) 
                                  >> 4U))) & (0xdU 
                                              != (0xfU 
                                                  & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn) 
                                                     >> 4U)))));
    } else if (((((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid)) 
                  | (3U == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn))) 
                 | (0xdU == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn))) 
                & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid = 0U;
    }
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
    vlSelf->main__DOT__swic__DOT__dc_stall = (IData)(
                                                     (((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                                       >> 2U) 
                                                      | (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbwide_xbar__DOT__request[0U] 
        = (((IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc) 
            & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))
            ? (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded)
            : 0U);
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__dw_bits;
    vlSelf->main__DOT__i2cscopei__DOT__ck_addr = vlSelf->__Vdly__main__DOT__i2cscopei__DOT__ck_addr;
    vlSelf->main__DOT__i2cscopei__DOT__dr_force_write 
        = vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_force_write;
    vlSelf->main__DOT__i2cscopei__DOT__dr_stopped = vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_stopped;
    vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr = vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__ck_addr;
    vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write 
        = vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_force_write;
    vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped 
        = vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_stopped;
    vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr = vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__ck_addr;
    vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write 
        = vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_force_write;
    vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped 
        = vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_stopped;
    vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr = vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__ck_addr;
    vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write 
        = vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_force_write;
    vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped 
        = vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_stopped;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
              | (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb)));
    vlSelf->main__DOT__wbu_xbar__DOT__sgrant = vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant;
    vlSelf->main__DOT____Vcellinp__swic__i_dbg_we = 
        (1U & ((IData)(vlSelf->cpu_sim_cyc) ? (IData)(vlSelf->cpu_sim_we)
                : ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                   >> 1U)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid;
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
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0U] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[1U] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[1U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[2U] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[2U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[3U] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[3U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[4U] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[4U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[5U] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[5U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[6U] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[6U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[7U] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[7U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[8U] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[8U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[9U] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[9U];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xaU] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xaU];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xbU] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xbU];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xcU] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xcU];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xdU] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xdU];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xeU] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xeU];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xfU] 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xfU];
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid;
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid;
    vlSelf->main__DOT__i2ci__DOT__pf_valid = vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_valid;
    if (vlSelf->__Vdlyvset__main__DOT__wb32_xbar__DOT__grant__v0) {
        vlSelf->main__DOT__wb32_xbar__DOT__grant[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wb32_xbar__DOT__grant__v1) {
        vlSelf->main__DOT__wb32_xbar__DOT__grant[0U] 
            = vlSelf->__Vdlyvval__main__DOT__wb32_xbar__DOT__grant__v1;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wb32_xbar__DOT__grant__v2) {
        vlSelf->main__DOT__wb32_xbar__DOT__grant[0U] = 0U;
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__reset_done;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__instruction;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate;
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags__v0) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags__v0] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags__v0;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr;
    vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits;
    vlSelf->main__DOT__console__DOT__txf_status = (0x6000U 
                                                   | (((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill) 
                                                       << 2U) 
                                                      | (IData)(vlSelf->__VdfgTmp_ha46ae6a3__0)));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc 
            = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch)
                ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc
                : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc);
    }
    vlSelf->main__DOT__swic__DOT__wdbus_int = vlSelf->__Vdly__main__DOT__swic__DOT__wdbus_int;
    vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable 
        = vlSelf->__Vdly__main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable;
    vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state 
        = vlSelf->__Vdly__main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state;
    vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable 
        = vlSelf->__Vdly__main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable;
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step = 0U;
        vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel = 0xffffffffffffffffULL;
    } else {
        if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))) 
             & (0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step 
                = (1U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                         >> 6U));
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set) 
             & VL_LTS_III(32, 0U, vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb))) {
            vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set = 1U;
        } else if (vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now) {
            vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set = 0U;
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
             & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable))))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel 
                = ((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                              >> 0x18U)) ? ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                            >> (3U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                    : (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                        << 0x3cU) >> (0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)));
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel = 0xffffffffffffffffULL;
        }
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch) 
                | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal))
                ? 0xdU : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn));
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                & (0x7800000U == (0x7c00000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword))) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU 
            = ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                 | (0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                     >> 1U)))) | (8U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                      >> 1U)))) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock;
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc 
                = (0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword);
        } else {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc 
                = ((3U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc) 
                   | (0x7ffffffcU & (((IData)(1U) + 
                                      ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                        >> 2U) + ((0x1fff8000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU] 
                                                                     >> 0x11U)))) 
                                                      << 0xfU)) 
                                                  | (0x7fffU 
                                                     & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU] 
                                                        >> 2U))))) 
                                     << 2U)));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc 
                = (0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc);
        }
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc) 
                << 6U) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc) 
                           << 5U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR 
            = (1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                        | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                           | (8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                             >> 1U)))))));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn 
            = (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op));
        if ((((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                >> 1U))) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop)) 
             | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn = 0xdU;
        }
    }
    vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state 
        = vlSelf->__Vdly__main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc;
    vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem
        [(0x1fU & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr))];
    if (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty) {
        vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data 
            = vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data;
    }
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
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda = 1U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl = 1U;
        vlSelf->main__DOT__u_fan__DOT__pp_ms = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__trigger_counter = 0x1869fU;
    } else {
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))) {
            vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb 
                = vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid;
        }
        if ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) 
              & (0x1000000U == (0x3000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]))) 
             & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                        >> 0x1dU)))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda 
                = (IData)((0x800U != (0x4800U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U])));
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl 
                = (IData)((0x800U != (0x8800U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U])));
        } else if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda = 1U;
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl = 1U;
        }
        if ((0U == vlSelf->main__DOT__u_fan__DOT__trigger_counter)) {
            vlSelf->main__DOT__u_fan__DOT__pp_ms = 0U;
            vlSelf->__Vdly__main__DOT__u_fan__DOT__trigger_counter = 0x1869fU;
        } else {
            vlSelf->main__DOT__u_fan__DOT__pp_ms = 
                (1U >= vlSelf->main__DOT__u_fan__DOT__trigger_counter);
            vlSelf->__Vdly__main__DOT__u_fan__DOT__trigger_counter 
                = (0x1ffffU & (vlSelf->main__DOT__u_fan__DOT__trigger_counter 
                               - (IData)(1U)));
        }
    }
    vlSelf->main__DOT__u_fan__DOT__trigger_counter 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__trigger_counter;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_i2cdma_stb) 
              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__i2cscopei__DOT__new_data = (1U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                                        >> 2U)) 
                                                      | (vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4 
                                                         != vlSelf->main__DOT__i2cscopei__DOT__qd_data)));
    vlSelf->main__DOT__scope3_ddr3i__DOT__new_data 
        = (1U & ((~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                     >> 2U)) | ((0x7fffffffU & vlSelf->i_ddr3_controller_iserdes_data[0U]) 
                                != vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data)));
    vlSelf->main__DOT__scope2_ddr3i__DOT__new_data 
        = (1U & ((~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                     >> 2U)) | ((0x7fffffffU & vlSelf->i_ddr3_controller_iserdes_data[1U]) 
                                != vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data)));
    vlSelf->main__DOT__scope1_ddr3i__DOT__new_data 
        = (1U & ((~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                     >> 2U)) | (vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4 
                                != vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data)));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb)) 
               | (~ (IData)((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))))))) {
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
            = vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg;
        if (((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
               & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy))) 
              & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid))) 
             & (1U == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw)))) {
            vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                = (0xb80000000ULL | (0x3fffffffULL 
                                     & vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word));
        }
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb)) 
               | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy))))) {
        if (vlSelf->main__DOT__genbus__DOT__ofifo_rd) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__cw_stb = 1U;
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword 
                = vlSelf->main__DOT__genbus__DOT__ofifo_codword;
        } else {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__cw_stb 
                = (1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb)) 
                         & (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request) 
                             & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent))) 
                            | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state)) 
                               & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                                  >> 0x15U)))));
            if (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request) 
                 & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent)))) {
                vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword 
                    = (0x100000000ULL | (0x3fffffffULL 
                                         & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword));
            } else {
                vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword 
                    = (0x3fffffffULL & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword);
                if (vlSelf->main__DOT__wbu_cyc) {
                    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword 
                        = (0x40000000ULL | (0x3fffffffULL 
                                            & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword));
                }
            }
        }
    }
    if (vlSelf->main__DOT__genbus__DOT__r_wdt_reset) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__cw_stb = 0U;
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wb_state = 0U;
        vlSelf->main__DOT__wbu_cyc = 0U;
        vlSelf->__Vdly__main__DOT__wbu_stb = 0U;
        vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 0U;
    } else {
        if ((((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request) 
              & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb))) 
             & (~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent = 1U;
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__zip_cpu_int)))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent = 0U;
        }
        if ((2U & (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state))) {
            if ((1U & (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state))) {
                vlSelf->main__DOT__wbu_cyc = 0U;
                vlSelf->__Vdly__main__DOT__wbu_stb = 0U;
                vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 1U;
                if (((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n) 
                     & (1U != (3U & (IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                             >> 0x22U)))))) {
                    vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wb_state = 0U;
                    vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 0U;
                }
            } else {
                vlSelf->main__DOT__wbu_cyc = 1U;
                vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 1U;
                if ((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))) {
                    vlSelf->__Vdly__main__DOT__wbu_stb = 0U;
                }
                if ((1U & ((~ (IData)(vlSelf->main__DOT__wbu_stb)) 
                           | (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))))) {
                    if (((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n) 
                         & (0x400000000ULL == (0xc00000000ULL 
                                               & vlSelf->main__DOT__genbus__DOT__ififo_codword)))) {
                        if (vlSelf->main__DOT__genbus__DOT__w_bus_busy) {
                            vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 0U;
                        } else {
                            vlSelf->__Vdly__main__DOT__wbu_stb = 1U;
                            vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 1U;
                        }
                    } else if ((((~ (IData)(vlSelf->main__DOT__wbu_stb)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks)) 
                                | ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack)))) {
                        vlSelf->main__DOT__wbu_cyc = 0U;
                        vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 0U;
                        vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wb_state = 0U;
                    }
                }
                if (vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) {
                    vlSelf->main__DOT__wbu_cyc = 0U;
                    vlSelf->__Vdly__main__DOT__wbu_stb = 0U;
                    vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wb_state = 3U;
                    vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state))) {
            vlSelf->main__DOT__wbu_cyc = 1U;
            if ((1U & ((~ (IData)(vlSelf->main__DOT__wbu_stb)) 
                       | (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))))) {
                vlSelf->__Vdly__main__DOT__wbu_stb 
                    = (1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request)));
            }
            if (((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                 & (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack))) {
                vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wb_state = 0U;
                vlSelf->main__DOT__wbu_cyc = 0U;
                vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 0U;
            }
            if (vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) {
                vlSelf->__Vdly__main__DOT__wbu_stb = 0U;
                vlSelf->main__DOT__wbu_cyc = 0U;
                vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wb_state = 0U;
                vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 0U;
            }
        } else {
            vlSelf->main__DOT__wbu_cyc = 0U;
            vlSelf->__Vdly__main__DOT__wbu_stb = 0U;
            vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 0U;
            if (((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n) 
                 & (~ (IData)(vlSelf->main__DOT__genbus__DOT__w_bus_busy)))) {
                if ((1U & (IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                   >> 0x23U)))) {
                    if ((1U & (IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                       >> 0x22U)))) {
                        vlSelf->__Vdly__main__DOT__wbu_stb = 1U;
                        vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wb_state = 1U;
                        vlSelf->main__DOT__wbu_cyc = 1U;
                        vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 1U;
                    }
                } else if ((1U & (IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                          >> 0x22U)))) {
                    vlSelf->__Vdly__main__DOT__wbu_stb = 1U;
                    vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wb_state = 2U;
                    vlSelf->main__DOT__wbu_cyc = 1U;
                    vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy = 1U;
                }
            }
        }
    }
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc));
    vlSelf->main__DOT__wbu_xbar__DOT__s_err = (0xcU 
                                               | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                                  & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err)));
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift 
        = (0x3fU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill));
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift 
            = (0x3fU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill));
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last)) 
                 & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last)) 
                    & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid)) 
                       | ((0x40U > (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill)) 
                          | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))))));
    if (vlSelf->main__DOT__u_fan__DOT__mem_ack) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word 
            = vlSelf->main__DOT__u_fan__DOT__mem_data;
    }
    vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set 
        = ((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb) 
           & (IData)(vlSelf->main__DOT__swic__DOT__sys_we));
    vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb 
        = ((vlSelf->main__DOT__swic__DOT__sys_data 
            - vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter) 
           - ((IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)
               ? 0U : 1U));
    vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
           & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
              & (((IData)(1U) + vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter) 
                 == vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when)));
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__r_valid 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid;
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))) {
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[0U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x10U];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[1U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x11U];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[2U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x12U];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[3U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x13U];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[4U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x14U];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[5U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x15U];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[6U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x16U];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[7U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x17U];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[8U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x18U];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[9U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x19U];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[0xaU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1aU];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[0xbU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1bU];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[0xcU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1cU];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[0xdU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1dU];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[0xeU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1eU];
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word[0xfU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1fU];
    }
    vlSelf->main__DOT__r_cfg_ack = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                          >> 9U));
    vlSelf->main__DOT__r_wb32_sio_ack = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                               >> 8U));
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full 
        = ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)) 
           & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
    vlSelf->main__DOT__wb32_i2cdma_ack = (1U & ((~ (IData)(vlSelf->i_reset)) 
                                                & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                                   >> 5U)));
    vlSelf->main__DOT__wb32_i2cs_ack = (1U & ((~ (IData)(vlSelf->i_reset)) 
                                              & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                                 >> 4U)));
    if ((1U & ((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc))))) {
        vlSelf->main__DOT__wb32_xbar__DOT__mgrant = 0U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available) {
            vlSelf->main__DOT__wb32_xbar__DOT__mgrant = 1U;
        } else if (vlSelf->main__DOT__wb32_xbar__DOT__m_stb) {
            vlSelf->main__DOT__wb32_xbar__DOT__mgrant = 0U;
        }
    }
    vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack 
        = ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack) 
           & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
              >> 3U));
    vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack 
        = ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack) 
           & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
              >> 2U));
    vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack 
        = ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack) 
           & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
              >> 1U));
    vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack = 
        ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack) 
         & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    vlSelf->main__DOT__wb32_uart_ack = (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                         >> 6U) & (IData)(vlSelf->main__DOT__console__DOT__r_wb_ack));
    vlSelf->main__DOT__wb32_fan_ack = ((~ ((IData)(vlSelf->i_reset) 
                                           | (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                 >> 7U)))) 
                                       & (IData)(vlSelf->main__DOT__u_fan__DOT__pre_ack));
    vlSelf->main__DOT__wb32_ddr3_phy_ack = ((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst_wb2)) 
                                            & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb) 
                                               & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                  >> 0xaU)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst_controller 
        = ((((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_from_wb2)) 
            | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_from_calibrate)) 
           | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_from_test));
    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst_wb2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__repeat_test = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_from_wb2 = 0U;
    } else {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__repeat_test = 0U;
        if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb) 
             & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                >> 0xaU))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane 
                = (7U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data 
                         >> 5U));
            if (((((((((0U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))) 
                       | (1U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                      | (2U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                     | (3U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                    | (4U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                   | (5U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                  | (6U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                 | (7U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))))) {
                if ((0U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update 
                            = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel));
                    }
                } else if ((1U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update 
                            = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel));
                    }
                } else if ((2U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update 
                            = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel));
                    }
                } else if ((3U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update 
                            = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel));
                    }
                }
            }
        }
        if ((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                      >> 0xaU) & (~ (IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall))))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel 
                = (0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                   >> 0x28U)));
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall)))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel = 0U;
        }
        vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_from_wb2 = 0U;
        if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb) 
             & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                >> 0xaU))) {
            if (((((((((0U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))) 
                       | (1U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                      | (2U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                     | (3U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                    | (4U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                   | (5U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                  | (6U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                 | (7U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))))) {
                if ((0U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld 
                            = (0xffU & ((IData)(1U) 
                                        << (7U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data 
                                                  >> 5U))));
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein 
                            = (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data);
                    }
                }
                if ((0U != (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld 
                                = (0xffU & ((IData)(1U) 
                                            << (7U 
                                                & (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data 
                                                   >> 5U))));
                            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein 
                                = (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data);
                        }
                    }
                    if ((1U != (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                        if ((2U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                            if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld 
                                    = (0xffU & ((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data 
                                                    >> 5U))));
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein 
                                    = (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data);
                            }
                        }
                        if ((2U != (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                            if ((3U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                                if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                                    vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld 
                                        = (0xffU & 
                                           ((IData)(1U) 
                                            << (7U 
                                                & (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data 
                                                   >> 5U))));
                                    vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein 
                                        = (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data);
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((((((((0U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))) 
                                | (1U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                               | (2U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                              | (3U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                             | (4U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                            | (5U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                           | (6U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                          | (7U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))))))) {
                if ((1U & (~ ((((((((8U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))) 
                                    | (9U == (0x1fU 
                                              & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                                   | (0xaU == (0x1fU 
                                               & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                                  | (0xbU == (0x1fU 
                                              & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                                 | (0xcU == (0x1fU 
                                             & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                                | (0xdU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                               | (0xeU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                              | (0xfU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))))))) {
                    if ((0x10U != (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                        if ((0x11U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                            if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__repeat_test 
                                    = (1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data);
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_from_wb2 
                                    = (1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data 
                                             >> 1U));
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack 
            = (IData)(((6U == (6U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr))) 
                       & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr) 
                          | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack))));
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache) 
             | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort = 1U;
        }
    } else {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cline 
        = (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                 >> 3U));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_ctag 
        = (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                        >> 3U));
    vlSelf->main__DOT__swic__DOT__sys_cyc = ((IData)(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc) 
                                             | (IData)(vlSelf->main__DOT__swic__DOT__dbg_cyc));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy 
        = ((~ ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
               | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err)))) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
              | ((~ ((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state)) 
                     & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack))) 
                 & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending) 
                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid))) 
                    | ((~ ((((1U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state)) 
                             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack)) 
                            & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack)) 
                           & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce)))) 
                       & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc 
        = ((0x80000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc) 
           | ((0x10U & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))
               ? ((0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc) 
                  | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
                     << 1U)) : ((0x7ffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc) 
                                | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase) 
                                   << 1U))));
    if (((IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)))) {
        vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr 
            = vlSelf->main__DOT____Vcellinp__swic__i_dbg_addr;
    }
    vlSelf->main__DOT____Vcellinp__swic__i_dbg_addr 
        = (0x7fU & ((IData)(vlSelf->cpu_sim_cyc) ? (IData)(vlSelf->cpu_sim_addr)
                     : (IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                >> 0x1eU))));
    vlSelf->main__DOT__gpioi__DOT__q_gpio = vlSelf->main__DOT__gpioi__DOT__x_gpio;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err)));
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep = 0U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                & (0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))))) {
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) {
            if ((0x20U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl)) {
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep 
                    = (1U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                             >> 4U));
            }
        } else {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep 
                = (1U & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                          >> 4U) & ((~ (IData)(vlSelf->main__DOT__swic__DOT__pic_interrupt)) 
                                    | (~ (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                                          >> 5U)))));
        }
    }
    vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any 
        = (0U != ((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h39e03a19__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid) 
           | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy) 
              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc 
        = ((((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
             | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache)) 
            | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe)) 
           | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt) 
              | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt) 
                 | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                     & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                        == (1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                                  >> 4U)))) & (0xfU 
                                               == (0xfU 
                                                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))))));
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload = 0U;
        vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload = 0U;
        vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload = 0U;
        vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set = 0U;
        vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie = 0U;
    } else {
        if (vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write) {
            vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload 
                = ((vlSelf->main__DOT__swic__DOT__sys_data 
                    >> 0x1fU) & (0U != (0x7fffffffU 
                                        & vlSelf->main__DOT__swic__DOT__sys_data)));
        }
        if (vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write) {
            vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload 
                = ((vlSelf->main__DOT__swic__DOT__sys_data 
                    >> 0x1fU) & (0U != (0x7fffffffU 
                                        & vlSelf->main__DOT__swic__DOT__sys_data)));
        }
        if (vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write) {
            vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload 
                = ((vlSelf->main__DOT__swic__DOT__sys_data 
                    >> 0x1fU) & (0U != (0x7fffffffU 
                                        & vlSelf->main__DOT__swic__DOT__sys_data)));
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints) 
             & (vlSelf->main__DOT__swic__DOT__sys_data 
                >> 0x1fU))) {
            vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie = 1U;
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints) 
                    & (vlSelf->main__DOT__swic__DOT__sys_data 
                       >> 0x1fU))) {
            vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie = 0U;
        }
        if (((((IData)(vlSelf->main__DOT__swic__DOT__dmac_stb) 
               & (IData)(vlSelf->main__DOT__swic__DOT__sys_we)) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request))) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)))) {
            if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))) {
                if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))) {
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length 
                        = (0x7fffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len);
                }
                if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__sys_addr)))) {
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst 
                        = (0x7fffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))) {
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src 
                        = (0x7fffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src);
                }
            }
        } else if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                   << 6U);
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                   << 6U);
        }
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie = 0U;
        } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie = 1U;
        }
    }
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
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
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
    vlSelf->main__DOT__u_fan__DOT__ck_tach = (1U & 
                                              ((IData)(vlSelf->main__DOT__u_fan__DOT__pipe_tach) 
                                               >> 1U));
    vlSelf->main__DOT__u_fan__DOT__pipe_tach = ((2U 
                                                 & ((IData)(vlSelf->main__DOT__u_fan__DOT__pipe_tach) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->i_fan_tach));
    if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge) {
        if ((8U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
            if ((4U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
                if ((2U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
                    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 1U;
                    if ((1U & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy)))) {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 0U;
                    }
                } else if ((1U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
                    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 1U;
                    if ((1U & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy)))) {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 0U;
                    }
                } else if ((1U & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch)))) {
                    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 1U;
                    if ((1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda)) 
                               | (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl))))) {
                        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 1U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 0xaU;
                    }
                }
            } else if ((2U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
                if ((1U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch)))) {
                        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 1U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 0xcU;
                        if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda) 
                             != (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda))) {
                            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 1U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 0xaU;
                        }
                    }
                } else {
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 1U;
                    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                    if ((((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy)) 
                          & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl)) 
                         & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda))) {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                if ((1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl)) 
                           & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda))))) {
                    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 3U;
                }
            } else {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl) {
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state 
                        = (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir) 
                            & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda))
                            ? 9U : 2U);
                }
            }
        } else if ((4U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
            if ((2U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
                if ((1U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda 
                        = (1U & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir) 
                                 | (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack))));
                    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 8U;
                } else {
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda 
                        = (1U & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir) 
                                 | (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack))));
                    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                    if ((1U & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl)))) {
                        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir) {
                            if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir) {
                                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 7U;
                            }
                        } else if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda) 
                                    != (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack))) {
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 7U;
                        }
                    }
                    if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl) {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 6U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
                if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl) {
                    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg 
                        = ((0xfeU & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg) 
                                     << 1U)) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda));
                    if ((0U < (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits))) {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits 
                            = (7U & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits) 
                                     - (IData)(1U)));
                    }
                    if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir) 
                         & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda) 
                            != (1U & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg) 
                                      >> 7U))))) {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 1U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 0xaU;
                        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                    } else {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state 
                            = ((0U == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits))
                                ? 6U : 4U);
                    }
                } else {
                    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                }
            } else {
                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda 
                    = (1U & (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg) 
                              >> 7U) | (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir))));
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda) 
                     == (1U & (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg) 
                                >> 7U) | (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir)))))) {
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 5U;
                }
                if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl) {
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 4U;
                }
            }
        } else if ((2U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
            if ((1U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl) {
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 1U;
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 0U;
                }
            } else {
                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 0U;
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack = 1U;
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte = 0U;
                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg 
                    = (0xffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn));
                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir = 0U;
                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid) 
                     & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready))) {
                    if ((0x400U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                        if ((0x200U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                            if ((0x100U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte = 1U;
                                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack = 0U;
                                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 7U;
                                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 4U;
                            } else {
                                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte = 1U;
                                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 7U;
                                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 4U;
                            }
                        } else if ((0x100U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack = 0U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 7U;
                            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 4U;
                        } else {
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 7U;
                            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 4U;
                        }
                    } else if ((0x200U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                        if ((0x100U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir = 1U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 7U;
                            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 4U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg 
                                = (0xffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn));
                        } else {
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 3U;
                        }
                    } else if ((0x100U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 1U;
                        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 0xbU;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state 
                = ((4U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits))
                    ? 4U : 2U);
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 0U;
        } else {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 0U;
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack = 1U;
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte = 0U;
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg 
                = (0xffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn));
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir = 0U;
            if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid) 
                 & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready))) {
                if ((0x400U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                    if ((0x200U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                        if ((0x100U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 1U;
                            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte = 1U;
                            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack = 0U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 7U;
                        } else {
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 1U;
                            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte = 1U;
                            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 7U;
                        }
                    } else if ((0x100U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack = 0U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 7U;
                        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 1U;
                    } else {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 1U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 7U;
                    }
                } else if ((0x200U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                    if ((0x100U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 1U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir = 1U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits = 7U;
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg 
                            = (0xffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn));
                    }
                } else if ((0x100U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))) {
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 0U;
                    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 1U;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)))) {
        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda = 1U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl = 1U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state = 0U;
    }
    if (((((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort)) 
          | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual)) 
         | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid = 0U;
    } else if (((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle)) 
                & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid = 0U;
        if (((((3U != (0xfU & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn) 
                               >> 4U))) & (0xdU != 
                                           (0xfU & 
                                            ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn) 
                                             >> 4U)))) 
              & (0U != (0xfU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn)))) 
             & (9U != (0xfU & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn) 
                               >> 4U))))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid = 1U;
        }
    } else if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid = 0U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid)) 
               | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready)))) {
        vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data 
            = ((IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)
                ? (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data)
                : (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data));
    }
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb = 0U;
        vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual = 0U;
        vlSelf->main__DOT__i2ci__DOT__insn = 0U;
        vlSelf->main__DOT__u_i2cdma__DOT__r_reset = 1U;
        vlSelf->main__DOT__i2ci__DOT__half_insn = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual = 0U;
        vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid = 0U;
        vlSelf->main__DOT__u_i2cdma__DOT__r_memlen = 0U;
        vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr = 0U;
    } else {
        if (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
             & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_busy)))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb = 1U;
        } else if (((0U == (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len)) 
                    & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy)))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb = 0U;
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__bus_write) 
              & (1U == (3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]))) 
             & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                        >> 0x11U)))) {
            vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual 
                = (1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U] 
                         >> 0xbU));
        } else if (vlSelf->main__DOT__i2ci__DOT__bus_jump) {
            vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual = 0U;
        }
        if (vlSelf->main__DOT__i2ci__DOT__next_valid) {
            if (vlSelf->main__DOT__i2ci__DOT__imm_cycle) {
                vlSelf->main__DOT__i2ci__DOT__insn 
                    = ((0xf00U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn)) 
                       | (IData)(vlSelf->main__DOT__i2ci__DOT__next_insn));
                vlSelf->main__DOT__i2ci__DOT__half_insn = 0U;
            } else {
                vlSelf->main__DOT__i2ci__DOT__insn 
                    = ((0xffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn)) 
                       | (0xf00U & ((IData)(vlSelf->main__DOT__i2ci__DOT__next_insn) 
                                    << 4U)));
                vlSelf->main__DOT__i2ci__DOT__half_insn 
                    = (0xfU & (IData)(vlSelf->main__DOT__i2ci__DOT__next_insn));
            }
        } else if (((~ (IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle)) 
                    & (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready))) {
            vlSelf->main__DOT__i2ci__DOT__insn = ((0xffU 
                                                   & (IData)(vlSelf->main__DOT__i2ci__DOT__insn)) 
                                                  | ((IData)(vlSelf->main__DOT__i2ci__DOT__half_insn) 
                                                     << 8U));
            vlSelf->main__DOT__i2ci__DOT__half_insn = 0U;
        }
        if ((0x20U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                      & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))) {
            if ((0x200U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) {
                if ((0x100U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) {
                    vlSelf->main__DOT__u_i2cdma__DOT__r_reset 
                        = (0U != (0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x14U))));
                    vlSelf->main__DOT__u_i2cdma__DOT__r_memlen 
                        = (0x7fffffffU & vlSelf->main__DOT__u_i2cdma__DOT__next_memlen);
                } else {
                    vlSelf->main__DOT__u_i2cdma__DOT__r_reset 
                        = (0U != (0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x14U))));
                }
                if ((1U & (~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                              >> 8U)))) {
                    vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr 
                        = (0x7fffffffU & vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr);
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                             >> 5U)))) {
            vlSelf->main__DOT__u_i2cdma__DOT__r_reset 
                = (((0U == vlSelf->main__DOT__u_i2cdma__DOT__r_memlen) 
                    | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__bus_err)) 
                   | (0x80000000U <= (vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr 
                                      + vlSelf->main__DOT__u_i2cdma__DOT__r_memlen)));
        }
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn 
                = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle)
                    ? ((0xf00U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn)) 
                       | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn))
                    : ((0xffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn)) 
                       | (0xf00U & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn) 
                                    << 4U))));
        } else if (((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle)) 
                    & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn 
                = ((0xffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn)) 
                   | ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
                      << 8U));
        }
        if ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) 
              & (0x1000000U == (0x3000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]))) 
             & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                        >> 0x1dU)))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual 
                = (1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U] 
                         >> 0xbU));
        } else if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__skd_valid)) 
                   | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready)))) {
            vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid 
                = ((IData)(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID) 
                   | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid));
        }
    }
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy) 
           | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__cp_stb;
    vlSelf->main__DOT__i2cscopei__DOT__br_config = vlSelf->__Vdly__main__DOT__i2cscopei__DOT__br_config;
    vlSelf->main__DOT__scope3_ddr3i__DOT__br_config 
        = vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__br_config;
    vlSelf->main__DOT__scope2_ddr3i__DOT__br_config 
        = vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__br_config;
    vlSelf->main__DOT__scope1_ddr3i__DOT__br_config 
        = vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__br_config;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__cw_stb;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter;
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
    vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when 
        = vlSelf->__Vdly__main__DOT__swic__DOT__u_jiffies__DOT__int_when;
    vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter 
        = vlSelf->__Vdly__main__DOT__swic__DOT__u_jiffies__DOT__r_counter;
    vlSelf->main__DOT__wb32_wbdown_stb = ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full)) 
                                          & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_from_test 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__reset_from_test;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_addr;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_cyc;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__dir;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg;
    vlSelf->main__DOT__i2ci__DOT__w_sda = vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda;
    vlSelf->main__DOT__i2ci__DOT__i2c_ckedge = vlSelf->__Vdly__main__DOT__i2ci__DOT__i2c_ckedge;
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits;
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
    vlSelf->main__DOT__u_i2cdma__DOT__bus_err = vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__bus_err;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_busy 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
           & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
    vlSelf->main__DOT__i2cscopei__DOT__qd_data = vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4;
    vlSelf->main__DOT__i2cscopei__DOT__bw_reset_request 
        = (1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                    >> 2U)));
    vlSelf->main__DOT__i2cscopei__DOT__dw_trigger = 
        ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_primed) 
         & (((~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config)) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted)) 
            | ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
               >> 1U)));
    vlSelf->main__DOT__i2cscope_int = (IData)(((((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                                 >> 4U) 
                                                & (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))) 
                                               & (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt))));
    vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data = 
        (0x7fffffffU & vlSelf->i_ddr3_controller_iserdes_data[0U]);
    vlSelf->main__DOT__scope3_ddr3i__DOT__bw_reset_request 
        = (1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                    >> 2U)));
    vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger 
        = ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed) 
           & (((~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config)) 
               & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__repeat_test)) 
              | ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                 >> 1U)));
    vlSelf->main__DOT__scope3_ddr3_int = (IData)(((
                                                   ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                                    >> 4U) 
                                                   & (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))) 
                                                  & (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt))));
    vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data = 
        (0x7fffffffU & vlSelf->i_ddr3_controller_iserdes_data[1U]);
    vlSelf->main__DOT__scope2_ddr3i__DOT__bw_reset_request 
        = (1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                    >> 2U)));
    vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger 
        = ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed) 
           & (((~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config)) 
               & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__repeat_test)) 
              | ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                 >> 1U)));
    vlSelf->main__DOT__scope2_ddr3_int = (IData)(((
                                                   ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                                    >> 4U) 
                                                   & (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))) 
                                                  & (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt))));
    vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data = vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4;
    vlSelf->main__DOT__scope1_ddr3i__DOT__bw_reset_request 
        = (1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                    >> 2U)));
    vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger 
        = ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed) 
           & (((~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config)) 
               & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__repeat_test)) 
              | ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                 >> 1U)));
    vlSelf->main__DOT__scope1_ddr3_int = (IData)(((
                                                   ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                                    >> 4U) 
                                                   & (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))) 
                                                  & (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt))));
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__cod_busy 
        = (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb)) 
               | (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy))))) {
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid 
            = (1U & (vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__remap
                     [(0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))] 
                     >> 6U));
    }
    if (((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
         & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy)))) {
        if ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len) 
              == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len)) 
             & (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len)))) {
            vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg 
                = ((0x3fffffffULL & vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg) 
                   | ((QData)((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits)) 
                      << 0x1eU));
        } else if ((4U & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))) {
            if ((1U & (~ ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len) 
                          >> 1U)))) {
                vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg 
                    = ((1U & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))
                        ? ((0xfffffffc0ULL & vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg) 
                           | (IData)((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits)))
                        : ((0xffffff03fULL & vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg) 
                           | ((QData)((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits)) 
                              << 6U)));
            }
        } else {
            vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg 
                = ((2U & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))
                    ? ((1U & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))
                        ? ((0xffffc0fffULL & vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg) 
                           | ((QData)((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits)) 
                              << 0xcU)) : ((0xfff03ffffULL 
                                            & vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg) 
                                           | ((QData)((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits)) 
                                              << 0x12U)))
                    : ((1U & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))
                        ? ((0xfc0ffffffULL & vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg) 
                           | ((QData)((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits)) 
                              << 0x18U)) : ((0x3fffffffULL 
                                             & vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg) 
                                            | ((QData)((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits)) 
                                               << 0x1eU))));
        }
    }
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
    if (((IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read) 
         & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))) {
        vlSelf->main__DOT__genbus__DOT__ofifo_codword 
            = vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__fifo
            [(0x3ffU & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr))];
    }
    __Vtableidx1 = (((IData)(vlSelf->main__DOT__u_fan__DOT__mem_addr) 
                     << 1U) | (IData)(vlSelf->main__DOT__u_fan__DOT__mem_stb));
    if (Vmain__ConstPool__TABLE_h13ae860a_0[__Vtableidx1]) {
        vlSelf->main__DOT__u_fan__DOT__mem_data = Vmain__ConstPool__TABLE_h3e5c4ef2_0
            [__Vtableidx1];
    }
    vlSelf->main__DOT__u_fan__DOT__mem_ack = ((~ (IData)(vlSelf->i_reset)) 
                                              & (IData)(vlSelf->main__DOT__u_fan__DOT__mem_stb));
    if (vlSelf->main__DOT____Vcellinp__swic__i_reset) {
        vlSelf->main__DOT__swic__DOT__cmd_halt = 1U;
    } else if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->main__DOT__swic__DOT__cmd_halt = 1U;
    } else {
        if (((((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_write)) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall))) 
              & (IData)(vlSelf->main__DOT__swic__DOT__dbg_cmd_write)) 
             & (((~ vlSelf->main__DOT__swic__DOT__dbg_idata) 
                 & (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0)) 
                | (IData)(vlSelf->main__DOT__swic__DOT__step_request)))) {
            vlSelf->main__DOT__swic__DOT__cmd_halt = 0U;
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__cpu_break) 
             & (IData)(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch))) {
            vlSelf->main__DOT__swic__DOT__cmd_halt = 1U;
        }
        if ((((IData)(vlSelf->main__DOT__swic__DOT__dbg_cmd_write) 
              & (IData)(vlSelf->main__DOT__swic__DOT__halt_request)) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__step_request)))) {
            vlSelf->main__DOT__swic__DOT__cmd_halt = 1U;
        }
        if (vlSelf->main__DOT__swic__DOT__dbg_cpu_write) {
            vlSelf->main__DOT__swic__DOT__cmd_halt = 1U;
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_step) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__step_request)))) {
            vlSelf->main__DOT__swic__DOT__cmd_halt = 1U;
        }
        if (vlSelf->main__DOT__swic__DOT__cmd_clear_cache) {
            vlSelf->main__DOT__swic__DOT__cmd_halt = 1U;
        }
        if (vlSelf->main__DOT__swic__DOT__clear_cache_request) {
            vlSelf->main__DOT__swic__DOT__cmd_halt = 1U;
        }
    }
    if ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant))) {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][0U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][1U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][2U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][3U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][4U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][5U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][6U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][7U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][8U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][9U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][0xaU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][0xbU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][0xcU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][0xdU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][0xeU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [0U]][0xfU];
    } else {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[1U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[2U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[3U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[4U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[5U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[6U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[7U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[8U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[9U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xaU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xbU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xcU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xdU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xeU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xfU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant))) {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][0U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][1U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x12U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][2U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x13U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][3U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x14U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][4U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x15U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][5U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x16U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][6U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x17U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][7U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x18U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][8U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x19U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][9U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1aU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][0xaU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1bU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][0xbU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1cU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][0xcU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1dU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][0xdU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1eU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][0xeU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1fU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [1U]][0xfU];
    } else {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x10U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x11U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x12U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x13U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x14U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x15U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x16U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x17U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x18U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x19U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1aU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1bU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1cU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1dU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1eU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1fU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant))) {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x20U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][0U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x21U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][1U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x22U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][2U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x23U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][3U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x24U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][4U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x25U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][5U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x26U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][6U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x27U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][7U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x28U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][8U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x29U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][9U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2aU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][0xaU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2bU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][0xbU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2cU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][0xcU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2dU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][0xdU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2eU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][0xeU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2fU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [2U]][0xfU];
    } else {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x20U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x21U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x22U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x23U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x24U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x25U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x26U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x27U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x28U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x29U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2aU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2bU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2cU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2dU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2eU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2fU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant))) {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x30U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][0U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x31U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][1U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x32U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][2U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x33U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][3U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x34U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][4U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x35U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][5U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x36U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][6U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x37U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][7U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x38U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][8U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x39U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][9U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3aU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][0xaU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3bU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][0xbU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3cU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][0xcU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3dU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][0xdU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3eU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][0xeU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3fU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT__s_data
            [vlSelf->main__DOT__wbwide_xbar__DOT__mindex
            [3U]][0xfU];
    } else {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x30U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x31U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x32U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x33U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x34U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x35U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x36U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x37U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x38U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x39U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3aU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3bU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3cU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3dU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3eU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3fU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = ((0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)) 
           | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                    & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack) 
                       >> vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                       [0U]))));
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc))) 
               | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = ((0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)) 
           | (2U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                    & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack) 
                        >> vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                        [1U]) << 1U))));
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [1U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                               >> 1U))) 
               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                  >> 1U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = ((0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)) 
           | (4U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                    & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack) 
                        >> vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                        [2U]) << 2U))));
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [2U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                               >> 2U))) 
               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                  >> 2U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = ((7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)) 
           | ((IData)((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                        >> 3U) & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack) 
                                  >> vlSelf->main__DOT__wbwide_xbar__DOT__mindex
                                  [3U]))) << 3U));
    if ((8U & vlSelf->main__DOT__wbwide_xbar__DOT__grant
         [3U])) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                               >> 3U))) 
               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                  >> 3U)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    }
    vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr 
        = ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
           & (IData)(vlSelf->main__DOT__wb32_wbdown_stb));
    vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack 
        = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                 >> 3U));
    vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack 
        = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                 >> 2U));
    vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack 
        = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                 >> 1U));
    vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack 
        = (1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb));
    vlSelf->main__DOT__console__DOT__r_wb_ack = (1U 
                                                 & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                                                    >> 6U));
    vlSelf->main__DOT__u_fan__DOT__pre_ack = (1U & 
                                              ((~ ((IData)(vlSelf->i_reset) 
                                                   | (~ 
                                                      ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                       >> 7U)))) 
                                               & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                                  >> 7U)));
    vlSelf->o_ddr3_controller_reset = vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst_controller;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_from_calibrate = 0U;
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) {
        vlSelf->main__DOT__swic__DOT__cpu_addr = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr;
        vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl;
    } else {
        vlSelf->main__DOT__swic__DOT__cpu_addr = vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr;
        vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc = vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc;
    }
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0 
        = ((0U == (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state)) 
           | (2U == (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state)));
    __Vtableidx6 = (7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel 
        = Vmain__ConstPool__TABLE_h611c22d1_0[__Vtableidx6];
    __Vtableidx4 = ((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                      & (IData)((0x78800000U == (0xfffc0000U 
                                                 & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU])))) 
                     << 4U) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp) 
                                << 3U) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid) 
                                           << 2U) | 
                                          (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) 
                                            << 1U) 
                                           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset)))));
    if ((1U & Vmain__ConstPool__TABLE_h92ecbd6e_0[__Vtableidx4])) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch 
            = Vmain__ConstPool__TABLE_h695e6748_0[__Vtableidx4];
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb 
        = Vmain__ConstPool__TABLE_h695e6748_0[__Vtableidx4];
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit 
        = ((IData)(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN) 
           & ((((IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl) 
                & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl)) 
               & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda)) 
              & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda))));
    vlSelf->main__DOT__i2ci__DOT__s_tvalid = ((IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid) 
                                              & ((~ 
                                                  ((IData)(vlSelf->main__DOT__i2ci__DOT__insn) 
                                                   >> 0xbU)) 
                                                 & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
    vlSelf->main__DOT__gpioi__DOT__x_gpio = vlSelf->i_gpio;
    vlSelf->main__DOT__swic__DOT__pic_interrupt = (
                                                   (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
                                                   & ((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie) 
                                                      & (IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any)));
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset) {
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr = 0U;
    } else {
        if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc) 
             & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc = 0U;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb = 0U;
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr = 0U;
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr = 0U;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size = 0U;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len = 0U;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy = 0U;
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err = 1U;
        } else if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy) {
            if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall)))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb = 0U;
            }
            if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len) 
                 > (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb = 1U;
            }
            if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy = 0U;
            }
            if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall)))) {
                if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len) 
                     <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len = 0U;
                } else {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len 
                        = (0x7ffU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len) 
                                     - (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size)));
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb = 1U;
                }
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                    = (0x1ffffffU & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr 
                                     >> 6U));
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr 
                    = (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr);
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size;
            }
            if ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding) 
                  == ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack)
                       ? 1U : 0U)) & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb)))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc = 0U;
            }
        } else {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request;
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err = 0U;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size = 0U;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len = 0U;
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                = (0x1ffffffU & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr 
                                 >> 6U));
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr 
                = (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr);
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen;
        }
        if ((1U & (((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy)) 
                    | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err)) 
                   | ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc) 
                      & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err))))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy 
                = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request) 
                   & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy)));
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb = 0U;
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr = 0U;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err 
                = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc) 
                   & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err));
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr 
                = (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr);
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last = 0U;
            if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy = 0U;
            }
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                = (0x1ffffffU & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr 
                                 >> 6U));
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb)) 
                          | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall))))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb = 0U;
            if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb) {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                    = (0x1ffffffU & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
                                     >> 6U));
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr 
                    = (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr);
            }
            if ((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
                 >> 0x1fU)) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err = 1U;
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc = 0U;
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb = 0U;
            } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full)))) {
                if ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last) 
                      & (0U != vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel)) 
                     | ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid) 
                        & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last))))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc = 1U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb = 1U;
                } else if ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding) 
                             + ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb)
                                 ? 1U : 0U)) == ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack)
                                                  ? 1U
                                                  : 0U))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc = 0U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy 
                        = (1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last)));
                }
            }
            if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last)))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last;
            }
        }
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance)
            ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address
            : vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc);
    vlSelf->main__DOT__swic__DOT__cpu_i_count = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid) 
           | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error))));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF)) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
           & (((IData)(vlSelf->main__DOT__swic__DOT__cmd_clear_cache) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall))) 
              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                  & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))) 
                 & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                    >> 0xeU))));
    if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN) {
        if ((1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl)) 
                   | (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda))))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy = 1U;
        } else if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge)) 
                   | ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch) 
                      & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready)))))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort = 0U;
        } else {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort = 0U;
            if (((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl) 
                   & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir)) 
                  & (8U == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) 
                 & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort = 1U;
            }
            if (((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl) 
                   & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir)) 
                  & (5U == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state))) 
                 & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda) 
                    != (1U & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg) 
                              >> 7U))))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort = 1U;
            }
            if (((0xbU == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state)) 
                 & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda) 
                    != (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda)))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort = 1U;
            }
            if (((0xcU == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state)) 
                 & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl)) 
                    | (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda))))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort = 1U;
            }
        }
    } else {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data 
            = vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data;
    }
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy 
        = ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
           & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
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
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len;
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len;
    if (vlSelf->__Vdlyvset__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__fifo__v0) {
        vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__fifo[vlSelf->__Vdlyvdim0__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__fifo__v0;
    }
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr;
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__cw_stb;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__zero_acks;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__last_ack;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__last_read_request;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wb_state;
    vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack;
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n;
    vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
        = vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr;
    vlSelf->main__DOT__genbus__DOT__r_wdt_reset = vlSelf->__Vdly__main__DOT__genbus__DOT__r_wdt_reset;
    vlSelf->main__DOT__u_fan__DOT__mem_addr = vlSelf->__Vdly__main__DOT__u_fan__DOT__mem_addr;
    vlSelf->main__DOT__u_fan__DOT__mem_stb = vlSelf->__Vdly__main__DOT__u_fan__DOT__mem_stb;
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
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr 
        = ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full)) 
           & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty 
        = ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr)) 
           & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
    vlSelf->main__DOT__swic__DOT__cpu_stall = ((IData)(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc) 
                                               & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                                  | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                                     >> 2U)));
    vlSelf->main__DOT__i2ci__DOT__insn_ready = ((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge) 
                                                & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0));
    vlSelf->main__DOT__i2ci__DOT__imm_cycle = vlSelf->__Vdly__main__DOT__i2ci__DOT__imm_cycle;
    vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any 
        = (0U != ((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable)));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len;
}
