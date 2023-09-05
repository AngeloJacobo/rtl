// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmain__Syms.h"
#include "Vmain___024root.h"

extern const VlWide<16>/*511:0*/ Vmain__ConstPool__CONST_h93e1b771_0;
extern const VlWide<18>/*575:0*/ Vmain__ConstPool__CONST_hb679b2e5_0;

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__1(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v2;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v2 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v2;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v2 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v2;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v2 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v2;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v2 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 = 0;
    CData/*5:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 = 0;
    CData/*5:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v4;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v4 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v4;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v4 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3 = 0;
    CData/*5:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3 = 0;
    CData/*7:0*/ __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw;
    __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw = 0;
    SData/*15:0*/ __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe;
    __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe = 0;
    CData/*0:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss = 0;
    // Body
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss 
        = (((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid))) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd)) 
            & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc)) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we))) 
           & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag 
               != vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_ctag) 
              | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv))));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid = 0U;
    }
    if (((IData)(vlSelf->main__DOT__console__DOT__txf_wb_write) 
         & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow) 
            | ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read) 
               & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next) 
                  == (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))))) {
        vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write 
            = vlSelf->main__DOT__console__DOT__txf_wb_data;
    }
    if ((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                >> 4U) & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                             >> 4U))))) {
        vlSelf->main__DOT__i2ci__DOT__bus_read_data = 0U;
        if ((0x20U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U])) {
            vlSelf->main__DOT__i2ci__DOT__bus_read_data 
                = ((0x10U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U])
                    ? ((0xfffff000U & vlSelf->main__DOT__i2ci__DOT__bus_read_data) 
                       | (IData)(vlSelf->main__DOT__i2ci__DOT__ckcount))
                    : ((0xf0000000U & vlSelf->main__DOT__i2ci__DOT__bus_read_data) 
                       | vlSelf->main__DOT__i2ci__DOT__pf_insn_addr));
        } else if ((0x10U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U])) {
            vlSelf->main__DOT__i2ci__DOT__bus_read_data 
                = ((0xffff0000U & vlSelf->main__DOT__i2ci__DOT__bus_read_data) 
                   | (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl) 
                       << 0xfU) | (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda) 
                                    << 0xeU) | (((IData)(vlSelf->i_i2c_scl) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->i_i2c_sda) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted) 
                                                          << 0xaU) 
                                                         | (IData)(vlSelf->main__DOT__i2ci__DOT__ovw_data))))))));
        } else {
            vlSelf->main__DOT__i2ci__DOT__bus_read_data 
                = (((IData)(vlSelf->main__DOT__i2ci__DOT__half_insn) 
                    << 0x1cU) | (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual) 
                                  << 0x18U) | vlSelf->main__DOT__i2ci__DOT____VdfgTmp_h373818eb__0));
        }
    }
    vlSelf->main__DOT__wbu_zip_idata = vlSelf->main__DOT__swic__DOT__dbg_odata;
    if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0x12U];
    }
    if (vlSelf->main__DOT__console__DOT__tx_uart_reset) {
        vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc = 0U;
    } else if (((IData)(vlSelf->main__DOT__console__DOT__txf_wb_write) 
                & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow) 
                   | ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read) 
                      & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next) 
                         == (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))))) {
        vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc = 1U;
    } else if (vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6) {
        vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc = 0U;
    }
    if (vlSelf->main__DOT__console__DOT__rx_uart_reset) {
        vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc = 0U;
    } else if (((IData)(vlSelf->main__DOT__w_console_rx_stb) 
                & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                   | ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read) 
                      & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next) 
                         == (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))))) {
        vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc = 1U;
    } else if (vlSelf->main__DOT__console__DOT__rxf_wb_read) {
        vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc = 0U;
    }
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid = 0U;
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                      | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 0U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) 
                & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step)) 
                   | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped))))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 0U;
    } else {
        if (vlSelf->main__DOT__swic__DOT__pic_interrupt) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 1U;
        }
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 1U;
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 1U;
        }
        if (((((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy)) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy))) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy))) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce)) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 1U;
        }
    }
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__i2c_valid)) 
                      | (IData)(vlSelf->main__DOT__i2c_ready)))) {
        if (((((IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid) 
               & (0xd00U == (0xf00U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn)))) 
              & (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready)) 
             & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt)))) {
            vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid 
                = (3U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn));
        } else if ((((IData)(vlSelf->main__DOT__i2c_valid) 
                     & (IData)(vlSelf->main__DOT__i2c_ready)) 
                    & (IData)(vlSelf->main__DOT__i2c_last))) {
            vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid 
                = vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel;
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt)))) {
            vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid 
                = vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel;
        }
    }
    if (((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
         & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
            & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
               & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond) 
                  & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim) 
                     & ((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                            & ((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))) 
                               & ((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                                         >> 4U)) == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))))) 
                        & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu)))))))) {
        if (VL_UNLIKELY((IData)((0x100U == (0xffd00U 
                                            & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv))))) {
            VL_FINISH_MT("cpu/zipcore.v", 1958, "");
        }
        if (VL_UNLIKELY((0x2ffU == (0xfffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv)))) {
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))))) {
                VL_WRITEF("sR0 : %08x sR1 : %08x sR2 : %08x sR3 : %08x\nsR4 : %08x sR5 : %08x sR6 : %08x sR7 : %08x\nsR8 : %08x sR9 : %08x sR10: %08x sR11: %08x\nsR12: %08x sSP : %08x sCC : %08x sPC : %08x\n\n%9#",
                          32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [0U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [1U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [2U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [3U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [4U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [5U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [6U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [7U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [8U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [9U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [0xaU],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [0xbU],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [0xcU],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [0xdU],16,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags,
                          28,((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                               ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc
                               : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),
                          28,((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                               ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc
                               : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc));
            }
            VL_WRITEF("uR0 : %08x uR1 : %08x uR2 : %08x uR3 : %08x\nuR4 : %08x uR5 : %08x uR6 : %08x uR7 : %08x\nuR8 : %08x uR9 : %08x uR10: %08x uR11: %08x\nuR12: %08x uSP : %08x uCC : %08x uPC : %08x\n",
                      32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x10U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x11U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x12U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x13U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x14U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x15U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x16U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x17U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x18U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x19U],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x1aU],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x1bU],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x1cU],32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                      [0x1dU],16,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags,
                      28,((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                           ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc
                           : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc));
        }
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim = 1U;
        if (VL_UNLIKELY((0x20U == (0xffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv 
                                              >> 4U))))) {
            VL_WRITEF("@%08x %cR[%2#] = 0x",28,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc,
                      8,((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                          ? 0x73U : 0x75U),4,(0xfU 
                                              & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv));
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                    == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid)))) {
                VL_WRITEF("%08x\n",32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl);
            } else {
                VL_WRITEF("%08x\n",32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid]);
            }
        }
        if (VL_UNLIKELY((0x21U == (0xffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv 
                                              >> 4U))))) {
            VL_WRITEF("@%08x uR[%2#] = 0x",28,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc,
                      4,(0xfU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv));
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                    == (0x10U | (0xfU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv))))) {
                VL_WRITEF("%08x\n\n",32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl);
            } else {
                VL_WRITEF("%08x\n\n",32,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                          [(0x10U | (0xfU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv))]);
            }
        }
        if ((0x23U == (0xffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv 
                                  >> 4U)))) {
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                    == (0x10U | (0xfU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv))))) {
                VL_WRITEF("%c",8,(0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl));
            } else {
                VL_WRITEF("%c",8,(0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                                  [(0x10U | (0xfU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv))]));
            }
        }
        if ((0x22U == (0xffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv 
                                  >> 4U)))) {
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                    == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid)))) {
                VL_WRITEF("%c",8,(0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl));
            } else {
                VL_WRITEF("%c",8,(0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                                  [vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid]));
            }
        }
        if (VL_UNLIKELY((4U == (0xfffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv 
                                          >> 8U))))) {
            VL_WRITEF("%c",8,(0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv));
        }
    } else {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim = 0U;
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack 
        = ((~ (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                               >> 1U))) 
               | (~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc)))) 
           & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty)
               ? (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null)
               : (((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                   >> 4U) & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))));
    vlSelf->main__DOT__wb32_fan_idata = ((1U & ((IData)(vlSelf->i_reset) 
                                                | (~ 
                                                   ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                    >> 7U))))
                                          ? 0U : ((IData)(vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack)
                                                   ? vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data
                                                   : vlSelf->main__DOT__u_fan__DOT__pre_data));
    vlSelf->main__DOT__wb32_i2cdma_idata = 0U;
    vlSelf->main__DOT__wb32_i2cdma_idata = ((0x40000000U 
                                             & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U])
                                             ? ((0xf0000000U 
                                                 & vlSelf->main__DOT__wb32_i2cdma_idata) 
                                                | ((0x20000000U 
                                                    & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U])
                                                    ? vlSelf->main__DOT__u_i2cdma__DOT__r_memlen
                                                    : vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr))
                                             : ((0x20000000U 
                                                 & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U])
                                                 ? 
                                                ((0xf0000000U 
                                                  & vlSelf->main__DOT__wb32_i2cdma_idata) 
                                                 | vlSelf->main__DOT__u_i2cdma__DOT__current_addr)
                                                 : 
                                                ((0xfffffffcU 
                                                  & vlSelf->main__DOT__wb32_i2cdma_idata) 
                                                 | ((((~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__wb_last)) 
                                                      & (vlSelf->main__DOT__u_i2cdma__DOT__current_addr 
                                                         != vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr)) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__bus_err)))));
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr 
        = vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_dir;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_owner;
    vlSelf->main__DOT__txv__DOT__baud_counter = vlSelf->__Vdly__main__DOT__txv__DOT__baud_counter;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr 
        = vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr;
    if (vlSelf->__Vdlyvset__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0;
    }
    vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value 
        = vlSelf->__Vdly__main__DOT__swic__DOT__u_watchbus__DOT__r_value;
    vlSelf->main__DOT__genbus__DOT__ofifo_empty_n = vlSelf->__Vdly__main__DOT__genbus__DOT__ofifo_empty_n;
    vlSelf->main__DOT__rcv__DOT__baud_counter = vlSelf->__Vdly__main__DOT__rcv__DOT__baud_counter;
    vlSelf->main__DOT__swic__DOT__cmd_read = vlSelf->__Vdly__main__DOT__swic__DOT__cmd_read;
    vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit 
        = vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_force_inhibit;
    vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit 
        = vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_force_inhibit;
    vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit 
        = vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_force_inhibit;
    vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit 
        = vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_force_inhibit;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_q;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table;
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq;
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v8;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v9;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v10;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v11;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v12;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v13;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v14;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v15;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v8;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v9;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v10;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v11;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v12;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v13;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v14;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v15;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v8;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v9;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v10;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v11;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v12;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v13;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v14;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v15;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v8;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v9;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v10;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v11;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v12;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v13;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v14;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v15;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v8;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v9;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v10;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v11;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v12;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v13;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v14;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v15;
    }
    vlSelf->main__DOT__genbus__DOT__r_wdt_timer = vlSelf->__Vdly__main__DOT__genbus__DOT__r_wdt_timer;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__r_acks_needed;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__r_len;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend;
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0;
    }
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks;
    vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter 
        = vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__holdoff_counter;
    vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter 
        = vlSelf->__Vdly__main__DOT__i2cscopei__DOT__holdoff_counter;
    vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter 
        = vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__holdoff_counter;
    vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter 
        = vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__holdoff_counter;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount;
    vlSelf->main__DOT__i2ci__DOT__i2c_ckcount = vlSelf->__Vdly__main__DOT__i2ci__DOT__i2c_ckcount;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__index_read_pipe;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__index_wb_data;
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v5) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v5;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v6) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v6;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v7) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v7;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v8;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v9) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v9;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v10) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v3) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v3;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v4) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[vlSelf->__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v4] 
            = (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe
               [vlSelf->__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v4] 
               | (0xffffU & ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v4))));
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9)));
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v16))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v16)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v16)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v17))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v17)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v17)));
    }
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr 
        = vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill 
        = vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__r_fill;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill 
        = vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__r_fill;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr;
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][1U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[1U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][2U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[2U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][3U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[3U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][4U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[4U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][5U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[5U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][6U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[6U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][7U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[7U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][8U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[8U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][9U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[9U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xaU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xaU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xbU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xbU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xcU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xcU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xdU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xdU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xeU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xeU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xfU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xfU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0x10U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0x10U];
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U];
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
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U];
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
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight;
    if (vlSelf->__Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v0) {
        vlSelf->main__DOT__wbu_xbar__DOT__grant[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v1) {
        vlSelf->main__DOT__wbu_xbar__DOT__grant[0U] 
            = vlSelf->__Vdlyvval__main__DOT__wbu_xbar__DOT__grant__v1;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v2) {
        vlSelf->main__DOT__wbu_xbar__DOT__grant[0U] = 0U;
    }
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow 
        = vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__will_overflow;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state;
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count;
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight 
        = vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__inflight;
    vlSelf->main__DOT__wbwide_i2cdma_sel = vlSelf->__Vdly__main__DOT__wbwide_i2cdma_sel;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_counter;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero;
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v1;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2) 
                                  << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3) 
                                  << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4) 
                                  << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5) 
                                  << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6) 
                                  << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7) 
                                  << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8) 
                                  << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9) 
                                  << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v10;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v1;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v8))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v8)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v8)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v9))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v9)) 
                         << (IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v9)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v10;
    }
    vlSelf->main__DOT__u_fan__DOT__pwm_counter = vlSelf->__Vdly__main__DOT__u_fan__DOT__pwm_counter;
    vlSelf->main__DOT__txv__DOT__lcl_data = vlSelf->__Vdly__main__DOT__txv__DOT__lcl_data;
    vlSelf->main__DOT__txv__DOT__zero_baud_counter 
        = vlSelf->__Vdly__main__DOT__txv__DOT__zero_baud_counter;
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0;
    }
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill 
        = vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill;
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62);
    }
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63], vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63);
    }
    vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe 
        = vlSelf->__Vdly__main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe;
    if (vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][1U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[1U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][2U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[2U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][3U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[3U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][4U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[4U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][5U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[5U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][6U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[6U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][7U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[7U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][8U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[8U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][9U] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[9U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xaU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xaU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xbU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xbU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xcU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xcU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xdU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xdU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xeU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xeU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xfU] 
            = vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xfU];
    }
    vlSelf->main__DOT__wbwide_i2cm_addr = vlSelf->__Vdly__main__DOT__wbwide_i2cm_addr;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill 
        = vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill;
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v0) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v0), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v0], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v0);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v1) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v1), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v1], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v1);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v2) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v2), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v2], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v2);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v3) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v3), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v3], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v3);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v4) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v4), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v4], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v4);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v5) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v5), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v5], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v5);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v6) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v6), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v6], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v6);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v7) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v7), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v7], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v7);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v8) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v8), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v8], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v8);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v9) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v9), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v9], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v9);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v10) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v10), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v10], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v10);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v11) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v11), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v11], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v11);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v12) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v12), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v12], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v12);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v13) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v13), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v13], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v13);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v14) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v14), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v14], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v14);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v15) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v15), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v15], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v15);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v16) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v16), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v16], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v16);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v17) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v17), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v17], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v17);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v18) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v18), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v18], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v18);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v19) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v19), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v19], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v19);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v20) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v20), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v20], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v20);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v21) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v21), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v21], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v21);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v22) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v22), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v22], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v22);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v23) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v23), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v23], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v23);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v24) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v24), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v24], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v24);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v25) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v25), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v25], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v25);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v26) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v26), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v26], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v26);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v27) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v27), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v27], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v27);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v28) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v28), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v28], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v28);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v29) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v29), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v29], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v29);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v30) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v30), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v30], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v30);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v31) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v31), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v31], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v31);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v32) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v32), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v32], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v32);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v33) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v33), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v33], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v33);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v34) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v34), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v34], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v34);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v35) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v35), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v35], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v35);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v36) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v36), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v36], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v36);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v37) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v37), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v37], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v37);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v38) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v38), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v38], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v38);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v39) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v39), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v39], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v39);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v40) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v40), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v40], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v40);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v41) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v41), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v41], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v41);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v42) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v42), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v42], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v42);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v43) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v43), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v43], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v43);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v44) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v44), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v44], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v44);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v45) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v45), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v45], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v45);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v46) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v46), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v46], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v46);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v47) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v47), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v47], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v47);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v48) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v48), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v48], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v48);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v49) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v49), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v49], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v49);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v50) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v50), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v50], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v50);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v51) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v51), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v51], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v51);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v52) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v52), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v52], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v52);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v53) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v53), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v53], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v53);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v54) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v54), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v54], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v54);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v55) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v55), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v55], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v55);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v56) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v56), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v56], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v56);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v57) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v57), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v57], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v57);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v58) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v58), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v58], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v58);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v59) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v59), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v59], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v59);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v60) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v60), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v60], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v60);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v61) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v61), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v61], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v61);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v62) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v62), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v62], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v62);
    }
    if (vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v63) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v63), 
                        vlSelf->main__DOT__bkrami__DOT__mem
                        [vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v63], vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v63);
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift;
    vlSelf->main__DOT__i2cscopei__DOT__dr_primed = vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_primed;
    vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed 
        = vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_primed;
    vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed 
        = vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_primed;
    vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed 
        = vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_primed;
    vlSelf->main__DOT__i2ci__DOT__pf_illegal = vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_illegal;
    vlSelf->main__DOT__clock_generator__DOT__counter[1U] 
        = vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v0;
    vlSelf->main__DOT__clock_generator__DOT__counter[2U] 
        = vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v1;
    vlSelf->main__DOT__clock_generator__DOT__counter[3U] 
        = vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v2;
    vlSelf->main__DOT__clock_generator__DOT__counter[4U] 
        = vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v3;
    vlSelf->main__DOT__clock_generator__DOT__counter[5U] 
        = vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v4;
    vlSelf->main__DOT__clock_generator__DOT__counter[6U] 
        = vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v5;
    vlSelf->main__DOT__clock_generator__DOT__counter[7U] 
        = vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v6;
    vlSelf->main__DOT__clock_generator__DOT__counter[0U] 
        = vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v7;
    if (vlSelf->__Vdlyvset__main__DOT__console__DOT__txfifo__DOT__fifo__v0) {
        vlSelf->main__DOT__console__DOT__txfifo__DOT__fifo[vlSelf->__Vdlyvdim0__main__DOT__console__DOT__txfifo__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__main__DOT__console__DOT__txfifo__DOT__fifo__v0;
    }
    if (vlSelf->__Vdlyvset__main__DOT__console__DOT__rxfifo__DOT__fifo__v0) {
        vlSelf->main__DOT__console__DOT__rxfifo__DOT__fifo[vlSelf->__Vdlyvdim0__main__DOT__console__DOT__rxfifo__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__main__DOT__console__DOT__rxfifo__DOT__fifo__v0;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem__v0) {
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem__v0;
    }
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr 
        = vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr;
    vlSelf->o_gpio = vlSelf->__Vdly__o_gpio;
    vlSelf->main__DOT__spioi__DOT__r_led = vlSelf->__Vdly__main__DOT__spioi__DOT__r_led;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk 
        = (1U & (((IData)(3U) + vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr) 
                 >> 0x19U));
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr 
        = (0x1ffffffU & ((IData)(3U) + vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr));
    vlSelf->main__DOT__rcv__DOT__half_baud_time = (
                                                   (~ (IData)(vlSelf->main__DOT__rcv__DOT__ck_uart)) 
                                                   & (0x30U 
                                                      <= (IData)(vlSelf->main__DOT__rcv__DOT__chg_counter)));
    vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout 
        = (1U & ((~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                     >> 2U)) | (0x7ffffffeU <= vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr)));
    vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout 
        = (1U & ((~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                     >> 2U)) | (0x7ffffffeU <= vlSelf->main__DOT__i2cscopei__DOT__ck_addr)));
    vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout 
        = (1U & ((~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                     >> 2U)) | (0x7ffffffeU <= vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr)));
    vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout 
        = (1U & ((~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                     >> 2U)) | (0x7ffffffeU <= vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr)));
    vlSelf->o_ddr3_controller_toggle_dqs = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val));
    vlSelf->o_ddr3_controller_dqs_tri_control = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs) 
                                                     >> 2U)));
    vlSelf->main__DOT__genbus__DOT__in_stb = ((~ (IData)(vlSelf->i_reset)) 
                                              & ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb) 
                                                 >> 2U));
    if (vlSelf->main__DOT__genbus__DOT__ps_full) {
        if ((1U & (~ (IData)(vlSelf->main__DOT__txv__DOT__r_busy)))) {
            vlSelf->main__DOT__genbus__DOT__ps_full = 0U;
        }
    } else if (vlSelf->main__DOT__genbus__DOT__wbu_tx_stb) {
        vlSelf->main__DOT__genbus__DOT__ps_full = 1U;
        vlSelf->main__DOT__genbus__DOT__ps_data = (0x80U 
                                                   | (0x7fU 
                                                      & (IData)(vlSelf->main__DOT__genbus__DOT__wbu_tx_data)));
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)))) {
        vlSelf->main__DOT__genbus__DOT__ps_full = 1U;
        vlSelf->main__DOT__genbus__DOT__ps_data = vlSelf->main__DOT__w_console_tx_data;
    }
    vlSelf->o_ddr3_controller_dq_tri_control = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq) 
                                                    >> 3U)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q 
        = ((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst)) 
           & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
    vlSelf->main__DOT__i2cscopei__DOT__record_ce = 
        (1U & (((~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__lst_adr)) 
                | (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__imm_adr))) 
               & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                     >> 2U))));
    vlSelf->main__DOT__i2cscopei__DOT__r_data = ((1U 
                                                  & ((~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__lst_adr)) 
                                                     | (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__imm_adr))))
                                                  ? 
                                                 (((IData)(vlSelf->main__DOT__i2cscopei__DOT__lst_adr) 
                                                   << 0x1fU) 
                                                  | vlSelf->main__DOT__i2cscopei__DOT__lst_val)
                                                  : vlSelf->main__DOT__i2cscopei__DOT__qd_data);
    vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce 
        = (1U & (((~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr)) 
                  | (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr))) 
                 & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                       >> 2U))));
    vlSelf->main__DOT__scope3_ddr3i__DOT__r_data = 
        ((1U & ((~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr)) 
                | (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr))))
          ? (((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr) 
              << 0x1fU) | vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val)
          : vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data);
    vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce 
        = (1U & (((~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr)) 
                  | (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr))) 
                 & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                       >> 2U))));
    vlSelf->main__DOT__scope2_ddr3i__DOT__r_data = 
        ((1U & ((~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr)) 
                | (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr))))
          ? (((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr) 
              << 0x1fU) | vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val)
          : vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data);
    vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce 
        = (1U & (((~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr)) 
                  | (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr))) 
                 & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                       >> 2U))));
    vlSelf->main__DOT__scope1_ddr3i__DOT__r_data = 
        ((1U & ((~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr)) 
                | (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr))))
          ? (((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr) 
              << 0x1fU) | vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val)
          : vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data);
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff 
        = (0x1ffffffffULL & ((QData)((IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
                                              >> 0x1fU))) 
                             - (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor))));
    vlSelf->main__DOT__genbus__DOT__in_word = ((0x2eU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word 
                                                            >> 0x1eU))))
                                                ? vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word 
                                                               >> 0x23U)))
                                                    ? 
                                                   (0xc00000000ULL 
                                                    | (QData)((IData)(
                                                                      ((0x40000000U 
                                                                        & ((IData)(
                                                                                (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word 
                                                                                >> 0x1eU)) 
                                                                           << 0x1eU)) 
                                                                       | (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word 
                                                                >> 0x22U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word 
                                                                 >> 0x21U)))
                                                      ? vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word
                                                      : 
                                                     (0x600000000ULL 
                                                      | (((QData)((IData)(
                                                                          (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword 
                                                                           >> 0x1eU))) 
                                                          << 0x1fU) 
                                                         | (QData)((IData)(
                                                                           ((0x40000000U 
                                                                             & ((IData)(
                                                                                (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                            | (0x3fffffffU 
                                                                               & vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword)))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word 
                                                                 >> 0x21U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word 
                                                                  >> 0x1eU)))
                                                       ? 
                                                      (0x200000000ULL 
                                                       | (((QData)((IData)(
                                                                           (vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr 
                                                                            >> 0x1eU))) 
                                                           << 0x1fU) 
                                                          | (QData)((IData)(
                                                                            (0x40000000U 
                                                                             | (0x3fffffffU 
                                                                                & vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr))))))
                                                       : (QData)((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr)))
                                                      : vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word))));
    vlSelf->main__DOT__genbus__DOT__exec_stb = ((IData)(vlSelf->main__DOT__genbus__DOT__r_wdt_reset) 
                                                | ((IData)(vlSelf->main__DOT__wbu_cyc)
                                                    ? 
                                                   ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                                                    | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))
                                                    : 
                                                   ((((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n) 
                                                      & (~ (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy))) 
                                                     & (0xc00000000ULL 
                                                        == 
                                                        (0xc00000000ULL 
                                                         & vlSelf->main__DOT__genbus__DOT__ififo_codword))) 
                                                    & (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr))));
    if (vlSelf->main__DOT__genbus__DOT__r_wdt_reset) {
        vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr = 0U;
        vlSelf->main__DOT__genbus__DOT__exec_word = 
            (0xc0000000ULL | (QData)((IData)((0x3fffffffU 
                                              & vlSelf->main__DOT__wbu_idata))));
        vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr = 0U;
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid = 0U;
        vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr = 1U;
    } else {
        if (vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write) {
            vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr 
                = vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__nxt_wrptr;
        }
        if (vlSelf->main__DOT__wbu_cyc) {
            vlSelf->main__DOT__genbus__DOT__exec_word 
                = (0xe00000000ULL | (((QData)((IData)(
                                                      (vlSelf->main__DOT__wbu_idata 
                                                       >> 0x1eU))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (((IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc) 
                                                                    << 0x1eU) 
                                                                   | (0x3fffffffU 
                                                                      & vlSelf->main__DOT__wbu_idata))))));
            vlSelf->main__DOT__genbus__DOT__exec_word 
                = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)
                    ? (0x140000000ULL | (0x3fffffffULL 
                                         & vlSelf->main__DOT__genbus__DOT__exec_word))
                    : ((IData)(vlSelf->main__DOT__wbu_we)
                        ? (0x80000000ULL | (0x3fffffffULL 
                                            & vlSelf->main__DOT__genbus__DOT__exec_word))
                        : (0xe00000000ULL | vlSelf->main__DOT__genbus__DOT__exec_word)));
        } else {
            vlSelf->main__DOT__genbus__DOT__exec_word 
                = (0x200000000ULL | (QData)((IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)));
        }
        if (vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write) {
            vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr 
                = vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__nxt_wrptr;
        }
        if (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
             & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy)))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid = 1U;
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid = 0U;
        }
        if (((((~ (IData)(vlSelf->main__DOT__wbu_cyc)) 
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
    }
    if (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy) {
        if (((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched)) 
             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word;
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                = ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch)
                    ? ((0x3fffffffULL & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword) 
                       | ((QData)((IData)((6U | (1U 
                                                 & (IData)(
                                                           (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word 
                                                            >> 0x1eU)))))) 
                          << 0x1eU)) : ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch)
                                         ? ((0x3fffffffULL 
                                             & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword) 
                                            | ((QData)((IData)(
                                                               (0x20U 
                                                                | (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd) 
                                                                    << 1U) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word 
                                                                                >> 0x1eU))))))) 
                                               << 0x1eU))
                                         : ((0xffffffULL 
                                             & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword) 
                                            | ((QData)((IData)(
                                                               (0x400U 
                                                                | ((0x380U 
                                                                    & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld) 
                                                                       << 1U)) 
                                                                   | ((0x40U 
                                                                       & ((IData)(
                                                                                (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word 
                                                                                >> 0x1eU)) 
                                                                          << 6U)) 
                                                                      | (0x3fU 
                                                                         & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld))))))) 
                                               << 0x18U))));
        }
    } else {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
            = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc) 
         & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner = 1U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner = 0U;
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill 
        = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy)
            ? (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill)
            : 0U);
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__wbu_cyc))) 
               | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending = 0U;
        vlSelf->main__DOT__wbu_xbar__DOT__mempty = 1U;
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__mnearfull = 0U;
        vlSelf->main__DOT__wbu_xbar__DOT__mfull = 0U;
    } else if ((1U == ((((IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
            = (0x3fU & ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending) 
                        - (IData)(1U)));
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__mnearfull 
            = vlSelf->main__DOT__wbu_xbar__DOT__mfull;
        vlSelf->main__DOT__wbu_xbar__DOT__mempty = 
            (1U == (IData)(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending));
        vlSelf->main__DOT__wbu_xbar__DOT__mfull = 0U;
    } else if ((2U == ((((IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending)));
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__mnearfull 
            = (IData)(((0x3cU == (0x3cU & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending))) 
                       & (0U != (3U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending)))));
        vlSelf->main__DOT__wbu_xbar__DOT__mempty = 0U;
        vlSelf->main__DOT__wbu_xbar__DOT__mfull = vlSelf->main__DOT__wbu_xbar__DOT__mnearfull;
    }
    if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size;
    }
    if (vlSelf->main__DOT__wbwide_wbdown_stall) {
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wb32_wbdown_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))))) {
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift = 1U;
        }
    } else {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift 
            = ((0U != vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])
                ? 1U : (0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr)));
    }
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                                >> 1U))) 
                | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err)) 
               | ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                  & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb = 0U;
        vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first = 0U;
    } else if ((IData)((((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                         >> 1U) & (~ (IData)(vlSelf->main__DOT__wbwide_wbdown_stall))))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb 
            = (0U != (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U] 
                      >> 0x1cU));
        vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first 
            = (0ULL != (0xfffffffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])))));
    } else if ((((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first) 
                 & (~ (IData)(vlSelf->main__DOT__wb32_wbdown_stb))) 
                | ((IData)(vlSelf->main__DOT__wb32_wbdown_stb) 
                   & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))))) {
        vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb 
            = (0ULL != (0xfffffffffffffffULL & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel));
    }
    if (vlSelf->main__DOT__wbwide_wbdown_stall) {
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wb32_wbdown_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))))) {
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel;
        }
    } else {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
            = ((2U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb))
                ? (((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])))
                : 0ULL);
    }
    vlSelf->cpu_prof_ticks = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset)) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance;
    vlSelf->main__DOT__clock_generator__DOT__times_five 
        = ((vlSelf->main__DOT__r_sirefclk_data << 2U) 
           + vlSelf->main__DOT__r_sirefclk_data);
    vlSelf->main__DOT__clock_generator__DOT__times_seven 
        = ((vlSelf->main__DOT__r_sirefclk_data << 3U) 
           - vlSelf->main__DOT__r_sirefclk_data);
    vlSelf->main__DOT__clock_generator__DOT__times_three 
        = ((vlSelf->main__DOT__r_sirefclk_data << 1U) 
           + vlSelf->main__DOT__r_sirefclk_data);
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))) 
                | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err)) 
               | ((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc) 
                  & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                     >> 3U))))) {
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift = 0U;
    } else if ((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                      & (~ (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))))) {
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift 
            = (0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr));
    }
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[1U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[1U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[2U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[2U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[3U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[3U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[4U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[4U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[5U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[5U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[6U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[6U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[7U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[7U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[8U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[8U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[9U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[9U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xaU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xaU];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xbU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xbU];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xcU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xcU];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xdU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xdU];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xeU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xeU];
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                                >> 1U))) 
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
            = (((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                >> 1U) & (0ULL == (((QData)((IData)(
                                                    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])))));
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last 
            = (0ULL == (0xfffffffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])))));
        if ((1U & (~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                      >> 1U)))) {
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last = 1U;
        }
    }
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xfU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xfU];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
        = (((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])));
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb 
        = (1U & ((~ (IData)(vlSelf->i_reset)) & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                                 & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe))));
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill = 0U;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill 
        = ((0x3c0U & (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill)) 
           | (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill));
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill = 0U;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill 
        = ((0x3c0U & (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill)) 
           | (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) {
        if ((IData)(((6U == (6U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr)) 
                     & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall)) 
                        | vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr = 1U;
        }
    } else {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr = 0U;
    }
    vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when 
        = vlSelf->main__DOT__swic__DOT__sys_data;
    vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when 
        = (vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when 
           - vlSelf->main__DOT__swic__DOT__sys_data);
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT____VdfgTmp_h05977c6b__0 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data
        [(0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr))];
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid)) 
                   | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full))))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes 
                = ((0U != (3U & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill) 
                                 >> 6U))) ? 0x40U : 
                   (0x3fU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill)));
        }
        if ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid) 
              & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last 
                = (1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last)));
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last;
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last 
                = (1U & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last) 
                         >> 1U));
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last;
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__rx_valid)) 
                   | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full))))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid 
                = (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last) 
                    | (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid) 
                        & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready)) 
                       & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last))) 
                   | (0U != (3U & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill) 
                                   >> 6U))));
        }
    }
    if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset) 
         | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal = 0U;
    }
    if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle = 0U;
    } else if (((IData)(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc) 
                & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc)))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle = 0U;
    }
    vlSelf->main__DOT__raw_cpu_dbg_ack = ((~ ((((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
                                                | (~ (IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc))) 
                                               | (IData)(vlSelf->main__DOT__swic__DOT__no_dbg_err)) 
                                              | (~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_cyc)))) 
                                          & (IData)(vlSelf->main__DOT__swic__DOT__dbg_ack));
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack 
        = ((((~ (IData)(vlSelf->i_reset)) & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc)) 
            & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc)) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
              >> 3U));
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__i2ci__DOT__r_halted))) {
        vlSelf->main__DOT__i2ci__DOT__soft_halt_request = 0U;
        vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt = 0U;
        vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel = 0U;
    } else {
        if (((((IData)(vlSelf->main__DOT__i2ci__DOT__bus_write) 
               & (0U == (0x30U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U]))) 
              & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U] 
                 >> 0x16U)) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                       >> 0x12U)))) {
            vlSelf->main__DOT__i2ci__DOT__soft_halt_request = 1U;
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__s_tvalid) 
              & (IData)(vlSelf->main__DOT__i2ci__DOT__insn_ready)) 
             & ((((4U == (7U & ((IData)(vlSelf->main__DOT__i2ci__DOT__insn) 
                                >> 8U))) | (5U == (7U 
                                                   & ((IData)(vlSelf->main__DOT__i2ci__DOT__insn) 
                                                      >> 8U)))) 
                 | (6U == (7U & ((IData)(vlSelf->main__DOT__i2ci__DOT__insn) 
                                 >> 8U)))) | (7U == 
                                              (7U & 
                                               ((IData)(vlSelf->main__DOT__i2ci__DOT__insn) 
                                                >> 8U)))))) {
            vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt = 1U;
        } else if (((IData)(vlSelf->main__DOT__i2c_valid) 
                    & (IData)(vlSelf->main__DOT__i2c_ready))) {
            vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt 
                = (1U & (~ (IData)(vlSelf->main__DOT__i2c_last)));
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid) 
              & (0xd00U == (0xf00U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn)))) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready))) {
            vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel 
                = (3U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn));
        }
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger 
        = (1U & ((~ ((((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                       | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort)) 
                      | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err)) 
                     | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)))) 
                 & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger)) 
                    | ((((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
                         << 0x10U) | (((IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h29ee39ef__0) 
                                       << 6U) | (((IData)(vlSelf->main__DOT__swic__DOT__ctri_int) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->main__DOT__swic__DOT__tma_int) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->main__DOT__swic__DOT__tmb_int) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->main__DOT__swic__DOT__tmc_int) 
                                                           << 2U) 
                                                          | ((IData)(vlSelf->main__DOT__swic__DOT__jif_int) 
                                                             << 1U))))))) 
                       >> (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel)))));
    if (vlSelf->main__DOT__i2ci__DOT__cpu_new_pc) {
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift 
            = (0x3fU & vlSelf->main__DOT__i2ci__DOT__pf_jump_addr);
    } else if (((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
                & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                    | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)) 
                   >> 1U))) {
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift = 0U;
    }
    if (vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset) {
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle = 0U;
    } else if (((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
                & (IData)(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc))) {
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_i2cm_cyc)))) {
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle = 0U;
    }
    if (((IData)(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset) 
         | (IData)(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc))) {
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal = 0U;
    } else if (((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
                & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                   >> 1U))) {
        vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal = 1U;
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc))) 
               | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = (0xeU & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull));
    } else if ((1U == ((2U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                               & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall))) 
                              << 1U)) | (1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
            = (0x3fU & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending) 
                        - (IData)(1U)));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = ((0xeU & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull)) 
               | (1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull)));
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = ((0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty)) 
               | (1U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending)));
    } else if ((2U == ((2U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                               & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall))) 
                              << 1U)) | (1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending)));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = ((0xeU & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull)) 
               | (IData)(((0x3cU == (0x3cU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending))) 
                          & (0U != (3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending))))));
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                               >> 1U))) 
               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                  >> 1U)))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = (0xdU & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull));
    } else if ((1U == ((2U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                              & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                     >> 1U)) << 1U))) 
                       | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                >> 1U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending 
            = (0x3fU & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending) 
                        - (IData)(1U)));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = ((0xdU & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull)) 
               | (2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull)));
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = ((0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty)) 
               | ((1U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending)) 
                  << 1U));
    } else if ((2U == ((2U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                              & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                     >> 1U)) << 1U))) 
                       | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                >> 1U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending)));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = ((0xdU & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull)) 
               | ((IData)(((0x3cU == (0x3cU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending))) 
                           & (0U != (3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending))))) 
                  << 1U));
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                               >> 2U))) 
               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                  >> 2U)))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = (0xbU & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull));
    } else if ((1U == ((2U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                               >> 1U) & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                             >> 2U)) 
                                         << 1U))) | 
                       (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                              >> 2U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending 
            = (0x3fU & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending) 
                        - (IData)(1U)));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = ((0xbU & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull)) 
               | (4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull)));
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = ((0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty)) 
               | ((1U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending)) 
                  << 2U));
    } else if ((2U == ((2U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                               >> 1U) & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                             >> 2U)) 
                                         << 1U))) | 
                       (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                              >> 2U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending)));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = ((0xbU & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull)) 
               | ((IData)(((0x3cU == (0x3cU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending))) 
                           & (0U != (3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending))))) 
                  << 2U));
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                               >> 3U))) 
               | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                  >> 3U)))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = (7U & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull));
    } else if ((1U == (((IData)((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                                  >> 3U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                               >> 3U)))) 
                        << 1U) | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                        >> 3U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending 
            = (0x3fU & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending) 
                        - (IData)(1U)));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = ((7U & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull)) 
               | (8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull)));
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = ((7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty)) 
               | ((1U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending)) 
                  << 3U));
    } else if ((2U == (((IData)((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb) 
                                  >> 3U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall) 
                                               >> 3U)))) 
                        << 1U) | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                        >> 3U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending)));
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
            = ((7U & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull)) 
               | ((IData)(((0x3cU == (0x3cU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending))) 
                           & (0U != (3U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending))))) 
                  << 3U));
        vlSelf->main__DOT__wbwide_xbar__DOT__mempty 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty));
    }
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
    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst) {
        vlSelf->main__DOT__wb32_ddr3_phy_idata = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_aux = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_we = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_dm = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_col = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_bank = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_row = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data = 0ULL;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned = 0U;
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
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__initial_dqs = 1U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback = 1U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store = 0ULL;
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
        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0 = 1U;
    } else {
        if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb) 
             & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                >> 0xaU))) {
            if (((((((((0U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))) 
                       | (1U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                      | (2U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                     | (3U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                    | (4U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                   | (5U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                  | (6U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                 | (7U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))))) {
                if ((0U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = ((0U >= (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                             >> 4U)))
                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                               [(1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                       >> 4U))] : 0U);
                    }
                } else if ((1U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = ((0U >= (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                             >> 4U)))
                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein
                               [(1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                       >> 4U))] : 0U);
                    }
                } else if ((2U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = ((0U >= (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                             >> 4U)))
                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
                               [(1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                       >> 4U))] : 0U);
                    }
                } else if ((3U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = ((0U >= (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                             >> 4U)))
                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
                               [(1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                       >> 4U))] : 0U);
                    }
                } else if ((4U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = ((0xffff8000U & vlSelf->main__DOT__wb32_ddr3_phy_idata) 
                               | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max) 
                                   << 0xbU) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address) 
                                                << 6U) 
                                               | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->i_ddr3_controller_idelayctrl_rdy)))));
                    }
                } else if ((5U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = ((0xfffffff0U & vlSelf->main__DOT__wb32_ddr3_phy_idata) 
                               | vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                               [0U]);
                    }
                } else if ((6U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store);
                    }
                } else if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = ((0xffffff00U & vlSelf->main__DOT__wb32_ddr3_phy_idata) 
                           | (IData)(vlSelf->i_ddr3_controller_iserdes_bitslip_reference));
                }
            } else if ((8U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store);
                }
            } else if ((9U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[0U];
                }
            } else if ((0xaU == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2;
                }
            } else if ((0xbU == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned);
                }
            } else if ((0xcU == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we) 
                            << 0x1fU) | ((0x7f000000U 
                                          & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col) 
                                             << 0x18U)) 
                                         | ((0xff0000U 
                                             & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm))));
                }
            } else if ((0xdU == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata = 0xf7U;
                }
            } else if ((0xeU == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_level_fail;
                }
            } else if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                vlSelf->main__DOT__wb32_ddr3_phy_idata = 0xaaaaaaaaU;
            }
        }
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done) {
            if (((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q)) 
                 & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update))) {
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                    = (0xffU & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm)));
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending = 0U;
            }
            if ((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                          >> 0xbU) & (~ (IData)(vlSelf->main__DOT__wb32_ddr3_controller_stall))))) {
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending 
                    = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                             >> 0xbU));
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_aux = 0U;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_we 
                    = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                             >> 0xbU));
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_dm 
                    = (0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                       >> 0x2cU)));
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_col 
                    = (0x3f8U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                 >> 0x10U));
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_bank 
                    = (7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                             >> 0x1aU));
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_row 
                    = (0x3fffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                   << 3U) | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                             >> 0x1dU)));
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row 
                    = (0x3fffU & (((IData)(5U) + ((
                                                   vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                                   << 0xdU) 
                                                  | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                     >> 0x13U))) 
                                  >> 0xaU));
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank 
                    = (7U & (((IData)(5U) + ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                              << 0xdU) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                >> 0x13U))) 
                             >> 7U));
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data 
                    = ((0xffffffffULL & (QData)((IData)(
                                                        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU]))) 
                       | ((QData)((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU])) 
                          >> 0x20U));
            } else if ((0x10U != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_we 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_dm = 0xffU;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_aux 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_col 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_bank = 0U;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_row = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank = 0U;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data;
            }
            if (((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                     >> 0xbU)) & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))) {
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending = 0U;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending = 0U;
            }
        }
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data = 0ULL;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay 
            = ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))
                ? 0U : (3U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay) 
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
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev 
            = ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
               [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                : 0U);
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h6ae87c1f__0 
                = (((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)) 
                    & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld) 
                       >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)))
                    ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein)
                    : ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane))
                        ? vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                       [vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane]
                        : 0U));
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h23068462__0 
                = (((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)) 
                    & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld) 
                       >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)))
                    ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein)
                    : ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane))
                        ? vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein
                       [vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane]
                        : 0U));
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hf8f3b873__0 
                = (((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)) 
                    & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld) 
                       >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)))
                    ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein)
                    : ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane))
                        ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
                       [vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane]
                        : 0U));
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hb9125af6__0 
                = (((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)) 
                    & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld) 
                       >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane)))
                    ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein)
                    : ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane))
                        ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
                       [vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane]
                        : 0U));
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
            if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane))) {
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h6ae87c1f__0;
                vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h23068462__0;
                vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hf8f3b873__0;
                vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hb9125af6__0;
                vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
            }
        } else if ((0x10U != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha32579e4__0 
                = (0x1fU & (((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)) 
                             & ((IData)(vlSelf->o_ddr3_controller_odelay_data_ld) 
                                >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)))
                             ? ((IData)(1U) + ((0U 
                                                >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                                               [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                                : 0U))
                             : ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                 ? vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                 : 0U)));
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h1b2f8325__0 
                = (0x1fU & (((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)) 
                             & ((IData)(vlSelf->o_ddr3_controller_odelay_dqs_ld) 
                                >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)))
                             ? ((IData)(1U) + ((0U 
                                                >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein
                                               [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                                : 0U))
                             : ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                 ? vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein
                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                 : 0U)));
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h30c4ab1e__0 
                = (0x1fU & (((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)) 
                             & ((IData)(vlSelf->o_ddr3_controller_idelay_data_ld) 
                                >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)))
                             ? ((IData)(1U) + ((0U 
                                                >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
                                               [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                                : 0U))
                             : ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                 ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                 : 0U)));
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h80415d99__0 
                = (0x1fU & (((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)) 
                             & ((IData)(vlSelf->o_ddr3_controller_idelay_dqs_ld) 
                                >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)))
                             ? ((IData)(1U) + ((0U 
                                                >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
                                               [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                                : 0U))
                             : ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                 ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                 : 0U)));
            if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v2 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha32579e4__0;
                vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v2 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v2 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v2 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h1b2f8325__0;
                vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v2 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v2 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v2 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h30c4ab1e__0;
                vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v2 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v2 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v2 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h80415d99__0;
                vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v2 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v2 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
            }
        }
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h02bca03b__0 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value;
            if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h02bca03b__0;
                vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
            }
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value;
        }
        if ((0U == ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                     ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
                    [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                     : 0U))) {
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index 
                = (0x3fU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig) 
                            - (IData)(2U)));
        }
        if (((0U == ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                      ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
                     [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                      : 0U)) & (0x1fU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev)))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h02bca03b__1 
                = (0x3fU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig) 
                            - (IData)(2U)));
            if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h02bca03b__1;
                vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
            }
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
                    vlSelf->__Vdly__o_ddr3_controller_odelay_data_ld = 1U;
                    vlSelf->__Vdly__o_ddr3_controller_odelay_dqs_ld = 1U;
                    vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld = 1U;
                    vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 0U;
                    vlSelf->o_ddr3_controller_leveling_calib = 0U;
                } else if ((0xdU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 1U;
                }
            } else if ((1U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))) {
                    if ((0x78U == (0xffU & ((IData)(vlSelf->i_ddr3_controller_iserdes_bitslip_reference) 
                                            >> (7U 
                                                & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                   << 3U)))))) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 2U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__initial_dqs = 1U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat = 0U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored = 0U;
                    } else {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h0aaecb26__0 = 1U;
                        if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                            vlSelf->o_ddr3_controller_bitslip 
                                = (((~ ((IData)(1U) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                    & (IData)(vlSelf->o_ddr3_controller_bitslip)) 
                                   | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h0aaecb26__0) 
                                            << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                        }
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
                                             & ((IData)(vlSelf->i_ddr3_controller_iserdes_dqs) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                    << 3U)))))) 
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
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha9e19381__0 = 1U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 2U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 0xaU;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha1e87f9f__0 = 1U;
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld 
                            = (((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                & (IData)(vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld)) 
                               | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha9e19381__0) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                        vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld 
                            = (((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                & (IData)(vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld)) 
                               | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha1e87f9f__0) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                    }
                } else {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index)));
                }
            } else if ((5U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored) 
                     == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hcbac20e2__0 
                        = (0xfU & ((3U & (((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                            ? vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                           [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                            : 0U) >> 4U)) 
                                   + (0xdU <= ((0U 
                                                >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                ? (0xfU 
                                                   & vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                                : 0U))));
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hcbac20e2__0;
                        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    }
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 6U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement 
                        = (0xffffU & (0x3c3cU >> ((0U 
                                                   >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                   ? 
                                                  (7U 
                                                   & vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                                   : 0U)));
                } else {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha9e19381__1 = 1U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 2U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 0xaU;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha1e87f9f__1 = 1U;
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld 
                            = (((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                & (IData)(vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld)) 
                               | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha9e19381__1) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                        vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld 
                            = (((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                & (IData)(vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld)) 
                               | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha1e87f9f__1) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                    }
                }
            } else if ((6U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))) {
                    if (((0xffU & ((IData)(vlSelf->i_ddr3_controller_iserdes_bitslip_reference) 
                                   >> (7U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                             << 3U)))) 
                         == (0xffU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement)))) {
                        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) {
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
                                = (1U & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 1U;
                        } else {
                            vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated = 0U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback = 1U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat = 0U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback = 0U;
                            vlSelf->o_ddr3_controller_leveling_calib = 1U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 7U;
                        }
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max 
                            = (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max) 
                                > ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                    ? vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                    : 0U)) ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max)
                                : ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                    ? vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                    : 0U));
                    } else {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h0aaecb26__1 = 1U;
                        if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                            vlSelf->o_ddr3_controller_bitslip 
                                = (((~ ((IData)(1U) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                    & (IData)(vlSelf->o_ddr3_controller_bitslip)) 
                                   | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h0aaecb26__1) 
                                            << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                        }
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
                        = (((1U & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                           >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8)))) 
                            == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback))
                            ? (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat)))
                            : 0U);
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 0U;
                    if ((0x14U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat))) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat = 0U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback;
                        if (((1U == (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback) 
                                      << 1U) | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback))) 
                             | ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)) 
                                & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_level_fail) 
                                   >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))))) {
                            if (vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) {
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
                                    = (1U & ((IData)(1U) 
                                             + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated = 0U;
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback = 1U;
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat = 0U;
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 7U;
                            } else {
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 0U;
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0U;
                                vlSelf->o_ddr3_controller_leveling_calib = 0U;
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 9U;
                            }
                        } else {
                            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h157c436b__0 = 1U;
                            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 7U;
                            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hb2a29e0b__0 = 1U;
                            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hac6669bc__0 
                                = ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated) 
                                   & (2U == ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                              ? vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                                             [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                              : 0U)));
                            if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                                vlSelf->__Vdly__o_ddr3_controller_odelay_data_ld 
                                    = (((~ ((IData)(1U) 
                                            << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                        & (IData)(vlSelf->__Vdly__o_ddr3_controller_odelay_data_ld)) 
                                       | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h157c436b__0) 
                                                << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                                vlSelf->__Vdly__o_ddr3_controller_odelay_dqs_ld 
                                    = (((~ ((IData)(1U) 
                                            << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                        & (IData)(vlSelf->__Vdly__o_ddr3_controller_odelay_dqs_ld)) 
                                       | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hb2a29e0b__0) 
                                                << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_level_fail 
                                    = (((~ ((IData)(1U) 
                                            << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                        & (IData)(vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_level_fail)) 
                                       | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hac6669bc__0) 
                                                << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                            }
                        }
                    }
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback 
                        = (1U & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                         >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8))));
                }
            } else if ((9U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if (((0x16U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address)) 
                     & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q)))) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data = 0x9177298cd0ad51c1ULL;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xaU;
                }
            } else if ((0xaU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col = 8U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data = 0x80dbcfd275f12c3dULL;
                vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xbU;
            } else if ((0xbU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((1U & ((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q)) 
                           & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb))))) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we = 0U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xcU;
                }
            } else if ((0xcU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((1U == vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                     [0U])) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h36bae610__0 = 0U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store 
                        = vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xdU;
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h36bae610__0;
                        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    }
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[0U] = 0xd0ad51c1U;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[1U] = 0x9177298cU;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[2U] = 0x75f12c3dU;
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[3U] = 0x80dbcfd2U;
                }
            } else if ((0xdU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if (((((QData)((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[
                                       (((IData)(0x3fU) 
                                         + ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                             ? vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                            [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                             : 0U)) 
                                        >> 5U)])) << 
                       ((0U == ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                 ? (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                    [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                 : 0U)) ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   ((0U 
                                                     >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                     ? 
                                                    (0x1fU 
                                                     & vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                     [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                                     : 0U)))) 
                      | (((0U == ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                   ? (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                      [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                   : 0U)) ? 0ULL : 
                          ((QData)((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[
                                           (((IData)(0x1fU) 
                                             + ((0U 
                                                 >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                 ? 
                                                vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                                 : 0U)) 
                                            >> 5U)])) 
                           << ((IData)(0x20U) - ((0U 
                                                  >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                  ? 
                                                 (0x1fU 
                                                  & vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                  [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                                  : 0U)))) 
                         | ((QData)((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[
                                            (((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                               ? vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                               : 0U) 
                                             >> 5U)])) 
                            >> ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                 ? (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                    [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                 : 0U)))) == (((QData)((IData)(
                                                               (((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(0x38U) 
                                                                              + 
                                                                              ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                               << 3U))))) 
                                                                 << 0x18U) 
                                                                | ((0xff0000U 
                                                                    & ((IData)(
                                                                               (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(0x30U) 
                                                                                + 
                                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                                << 3U))))) 
                                                                       << 0x10U)) 
                                                                   | ((0xff00U 
                                                                       & ((IData)(
                                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(0x28U) 
                                                                                + 
                                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                                << 3U))))) 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(0x20U) 
                                                                                + 
                                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                                << 3U))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & ((IData)(0x18U) 
                                                                               + 
                                                                               ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                                << 3U))))) 
                                                                  << 0x18U) 
                                                                 | ((0xff0000U 
                                                                     & ((IData)(
                                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(0x10U) 
                                                                                + 
                                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                                << 3U))))) 
                                                                        << 0x10U)) 
                                                                    | ((0xff00U 
                                                                        & ((IData)(
                                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(8U) 
                                                                                + 
                                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                                << 3U))))) 
                                                                           << 8U)) 
                                                                       | (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                                << 3U))))))))))))) {
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
                            = (1U & ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hd9bf9093__0 = 0U;
                        if ((0U >= (1U & ((IData)(1U) 
                                          + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))))) {
                            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 
                                = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hd9bf9093__0;
                            vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 = 1U;
                            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 
                                = (1U & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                        }
                    } else {
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x10U;
                    }
                } else {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h36bae610__1 
                        = (0x7fU & ((IData)(8U) + (
                                                   (0U 
                                                    >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                    ? 
                                                   vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                                    : 0U)));
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h36bae610__1;
                        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    }
                    if ((0x38U == ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                    ? vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                    : 0U))) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h36bae610__2 = 0U;
                        if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v4 
                                = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h36bae610__2;
                            vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v4 = 1U;
                            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v4 
                                = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                        }
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check = 0U;
                        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xeU;
                    }
                }
            } else if ((0xeU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if (((0xffffU & (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data 
                                         >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check)))) 
                     == (0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[0U]))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hcbac20e2__1 
                        = (0xfU & ((3U & (((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                            ? vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                           [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                            : 0U) >> 4U)) 
                                   + (0xdU <= ((0U 
                                                >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                ? (0xfU 
                                                   & vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                                : 0U))));
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xfU;
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hcbac20e2__1;
                        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    }
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement 
                        = (0xffffU & (0x3c3cU >> ((0U 
                                                   >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                   ? 
                                                  (7U 
                                                   & vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                                   : 0U)));
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xfU;
                } else {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check 
                        = (0x3fU & ((IData)(0x10U) 
                                    + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check)));
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h02bca03b__2 
                        = (0x3fU & ((IData)(2U) + (
                                                   (0U 
                                                    >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                    ? 
                                                   vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                                    : 0U)));
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h02bca03b__2;
                        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    }
                }
            } else if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))) {
                if (((0xffU & ((IData)(vlSelf->i_ddr3_controller_iserdes_bitslip_reference) 
                               >> (7U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                         << 3U)))) 
                     == (0xffU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement)))) {
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max 
                        = (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max) 
                            > ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                               [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                : 0U)) ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max)
                            : ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                               [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                : 0U));
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 9U;
                } else {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h0aaecb26__2 = 1U;
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        vlSelf->o_ddr3_controller_bitslip 
                            = (((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                & (IData)(vlSelf->o_ddr3_controller_bitslip)) 
                               | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h0aaecb26__2) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                    }
                    vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay = 3U;
                }
            }
        } else if ((0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x10U;
            if ((0x13U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 1U;
                if ((((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending)) 
                      & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending))) 
                     & (IData)(vlSelf->main__DOT__wb32_ddr3_controller_stall))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
                }
            }
        }
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_lane_data 
            = (((QData)((IData)((((IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                           >> (0x3fU 
                                               & ((IData)(0x38U) 
                                                  + 
                                                  ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                   << 3U))))) 
                                  << 0x18U) | ((0xff0000U 
                                                & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(0x30U) 
                                                                + 
                                                                ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                 << 3U))))) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & ((IData)(
                                                              (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                               >> 
                                                               (0x3fU 
                                                                & ((IData)(0x28U) 
                                                                   + 
                                                                   ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                    << 3U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                                >> 
                                                                (0x3fU 
                                                                 & ((IData)(0x20U) 
                                                                    + 
                                                                    ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                     << 3U))))))))))) 
                << 0x20U) | (QData)((IData)((((IData)(
                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(0x18U) 
                                                           + 
                                                           ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                            << 3U))))) 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & ((IData)(
                                                            (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(0x10U) 
                                                                 + 
                                                                 ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                  << 3U))))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & ((IData)(
                                                               (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                                >> 
                                                                (0x3fU 
                                                                 & ((IData)(8U) 
                                                                    + 
                                                                    ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                     << 3U))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                                     << 3U)))))))))));
        if ((0x1fU == ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                        ? vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                       [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                        : 0U))) {
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated = 1U;
        }
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
    vlSelf->o_ddr3_controller_dm = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
        [1U];
    vlSelf->o_ddr3_controller_data = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I 
        = (((- (IData)((1U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I 
                              >> 0x16U)))) << 0x16U) 
           | (0x3fffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result 
        = ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn))
            ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result
            : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result);
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv;
    __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw = 0U;
    __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw 
        = (0xffU & ((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe) 
                    >> 8U));
    __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe 
        = ((0xff00U & ((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe) 
                       << 8U)) | (IData)(vlSelf->i_sw));
    vlSelf->main__DOT__spioi__DOT__sw_int = ((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw) 
                                             != (0xffU 
                                                 & ((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe) 
                                                    >> 7U)));
    vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int 
        = ((~ (IData)(vlSelf->i_reset)) & (IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int));
    if (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    } else if ((((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                 & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskd_ready)) 
                & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb) 
                   & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    }
    if (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    } else if ((((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                 & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskd_ready)) 
                & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb) 
                   & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    }
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr 
        = (0x3fffU & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr));
    if (((IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)))) {
        vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we 
            = vlSelf->main__DOT____Vcellinp__swic__i_dbg_we;
    }
    if ((((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_write)) 
          | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall))) 
         & (IData)(vlSelf->main__DOT__swic__DOT__dbg_cpu_write))) {
        vlSelf->main__DOT__swic__DOT__cmd_wdata = vlSelf->main__DOT__swic__DOT__dbg_idata;
        vlSelf->main__DOT__swic__DOT__cmd_waddr = (0x1fU 
                                                   & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr));
    }
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb 
        = (1U & ((~ (IData)(vlSelf->i_reset)) & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset)) 
           & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce) 
               & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)) 
              & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                  | vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr) 
                 >> 0x1fU)));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__compression_tbl
        [vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr];
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr 
        = ((~ ((IData)(vlSelf->main__DOT__genbus__DOT__r_wdt_reset) 
               | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb)))) 
           & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr) 
              < (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled) 
                  << 0xaU) | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign) 
           != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
               >> 0x1fU));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__this_is_a_multiply_op) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi 
            = (1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                     >> 1U));
    }
    vlSelf->main__DOT__swic__DOT__last_sys_stb = ((~ (IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset)) 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__sys_stb));
    vlSelf->main__DOT__swic__DOT__r_mmus_ack = ((~ (IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset)) 
                                                & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                                   & ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                                                      >> 7U)));
    vlSelf->main__DOT__swic__DOT__dmac_ack = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
                                              & (IData)(vlSelf->main__DOT__swic__DOT__dmac_stb));
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ubreak 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ubus_err_flag 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0U] = vlSelf->main__DOT__i2cscopei__DOT__o_bus_data;
    vlSelf->main__DOT__i2cscopei__DOT__nxt_mem = vlSelf->main__DOT__i2cscopei__DOT__mem
        [vlSelf->main__DOT__i2cscopei__DOT__this_addr];
    vlSelf->main__DOT__i2cscopei__DOT__read_address 
        = (1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U]);
    if (vlSelf->main__DOT__i2cscopei__DOT__write_to_control) {
        if (((~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U] 
                 >> 0x1fU)) & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                               >> 2U))) {
            vlSelf->main__DOT__i2cscopei__DOT__br_holdoff 
                = (0xfffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U]);
        }
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__br_config 
            = ((4U & (IData)(vlSelf->__Vdly__main__DOT__i2cscopei__DOT__br_config)) 
               | (3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U] 
                        >> 0x1aU)));
    }
    if (vlSelf->main__DOT__i2cscopei__DOT__bw_reset_request) {
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__br_config 
            = (4U | (IData)(vlSelf->__Vdly__main__DOT__i2cscopei__DOT__br_config));
    } else if ((4U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))) {
        if (((IData)(vlSelf->main__DOT__i2cscopei__DOT__write_to_control) 
             & (~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U] 
                   >> 0x1fU)))) {
            vlSelf->__Vdly__main__DOT__i2cscopei__DOT__br_config 
                = (3U & (IData)(vlSelf->__Vdly__main__DOT__i2cscopei__DOT__br_config));
        }
    } else {
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__br_config 
            = (3U & (IData)(vlSelf->__Vdly__main__DOT__i2cscopei__DOT__br_config));
    }
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[3U] = vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data;
    vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem = 
        vlSelf->main__DOT__scope3_ddr3i__DOT__mem[vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr];
    vlSelf->main__DOT__scope3_ddr3i__DOT__read_address 
        = (1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                 >> 0xbU));
    if (vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control) {
        if (((~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U] 
                 >> 0x1fU)) & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                               >> 2U))) {
            vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff 
                = (0xfffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U]);
        }
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__br_config 
            = ((4U & (IData)(vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__br_config)) 
               | (3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U] 
                        >> 0x1aU)));
    }
    if (vlSelf->main__DOT__scope3_ddr3i__DOT__bw_reset_request) {
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__br_config 
            = (4U | (IData)(vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__br_config));
    } else if ((4U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))) {
        if (((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control) 
             & (~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U] 
                   >> 0x1fU)))) {
            vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__br_config 
                = (3U & (IData)(vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__br_config));
        }
    } else {
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__br_config 
            = (3U & (IData)(vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__br_config));
    }
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[2U] = vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data;
    vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem = 
        vlSelf->main__DOT__scope2_ddr3i__DOT__mem[vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr];
    vlSelf->main__DOT__scope2_ddr3i__DOT__read_address 
        = (1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                 >> 0x12U));
    if (vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control) {
        if (((~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U] 
                 >> 0x1fU)) & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                               >> 2U))) {
            vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff 
                = (0xfffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U]);
        }
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__br_config 
            = ((4U & (IData)(vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__br_config)) 
               | (3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U] 
                        >> 0x1aU)));
    }
    if (vlSelf->main__DOT__scope2_ddr3i__DOT__bw_reset_request) {
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__br_config 
            = (4U | (IData)(vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__br_config));
    } else if ((4U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))) {
        if (((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control) 
             & (~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U] 
                   >> 0x1fU)))) {
            vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__br_config 
                = (3U & (IData)(vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__br_config));
        }
    } else {
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__br_config 
            = (3U & (IData)(vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__br_config));
    }
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[1U] = vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data;
    vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem = 
        vlSelf->main__DOT__scope1_ddr3i__DOT__mem[vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr];
    vlSelf->main__DOT__scope1_ddr3i__DOT__read_address 
        = (1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                 >> 0x19U));
    if (vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control) {
        if (((~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U] 
                 >> 0x1fU)) & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                               >> 2U))) {
            vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff 
                = (0xfffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U]);
        }
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__br_config 
            = ((4U & (IData)(vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__br_config)) 
               | (3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U] 
                        >> 0x1aU)));
    }
    if (vlSelf->main__DOT__scope1_ddr3i__DOT__bw_reset_request) {
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__br_config 
            = (4U | (IData)(vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__br_config));
    } else if ((4U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))) {
        if (((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control) 
             & (~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U] 
                   >> 0x1fU)))) {
            vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__br_config 
                = (3U & (IData)(vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__br_config));
        }
    } else {
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__br_config 
            = (3U & (IData)(vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__br_config));
    }
    vlSelf->cpu_prof_stb = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb;
    vlSelf->main__DOT__clock_generator__DOT__r_delay 
        = vlSelf->main__DOT__r_sirefclk_data;
    vlSelf->o_led = vlSelf->main__DOT__w_led;
    vlSelf->main__DOT__spioi__DOT__bounced = ((0xfeU 
                                               & (IData)(vlSelf->main__DOT__spioi__DOT__bounced)) 
                                              | ((0x1fU 
                                                  == (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness)) 
                                                 | ((0U 
                                                     != (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness)) 
                                                    & ((IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr) 
                                                       <= (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness)))));
    vlSelf->main__DOT__spioi__DOT__bounced = ((0xfdU 
                                               & (IData)(vlSelf->main__DOT__spioi__DOT__bounced)) 
                                              | (((0x1fU 
                                                   == (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness)) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness)) 
                                                     & ((IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr) 
                                                        <= (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness)))) 
                                                 << 1U));
    vlSelf->main__DOT__spioi__DOT__bounced = ((0xfbU 
                                               & (IData)(vlSelf->main__DOT__spioi__DOT__bounced)) 
                                              | (((0x1fU 
                                                   == (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness)) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness)) 
                                                     & ((IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr) 
                                                        <= (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness)))) 
                                                 << 2U));
    vlSelf->main__DOT__spioi__DOT__bounced = ((0xf7U 
                                               & (IData)(vlSelf->main__DOT__spioi__DOT__bounced)) 
                                              | (((0x1fU 
                                                   == (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness)) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness)) 
                                                     & ((IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr) 
                                                        <= (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness)))) 
                                                 << 3U));
    vlSelf->main__DOT__spioi__DOT__bounced = ((0xefU 
                                               & (IData)(vlSelf->main__DOT__spioi__DOT__bounced)) 
                                              | (((0x1fU 
                                                   == (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness)) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness)) 
                                                     & ((IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr) 
                                                        <= (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness)))) 
                                                 << 4U));
    vlSelf->main__DOT__spioi__DOT__bounced = ((0xdfU 
                                               & (IData)(vlSelf->main__DOT__spioi__DOT__bounced)) 
                                              | (((0x1fU 
                                                   == (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness)) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness)) 
                                                     & ((IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr) 
                                                        <= (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness)))) 
                                                 << 5U));
    vlSelf->main__DOT__spioi__DOT__bounced = ((0xbfU 
                                               & (IData)(vlSelf->main__DOT__spioi__DOT__bounced)) 
                                              | (((0x1fU 
                                                   == (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness)) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness)) 
                                                     & ((IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr) 
                                                        <= (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness)))) 
                                                 << 6U));
    vlSelf->main__DOT__spioi__DOT__bounced = ((0x7fU 
                                               & (IData)(vlSelf->main__DOT__spioi__DOT__bounced)) 
                                              | (((0x1fU 
                                                   == (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness)) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness)) 
                                                     & ((IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr) 
                                                        <= (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness)))) 
                                                 << 7U));
    if (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    } else if ((((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb) 
                 & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskd_ready)) 
                & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb) 
                   & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid = 0U;
    }
    if ((1U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant))) {
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_stall)))) {
            vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel 
                = ((0xf0U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)) 
                   | ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                       [0U]) ? vlSelf->main__DOT__wbu_xbar__DOT__m_sel
                      [vlSelf->main__DOT__wbu_xbar__DOT__sindex
                      [0U]] : 0U));
            vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe 
                = ((2U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe)) 
                   | ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                       [0U]) & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                        >> ((IData)(0x24U) 
                                            + vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                            [0U])))));
            vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                = ((0xffffffff00000000ULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata) 
                   | (IData)((IData)((((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                        [0U]) & (IData)(
                                                        (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                                         >> 
                                                         ((IData)(0x24U) 
                                                          + 
                                                          vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                                          [0U]))))
                                       ? ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                           [0U]) ? 
                                          vlSelf->main__DOT__wbu_xbar__DOT__m_data
                                          [vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                          [0U]] : 0U)
                                       : 0U))));
            vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                = ((0x3ffffff8000000ULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr) 
                   | (IData)((IData)(((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                       [0U]) ? vlSelf->main__DOT__wbu_xbar__DOT__m_addr
                                      [vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                      [0U]] : 0U))));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel 
            = (0xf0U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel));
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe 
            = (2U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe));
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
            = (0xffffffff00000000ULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata);
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
            = (0x3ffffff8000000ULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr);
    }
    if ((2U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_stall) 
                      >> 1U)))) {
            vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel 
                = ((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)) 
                   | (((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                        [1U]) ? vlSelf->main__DOT__wbu_xbar__DOT__m_sel
                       [vlSelf->main__DOT__wbu_xbar__DOT__sindex
                       [1U]] : 0U) << 4U));
            vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe 
                = ((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe)) 
                   | (((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                        [1U]) & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                         >> ((IData)(0x24U) 
                                             + vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                             [1U])))) 
                      << 1U));
            vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                = ((0xffffffffULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata) 
                   | ((QData)((IData)((((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                         [1U]) & (IData)(
                                                         (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                                          >> 
                                                          ((IData)(0x24U) 
                                                           + 
                                                           vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                                           [1U]))))
                                        ? ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                            [1U]) ? 
                                           vlSelf->main__DOT__wbu_xbar__DOT__m_data
                                           [vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                           [1U]] : 0U)
                                        : 0U))) << 0x20U));
            vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                = ((0x7ffffffULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                        [1U]) ? vlSelf->main__DOT__wbu_xbar__DOT__m_addr
                                       [vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                       [1U]] : 0U))) 
                      << 0x1bU));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel 
            = (0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel));
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe 
            = (1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe));
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
            = (0xffffffffULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata);
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
            = (0x7ffffffULL & vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr);
    }
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
            << 0x16U) | vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr);
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[6U] = vlSelf->main__DOT__wb32_uart_idata;
    vlSelf->main__DOT__console__DOT__r_wb_addr = (3U 
                                                  & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                                     >> 0x16U));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable = 0U;
    } else {
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe 
                = (((((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid) 
                        | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                       & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable)) 
                      & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem)) 
                     & ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn)) 
                        == (1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB)) 
                   & ((0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB)) 
                      == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))));
        }
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
    }
    vlSelf->o_i2c_sda = vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda;
    vlSelf->o_i2c_scl = vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc)
            ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc)
            : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
    vlSelf->cpu_prof_addr = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_u 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv 
        = ((~ ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted)))) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy 
        = ((~ ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
               | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err)))) 
           & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) 
              | ((~ ((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state)) 
                     & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack))) 
                 & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending) 
                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid))) 
                    | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) 
                       & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we)))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl 
        = ((4U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index))
            ? 0U : ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index))
                     ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index))
                         ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result
                         : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)
                     : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index))
                         ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result
                         : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val)));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break)) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal)));
    }
    vlSelf->main__DOT__w_console_rx_data = (0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data));
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[8U] = vlSelf->main__DOT__r_wb32_sio_data;
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
            vlSelf->main__DOT__r_sirefclk_en = (1U 
                                                & (~ 
                                                   (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                                    >> 0x1fU)));
            vlSelf->main__DOT__r_sirefclk_data = ((0xffffffU 
                                                   & vlSelf->main__DOT__r_sirefclk_data) 
                                                  | (0x3f000000U 
                                                     & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]));
        }
    }
    if ((4U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))) {
        if (vlSelf->main__DOT__i2cscopei__DOT__dw_trigger) {
            vlSelf->main__DOT__i2cscopei__DOT__dr_triggered = 1U;
        }
        vlSelf->main__DOT__i2cscopei__DOT__lst_val 
            = vlSelf->main__DOT__i2cscopei__DOT__imm_val;
        vlSelf->main__DOT__i2cscopei__DOT__imm_val 
            = ((((IData)(vlSelf->main__DOT__i2cscopei__DOT__new_data) 
                 | (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write)) 
                | (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped))
                ? vlSelf->main__DOT__i2cscopei__DOT__qd_data
                : vlSelf->main__DOT__i2cscopei__DOT__ck_addr);
    } else {
        vlSelf->main__DOT__i2cscopei__DOT__dr_triggered = 0U;
        vlSelf->main__DOT__i2cscopei__DOT__lst_val = 0U;
        vlSelf->main__DOT__i2cscopei__DOT__imm_val = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
           & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)));
    if ((4U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))) {
        if (vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger) {
            vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered = 1U;
        }
        vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val 
            = vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val;
        vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val 
            = ((((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data) 
                 | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write)) 
                | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped))
                ? vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data
                : vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr);
    } else {
        vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered = 0U;
        vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val = 0U;
        vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid 
        = ((((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable)) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow))) 
            & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr))) 
           & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb)));
    if ((4U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))) {
        if (vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger) {
            vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered = 1U;
        }
        vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val 
            = vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val;
        vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val 
            = ((((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data) 
                 | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write)) 
                | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped))
                ? vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data
                : vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr);
    } else {
        vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered = 0U;
        vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val = 0U;
        vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val = 0U;
    }
    vlSelf->main__DOT__console__DOT__txf_wb_data = 
        (0x7fU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]);
    if ((4U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))) {
        if (vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger) {
            vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered = 1U;
        }
        vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val 
            = vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val;
        vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val 
            = ((((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data) 
                 | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write)) 
                | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped))
                ? vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data
                : vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr);
    } else {
        vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered = 0U;
        vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val = 0U;
        vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val = 0U;
    }
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
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock)) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal)));
    }
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running = 0U;
        vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count = 0U;
        vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running = 0U;
        vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count = 0U;
        vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running = 0U;
        vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count = 0U;
        vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen = 0x400U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc = 0x2000000U;
    } else {
        if (vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write) {
            vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running 
                = (0U != (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data));
        } else if (vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero) {
            vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running = 0U;
        }
        if (vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write) {
            vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count 
                = (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data);
            vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running 
                = (0U != (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data));
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload)))) {
            vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running = 0U;
        }
        if (vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write) {
            vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count 
                = (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data);
            vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running 
                = (0U != (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data));
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload)))) {
            vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running = 0U;
        }
        if (vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write) {
            vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count 
                = (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data);
            vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running 
                = (0U != (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data));
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload)))) {
            vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running = 0U;
        }
        if (((((IData)(vlSelf->main__DOT__swic__DOT__dmac_stb) 
               & (IData)(vlSelf->main__DOT__swic__DOT__sys_we)) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request))) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)))) {
            if ((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__sys_addr)))) {
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen 
                        = (0x7ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen);
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc 
                        = (1U & (~ (vlSelf->main__DOT__swic__DOT__sys_data 
                                    >> 0x16U)));
                }
            }
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
             & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc 
                = (0xffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl);
        } else if ((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase))) 
                    & ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid) 
                         & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))) 
                        & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal))) 
                       | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc;
        }
    }
    vlSelf->main__DOT__console__DOT__txf_wb_write = 
        (((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                    >> 6U) & (0xc00000U == (0xc00000U 
                                            & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U])))) 
          & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
             >> 6U)) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                >> 0x18U)));
    vlSelf->main__DOT__console__DOT__rxf_wb_data = 
        ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc)
          ? (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write)
          : (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data));
    vlSelf->main__DOT__w_console_rx_stb = ((IData)(vlSelf->main__DOT__wbu_rx_stb) 
                                           & (~ ((IData)(vlSelf->main__DOT__wbu_rx_data) 
                                                 >> 7U)));
    vlSelf->main__DOT__console__DOT__rxf_wb_read = 
        (((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                    >> 6U) & (0x800000U == (0xc00000U 
                                            & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U])))) 
          & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                >> 6U))) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                    >> 0x18U)));
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[4U] = vlSelf->main__DOT__i2ci__DOT__bus_read_data;
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
            = (0xffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl);
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                & ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid) 
                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal))) 
                   | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[7U] = vlSelf->main__DOT__wb32_fan_idata;
    vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack = ((~ (IData)(vlSelf->i_reset)) 
                                                 & (IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
    if ((1U & (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                               >> 7U))) 
               | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                  >> 0x11U)))) {
        vlSelf->main__DOT__u_fan__DOT__pre_data = 0U;
    } else {
        vlSelf->main__DOT__u_fan__DOT__pre_data = 0U;
        if ((0x10000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U])) {
            if ((0x8000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U])) {
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
                   | ((0x8000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U])
                       ? (IData)(vlSelf->main__DOT__u_fan__DOT__ctl_sys)
                       : (IData)(vlSelf->main__DOT__u_fan__DOT__ctl_fpga)));
        }
    }
    if (((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
         & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
               >> 7U)))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data = 0U;
        if ((0x10000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U])) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data 
                = ((0x8000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U])
                    ? ((0xfffff000U & vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data) 
                       | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount))
                    : ((0xffffffe0U & vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data) 
                       | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr)));
        } else if ((0x8000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U])) {
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
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0xaU] 
        = vlSelf->main__DOT__wb32_ddr3_phy_idata;
    if ((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
         [0U])) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2 
            = (IData)(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data);
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv 
            = (0x7fffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword);
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc) 
                << 6U) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc) 
                           << 5U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F 
            = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0)
                ? 8U : (((0U == (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                       >> 0x13U))) 
                         << 3U) | (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x13U))));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA 
            = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
               | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                   & ((8U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                      & (0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                  | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                     | (8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                       >> 1U))))));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break 
            = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
               & (0x7000000U == (0x7c00000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch))) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF) 
                & ((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                       >> 6U)) | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR)))) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch)));
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
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
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch))) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid 
                = (0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B));
        }
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B 
            = ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                 & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0))) 
                << 6U) | ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                            & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0))) 
                           << 5U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB)));
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal))) 
               & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
                | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div = 0U;
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div;
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R 
            = (0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR 
            = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim = 0U;
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                & (0x7800000U == (0x7c00000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword))) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
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
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
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
    }
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
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__genbus__DOT__soft_reset = 1U;
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy))))) {
            vlSelf->main__DOT__genbus__DOT__soft_reset 
                = ((IData)(vlSelf->main__DOT__genbus__DOT__rx_valid) 
                   & (3U == (0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))));
        }
        if (((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy)) 
             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line 
                = ((~ ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits) 
                       >> 6U)) & (0x49U <= (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen)));
        }
    }
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
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address = 0U;
        vlSelf->main__DOT__i2ci__DOT__jump_target = 0U;
        vlSelf->main__DOT__i2ci__DOT__abort_address = 0U;
    } else {
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target 
                = (0x1fU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]);
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address 
                = (0x1fU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]);
        } else {
            if (((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
                   & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)) 
                  & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle))) 
                 & (0xb0U == (0xf0U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn))))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr)));
            }
            if (((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
                   & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)) 
                  & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle))) 
                 & (0xa0U == (0xf0U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn))))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr)));
            }
        }
        if (vlSelf->main__DOT__i2ci__DOT__bus_jump) {
            vlSelf->main__DOT__i2ci__DOT__jump_target 
                = (0xfffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]);
            vlSelf->main__DOT__i2ci__DOT__abort_address 
                = (0xfffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]);
        } else {
            if (((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
                   & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
                  & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle))) 
                 & (0xb0U == (0xf0U & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_insn))))) {
                vlSelf->main__DOT__i2ci__DOT__jump_target 
                    = (0xfffffffU & ((IData)(1U) + vlSelf->main__DOT__i2ci__DOT__pf_insn_addr));
            }
            if (((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
                   & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
                  & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle))) 
                 & (0xa0U == (0xf0U & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_insn))))) {
                vlSelf->main__DOT__i2ci__DOT__abort_address 
                    = (0xfffffffU & ((IData)(1U) + vlSelf->main__DOT__i2ci__DOT__pf_insn_addr));
            }
        }
    }
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
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc))) 
               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending = 0U;
        vlSelf->main__DOT__wb32_xbar__DOT__mempty = 1U;
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__mnearfull = 0U;
    } else if ((1U == ((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
            = (0x3fU & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending) 
                        - (IData)(1U)));
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__mnearfull 
            = vlSelf->main__DOT__wb32_xbar__DOT__mfull;
        vlSelf->main__DOT__wb32_xbar__DOT__mempty = 
            (1U == (IData)(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending));
    } else if ((2U == ((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending)));
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__mnearfull 
            = (IData)(((0x3cU == (0x3cU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending))) 
                       & (0U != (3U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending)))));
        vlSelf->main__DOT__wb32_xbar__DOT__mempty = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
        = vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe 
        = __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe;
    vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw 
        = __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw;
    vlSelf->main__DOT__wbwide_i2cm_stb = vlSelf->__Vdly__main__DOT__wbwide_i2cm_stb;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__compression_tbl[vlSelf->__Vdlyvdim0__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__compression_tbl__v0] 
        = vlSelf->__Vdlyvval__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__compression_tbl__v0;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr;
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl = 1U;
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl = 1U;
    } else {
        if (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
             & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy)))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl 
                = (1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits) 
                         >> 6U));
        }
        if (((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy)) 
             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl 
                = (1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits) 
                         >> 6U));
        }
    }
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr 
        = vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__rd_addr;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr 
        = vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__rd_addr;
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid = 0U;
        vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn = 0U;
        vlSelf->main__DOT__spioi__DOT__led_demo = 1U;
        vlSelf->main__DOT__i2ci__DOT__ovw_data = 0U;
        vlSelf->main__DOT__i2ci__DOT__ckcount = 0xfffU;
        vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl = 1U;
        vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda = 1U;
        vlSelf->main__DOT__i2ci__DOT__r_aborted = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))) {
            vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid 
                = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid;
        }
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))) {
            vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid 
                = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid;
        }
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))) {
            vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid 
                = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid;
        }
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))) {
            vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid 
                = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid;
        }
        vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn 
            = vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn;
        if ((((IData)(vlSelf->main__DOT__wb32_spio_stb) 
              & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                 >> 8U)) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                    >> 0x23U)))) {
            vlSelf->main__DOT__spioi__DOT__led_demo 
                = (1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                         >> 0x18U));
        }
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
              & (0x30U == (0x30U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U]))) 
             & (0xf0000ULL == (0xf0000ULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel)))) {
            vlSelf->main__DOT__i2ci__DOT__ckcount = 
                (0xfffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]);
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__bus_write) 
              & (0x10U == (0x30U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U]))) 
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
            if (((IData)(((0U == (0x30U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U])) 
                          & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U] 
                             >> 0x15U))) & (IData)(
                                                   (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
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
            = (0xfffffffU & ((IData)(1U) + ((vlSelf->main__DOT__wbwide_i2cdma_addr 
                                             << 6U) 
                                            | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__subaddr))));
    }
    vlSelf->main__DOT__u_i2cdma__DOT__subaddr = vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__subaddr;
    vlSelf->main__DOT__wbwide_i2cdma_addr = vlSelf->__Vdly__main__DOT__wbwide_i2cdma_addr;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_aux;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_col;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_dm;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_bank;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_row;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_we;
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
    vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr = 
        (1U & ((~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                   >> 2U)) | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr)));
    vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr = 
        (1U & ((~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                   >> 2U)) | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr)));
    vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr = 
        (1U & ((~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                   >> 2U)) | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr)));
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc)
            ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup
            : vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup);
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err 
        = ((((~ (IData)(vlSelf->i_reset)) & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc)) 
            & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc)) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
              >> 3U));
    if ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) {
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall)))) {
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
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
                = ((2U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe)) 
                   | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_we) 
                            >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                            [0U])));
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr 
                = ((0xfffffc00000ULL & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr) 
                   | (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr
                                     [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                     [0U]])));
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
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
            = (2U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe));
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr 
            = (0xfffffc00000ULL & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr);
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U] = 0U;
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U] = 0U;
    }
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall) 
                      >> 1U)))) {
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
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
                = ((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe)) 
                   | (2U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_we) 
                             >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                             [1U]) << 1U)));
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr 
                = ((0x3fffffULL & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr) 
                   | ((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr
                                      [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                      [1U]])) << 0x16U));
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
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
            = (1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe));
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr 
            = (0x3fffffULL & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr);
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U] = 0U;
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U] = 0U;
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
    vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0U] 
        = vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
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
    vlSelf->main__DOT____Vcellinp__swic__i_dbg_we = 
        (1U & ((IData)(vlSelf->cpu_sim_cyc) ? (IData)(vlSelf->cpu_sim_we)
                : ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                   >> 1U)));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb)) 
               | (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
            = (((QData)((IData)((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                               >> 0x3fU))))) 
                << 0x24U) | (0xfffffffffULL & vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data));
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask = 0U;
    } else {
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask 
                = (((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr))) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask)) 
                   | (0xffU & ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort))) 
                               << (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr))));
        }
        if (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask 
                = ((~ ((IData)(1U) << (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                             >> 9U)))) 
                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask));
        }
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
                    | ((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                    >> 9U)) != vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache)))));
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid = 0U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid = 1U;
    } else if ((((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
                   & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack)) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack)) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort))) 
                & ((7U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr) 
                          >> 3U)) == (7U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid = 0U;
    }
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid 
        = ((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy))) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_waddr_plus_one 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)));
    vlSelf->main__DOT__console__DOT__tx_uart_reset 
        = (((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
              >> 6U) & (IData)(((0U == (0xc00000U & 
                                        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U])) 
                                & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                   >> 0x18U)))) & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                   >> 6U)) 
           | (((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                         >> 6U) & (0xc00000U == (0xc00000U 
                                                 & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U])))) 
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
        if ((IData)(((0U == (0xc00000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U])) 
                     & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                        >> 0x18U)))) {
            vlSelf->main__DOT__console__DOT__rx_uart_reset = 1U;
        }
        if (((IData)(((0x800000U == (0xc00000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U])) 
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
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step = 0U;
        vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel = 0xffffffffffffffffULL;
        vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload = 0U;
        vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload = 0U;
        vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload = 0U;
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
                        = ((0x3ffff8U & vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr) 
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
                        = (0x3fffffU & ((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                   >> 0x18U))
                                         ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                            >> 2U) : 
                                        (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
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
                                              == (0x7ffffU 
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
                    = (0x3fffffU & ((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
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
                    = (0x3fffffU & ((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
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
                    = (0x3ffff8U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr);
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc = 1U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb = 1U;
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl = 1U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = 1U;
            } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
                        & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable)))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state = 2U;
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
                    = (0x3fffffU & ((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
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
    }
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
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc 
            = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch)
                ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc
                : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc);
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
                  & (0U == (0x18000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U]))) 
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
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc = 1U;
        vlSelf->main__DOT__i2ci__DOT__cpu_new_pc = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_reset = 1U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_counter = 0U;
        vlSelf->main__DOT__u_fan__DOT__tach_count = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_timer = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount = 0xc8U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait = 0U;
        vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda = 1U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl = 1U;
        vlSelf->main__DOT__u_fan__DOT__pp_ms = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__trigger_counter = 0x1869fU;
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
              & (0x18000U == (0x18000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U]))) 
             & (0xf0000000ULL == (0xf0000000ULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel)))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount 
                = (0xfffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]);
        }
        if ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
              & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)) 
             & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err = 1U;
        }
        if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort) 
             & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted)))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted = 1U;
        }
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) {
            if (((IData)(((0U == (0x18000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U])) 
                          & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U] 
                             >> 0x14U))) & (IData)(
                                                   (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                    >> 0x1eU)))) {
                vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err = 0U;
            }
            if (((IData)(((0U == (0x18000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U])) 
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
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))) {
            vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb 
                = vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid;
        }
        if ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) 
              & (0x8000U == (0x18000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U]))) 
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
        = (0x400000U | vlSelf->main__DOT__wbwide_i2cdma_addr);
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
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last;
    vlSelf->main__DOT__swic__DOT__cmd_read_ack = vlSelf->__Vdly__main__DOT__swic__DOT__cmd_read_ack;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull 
        = vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull;
    vlSelf->main__DOT__wb32_xbar__DOT__mnearfull = vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__mnearfull;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest 
        = ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)) 
           | (0U == (0x380000U & (0x80000U ^ (0x3fffffU 
                                              & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest 
        = ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)) 
           | ((0U == (0x200000U & (0x200000U ^ (0x3fffffU 
                                                & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])))) 
              << 1U));
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
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest 
        = ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)) 
           | (0U == (0x380000U & (0x80000U ^ (0x3fffffU 
                                              & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest 
        = ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)) 
           | ((0U == (0x200000U & (0x200000U ^ (0x3fffffU 
                                                & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])))) 
              << 1U));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss;
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
    vlSelf->main__DOT__u_fan__DOT__tach_reset = vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_reset;
    vlSelf->main__DOT__u_fan__DOT__tach_counter = vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_counter;
    vlSelf->main__DOT__u_fan__DOT__tach_timer = vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_timer;
    vlSelf->main__DOT__u_fan__DOT__temp_tmp = vlSelf->__Vdly__main__DOT__u_fan__DOT__temp_tmp;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal;
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
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__initial_dqs;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_lane_data;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_store;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_level_fail 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_level_fail;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[0U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[0U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[1U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[1U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[2U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[2U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[3U] 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[3U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored;
    vlSelf->o_ddr3_controller_odelay_data_ld = vlSelf->__Vdly__o_ddr3_controller_odelay_data_ld;
    vlSelf->o_ddr3_controller_odelay_dqs_ld = vlSelf->__Vdly__o_ddr3_controller_odelay_dqs_ld;
    vlSelf->o_ddr3_controller_idelay_data_ld = vlSelf->__Vdly__o_ddr3_controller_idelay_data_ld;
    vlSelf->o_ddr3_controller_idelay_dqs_ld = vlSelf->__Vdly__o_ddr3_controller_idelay_dqs_ld;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback;
    vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
        [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__instruction_address;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__lane 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__lane;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data;
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v2] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v2;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v2] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v2;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v2] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v2;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v2] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v2;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v4) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v4] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v4;
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending;
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
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data 
        = (0xfULL | (((QData)((IData)(vlSelf->main__DOT__wbu_we)) 
                      << 0x3fU) | (((QData)((IData)(
                                                    (0x7ffffffU 
                                                     & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr))) 
                                    << 0x24U) | ((QData)((IData)(vlSelf->main__DOT__wbu_data)) 
                                                 << 4U))));
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
            << 0x3dU) | (((QData)((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr)) 
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
           & (((0xfffff800U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                               & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                   [0U] & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                                  << 0xbU))) | ((0xfffffc00U 
                                                 & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                    & ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_ack) 
                                                       << 0xaU))) 
                                                | ((0xfffffe00U 
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
                                                                              & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack))))))))))))) 
              >> vlSelf->main__DOT__wb32_xbar__DOT__mindex
              [0U]));
    if ((0x1000U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack = 0U;
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc))) 
               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack = 0U;
    }
    vlSelf->main__DOT__wbu_xbar__DOT__m_data[0U] = (IData)(
                                                           (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                                            >> 4U));
    vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0U] = (0xfU 
                                                   & (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data));
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
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor 
            = (0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr);
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
    } else {
        vlSelf->main__DOT__i2c_valid = 0U;
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
    if ((1U & (~ (IData)(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)))) {
        vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = 1U;
        vlSelf->main__DOT__i2ci__DOT__w_scl = 1U;
        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
        [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))];
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
                                                   (0xf0000000U 
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
                                                   (0xf0000000U 
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
            << 4U) | (0xfU & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr));
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
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | (0U == (0x380000U & (0x80000U ^ (0x3fffffU 
                                              & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((0U == (0x200000U & (0x200000U ^ (0x3fffffU 
                                                & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])))) 
              << 1U));
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
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value 
        = (0x3fU & ((1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))
                     ? ((IData)(2U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))
                     : ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8 = 0U;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0xbU] 
        = (IData)(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data);
    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
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
    } else {
        vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein = 0U;
        vlSelf->o_ddr3_controller_idelay_data_cntvaluein = 0U;
        vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein = 0U;
        vlSelf->o_ddr3_controller_odelay_data_cntvaluein = 0U;
    }
}
