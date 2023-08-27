// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmain__Syms.h"
#include "Vmain___024root.h"

VL_INLINE_OPT void Vmain___024root___ico_sequent__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0;
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_hd0986443__0;
    // Body
    vlSelf->main__DOT____Vcellinp__ddr3_controller_inst__i_rst_n 
        = (1U & (~ (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT____Vcellinp__scope3_ddr3i____pinNumber4 
        = ((0x7f000000U & (vlSelf->i_ddr3_controller_iserdes_data[1U] 
                           << 8U)) | ((0xff0000U & 
                                       (vlSelf->i_ddr3_controller_iserdes_data[1U] 
                                        << 0x10U)) 
                                      | ((0xff00U & 
                                          (vlSelf->i_ddr3_controller_iserdes_data[0U] 
                                           >> 8U)) 
                                         | (0xffU & 
                                            vlSelf->i_ddr3_controller_iserdes_data[0U]))));
    vlSelf->cpu_sim_stall = (1U & ((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                   | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)));
    vlSelf->cpu_sim_ack = ((IData)(vlSelf->cpu_sim_cyc) 
                           & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack));
    vlSelf->main__DOT____Vcellinp__swic__i_reset = 
        ((IData)(vlSelf->i_cpu_reset) | (IData)(vlSelf->i_reset));
    vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc 
        = (IData)((((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                    >> 1U) | (IData)(vlSelf->cpu_sim_cyc)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset 
        = ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN 
        = (1U & (~ ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual))));
    vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset 
        = ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__i2ci__DOT__r_halted));
    vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN 
        = (1U & (~ ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual))));
    vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset 
        = (1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                     >> 1U)) | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc)) 
                 | (IData)(vlSelf->i_reset)));
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
                                >> 0x1bU)));
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_data 
            = (IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                       >> 0x20U));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v 
        = ((0xf0000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v) 
           | (((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                      >> 4U)) == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))
               ? (0xffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc)
               : ((0xffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc) 
                  | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
                     << 1U))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v = 0U;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v 
        = ((0xf0000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v) 
           | (((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                      >> 4U)) == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))
               ? (0xffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc)
               : ((0xffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc) 
                  | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
                     << 1U))));
    __Vtemp_hd0986443__0[0U] = 0xffffffffU;
    __Vtemp_hd0986443__0[1U] = 0xffffffffU;
    __Vtemp_hd0986443__0[2U] = 0U;
    __Vtemp_hd0986443__0[3U] = 0U;
    vlSelf->main__DOT____Vcellinp__scope2_ddr3i____pinNumber4 
        = (((IData)(vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein) 
            << 0x1aU) | (((IData)(vlSelf->o_ddr3_controller_idelay_data_cntvaluein) 
                          << 0x15U) | (((IData)(vlSelf->i_ddr3_controller_iserdes_dqs) 
                                        << 5U) | (((IData)(vlSelf->o_ddr3_controller_dqs_tri_control) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->o_ddr3_controller_dq_tri_control) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  == 
                                                                  (((vlSelf->i_ddr3_controller_iserdes_data[0U] 
                                                                     | vlSelf->i_ddr3_controller_iserdes_data[1U]) 
                                                                    | vlSelf->i_ddr3_controller_iserdes_data[2U]) 
                                                                   | vlSelf->i_ddr3_controller_iserdes_data[3U]))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     == 
                                                                     ((((~ 
                                                                         vlSelf->i_ddr3_controller_iserdes_data[0U]) 
                                                                        | (~ 
                                                                           vlSelf->i_ddr3_controller_iserdes_data[1U])) 
                                                                       | (~ 
                                                                          vlSelf->i_ddr3_controller_iserdes_data[2U])) 
                                                                      | (~ 
                                                                         vlSelf->i_ddr3_controller_iserdes_data[3U])))) 
                                                            << 1U) 
                                                           | VL_GT_W(4, __Vtemp_hd0986443__0, vlSelf->i_ddr3_controller_iserdes_data))))))));
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
    vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__11__KET____DOT__drop_sgrant 
        = (1U & (~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [0xbU]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                [0xbU]))));
    if ((((~ (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                [0xbU]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
               [0xbU]] : 0U) >> 0xbU)) & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [0xbU]) 
                                          & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__m_stb) 
                                             >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [0xbU]))) 
         & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
             [0xbU]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty) 
                        >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [0xbU])))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__11__KET____DOT__drop_sgrant = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                  >> 0xbU)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__11__KET____DOT__drop_sgrant = 0U;
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
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 1U;
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
        vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__11__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 1U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbwide_i2cm_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbu_cyc)) 
                 | (IData)(vlSelf->i_reset)));
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
    vlSelf->main__DOT__wbu_xbar__DOT__s_stall = (0xcU 
                                                 | ((0xfffffffeU 
                                                     & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                                        & (((IData)(vlSelf->cpu_sim_cyc) 
                                                            | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                                           << 1U))) 
                                                    | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                                       & (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))));
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h39e03a19__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid) 
           | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy) 
              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy)));
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
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_i2cdma_stb) 
              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
              | (IData)(vlSelf->main__DOT__wbwide_zip_stb)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
              | (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb)));
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbu_stb) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4 
        = ((0x40000000U & ((IData)(vlSelf->main__DOT__i2ci__DOT__ovw_data) 
                           << 0x15U)) | (((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_abort) 
                                          << 0x1dU) 
                                         | (((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_stretch) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->main__DOT__i2ci__DOT__half_insn) 
                                                << 0x18U) 
                                               | vlSelf->main__DOT__i2ci__DOT____VdfgTmp_h373818eb__0))));
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
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
              | (IData)(vlSelf->main__DOT__wb32_wbdown_stb)));
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall)) 
                 & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem)) 
                    & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy)) 
                       & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy)) 
                          | (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR) 
                                & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R) 
                                   == (0xeU | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                                               << 4U))))))))));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbwide_i2cm_cyc));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbwide_zip_cyc));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc));
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbu_cyc));
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall 
        = ((IData)(vlSelf->main__DOT__wbu_cyc) & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem) 
              & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_stalled)) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall) 
           & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0xffeU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | (IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 1U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0xffdU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0) 
              << 1U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 2U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0xffbU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0) 
              << 2U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 3U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0xff7U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0) 
              << 3U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 4U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0xfefU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0) 
              << 4U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 5U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0xfdfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0) 
              << 5U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 6U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0xfbfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0) 
              << 6U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 7U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0xf7fU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0) 
              << 7U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 8U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0xeffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0) 
              << 8U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 9U));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0xdffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0) 
              << 9U));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 0xaU));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0xbffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0) 
              << 0xaU));
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest) 
              >> 0xbU));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request 
        = ((0x7ffU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request)) 
           | ((IData)(main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h97024913__0) 
              << 0xbU));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__this_is_a_multiply_op 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce) 
           & ((5U == (7U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                            >> 1U))) | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
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

void Vmain___024root___eval_ico(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmain___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vmain___024root___eval_act(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*1:0*/, 128> Vmain__ConstPool__TABLE_h7c414883_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vmain__ConstPool__TABLE_h9e411d43_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_h5b51c6c5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain__ConstPool__TABLE_h02e0efbb_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vmain__ConstPool__TABLE_h809a37d6_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vmain__ConstPool__TABLE_heed7669e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vmain__ConstPool__TABLE_hdf55cab5_0;
extern const VlWide<16>/*511:0*/ Vmain__ConstPool__CONST_h93e1b771_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vmain__ConstPool__TABLE_hd397e023_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vmain__ConstPool__TABLE_h9becc847_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vmain__ConstPool__TABLE_h4c25b041_0;
extern const VlUnpacked<CData/*6:0*/, 32> Vmain__ConstPool__TABLE_h7fc47693_0;
extern const VlWide<18>/*575:0*/ Vmain__ConstPool__CONST_hb679b2e5_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vmain__ConstPool__TABLE_h97873ec7_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vmain__ConstPool__TABLE_h179527bd_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vmain__ConstPool__TABLE_h164a10d3_0;
extern const VlWide<15>/*479:0*/ Vmain__ConstPool__CONST_hbd99daea_0;

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v0;
    __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v0 = 0;
    CData/*2:0*/ __Vdlyvval__main__DOT__wbu_xbar__DOT__grant__v1;
    __Vdlyvval__main__DOT__wbu_xbar__DOT__grant__v1 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v1;
    __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v1 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v2;
    __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v2 = 0;
    IData/*19:0*/ __Vdly__main__DOT__scope1_ddr3i__DOT__holdoff_counter;
    __Vdly__main__DOT__scope1_ddr3i__DOT__holdoff_counter = 0;
    CData/*0:0*/ __Vdly__main__DOT__scope1_ddr3i__DOT__dr_force_inhibit;
    __Vdly__main__DOT__scope1_ddr3i__DOT__dr_force_inhibit = 0;
    IData/*19:0*/ __Vdly__main__DOT__scope2_ddr3i__DOT__holdoff_counter;
    __Vdly__main__DOT__scope2_ddr3i__DOT__holdoff_counter = 0;
    CData/*0:0*/ __Vdly__main__DOT__scope2_ddr3i__DOT__dr_force_inhibit;
    __Vdly__main__DOT__scope2_ddr3i__DOT__dr_force_inhibit = 0;
    QData/*63:0*/ __Vdly__main__DOT__wbwide_i2cdma_sel;
    __Vdly__main__DOT__wbwide_i2cdma_sel = 0;
    SData/*12:0*/ __Vdly__main__DOT__u_fan__DOT__pwm_counter;
    __Vdly__main__DOT__u_fan__DOT__pwm_counter = 0;
    CData/*4:0*/ __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr;
    __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr = 0;
    SData/*11:0*/ __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount;
    __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount = 0;
    CData/*1:0*/ __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight;
    __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight = 0;
    SData/*11:0*/ __Vdly__main__DOT__i2ci__DOT__i2c_ckcount;
    __Vdly__main__DOT__i2ci__DOT__i2c_ckcount = 0;
    CData/*1:0*/ __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__inflight;
    __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__inflight = 0;
    CData/*6:0*/ __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count;
    __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count = 0;
    CData/*5:0*/ __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr;
    __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr = 0;
    CData/*4:0*/ __Vdlyvdim0__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0;
    __Vdlyvdim0__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0;
    __Vdlyvval__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0;
    __Vdlyvset__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0 = 0;
    CData/*5:0*/ __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr;
    __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr = 0;
    CData/*0:0*/ __Vdly__main__DOT__console__DOT__rxfifo__DOT__will_overflow;
    __Vdly__main__DOT__console__DOT__rxfifo__DOT__will_overflow = 0;
    CData/*5:0*/ __Vdly__main__DOT__console__DOT__rxfifo__DOT__r_fill;
    __Vdly__main__DOT__console__DOT__rxfifo__DOT__r_fill = 0;
    CData/*5:0*/ __Vdly__main__DOT__console__DOT__txfifo__DOT__r_fill;
    __Vdly__main__DOT__console__DOT__txfifo__DOT__r_fill = 0;
    CData/*0:0*/ __Vdly__main__DOT__swic__DOT__cmd_read;
    __Vdly__main__DOT__swic__DOT__cmd_read = 0;
    SData/*13:0*/ __Vdly__main__DOT__swic__DOT__u_watchbus__DOT__r_value;
    __Vdly__main__DOT__swic__DOT__u_watchbus__DOT__r_value = 0;
    CData/*2:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0 = 0;
    SData/*15:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0 = 0;
    VlWide<16>/*511:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0;
    VL_ZERO_W(512, __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0);
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0 = 0;
    CData/*1:0*/ __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state;
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state = 0;
    VlWide<32>/*1023:0*/ __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg;
    VL_ZERO_W(1024, __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg);
    CData/*4:0*/ __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr;
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr = 0;
    CData/*3:0*/ __Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0;
    __Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0 = 0;
    VlWide<17>/*519:0*/ __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0;
    VL_ZERO_W(520, __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0;
    __Vdlyvset__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr;
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr = 0;
    VlWide<16>/*511:0*/ __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg;
    VL_ZERO_W(512, __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg);
    IData/*19:0*/ __Vdly__main__DOT__i2cscopei__DOT__holdoff_counter;
    __Vdly__main__DOT__i2cscopei__DOT__holdoff_counter = 0;
    CData/*0:0*/ __Vdly__main__DOT__i2cscopei__DOT__dr_force_inhibit;
    __Vdly__main__DOT__i2cscopei__DOT__dr_force_inhibit = 0;
    CData/*6:0*/ __Vdly__main__DOT__rcv__DOT__baud_counter;
    __Vdly__main__DOT__rcv__DOT__baud_counter = 0;
    CData/*7:0*/ __Vdly__main__DOT__txv__DOT__lcl_data;
    __Vdly__main__DOT__txv__DOT__lcl_data = 0;
    CData/*0:0*/ __Vdly__main__DOT__txv__DOT__zero_baud_counter;
    __Vdly__main__DOT__txv__DOT__zero_baud_counter = 0;
    CData/*6:0*/ __Vdly__main__DOT__txv__DOT__baud_counter;
    __Vdly__main__DOT__txv__DOT__baud_counter = 0;
    IData/*18:0*/ __Vdly__main__DOT__genbus__DOT__r_wdt_timer;
    __Vdly__main__DOT__genbus__DOT__r_wdt_timer = 0;
    SData/*9:0*/ __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_acks_needed;
    __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_acks_needed = 0;
    SData/*9:0*/ __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_len;
    __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_len = 0;
    IData/*29:0*/ __Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word;
    __Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word = 0;
    CData/*0:0*/ __Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table;
    __Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table = 0;
    CData/*0:0*/ __Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow;
    __Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow = 0;
    CData/*0:0*/ __Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow;
    __Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow = 0;
    CData/*0:0*/ __Vdly__main__DOT__genbus__DOT__ofifo_empty_n;
    __Vdly__main__DOT__genbus__DOT__ofifo_empty_n = 0;
    IData/*19:0*/ __Vdly__main__DOT__scope3_ddr3i__DOT__holdoff_counter;
    __Vdly__main__DOT__scope3_ddr3i__DOT__holdoff_counter = 0;
    CData/*0:0*/ __Vdly__main__DOT__scope3_ddr3i__DOT__dr_force_inhibit;
    __Vdly__main__DOT__scope3_ddr3i__DOT__dr_force_inhibit = 0;
    SData/*9:0*/ __Vdly__main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe;
    __Vdly__main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe = 0;
    CData/*7:0*/ __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw;
    __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw = 0;
    SData/*15:0*/ __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe;
    __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe = 0;
    CData/*7:0*/ __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_owner;
    __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_owner = 0;
    CData/*0:0*/ __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_dir;
    __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_dir = 0;
    CData/*5:0*/ __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill;
    __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill = 0;
    CData/*5:0*/ __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr;
    __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr = 0;
    CData/*0:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap = 0;
    CData/*0:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i = 0;
    CData/*0:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag = 0;
    CData/*0:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag = 0;
    CData/*0:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag = 0;
    IData/*31:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks = 0;
    QData/*62:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend = 0;
    IData/*31:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor = 0;
    IData/*31:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result = 0;
    CData/*3:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0 = 0;
    SData/*11:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr = 0;
    CData/*4:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr = 0;
    CData/*5:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr = 0;
    CData/*4:0*/ __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62 = 0;
    CData/*5:0*/ __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63;
    __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63 = 0;
    SData/*8:0*/ __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63;
    __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63;
    __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63 = 0;
    VlWide<16>/*511:0*/ __Vtemp_h211bbf5b__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc94fac31__0;
    VlWide<32>/*1023:0*/ __Vtemp_hfa8722fc__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc94fac31__1;
    VlWide<32>/*1023:0*/ __Vtemp_hb4dafc67__0;
    VlWide<16>/*511:0*/ __Vtemp_h04488e48__0;
    VlWide<16>/*511:0*/ __Vtemp_h0448bebe__0;
    VlWide<16>/*511:0*/ __Vtemp_h0448985a__0;
    VlWide<16>/*511:0*/ __Vtemp_h434d0da1__0;
    VlWide<16>/*511:0*/ __Vtemp_hfc2bf96b__0;
    VlWide<16>/*511:0*/ __Vtemp_h02cc08c7__0;
    VlWide<16>/*511:0*/ __Vtemp_hc1d82fb0__0;
    VlWide<16>/*511:0*/ __Vtemp_hbcf58278__0;
    VlWide<16>/*511:0*/ __Vtemp_hcfafa750__0;
    VlWide<16>/*511:0*/ __Vtemp_haaa3c8b7__0;
    VlWide<16>/*511:0*/ __Vtemp_hc1851150__0;
    VlWide<16>/*511:0*/ __Vtemp_hfebc76e7__0;
    // Body
    __Vdly__main__DOT__u_fan__DOT__pwm_counter = vlSelf->main__DOT__u_fan__DOT__pwm_counter;
    __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe 
        = vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe;
    __Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw 
        = vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw;
    vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr;
    __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr;
    __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr;
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr;
    vlSelf->__Vdly__main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter 
        = vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter;
    __Vdly__main__DOT__swic__DOT__u_watchbus__DOT__r_value 
        = vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value;
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe;
    __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill;
    __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr;
    vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill;
    vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness 
        = vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness;
    vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness 
        = vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness;
    vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness 
        = vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness;
    vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness 
        = vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness;
    vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness 
        = vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness;
    vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness 
        = vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness;
    vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness 
        = vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness;
    vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness 
        = vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness;
    vlSelf->__Vdly__main__DOT__rcv__DOT__data_reg = vlSelf->main__DOT__rcv__DOT__data_reg;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill;
    __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_dir 
        = vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir;
    __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_owner 
        = vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner;
    __Vdly__main__DOT__txv__DOT__baud_counter = vlSelf->main__DOT__txv__DOT__baud_counter;
    __Vdly__main__DOT__txv__DOT__zero_baud_counter 
        = vlSelf->main__DOT__txv__DOT__zero_baud_counter;
    vlSelf->__Vdly__main__DOT__txv__DOT__r_busy = vlSelf->main__DOT__txv__DOT__r_busy;
    vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags__v0 = 0U;
    vlSelf->__Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr 
        = vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr;
    vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr 
        = vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr;
    __Vdlyvset__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0 = 0U;
    vlSelf->__Vdly__main__DOT__swic__DOT__wdbus_int 
        = vlSelf->main__DOT__swic__DOT__wdbus_int;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len;
    vlSelf->__Vdly__main__DOT__rcv__DOT__chg_counter 
        = vlSelf->main__DOT__rcv__DOT__chg_counter;
    vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__raddr 
        = vlSelf->main__DOT__scope3_ddr3i__DOT__raddr;
    vlSelf->__Vdly__main__DOT__i2cscopei__DOT__raddr 
        = vlSelf->main__DOT__i2cscopei__DOT__raddr;
    vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__raddr 
        = vlSelf->main__DOT__scope2_ddr3i__DOT__raddr;
    vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__raddr 
        = vlSelf->main__DOT__scope1_ddr3i__DOT__raddr;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter;
    vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_stop_pipe 
        = vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe;
    vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_stop_pipe 
        = vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe;
    vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_stop_pipe 
        = vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe;
    vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_stop_pipe 
        = vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe;
    vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n 
        = vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n;
    __Vdly__main__DOT__scope3_ddr3i__DOT__holdoff_counter 
        = vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter;
    __Vdly__main__DOT__genbus__DOT__ofifo_empty_n = vlSelf->main__DOT__genbus__DOT__ofifo_empty_n;
    __Vdly__main__DOT__i2cscopei__DOT__holdoff_counter 
        = vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter;
    __Vdly__main__DOT__scope2_ddr3i__DOT__holdoff_counter 
        = vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter;
    __Vdly__main__DOT__scope1_ddr3i__DOT__holdoff_counter 
        = vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter;
    vlSelf->__Vdly__main__DOT__rcv__DOT__zero_baud_counter 
        = vlSelf->main__DOT__rcv__DOT__zero_baud_counter;
    __Vdly__main__DOT__rcv__DOT__baud_counter = vlSelf->main__DOT__rcv__DOT__baud_counter;
    vlSelf->__Vdly__main__DOT__rcv__DOT__state = vlSelf->main__DOT__rcv__DOT__state;
    vlSelf->__Vdly__main__DOT__swic__DOT__cmd_read_ack 
        = vlSelf->main__DOT__swic__DOT__cmd_read_ack;
    vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__ck_addr 
        = vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr;
    vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__ck_addr 
        = vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr;
    vlSelf->__Vdly__main__DOT__i2cscopei__DOT__ck_addr 
        = vlSelf->main__DOT__i2cscopei__DOT__ck_addr;
    vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__ck_addr 
        = vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__temp_tmp 
        = vlSelf->main__DOT__u_fan__DOT__temp_tmp;
    vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data 
        = vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data;
    vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data 
        = vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data;
    vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data 
        = vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit;
    __Vdly__main__DOT__swic__DOT__cmd_read = vlSelf->main__DOT__swic__DOT__cmd_read;
    vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_force_write 
        = vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write;
    __Vdly__main__DOT__scope3_ddr3i__DOT__dr_force_inhibit 
        = vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit;
    vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_force_write 
        = vlSelf->main__DOT__i2cscopei__DOT__dr_force_write;
    __Vdly__main__DOT__i2cscopei__DOT__dr_force_inhibit 
        = vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit;
    vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_force_write 
        = vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write;
    __Vdly__main__DOT__scope2_ddr3i__DOT__dr_force_inhibit 
        = vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit;
    vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_force_write 
        = vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write;
    __Vdly__main__DOT__scope1_ddr3i__DOT__dr_force_inhibit 
        = vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__trigger_counter 
        = vlSelf->main__DOT__u_fan__DOT__trigger_counter;
    __Vdly__main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe 
        = vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe;
    vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__hx_stb 
        = vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb;
    __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_timer 
        = vlSelf->main__DOT__u_fan__DOT__tach_timer;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_counter 
        = vlSelf->main__DOT__u_fan__DOT__tach_counter;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__tach_reset 
        = vlSelf->main__DOT__u_fan__DOT__tach_reset;
    vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb 
        = vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb;
    vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__cw_stb 
        = vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wbu_tx_stb 
        = vlSelf->main__DOT__genbus__DOT__wbu_tx_stb;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr;
    __Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table;
    vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow 
        = vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched;
    vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__waddr 
        = vlSelf->main__DOT__scope3_ddr3i__DOT__waddr;
    __Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow 
        = vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow;
    vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_primed 
        = vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed;
    vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__waddr 
        = vlSelf->main__DOT__scope1_ddr3i__DOT__waddr;
    vlSelf->__Vdly__main__DOT__i2cscopei__DOT__waddr 
        = vlSelf->main__DOT__i2cscopei__DOT__waddr;
    vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_primed 
        = vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed;
    vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__waddr 
        = vlSelf->main__DOT__scope2_ddr3i__DOT__waddr;
    vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_primed 
        = vlSelf->main__DOT__i2cscopei__DOT__dr_primed;
    vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wb_state 
        = vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state;
    vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_primed 
        = vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed;
    vlSelf->__Vdly__main__DOT__wbu_stb = vlSelf->main__DOT__wbu_stb;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__cp_stb 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb;
    vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid 
        = vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid;
    __Vdly__main__DOT__txv__DOT__lcl_data = vlSelf->main__DOT__txv__DOT__lcl_data;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding;
    vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len 
        = vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0 = 0U;
    vlSelf->__Vdlyvset__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__compression_tbl__v0 = 0U;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen;
    vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len 
        = vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0 = 0U;
    vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wide_addr 
        = vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr;
    vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr 
        = vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr;
    vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw 
        = vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw;
    vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__zero_acks 
        = vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks;
    __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_acks_needed 
        = vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__cw_stb 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal;
    vlSelf->__Vdlyvset__main__DOT__scope3_ddr3i__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__main__DOT__scope1_ddr3i__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__main__DOT__i2cscopei__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__main__DOT__scope2_ddr3i__DOT__mem__v0 = 0U;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state;
    vlSelf->__Vdly__main__DOT__swic__DOT__dbg_stb = vlSelf->main__DOT__swic__DOT__dbg_stb;
    __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v0 = 0U;
    __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v1 = 0U;
    __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v2 = 0U;
    vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset__v0 = 0U;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr;
    __Vdly__main__DOT__genbus__DOT__r_wdt_timer = vlSelf->main__DOT__genbus__DOT__r_wdt_timer;
    vlSelf->__Vdly__main__DOT__genbus__DOT__r_wdt_reset 
        = vlSelf->main__DOT__genbus__DOT__r_wdt_reset;
    vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__last_ack 
        = vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr;
    vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__last_read_request 
        = vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request;
    __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_len 
        = vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__dir 
        = vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits 
        = vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg 
        = vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__w_sda = vlSelf->main__DOT__i2ci__DOT__w_sda;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_axisi2c__DOT__state 
        = vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state;
    vlSelf->__Vdlyvset__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__fifo__v0 = 0U;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_addr 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0 = 0U;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp;
    vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
        = vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr;
    vlSelf->__Vdlyvset__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__fifo__v0 = 0U;
    vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__mnearfull 
        = vlSelf->main__DOT__wbu_xbar__DOT__mnearfull;
    vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
        = vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v0 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v1 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v2 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v3 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v4 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v5 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v6 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v7 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v8 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v9 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v10 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v11 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wb32_xbar__DOT__grant__v0 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wb32_xbar__DOT__grant__v1 = 0U;
    vlSelf->__Vdlyvset__main__DOT__wb32_xbar__DOT__grant__v2 = 0U;
    vlSelf->__Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow 
        = vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow;
    __Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow 
        = vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow;
    vlSelf->__Vdly__main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable 
        = vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable;
    vlSelf->__Vdly__main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable 
        = vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable;
    vlSelf->__Vdly__main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state 
        = vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state;
    vlSelf->__Vdly__main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state 
        = vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state;
    vlSelf->__Vdly__main__DOT__swic__DOT__cmd_write 
        = vlSelf->main__DOT__swic__DOT__cmd_write;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__ln_stb 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb;
    vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__dw_bits 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits;
    __Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size;
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid;
    vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb 
        = vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb;
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
        = vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc;
    vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant 
        = vlSelf->main__DOT__wbu_xbar__DOT__sgrant;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift;
    vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first 
        = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err;
    vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data 
        = vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap;
    vlSelf->__Vdly__main__DOT__swic__DOT__u_jiffies__DOT__r_counter 
        = vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks;
    vlSelf->__Vdly__main__DOT__swic__DOT__wdt_reset 
        = vlSelf->main__DOT__swic__DOT__wdt_reset;
    vlSelf->__Vdly__main__DOT__swic__DOT__cmd_clear_cache 
        = vlSelf->main__DOT__swic__DOT__cmd_clear_cache;
    vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__br_config 
        = vlSelf->main__DOT__scope3_ddr3i__DOT__br_config;
    vlSelf->__Vdly__main__DOT__i2cscopei__DOT__br_config 
        = vlSelf->main__DOT__i2cscopei__DOT__br_config;
    vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__br_config 
        = vlSelf->main__DOT__scope2_ddr3i__DOT__br_config;
    vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__br_config 
        = vlSelf->main__DOT__scope1_ddr3i__DOT__br_config;
    vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_stopped 
        = vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped;
    vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_stopped 
        = vlSelf->main__DOT__i2cscopei__DOT__dr_stopped;
    vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_stopped 
        = vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped;
    vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_stopped 
        = vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag;
    vlSelf->__Vdly__main__DOT__swic__DOT__u_watchdog__DOT__r_zero 
        = vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero;
    vlSelf->__Vdly__main__DOT__swic__DOT__u_watchdog__DOT__r_value 
        = vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr;
    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_zero 
        = vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero;
    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_zero 
        = vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero;
    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_zero 
        = vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe;
    vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data 
        = vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data;
    vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data 
        = vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data;
    vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data 
        = vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data;
    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_value 
        = vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value;
    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_value 
        = vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value;
    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_value 
        = vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value;
    __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount;
    __Vdly__main__DOT__i2ci__DOT__i2c_ckcount = vlSelf->main__DOT__i2ci__DOT__i2c_ckcount;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__i2c_ckedge 
        = vlSelf->main__DOT__i2ci__DOT__i2c_ckedge;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__mem_addr 
        = vlSelf->main__DOT__u_fan__DOT__mem_addr;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_illegal 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal;
    vlSelf->__Vdly__main__DOT__spioi__DOT__r_led = vlSelf->main__DOT__spioi__DOT__r_led;
    vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data 
        = vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data;
    vlSelf->__Vdlyvset__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem__v0 = 0U;
    vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc 
        = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v1 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v2 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v3 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v4 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v5 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v6 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v7 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v8 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v9 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v10 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v11 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v12 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v13 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v14 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v15 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v16 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v17 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v18 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v19 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v20 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v21 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v22 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v23 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v24 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v25 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v26 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v27 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v28 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v29 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v30 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v31 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v32 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v33 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v34 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v35 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v36 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v37 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v38 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v39 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v40 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v41 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v42 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v43 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v44 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v45 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v46 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v47 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v48 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v49 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v50 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v51 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v52 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v53 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v54 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v55 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v56 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v57 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v58 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v59 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v60 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v61 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v62 = 0U;
    vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v63 = 0U;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb;
    vlSelf->__Vdly__o_gpio = vlSelf->o_gpio;
    vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__rd_addr 
        = vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr;
    vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__rd_addr 
        = vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr;
    __Vdly__main__DOT__console__DOT__rxfifo__DOT__r_fill 
        = vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill;
    __Vdly__main__DOT__console__DOT__txfifo__DOT__r_fill 
        = vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill;
    vlSelf->__Vdlyvset__main__DOT__console__DOT__rxfifo__DOT__fifo__v0 = 0U;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_fpga 
        = vlSelf->main__DOT__u_fan__DOT__ctl_fpga;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_sys 
        = vlSelf->main__DOT__u_fan__DOT__ctl_sys;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_cyc 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc;
    vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__bus_err 
        = vlSelf->main__DOT__u_i2cdma__DOT__bus_err;
    vlSelf->__Vdly__main__DOT__swic__DOT__u_jiffies__DOT__int_when 
        = vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock;
    vlSelf->__Vdlyvset__main__DOT__console__DOT__txfifo__DOT__fifo__v0 = 0U;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal;
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU];
    __Vdlyvset__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0 = 0U;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill;
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU];
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU] 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU];
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i;
    __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__inflight 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__ign_mem_cyc 
        = vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__mem_stb 
        = vlSelf->main__DOT__u_fan__DOT__mem_stb;
    vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62 = 0U;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63 = 0U;
    __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr;
    vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted 
        = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__r_halted 
        = vlSelf->main__DOT__i2ci__DOT__r_halted;
    vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__will_overflow 
        = vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow;
    __Vdly__main__DOT__console__DOT__rxfifo__DOT__will_overflow 
        = vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_insn_addr 
        = vlSelf->main__DOT__i2ci__DOT__pf_insn_addr;
    vlSelf->__Vdly__main__DOT__wbwide_i2cm_addr = vlSelf->main__DOT__wbwide_i2cm_addr;
    vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__will_underflow 
        = vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow;
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__imm_cycle 
        = vlSelf->main__DOT__i2ci__DOT__imm_cycle;
    vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__will_underflow 
        = vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0U] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0U];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[1U] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[1U];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[2U] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[2U];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[3U] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[3U];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[4U] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[4U];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[5U] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[5U];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[6U] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[6U];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[7U] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[7U];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[8U] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[8U];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[9U] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[9U];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xaU] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xaU];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xbU] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xbU];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xcU] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xcU];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xdU] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xdU];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xeU] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xeU];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xfU] 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xfU];
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_valid 
        = vlSelf->main__DOT__i2ci__DOT__pf_valid;
    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen;
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_illegal 
        = vlSelf->main__DOT__i2ci__DOT__pf_illegal;
    vlSelf->__Vdly__main__DOT__wbwide_i2cdma_cyc = vlSelf->main__DOT__wbwide_i2cdma_cyc;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid;
    __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count 
        = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count;
    vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_jump_addr 
        = vlSelf->main__DOT__i2ci__DOT__pf_jump_addr;
    vlSelf->__Vdly__main__DOT__wbwide_i2cm_stb = vlSelf->main__DOT__wbwide_i2cm_stb;
    vlSelf->__Vdly__main__DOT__wbwide_i2cm_cyc = vlSelf->main__DOT__wbwide_i2cm_cyc;
    vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending;
    vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending;
    vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending;
    vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
        = vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    __Vdly__main__DOT__wbwide_i2cdma_sel = vlSelf->main__DOT__wbwide_i2cdma_sel;
    vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__subaddr 
        = vlSelf->main__DOT__u_i2cdma__DOT__subaddr;
    vlSelf->__Vdly__main__DOT__wbwide_i2cdma_addr = vlSelf->main__DOT__wbwide_i2cdma_addr;
    vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__r_overflow 
        = vlSelf->main__DOT__u_i2cdma__DOT__r_overflow;
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__mnearfull 
        = vlSelf->main__DOT__wb32_xbar__DOT__mnearfull;
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
        = vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending;
    vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb;
    vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__mnearfull 
        = vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull;
    vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
        = vlSelf->main__DOT__wbwide_xbar__DOT__sgrant;
    vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
        = vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb;
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = vlSelf->main__DOT__wb32_xbar__DOT__sgrant;
    vlSelf->main__DOT__wbu_xbar__DOT__iN = 1U;
    vlSelf->main__DOT__wbwide_xbar__DOT__iN = 4U;
    vlSelf->main__DOT__wb32_xbar__DOT__iN = 1U;
    vlSelf->main__DOT__wb32_xbar__DOT__iM = vlSelf->main__DOT__wb32_xbar__DOT__mindex
        [0U];
    vlSelf->main__DOT__wbu_xbar__DOT__iM = vlSelf->main__DOT__wbu_xbar__DOT__mindex
        [0U];
    vlSelf->main__DOT__wbwide_xbar__DOT__iM = vlSelf->main__DOT__wbwide_xbar__DOT__mindex
        [3U];
    if (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb) {
        vlSelf->main__DOT__bkrami__DOT__WRITE_TO_MEMORY__DOT__ik = 0x40U;
        if ((1U & (IData)(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v0 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0U]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v0 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v0 = 0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v0 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 1U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v1 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0U] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v1 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v1 = 8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v1 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 2U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v2 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0U] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v2 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v2 = 0x10U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v2 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 3U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v3 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v3 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v3 = 0x18U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v3 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 4U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v4 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[1U]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v4 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v4 = 0x20U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v4 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 5U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v5 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[1U] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v5 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v5 = 0x28U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v5 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 6U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v6 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[1U] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v6 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v6 = 0x30U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v6 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 7U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v7 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[1U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v7 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v7 = 0x38U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v7 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 8U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v8 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[2U]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v8 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v8 = 0x40U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v8 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 9U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v9 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[2U] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v9 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v9 = 0x48U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v9 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0xaU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v10 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[2U] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v10 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v10 = 0x50U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v10 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0xbU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v11 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[2U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v11 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v11 = 0x58U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v11 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0xcU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v12 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[3U]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v12 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v12 = 0x60U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v12 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0xdU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v13 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[3U] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v13 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v13 = 0x68U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v13 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0xeU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v14 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[3U] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v14 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v14 = 0x70U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v14 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0xfU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v15 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[3U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v15 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v15 = 0x78U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v15 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x10U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v16 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[4U]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v16 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v16 = 0x80U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v16 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x11U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v17 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[4U] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v17 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v17 = 0x88U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v17 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x12U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v18 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[4U] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v18 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v18 = 0x90U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v18 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x13U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v19 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[4U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v19 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v19 = 0x98U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v19 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x14U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v20 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[5U]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v20 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v20 = 0xa0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v20 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x15U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v21 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[5U] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v21 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v21 = 0xa8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v21 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x16U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v22 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[5U] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v22 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v22 = 0xb0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v22 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x17U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v23 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[5U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v23 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v23 = 0xb8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v23 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x18U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v24 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[6U]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v24 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v24 = 0xc0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v24 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x19U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v25 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[6U] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v25 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v25 = 0xc8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v25 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x1aU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v26 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[6U] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v26 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v26 = 0xd0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v26 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x1bU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v27 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[6U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v27 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v27 = 0xd8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v27 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x1cU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v28 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[7U]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v28 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v28 = 0xe0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v28 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x1dU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v29 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[7U] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v29 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v29 = 0xe8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v29 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x1eU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v30 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[7U] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v30 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v30 = 0xf0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v30 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x1fU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v31 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[7U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v31 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v31 = 0xf8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v31 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x20U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v32 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[8U]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v32 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v32 = 0x100U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v32 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x21U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v33 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[8U] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v33 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v33 = 0x108U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v33 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x22U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v34 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[8U] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v34 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v34 = 0x110U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v34 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x23U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v35 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[8U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v35 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v35 = 0x118U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v35 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x24U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v36 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[9U]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v36 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v36 = 0x120U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v36 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x25U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v37 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[9U] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v37 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v37 = 0x128U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v37 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x26U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v38 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[9U] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v38 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v38 = 0x130U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v38 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x27U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v39 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[9U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v39 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v39 = 0x138U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v39 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x28U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v40 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xaU]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v40 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v40 = 0x140U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v40 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x29U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v41 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xaU] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v41 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v41 = 0x148U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v41 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x2aU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v42 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xaU] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v42 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v42 = 0x150U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v42 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x2bU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v43 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xaU] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v43 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v43 = 0x158U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v43 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x2cU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v44 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xbU]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v44 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v44 = 0x160U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v44 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x2dU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v45 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xbU] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v45 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v45 = 0x168U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v45 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x2eU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v46 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xbU] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v46 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v46 = 0x170U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v46 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x2fU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v47 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xbU] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v47 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v47 = 0x178U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v47 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x30U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v48 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xcU]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v48 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v48 = 0x180U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v48 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x31U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v49 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xcU] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v49 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v49 = 0x188U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v49 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x32U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v50 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xcU] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v50 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v50 = 0x190U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v50 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x33U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v51 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xcU] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v51 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v51 = 0x198U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v51 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x34U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v52 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xdU]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v52 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v52 = 0x1a0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v52 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x35U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v53 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xdU] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v53 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v53 = 0x1a8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v53 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x36U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v54 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xdU] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v54 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v54 = 0x1b0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v54 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x37U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v55 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xdU] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v55 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v55 = 0x1b8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v55 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x38U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v56 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xeU]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v56 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v56 = 0x1c0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v56 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x39U)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v57 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xeU] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v57 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v57 = 0x1c8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v57 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x3aU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v58 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xeU] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v58 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v58 = 0x1d0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v58 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x3bU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v59 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xeU] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v59 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v59 = 0x1d8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v59 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x3cU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v60 
                = (0xffU & vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xfU]);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v60 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v60 = 0x1e0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v60 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x3dU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v61 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xfU] 
                            >> 8U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v61 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v61 = 0x1e8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v61 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x3eU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v62 
                = (0xffU & (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xfU] 
                            >> 0x10U));
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v62 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v62 = 0x1f0U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v62 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
                           >> 0x3fU)))) {
            vlSelf->__Vdlyvval__main__DOT__bkrami__DOT__mem__v63 
                = (vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xfU] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__main__DOT__bkrami__DOT__mem__v63 = 1U;
            vlSelf->__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v63 = 0x1f8U;
            vlSelf->__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v63 
                = vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr;
        }
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__ik = 0x40U;
        if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0U]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0 = 0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 1U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0U] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1 = 8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 2U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0U] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2 = 0x10U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 3U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0U] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3 = 0x18U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 4U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[1U]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4 = 0x20U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 5U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[1U] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5 = 0x28U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 6U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[1U] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6 = 0x30U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 7U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[1U] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7 = 0x38U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 8U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[2U]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8 = 0x40U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 9U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[2U] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9 = 0x48U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0xaU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[2U] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10 = 0x50U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0xbU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[2U] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11 = 0x58U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0xcU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[3U]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12 = 0x60U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0xdU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[3U] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13 = 0x68U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0xeU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[3U] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14 = 0x70U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0xfU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[3U] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15 = 0x78U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x10U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[4U]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16 = 0x80U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x11U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[4U] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17 = 0x88U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x12U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[4U] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18 = 0x90U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x13U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[4U] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19 = 0x98U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x14U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[5U]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20 = 0xa0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x15U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[5U] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21 = 0xa8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x16U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[5U] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22 = 0xb0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x17U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[5U] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23 = 0xb8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x18U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[6U]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24 = 0xc0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x19U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[6U] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25 = 0xc8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x1aU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[6U] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26 = 0xd0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x1bU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[6U] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27 = 0xd8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x1cU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[7U]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28 = 0xe0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x1dU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[7U] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29 = 0xe8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x1eU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[7U] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30 = 0xf0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x1fU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[7U] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31 = 0xf8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x20U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[8U]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32 = 0x100U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x21U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[8U] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33 = 0x108U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x22U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[8U] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34 = 0x110U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x23U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[8U] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35 = 0x118U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x24U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[9U]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36 = 0x120U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x25U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[9U] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37 = 0x128U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x26U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[9U] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38 = 0x130U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x27U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[9U] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39 = 0x138U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x28U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xaU]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40 = 0x140U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x29U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xaU] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41 = 0x148U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x2aU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xaU] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42 = 0x150U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x2bU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xaU] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43 = 0x158U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x2cU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xbU]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44 = 0x160U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x2dU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xbU] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45 = 0x168U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x2eU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xbU] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46 = 0x170U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x2fU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xbU] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47 = 0x178U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x30U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xcU]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48 = 0x180U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x31U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xcU] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49 = 0x188U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x32U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xcU] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50 = 0x190U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x33U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xcU] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51 = 0x198U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x34U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xdU]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52 = 0x1a0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x35U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xdU] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53 = 0x1a8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x36U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xdU] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54 = 0x1b0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x37U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xdU] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55 = 0x1b8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x38U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xeU]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56 = 0x1c0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x39U)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xeU] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57 = 0x1c8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x3aU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xeU] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58 = 0x1d0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x3bU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xeU] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59 = 0x1d8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x3cU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60 
                = (0xffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xfU]);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60 = 0x1e0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x3dU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xfU] 
                            >> 8U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61 = 0x1e8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x3eU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62 
                = (0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xfU] 
                            >> 0x10U));
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62 = 0x1f0U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel 
                           >> 0x3fU)))) {
            __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata[0xfU] 
                   >> 0x18U);
            __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63 = 1U;
            __Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63 = 0x1f8U;
            __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr;
        }
    }
    __Vdly__main__DOT__u_fan__DOT__pwm_counter = ((0x1387U 
                                                   <= (IData)(vlSelf->main__DOT__u_fan__DOT__pwm_counter))
                                                   ? 0U
                                                   : 
                                                  (0x1fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->main__DOT__u_fan__DOT__pwm_counter))));
    if (vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset) {
        vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr = 0U;
        __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr = 0U;
        __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill = 0U;
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty = 1U;
    } else {
        if (vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd) {
            vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr)));
        }
        if (vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr) {
            __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr)));
        }
        if ((1U == (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr) 
                     << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd)))) {
            __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill 
                = (0x3fU & ((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill) 
                            - (IData)(1U)));
            vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty 
                = (1U >= (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill));
        } else if ((2U == (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr) 
                            << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd)))) {
            __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill)));
            vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty = 0U;
        } else {
            __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill 
                = (0x3fU & ((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr) 
                            - (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr)));
        }
    }
    if (vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset) {
        __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr = 0U;
        __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr = 0U;
        vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty = 1U;
    } else {
        if (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr) {
            __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr)));
        }
        if (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd) {
            __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr)));
        }
        if ((1U == (((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr) 
                     << 1U) | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd)))) {
            vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill 
                = (0x3fU & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill) 
                            - (IData)(1U)));
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty 
                = (1U >= (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill));
        } else if ((2U == (((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr) 
                            << 1U) | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd)))) {
            vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill)));
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty = 0U;
        } else {
            vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill 
                = (0x3fU & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr) 
                            - (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr)));
        }
    }
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset) {
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill = 0U;
    } else {
        if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr) {
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr)));
        }
        if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd) {
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr)));
        }
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill 
            = (0x1fU & ((1U == (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr) 
                                 << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd)))
                         ? ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill) 
                            - (IData)(1U)) : ((2U == 
                                               (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr) 
                                                 << 1U) 
                                                | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill))
                                               : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr) 
                                                  - (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr)))));
    }
    if (vlSelf->main__DOT____Vcellinp__swic__i_reset) {
        vlSelf->__Vdly__main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter = 0x14U;
    } else if ((0U < (IData)(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter 
            = (0x1fU & ((IData)(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter) 
                        - (IData)(1U)));
    }
    if (vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2) {
        __Vdly__main__DOT__swic__DOT__u_watchbus__DOT__r_value = 0x2000U;
        vlSelf->__Vdly__main__DOT__swic__DOT__wdbus_int = 0U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__wdbus_int)))) {
        __Vdly__main__DOT__swic__DOT__u_watchbus__DOT__r_value 
            = (0x3fffU & ((IData)(0x3fffU) + (IData)(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value)));
        vlSelf->__Vdly__main__DOT__swic__DOT__wdbus_int 
            = (1U == (IData)(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value));
    }
    if (vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk) {
        vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness 
            = ((0x80U & (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner))
                ? 0x1fU : ((0x1cU < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness))
                            ? 0x1cU : ((0x17U < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness))
                                        ? 0x17U : (
                                                   (0xfU 
                                                    < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness))
                                                    ? 0xfU
                                                    : 
                                                   ((0xbU 
                                                     < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness))
                                                     ? 0xbU
                                                     : 
                                                    ((7U 
                                                      < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness))
                                                      ? 7U
                                                      : 
                                                     ((5U 
                                                       < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness))
                                                       ? 5U
                                                       : 
                                                      ((3U 
                                                        < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness))
                                                        ? 3U
                                                        : 
                                                       ((1U 
                                                         < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness))
                                                         ? 1U
                                                         : 0U)))))))));
        vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness 
            = ((0x40U & (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner))
                ? 0x1fU : ((0x1cU < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness))
                            ? 0x1cU : ((0x17U < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness))
                                        ? 0x17U : (
                                                   (0xfU 
                                                    < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness))
                                                    ? 0xfU
                                                    : 
                                                   ((0xbU 
                                                     < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness))
                                                     ? 0xbU
                                                     : 
                                                    ((7U 
                                                      < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness))
                                                      ? 7U
                                                      : 
                                                     ((5U 
                                                       < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness))
                                                       ? 5U
                                                       : 
                                                      ((3U 
                                                        < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness))
                                                        ? 3U
                                                        : 
                                                       ((1U 
                                                         < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness))
                                                         ? 1U
                                                         : 0U)))))))));
        vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness 
            = ((0x20U & (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner))
                ? 0x1fU : ((0x1cU < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness))
                            ? 0x1cU : ((0x17U < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness))
                                        ? 0x17U : (
                                                   (0xfU 
                                                    < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness))
                                                    ? 0xfU
                                                    : 
                                                   ((0xbU 
                                                     < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness))
                                                     ? 0xbU
                                                     : 
                                                    ((7U 
                                                      < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness))
                                                      ? 7U
                                                      : 
                                                     ((5U 
                                                       < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness))
                                                       ? 5U
                                                       : 
                                                      ((3U 
                                                        < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness))
                                                        ? 3U
                                                        : 
                                                       ((1U 
                                                         < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness))
                                                         ? 1U
                                                         : 0U)))))))));
        vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness 
            = ((0x10U & (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner))
                ? 0x1fU : ((0x1cU < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness))
                            ? 0x1cU : ((0x17U < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness))
                                        ? 0x17U : (
                                                   (0xfU 
                                                    < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness))
                                                    ? 0xfU
                                                    : 
                                                   ((0xbU 
                                                     < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness))
                                                     ? 0xbU
                                                     : 
                                                    ((7U 
                                                      < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness))
                                                      ? 7U
                                                      : 
                                                     ((5U 
                                                       < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness))
                                                       ? 5U
                                                       : 
                                                      ((3U 
                                                        < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness))
                                                        ? 3U
                                                        : 
                                                       ((1U 
                                                         < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness))
                                                         ? 1U
                                                         : 0U)))))))));
        vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness 
            = ((8U & (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner))
                ? 0x1fU : ((0x1cU < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness))
                            ? 0x1cU : ((0x17U < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness))
                                        ? 0x17U : (
                                                   (0xfU 
                                                    < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness))
                                                    ? 0xfU
                                                    : 
                                                   ((0xbU 
                                                     < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness))
                                                     ? 0xbU
                                                     : 
                                                    ((7U 
                                                      < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness))
                                                      ? 7U
                                                      : 
                                                     ((5U 
                                                       < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness))
                                                       ? 5U
                                                       : 
                                                      ((3U 
                                                        < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness))
                                                        ? 3U
                                                        : 
                                                       ((1U 
                                                         < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness))
                                                         ? 1U
                                                         : 0U)))))))));
        vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness 
            = ((4U & (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner))
                ? 0x1fU : ((0x1cU < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness))
                            ? 0x1cU : ((0x17U < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness))
                                        ? 0x17U : (
                                                   (0xfU 
                                                    < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness))
                                                    ? 0xfU
                                                    : 
                                                   ((0xbU 
                                                     < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness))
                                                     ? 0xbU
                                                     : 
                                                    ((7U 
                                                      < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness))
                                                      ? 7U
                                                      : 
                                                     ((5U 
                                                       < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness))
                                                       ? 5U
                                                       : 
                                                      ((3U 
                                                        < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness))
                                                        ? 3U
                                                        : 
                                                       ((1U 
                                                         < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness))
                                                         ? 1U
                                                         : 0U)))))))));
        vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness 
            = ((2U & (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner))
                ? 0x1fU : ((0x1cU < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness))
                            ? 0x1cU : ((0x17U < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness))
                                        ? 0x17U : (
                                                   (0xfU 
                                                    < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness))
                                                    ? 0xfU
                                                    : 
                                                   ((0xbU 
                                                     < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness))
                                                     ? 0xbU
                                                     : 
                                                    ((7U 
                                                      < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness))
                                                      ? 7U
                                                      : 
                                                     ((5U 
                                                       < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness))
                                                       ? 5U
                                                       : 
                                                      ((3U 
                                                        < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness))
                                                        ? 3U
                                                        : 
                                                       ((1U 
                                                         < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness))
                                                         ? 1U
                                                         : 0U)))))))));
        vlSelf->__Vdly__main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness 
            = ((1U & (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner))
                ? 0x1fU : ((0x1cU < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness))
                            ? 0x1cU : ((0x17U < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness))
                                        ? 0x17U : (
                                                   (0xfU 
                                                    < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness))
                                                    ? 0xfU
                                                    : 
                                                   ((0xbU 
                                                     < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness))
                                                     ? 0xbU
                                                     : 
                                                    ((7U 
                                                      < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness))
                                                      ? 7U
                                                      : 
                                                     ((5U 
                                                       < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness))
                                                       ? 5U
                                                       : 
                                                      ((3U 
                                                        < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness))
                                                        ? 3U
                                                        : 
                                                       ((1U 
                                                         < (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness))
                                                         ? 1U
                                                         : 0U)))))))));
    }
    if (((IData)(vlSelf->main__DOT__rcv__DOT__zero_baud_counter) 
         & (8U != (IData)(vlSelf->main__DOT__rcv__DOT__state)))) {
        vlSelf->__Vdly__main__DOT__rcv__DOT__data_reg 
            = (((IData)(vlSelf->main__DOT__rcv__DOT__qq_uart) 
                << 7U) | (0x7fU & ((IData)(vlSelf->main__DOT__rcv__DOT__data_reg) 
                                   >> 1U)));
    }
    if ((0U == (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner))) {
        __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_owner = 1U;
        __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_dir = 1U;
    } else if (((IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk) 
                & (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir))) {
        if ((0x80U == (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner))) {
            __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_dir 
                = (1U & (~ (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir)));
        } else {
            __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_owner 
                = (0xfeU & ((IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner) 
                            << 1U));
        }
    } else if (vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk) {
        if ((1U == (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner))) {
            __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_dir 
                = (1U & (~ (IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir)));
        } else {
            __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_owner 
                = (0x7fU & ((IData)(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner) 
                            >> 1U));
        }
    }
    __Vdly__main__DOT__txv__DOT__zero_baud_counter 
        = (1U == (IData)(vlSelf->main__DOT__txv__DOT__baud_counter));
    if ((0xfU == (IData)(vlSelf->main__DOT__txv__DOT__state))) {
        __Vdly__main__DOT__txv__DOT__baud_counter = 0U;
        __Vdly__main__DOT__txv__DOT__zero_baud_counter = 1U;
        if (((IData)(vlSelf->main__DOT__genbus__DOT__ps_full) 
             & (~ (IData)(vlSelf->main__DOT__txv__DOT__r_busy)))) {
            __Vdly__main__DOT__txv__DOT__baud_counter = 0x63U;
            __Vdly__main__DOT__txv__DOT__zero_baud_counter = 0U;
        }
    } else if (vlSelf->main__DOT__txv__DOT__zero_baud_counter) {
        if ((8U < (IData)(vlSelf->main__DOT__txv__DOT__state))) {
            __Vdly__main__DOT__txv__DOT__baud_counter = 0U;
            __Vdly__main__DOT__txv__DOT__zero_baud_counter = 1U;
        } else {
            __Vdly__main__DOT__txv__DOT__baud_counter 
                = ((8U == (IData)(vlSelf->main__DOT__txv__DOT__state))
                    ? 0x62U : 0x63U);
        }
    } else {
        __Vdly__main__DOT__txv__DOT__baud_counter = 
            (0x7fU & ((IData)(vlSelf->main__DOT__txv__DOT__baud_counter) 
                      - (IData)(1U)));
    }
    __Vtableidx9 = (((IData)(vlSelf->main__DOT__txv__DOT__r_busy) 
                     << 6U) | (((IData)(vlSelf->main__DOT__genbus__DOT__ps_full) 
                                << 5U) | (((IData)(vlSelf->main__DOT__txv__DOT__state) 
                                           << 1U) | (IData)(vlSelf->main__DOT__txv__DOT__zero_baud_counter))));
    if ((1U & Vmain__ConstPool__TABLE_h7c414883_0[__Vtableidx9])) {
        vlSelf->main__DOT__txv__DOT__state = Vmain__ConstPool__TABLE_h9e411d43_0
            [__Vtableidx9];
    }
    vlSelf->__Vdly__main__DOT__txv__DOT__r_busy = Vmain__ConstPool__TABLE_h5b51c6c5_0
        [__Vtableidx9];
    if (((3U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state)) 
         & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack))) {
        vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags__v0 
            = (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                           >> 3U));
        vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags__v0 
            = (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                     >> 3U));
    }
    if (vlSelf->main__DOT__genbus__DOT__r_wdt_reset) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n = 0U;
        __Vdly__main__DOT__genbus__DOT__ofifo_empty_n = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow = 1U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched = 0U;
        __Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__cp_stb = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state = 1U;
        __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_len = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow = 1U;
        __Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow = 0U;
    } else {
        if (((IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read) 
             & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr)));
        }
        if (((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read) 
             & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr)));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                   | (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n 
                = (1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                   | (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))) {
            __Vdly__main__DOT__genbus__DOT__ofifo_empty_n 
                = (1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)));
        }
        if (vlSelf->main__DOT__genbus__DOT__in_stb) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow = 0U;
        } else if (vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow 
                = ((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow) 
                   | ((0x7fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr))) 
                      == (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched = 0U;
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched 
                = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match;
        }
        if (vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd) {
            __Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow 
                = ((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow) 
                   & (IData)(vlSelf->main__DOT__genbus__DOT__in_stb));
        } else if (vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write) {
            __Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow 
                = (((0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr))) 
                    == (0x3fU & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr))) 
                   & ((1U & (((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)) 
                             >> 6U)) != (1U & ((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr) 
                                               >> 6U))));
        }
        if (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__cp_stb = 1U;
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__cp_stb = 0U;
        }
        if (vlSelf->main__DOT__zip_cpu_int) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request = 1U;
        } else if ((((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                     & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy))) 
                    & (0x100000000ULL == (0xfc0000000ULL 
                                          & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request = 0U;
        }
        if ((((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
              & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy))) 
             & (0ULL == (0xfc0000000ULL & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state = 1U;
        } else if ((1U & (~ (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                             >> 0x15U)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state = 0U;
        }
        if (vlSelf->main__DOT__wbu_cyc) {
            if (((IData)(vlSelf->main__DOT__wbu_cyc) 
                 & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))) {
                __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_len = 0U;
            } else if ((((IData)(vlSelf->main__DOT__wbu_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))) 
                        & (0U != (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len)))) {
                __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_len 
                    = (0x3ffU & ((IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len) 
                                 - (IData)(1U)));
            }
        } else {
            __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_len = 0U;
            if ((((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n) 
                  & (~ (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy))) 
                 & (0xc00000000ULL == (0xc00000000ULL 
                                       & vlSelf->main__DOT__genbus__DOT__ififo_codword)))) {
                __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_len 
                    = (0x3ffU & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword));
            }
        }
        if (vlSelf->main__DOT__genbus__DOT__exec_stb) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow = 0U;
        } else if (vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow 
                = ((IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow) 
                   | ((0x7ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr))) 
                      == (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)));
        }
        if (vlSelf->main__DOT__genbus__DOT__ofifo_rd) {
            __Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow 
                = ((IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow) 
                   & (IData)(vlSelf->main__DOT__genbus__DOT__exec_stb));
        } else if (vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write) {
            __Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow 
                = (((0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr))) 
                    == (0x3ffU & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr))) 
                   & ((1U & (((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)) 
                             >> 0xaU)) != (1U & ((IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr) 
                                                 >> 0xaU))));
        }
    }
    if (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr) {
        __Vdlyvval__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0 
            = vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data;
        __Vdlyvset__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0 
            = (0x1fU & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr));
    }
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy) {
        if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len 
                = (0x7ffU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len) 
                             - (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size)));
            if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len) 
                 <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len = 0U;
            }
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size 
                = (0x7fU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))
                             ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))
                                 ? 1U : 2U) : ((1U 
                                                & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))
                                                ? 4U
                                                : (
                                                   ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len) 
                                                    > 
                                                    ((IData)(0x40U) 
                                                     + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size)))
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len) 
                                                    - (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size))))));
            if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc) {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr 
                    = (0x3fU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr) 
                                + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size)));
            } else if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size)))) {
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr 
                        = (0x3eU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr));
                }
            } else if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))) {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr 
                    = (0x3cU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr));
            } else {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr = 0U;
            }
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes 
                = ((0U != (3U & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill) 
                                 >> 6U))) ? 0x40U : 
                   (0x3fU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill)));
        } else if ((0U == (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes 
                = (0x7fU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill));
        }
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid = 0U;
        if (((((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid)) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last))) 
              & (0U == (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len))) 
             & (0U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill)))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid = 1U;
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid = 1U;
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc) 
             & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack))) {
            if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))) {
                if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift 
                        = (0x3fU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift) 
                                    + ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc)
                                        ? 1U : 0U)));
                } else {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift 
                        = (0x3fU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift) 
                                    + ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc)
                                        ? 2U : 0U)));
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift 
                        = (0x3eU & (IData)(vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift));
                }
            } else if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift 
                    = (0x3fU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift) 
                                + ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc)
                                    ? 4U : 0U)));
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift 
                    = (0x3cU & (IData)(vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift));
            } else {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift = 0U;
            }
            __Vtemp_hc1d82fb0__0[0U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x20U];
            __Vtemp_hc1d82fb0__0[1U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x21U];
            __Vtemp_hc1d82fb0__0[2U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x22U];
            __Vtemp_hc1d82fb0__0[3U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x23U];
            __Vtemp_hc1d82fb0__0[4U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x24U];
            __Vtemp_hc1d82fb0__0[5U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x25U];
            __Vtemp_hc1d82fb0__0[6U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x26U];
            __Vtemp_hc1d82fb0__0[7U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x27U];
            __Vtemp_hc1d82fb0__0[8U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x28U];
            __Vtemp_hc1d82fb0__0[9U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x29U];
            __Vtemp_hc1d82fb0__0[0xaU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2aU];
            __Vtemp_hc1d82fb0__0[0xbU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2bU];
            __Vtemp_hc1d82fb0__0[0xcU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2cU];
            __Vtemp_hc1d82fb0__0[0xdU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2dU];
            __Vtemp_hc1d82fb0__0[0xeU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2eU];
            __Vtemp_hc1d82fb0__0[0xfU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2fU];
            VL_SHIFTL_WWI(512,512,32, __Vtemp_hbcf58278__0, __Vtemp_hc1d82fb0__0, 
                          ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift) 
                           << 3U));
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0U] 
                = __Vtemp_hbcf58278__0[0U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[1U] 
                = __Vtemp_hbcf58278__0[1U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[2U] 
                = __Vtemp_hbcf58278__0[2U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[3U] 
                = __Vtemp_hbcf58278__0[3U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[4U] 
                = __Vtemp_hbcf58278__0[4U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[5U] 
                = __Vtemp_hbcf58278__0[5U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[6U] 
                = __Vtemp_hbcf58278__0[6U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[7U] 
                = __Vtemp_hbcf58278__0[7U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[8U] 
                = __Vtemp_hbcf58278__0[8U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[9U] 
                = __Vtemp_hbcf58278__0[9U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xaU] 
                = __Vtemp_hbcf58278__0[0xaU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xbU] 
                = __Vtemp_hbcf58278__0[0xbU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xcU] 
                = __Vtemp_hbcf58278__0[0xcU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xdU] 
                = __Vtemp_hbcf58278__0[0xdU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xeU] 
                = __Vtemp_hbcf58278__0[0xeU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg[0xfU] 
                = __Vtemp_hbcf58278__0[0xfU];
        } else if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid) {
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
        }
    } else {
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr 
            = (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr);
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift 
            = (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr);
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes = 0U;
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
    }
    if (((IData)(vlSelf->main__DOT__rcv__DOT__qq_uart) 
         != (IData)(vlSelf->main__DOT__rcv__DOT__ck_uart))) {
        vlSelf->__Vdly__main__DOT__rcv__DOT__chg_counter = 0U;
    } else if ((0x7fU != (IData)(vlSelf->main__DOT__rcv__DOT__chg_counter))) {
        vlSelf->__Vdly__main__DOT__rcv__DOT__chg_counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__rcv__DOT__chg_counter)));
    }
    if ((1U & ((~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                   >> 2U)) | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control)))) {
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__raddr = 0U;
    } else if (((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data) 
                & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                   >> 4U))) {
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__raddr 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr)));
    }
    if ((1U & ((~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                   >> 2U)) | (IData)(vlSelf->main__DOT__i2cscopei__DOT__write_to_control)))) {
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__raddr = 0U;
    } else if (((IData)(vlSelf->main__DOT__i2cscopei__DOT__read_from_data) 
                & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                   >> 4U))) {
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__raddr 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__i2cscopei__DOT__raddr)));
    }
    if ((1U & ((~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                   >> 2U)) | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control)))) {
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__raddr = 0U;
    } else if (((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data) 
                & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                   >> 4U))) {
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__raddr 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr)));
    }
    if ((1U & ((~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                   >> 2U)) | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control)))) {
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__raddr = 0U;
    } else if (((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data) 
                & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                   >> 4U))) {
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__raddr 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr)));
    }
    if (((((IData)(vlSelf->main__DOT__genbus__DOT__r_wdt_reset) 
           | (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)) 
          | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb)) 
         | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy))) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter = 0U;
    } else if ((1U & (~ (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                         >> 0x15U)))) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
            = (0x3fffffU & ((IData)(1U) + vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter));
    }
    if ((4U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))) {
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_stop_pipe 
            = ((0x1eU & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                         << 1U)) | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped));
        if (((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered) 
             & (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped)))) {
            __Vdly__main__DOT__scope3_ddr3i__DOT__holdoff_counter 
                = (0xfffffU & ((IData)(1U) + vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter));
        }
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__ck_addr 
            = ((((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write) 
                 | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data)) 
                | (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped))
                ? 0U : (0x7fffffffU & ((IData)(1U) 
                                       + vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr)));
        __Vdly__main__DOT__scope3_ddr3i__DOT__dr_force_inhibit 
            = vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write;
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_force_write 
            = (1U & ((((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout) 
                       & (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write))) 
                      & (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit))) 
                     | (((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger) 
                         & (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered))) 
                        | (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed)))));
        if (vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce) {
            vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__waddr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr)));
            vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_primed 
                = ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed) 
                   | (0x3ffU == (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr)));
        }
    } else {
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_stop_pipe = 0U;
        __Vdly__main__DOT__scope3_ddr3i__DOT__holdoff_counter = 0U;
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__ck_addr = 0U;
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_force_write = 1U;
        __Vdly__main__DOT__scope3_ddr3i__DOT__dr_force_inhibit = 0U;
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__waddr = 0U;
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_primed = 0U;
    }
    if ((4U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))) {
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_stop_pipe 
            = ((0x1eU & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                         << 1U)) | (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped));
        if (((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered) 
             & (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped)))) {
            __Vdly__main__DOT__i2cscopei__DOT__holdoff_counter 
                = (0xfffffU & ((IData)(1U) + vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter));
        }
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__ck_addr 
            = ((((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write) 
                 | (IData)(vlSelf->main__DOT__i2cscopei__DOT__new_data)) 
                | (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped))
                ? 0U : (0x7fffffffU & ((IData)(1U) 
                                       + vlSelf->main__DOT__i2cscopei__DOT__ck_addr)));
        __Vdly__main__DOT__i2cscopei__DOT__dr_force_inhibit 
            = vlSelf->main__DOT__i2cscopei__DOT__dr_force_write;
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_force_write 
            = (1U & ((((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout) 
                       & (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write))) 
                      & (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit))) 
                     | (((IData)(vlSelf->main__DOT__i2cscopei__DOT__dw_trigger) 
                         & (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered))) 
                        | (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_primed)))));
        if (vlSelf->main__DOT__i2cscopei__DOT__record_ce) {
            vlSelf->__Vdly__main__DOT__i2cscopei__DOT__waddr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__i2cscopei__DOT__waddr)));
            vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_primed 
                = ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_primed) 
                   | (0x3ffU == (IData)(vlSelf->main__DOT__i2cscopei__DOT__waddr)));
        }
    } else {
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_stop_pipe = 0U;
        __Vdly__main__DOT__i2cscopei__DOT__holdoff_counter = 0U;
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__ck_addr = 0U;
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_force_write = 1U;
        __Vdly__main__DOT__i2cscopei__DOT__dr_force_inhibit = 0U;
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__waddr = 0U;
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_primed = 0U;
    }
    if ((4U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))) {
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_stop_pipe 
            = ((0x1eU & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                         << 1U)) | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped));
        if (((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered) 
             & (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped)))) {
            __Vdly__main__DOT__scope2_ddr3i__DOT__holdoff_counter 
                = (0xfffffU & ((IData)(1U) + vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter));
        }
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__ck_addr 
            = ((((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write) 
                 | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data)) 
                | (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped))
                ? 0U : (0x7fffffffU & ((IData)(1U) 
                                       + vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr)));
        __Vdly__main__DOT__scope2_ddr3i__DOT__dr_force_inhibit 
            = vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write;
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_force_write 
            = (1U & ((((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout) 
                       & (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write))) 
                      & (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit))) 
                     | (((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger) 
                         & (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered))) 
                        | (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed)))));
        if (vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce) {
            vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__waddr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr)));
            vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_primed 
                = ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed) 
                   | (0x3ffU == (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr)));
        }
    } else {
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_stop_pipe = 0U;
        __Vdly__main__DOT__scope2_ddr3i__DOT__holdoff_counter = 0U;
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__ck_addr = 0U;
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_force_write = 1U;
        __Vdly__main__DOT__scope2_ddr3i__DOT__dr_force_inhibit = 0U;
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__waddr = 0U;
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_primed = 0U;
    }
    if ((4U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))) {
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_stop_pipe 
            = ((0x1eU & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                         << 1U)) | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped));
        if (((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered) 
             & (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped)))) {
            __Vdly__main__DOT__scope1_ddr3i__DOT__holdoff_counter 
                = (0xfffffU & ((IData)(1U) + vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter));
        }
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__ck_addr 
            = ((((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write) 
                 | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data)) 
                | (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped))
                ? 0U : (0x7fffffffU & ((IData)(1U) 
                                       + vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr)));
        __Vdly__main__DOT__scope1_ddr3i__DOT__dr_force_inhibit 
            = vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write;
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_force_write 
            = (1U & ((((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout) 
                       & (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write))) 
                      & (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit))) 
                     | (((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger) 
                         & (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered))) 
                        | (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed)))));
        if (vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce) {
            vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__waddr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr)));
            vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_primed 
                = ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed) 
                   | (0x3ffU == (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr)));
        }
    } else {
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_stop_pipe = 0U;
        __Vdly__main__DOT__scope1_ddr3i__DOT__holdoff_counter = 0U;
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__ck_addr = 0U;
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_force_write = 1U;
        __Vdly__main__DOT__scope1_ddr3i__DOT__dr_force_inhibit = 0U;
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__waddr = 0U;
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_primed = 0U;
    }
    if ((((0xfU == (IData)(vlSelf->main__DOT__rcv__DOT__state)) 
          & (~ (IData)(vlSelf->main__DOT__rcv__DOT__ck_uart))) 
         & (IData)(vlSelf->main__DOT__rcv__DOT__half_baud_time))) {
        vlSelf->__Vdly__main__DOT__rcv__DOT__zero_baud_counter = 0U;
        __Vdly__main__DOT__rcv__DOT__baud_counter = 0x63U;
    } else if ((9U == (IData)(vlSelf->main__DOT__rcv__DOT__state))) {
        vlSelf->__Vdly__main__DOT__rcv__DOT__zero_baud_counter = 1U;
        __Vdly__main__DOT__rcv__DOT__baud_counter = 0U;
    } else if (((IData)(vlSelf->main__DOT__rcv__DOT__zero_baud_counter) 
                & (8U > (IData)(vlSelf->main__DOT__rcv__DOT__state)))) {
        vlSelf->__Vdly__main__DOT__rcv__DOT__zero_baud_counter = 0U;
        __Vdly__main__DOT__rcv__DOT__baud_counter = 0x63U;
    } else {
        if ((1U == (IData)(vlSelf->main__DOT__rcv__DOT__baud_counter))) {
            vlSelf->__Vdly__main__DOT__rcv__DOT__zero_baud_counter = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->main__DOT__rcv__DOT__zero_baud_counter)))) {
            __Vdly__main__DOT__rcv__DOT__baud_counter 
                = (0x7fU & ((IData)(vlSelf->main__DOT__rcv__DOT__baud_counter) 
                            - (IData)(1U)));
        }
    }
    __Vtableidx8 = (((IData)(vlSelf->main__DOT__rcv__DOT__zero_baud_counter) 
                     << 6U) | (((IData)(vlSelf->main__DOT__rcv__DOT__half_baud_time) 
                                << 5U) | (((IData)(vlSelf->main__DOT__rcv__DOT__ck_uart) 
                                           << 4U) | (IData)(vlSelf->main__DOT__rcv__DOT__state))));
    if (Vmain__ConstPool__TABLE_h02e0efbb_0[__Vtableidx8]) {
        vlSelf->__Vdly__main__DOT__rcv__DOT__state 
            = Vmain__ConstPool__TABLE_h809a37d6_0[__Vtableidx8];
    }
    if ((1U & ((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_cyc))))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__cmd_read_ack = 0U;
        __Vdly__main__DOT__swic__DOT__cmd_read = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__dbg_cpu_read) {
        vlSelf->__Vdly__main__DOT__swic__DOT__cmd_read_ack = 1U;
        __Vdly__main__DOT__swic__DOT__cmd_read = 1U;
    } else {
        if (vlSelf->main__DOT__swic__DOT__cmd_read_ack) {
            vlSelf->__Vdly__main__DOT__swic__DOT__cmd_read_ack = 0U;
        }
        if (vlSelf->main__DOT__swic__DOT__cmd_read) {
            __Vdly__main__DOT__swic__DOT__cmd_read = 0U;
        }
    }
    if (vlSelf->main__DOT__u_fan__DOT__i2cd_valid) {
        vlSelf->__Vdly__main__DOT__u_fan__DOT__temp_tmp 
            = ((0xffff00U & (vlSelf->main__DOT__u_fan__DOT__temp_tmp 
                             << 8U)) | (IData)(vlSelf->main__DOT__u_fan__DOT__i2cd_data));
    }
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset)) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
              & (0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit))));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe = 0U;
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit = 0U;
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor = 0U;
    } else {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe 
            = ((2U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                      << 1U)) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__this_is_a_multiply_op));
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                   << 1U);
            if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff 
                                  >> 0x20U))))) {
                __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                    = (1U | __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result);
            }
        } else {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign)
                    ? (- vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result)
                    : 0U);
        }
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign)))
                ? (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit)))
                : 0U);
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy))) {
            if ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
                 >> 0x1fU)) {
                __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
                    = (- vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor);
            }
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy)))) {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr;
        }
    }
    if (vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc) {
        if ((1U == (((IData)(vlSelf->main__DOT__u_fan__DOT__mem_stb) 
                     << 1U) | (IData)(vlSelf->main__DOT__u_fan__DOT__mem_ack)))) {
            __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight 
                = (3U & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight) 
                         - (IData)(1U)));
        } else if ((2U == (((IData)(vlSelf->main__DOT__u_fan__DOT__mem_stb) 
                            << 1U) | (IData)(vlSelf->main__DOT__u_fan__DOT__mem_ack)))) {
            __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight 
                = (3U & ((IData)(1U) + (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight)));
        }
    } else {
        __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight = 0U;
    }
    vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr 
        = ((1U & (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table) 
                   | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))) 
                  | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))))
            ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr))));
    if ((1U & ((IData)(vlSelf->main__DOT__genbus__DOT__r_wdt_reset) 
               | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))))) {
        __Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table = 1U;
    } else if (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table) {
        __Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table 
            = (0x209U >= (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr));
    }
    if ((1U & (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset) 
                | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc))) 
               | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding = 0U;
    } else if ((2U == ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb) 
                         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding 
            = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding)));
    } else if ((1U == ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb) 
                         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding 
            = (0x7ffU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding) 
                         - (IData)(1U)));
    }
    if (((IData)(vlSelf->main__DOT__genbus__DOT__ps_full) 
         & (~ (IData)(vlSelf->main__DOT__txv__DOT__r_busy)))) {
        __Vdly__main__DOT__txv__DOT__lcl_data = vlSelf->main__DOT__genbus__DOT__ps_data;
        vlSelf->o_wbu_uart_tx = 0U;
    } else if (vlSelf->main__DOT__txv__DOT__zero_baud_counter) {
        __Vdly__main__DOT__txv__DOT__lcl_data = (0x80U 
                                                 | (0x7fU 
                                                    & ((IData)(vlSelf->main__DOT__txv__DOT__lcl_data) 
                                                       >> 1U)));
        vlSelf->o_wbu_uart_tx = (1U & (IData)(vlSelf->main__DOT__txv__DOT__lcl_data));
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) {
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0U] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[0U];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[1U] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[1U];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[2U] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[2U];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[3U] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[3U];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[4U] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[4U];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[5U] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[5U];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[6U] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[6U];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[7U] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[7U];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[8U] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[8U];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[9U] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[9U];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xaU] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[0xaU];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xbU] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[0xbU];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xcU] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[0xcU];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xdU] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[0xdU];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xeU] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[0xeU];
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xfU] 
            = vlSelf->main__DOT__swic__DOT__cpu_idata[0xfU];
        __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0 = 1U;
        __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr;
    }
    if (((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb) 
         & (~ (IData)((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))))) {
        vlSelf->__Vdlyvval__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__compression_tbl__v0 
            = (((IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                         >> 0x1fU)) << 0x1eU) | (0x3fffffffU 
                                                 & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word)));
        vlSelf->__Vdlyvset__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__compression_tbl__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__compression_tbl__v0 
            = vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr;
        vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr 
            = ((1U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                              >> 0x20U))) ? ((1U & (IData)(
                                                           (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                            >> 0x1fU)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                             >> 0x1eU)))
                                                  ? 
                                                 ((0x1000000U 
                                                   & ((IData)(
                                                              (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                               >> 0x1dU)) 
                                                      << 0x18U)) 
                                                  | (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                                >> 6U))))
                                                  : 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                             >> 6U))))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                             >> 0x1eU)))
                                                  ? 
                                                 ((0x1fc0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                                             >> 0x1dU))))) 
                                                      << 0x12U)) 
                                                  | (0x3ffffU 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                                >> 0xcU))))
                                                  : 
                                                 (0x3ffffU 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                             >> 0xcU)))))
                : ((1U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                  >> 0x1fU))) ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                             >> 0x1eU)))
                                                  ? 
                                                 ((0x1fff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                                             >> 0x1dU))))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                                >> 0x12U))))
                                                  : 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                             >> 0x12U))))
                    : ((1U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                      >> 0x1eU))) ? 
                       ((0x1ffffc0U & ((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                              >> 0x1dU))))) 
                                       << 6U)) | (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                             >> 0x18U))))
                        : (0x3fU & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                            >> 0x18U))))));
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
         & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack))) {
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0 
            = (0xffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr 
                          >> 6U));
        __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0 = 1U;
        __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0 
            = (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr 
                     >> 3U));
    }
    if ((((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n) 
          & (~ (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy))) 
         & (0ULL == (0xf00000000ULL & vlSelf->main__DOT__genbus__DOT__ififo_codword)))) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wide_addr 
            = (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword);
    } else if ((((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n) 
                 & (~ (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy))) 
                & (0x200000000ULL == (0xe00000000ULL 
                                      & vlSelf->main__DOT__genbus__DOT__ififo_codword)))) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wide_addr 
            = (vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr 
               + (((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                            >> 0x1fU)) << 0x1eU) | 
                  (0x3fffffffU & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword))));
    } else if ((((IData)(vlSelf->main__DOT__wbu_stb) 
                 & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))) 
                & (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc))) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__wide_addr 
            = ((IData)(1U) + vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr);
    }
    if ((1U & (((IData)(vlSelf->main__DOT__genbus__DOT__r_wdt_reset) 
                | (~ (IData)(vlSelf->main__DOT__wbu_cyc))) 
               | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__zero_acks = 1U;
        __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_acks_needed = 0U;
    } else if ((2U == ((((IData)(vlSelf->main__DOT__wbu_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))) 
                        << 1U) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__zero_acks = 0U;
        __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_acks_needed 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed)));
    } else if ((1U == ((((IData)(vlSelf->main__DOT__wbu_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))) 
                        << 1U) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__zero_acks 
            = (1U == (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed));
        __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_acks_needed 
            = (0x3ffU & ((IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed) 
                         - (IData)(1U)));
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp = 0U;
    } else {
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal;
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal = 0U;
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div) 
                 & (0xeU == (0xeU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA))))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal = 1U;
            }
            if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal = 1U;
            }
            if ((IData)(((0xeU == (0xeU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA))) 
                         & (0x1aU == (0x1eU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal = 1U;
            }
            if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal = 1U;
            }
        }
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp = 0U;
            } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp = 0U;
            } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp 
                    = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                        >> 0x1fU) ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp)
                        : (0x7c87c000U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword));
            } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase) 
                        & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                           >> 0x1fU))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp 
                    = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp;
            }
        }
    }
    if (vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce) {
        vlSelf->__Vdlyvval__main__DOT__scope3_ddr3i__DOT__mem__v0 
            = vlSelf->main__DOT__scope3_ddr3i__DOT__r_data;
        vlSelf->__Vdlyvset__main__DOT__scope3_ddr3i__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__scope3_ddr3i__DOT__mem__v0 
            = vlSelf->main__DOT__scope3_ddr3i__DOT__waddr;
    }
    if (vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce) {
        vlSelf->__Vdlyvval__main__DOT__scope1_ddr3i__DOT__mem__v0 
            = vlSelf->main__DOT__scope1_ddr3i__DOT__r_data;
        vlSelf->__Vdlyvset__main__DOT__scope1_ddr3i__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__scope1_ddr3i__DOT__mem__v0 
            = vlSelf->main__DOT__scope1_ddr3i__DOT__waddr;
    }
    if (vlSelf->main__DOT__i2cscopei__DOT__record_ce) {
        vlSelf->__Vdlyvval__main__DOT__i2cscopei__DOT__mem__v0 
            = vlSelf->main__DOT__i2cscopei__DOT__r_data;
        vlSelf->__Vdlyvset__main__DOT__i2cscopei__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__i2cscopei__DOT__mem__v0 
            = vlSelf->main__DOT__i2cscopei__DOT__waddr;
    }
    if (vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce) {
        vlSelf->__Vdlyvval__main__DOT__scope2_ddr3i__DOT__mem__v0 
            = vlSelf->main__DOT__scope2_ddr3i__DOT__r_data;
        vlSelf->__Vdlyvset__main__DOT__scope2_ddr3i__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__scope2_ddr3i__DOT__mem__v0 
            = vlSelf->main__DOT__scope2_ddr3i__DOT__waddr;
    }
    vlSelf->__Vdlyvval__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__compression_tbl__v0 
        = (((IData)((vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word 
                     >> 0x1fU)) << 0x1eU) | (0x3fffffffU 
                                             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word)));
    vlSelf->__Vdlyvdim0__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__compression_tbl__v0 
        = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr;
    if ((1U & (((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
                | (~ (IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc))) 
               | (IData)(vlSelf->main__DOT__swic__DOT__no_dbg_err)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__dbg_stb = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb)) 
                      | (~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stall))))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__dbg_stb 
            = ((IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb) 
               | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb));
    }
    if ((1U & ((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__wbu_cyc))))) {
        __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v0 = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available) {
            __Vdlyvval__main__DOT__wbu_xbar__DOT__grant__v1 
                = vlSelf->main__DOT__wbu_xbar__DOT__request
                [0U];
            __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v1 = 1U;
        } else if (vlSelf->main__DOT__wbu_xbar__DOT__m_stb) {
            __Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v2 = 1U;
        }
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) {
        vlSelf->__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset__v0 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl;
        vlSelf->__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset__v0 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id;
    }
    if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
          & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack)) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr 
            = ((0x38U & (IData)(vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr)) 
               | (7U & ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr))));
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr 
            = (0x38U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                        >> 6U));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn 
        = ((2U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn) 
                  << 1U)) | (1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)));
    if (((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__genbus__DOT__soft_reset))) {
        __Vdly__main__DOT__genbus__DOT__r_wdt_timer = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__r_wdt_reset = 1U;
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__wbu_cyc)) 
                      | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        __Vdly__main__DOT__genbus__DOT__r_wdt_timer = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__r_wdt_reset = 0U;
    } else if ((0x7ffffU == vlSelf->main__DOT__genbus__DOT__r_wdt_timer)) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__r_wdt_reset = 1U;
        __Vdly__main__DOT__genbus__DOT__r_wdt_timer = 0U;
    } else {
        __Vdly__main__DOT__genbus__DOT__r_wdt_timer 
            = (0x7ffffU & ((IData)(1U) + vlSelf->main__DOT__genbus__DOT__r_wdt_timer));
        vlSelf->__Vdly__main__DOT__genbus__DOT__r_wdt_reset = 0U;
    }
    if (vlSelf->main__DOT__wbu_cyc) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__last_ack 
            = ((IData)(vlSelf->main__DOT__wbu_we) ? 
               (((((IData)(vlSelf->main__DOT__wbu_stb)
                    ? 1U : 0U) + (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed)) 
                 + ((((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n) 
                      & (~ (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy))) 
                     & (0x400000000ULL == (0xc00000000ULL 
                                           & vlSelf->main__DOT__genbus__DOT__ififo_codword)))
                     ? 1U : 0U)) <= ((IData)(1U) + 
                                     ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)
                                       ? 1U : 0U)))
                : (((IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len) 
                    + (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed)) 
                   <= ((IData)(1U) + ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)
                                       ? 1U : 0U))));
    } else {
        vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__last_ack = 1U;
        if (((IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n) 
             & (0xc00000000ULL == (0xc00000000ULL & vlSelf->main__DOT__genbus__DOT__ififo_codword)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__last_ack 
                = (1U >= (0x3ffU & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)));
        }
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) 
         & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase) 
            | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc 
            = (0xffffffeU & vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc);
        if ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
             >> 0x1fU)) {
            if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc 
                    = ((1U & vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc) 
                       | (0xffffffeU & (((IData)(1U) 
                                         + (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc 
                                            >> 1U)) 
                                        << 1U)));
            } else {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc 
                    = (2U | (0xffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc));
            }
        } else {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc 
                = (0xffffffcU & (((IData)(1U) + (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                                 >> 2U)) 
                                 << 2U));
        }
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) {
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr 
            = (0x3fU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack)
                         ? ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr))
                         : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr)));
    } else {
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr 
            = (0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr);
        if ((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce)) 
              | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss))) {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr 
                = (0x38U & (IData)(__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr));
        }
    }
    vlSelf->__Vdly__main__DOT__genbus__DOT__runwb__DOT__last_read_request 
        = (1U & ((IData)(vlSelf->main__DOT__genbus__DOT__r_wdt_reset) 
                 | ((IData)(vlSelf->main__DOT__wbu_cyc)
                     ? ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                        | (((IData)(vlSelf->main__DOT__wbu_stb) 
                            & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))
                            ? (2U >= (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len))
                            : (((IData)(vlSelf->main__DOT__wbu_stb) 
                                & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))
                                ? (1U >= (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len))
                                : (1U >= (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len)))))
                     : ((((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                          | (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy)) 
                         | (3U != (3U & (IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                                 >> 0x22U))))) 
                        | (1U >= (0x3ffU & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)))))));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign) {
        if ((1U & (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
                           >> 0x1fU)))) {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend = 0ULL;
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
                = ((0x7ffffffe00000000ULL & __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend) 
                   | (0x1ffffffffULL & (- (0x100000000ULL 
                                           | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend))))));
        }
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) {
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
            = (0x7ffffffffffffffeULL & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
                                        << 1U));
        if ((1U & (~ (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff 
                              >> 0x20U))))) {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
                = ((0xffffffffULL & __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend) 
                   | ((QData)((IData)((0x7fffffffU 
                                       & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff)))) 
                      << 0x20U));
        }
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy)))) {
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
            = (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata));
    }
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset)) 
                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign)
                     ? ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
                         >> 0x1fU) ^ (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
                                              >> 0x1fU)))
                     : ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
                        & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign) 
                           & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor)))))));
    if (vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write) {
        vlSelf->__Vdlyvval__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__fifo__v0 
            = vlSelf->main__DOT__genbus__DOT__in_word;
        vlSelf->__Vdlyvset__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__fifo__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__fifo__v0 
            = (0x3fU & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr));
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid = 0U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid = 1U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) {
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid 
                = (1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign)));
        }
    } else {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign;
    }
    if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb) 
          & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall))) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_addr 
            = ((0x3ffff8U & vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_addr) 
               | (7U & ((IData)(1U) + vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr)));
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_addr 
            = (0x3ffff8U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                            >> 6U));
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) {
        __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0 
            = ((0xf00U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R) 
                          << 8U)) | ((0xc0U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                                               << 5U)) 
                                     | (0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)));
        __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0 = 1U;
        __Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0 
            = (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie 
            = (1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R) 
                     >> 4U));
    }
    vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__mgrant) 
           & ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_err) 
              >> vlSelf->main__DOT__wbu_xbar__DOT__mindex
              [0U]));
    if ((4U & vlSelf->main__DOT__wbu_xbar__DOT__grant
         [0U])) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
            = (1U & (~ (IData)(vlSelf->main__DOT__wbu_err)));
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__wbu_cyc))) 
               | (IData)(vlSelf->main__DOT__wbu_err)))) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr = 0U;
    }
    if (vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write) {
        vlSelf->__Vdlyvval__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__fifo__v0 
            = vlSelf->main__DOT__genbus__DOT__exec_word;
        vlSelf->__Vdlyvset__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__fifo__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__fifo__v0 
            = (0x3ffU & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr));
    }
    if ((1U & ((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc))))) {
        vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v0 = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available) {
            vlSelf->__Vdlyvval__main__DOT__wbwide_xbar__DOT__grant__v1 
                = vlSelf->main__DOT__wbwide_xbar__DOT__request
                [0U];
            vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v1 = 1U;
        } else if ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb))) {
            vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v2 = 1U;
        }
    }
    if ((1U & ((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                              >> 1U))))) {
        vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v3 = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available) {
            vlSelf->__Vdlyvval__main__DOT__wbwide_xbar__DOT__grant__v4 
                = vlSelf->main__DOT__wbwide_xbar__DOT__request
                [1U];
            vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v4 = 1U;
        } else if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb))) {
            vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v5 = 1U;
        }
    }
    if ((1U & ((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                              >> 2U))))) {
        vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v6 = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available) {
            vlSelf->__Vdlyvval__main__DOT__wbwide_xbar__DOT__grant__v7 
                = vlSelf->main__DOT__wbwide_xbar__DOT__request
                [2U];
            vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v7 = 1U;
        } else if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb))) {
            vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v8 = 1U;
        }
    }
    if ((1U & ((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                              >> 3U))))) {
        vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v9 = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available) {
            vlSelf->__Vdlyvval__main__DOT__wbwide_xbar__DOT__grant__v10 
                = vlSelf->main__DOT__wbwide_xbar__DOT__request
                [3U];
            vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v10 = 1U;
        } else if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb))) {
            vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v11 = 1U;
        }
    }
    if ((1U & ((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc))))) {
        vlSelf->__Vdlyvset__main__DOT__wb32_xbar__DOT__grant__v0 = 1U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available) {
            vlSelf->__Vdlyvval__main__DOT__wb32_xbar__DOT__grant__v1 
                = vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U];
            vlSelf->__Vdlyvset__main__DOT__wb32_xbar__DOT__grant__v1 = 1U;
        } else if (vlSelf->main__DOT__wb32_xbar__DOT__m_stb) {
            vlSelf->__Vdlyvset__main__DOT__wb32_xbar__DOT__grant__v2 = 1U;
        }
    }
    if (((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__cmd_write = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__cmd_clear_cache = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_write)) 
                   | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall))))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__cmd_write 
                = vlSelf->main__DOT__swic__DOT__dbg_cpu_write;
        }
        if ((((IData)(vlSelf->main__DOT__swic__DOT__dbg_cmd_write) 
              & (IData)(vlSelf->main__DOT__swic__DOT__clear_cache_request)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__halt_request))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__cmd_clear_cache = 1U;
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_halt) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__cmd_clear_cache = 0U;
        }
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) 
            & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err)))) {
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr = 0U;
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr = 0U;
    } else {
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr)));
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid) 
             | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid))) {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr)));
        } else if (((1U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state)) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack))) {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr)));
        } else if (((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state)) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack))) {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr)));
        }
    }
    if (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr = 0x3ffU;
    } else {
        if (((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)) 
             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))) {
            if ((7U == (7U & (IData)((vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                      >> 0x21U))))) {
                vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr)));
            }
        }
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr 
            = (0x3ffU & ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)) 
                                | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))))
                          ? ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr) 
                             - (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
                                 & (0xe00000000ULL 
                                    == (0xe00000000ULL 
                                        & vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword)))
                                 ? 0U : 1U)) : ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr) 
                                                - (IData)(1U))));
    }
    if (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
         & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy)))) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__ln_stb 
            = (1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line) 
                     | (~ ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits) 
                           >> 6U))));
    } else if (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy) {
        if ((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__ln_stb = 0U;
        }
    } else {
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__ln_stb 
            = ((((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy)) 
                 & (~ ((IData)(vlSelf->main__DOT__wbu_cyc) 
                       | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                          | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy))))) 
                & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl))) 
               & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl));
    }
    vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err 
        = ((~ (((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                               >> 1U))) 
               | (~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc)))) 
           & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    if (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
         & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb)))) {
        __Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word 
            = (0x3fffffffU & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword));
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__dw_bits 
            = (0x3fU & (IData)((vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                >> 0x1eU)));
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy)))) {
        if ((1U < (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__dw_bits 
                = (0x3fU & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word 
                            >> 0x18U));
            __Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word 
                = ((0x3fU & __Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word) 
                   | (0x3fffffc0U & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word 
                                     << 6U)));
        } else if ((1U & (~ ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits) 
                             >> 6U)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__dw_bits = 0x40U;
        }
    }
    if (vlSelf->main__DOT__wbwide_wbdown_stall) {
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wb32_wbdown_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))))) {
            VL_SHIFTL_WWI(512,512,32, __Vtemp_h211bbf5b__0, vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data, 
                          ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift) 
                           << 5U));
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0U] 
                = __Vtemp_h211bbf5b__0[0U];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[1U] 
                = __Vtemp_h211bbf5b__0[1U];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[2U] 
                = __Vtemp_h211bbf5b__0[2U];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[3U] 
                = __Vtemp_h211bbf5b__0[3U];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[4U] 
                = __Vtemp_h211bbf5b__0[4U];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[5U] 
                = __Vtemp_h211bbf5b__0[5U];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[6U] 
                = __Vtemp_h211bbf5b__0[6U];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[7U] 
                = __Vtemp_h211bbf5b__0[7U];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[8U] 
                = __Vtemp_h211bbf5b__0[8U];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[9U] 
                = __Vtemp_h211bbf5b__0[9U];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xaU] 
                = __Vtemp_h211bbf5b__0[0xaU];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xbU] 
                = __Vtemp_h211bbf5b__0[0xbU];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xcU] 
                = __Vtemp_h211bbf5b__0[0xcU];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xdU] 
                = __Vtemp_h211bbf5b__0[0xdU];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xeU] 
                = __Vtemp_h211bbf5b__0[0xeU];
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU] 
                = __Vtemp_h211bbf5b__0[0xfU];
        }
        if ((((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb)) 
              & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first)) 
             | ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb) 
                & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))))) {
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr 
                = ((0x1fffff0U & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr) 
                   | (0xfU & (vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr 
                              + (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift))));
        }
    } else {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x10U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[1U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x11U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[2U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x12U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[3U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x13U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[4U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x14U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[5U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x15U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[6U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x16U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[7U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x17U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[8U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x18U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[9U] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x19U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xaU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1aU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xbU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1bU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xcU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1cU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xdU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1dU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xeU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1eU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU] 
            = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1fU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr 
            = (0x1fffff0U & ((IData)((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr 
                                      >> 0x16U)) << 4U));
    }
    __Vtableidx7 = (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb) 
                     << 5U) | (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb) 
                                << 4U) | (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner) 
                                           << 3U) | 
                                          (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc))))));
    if (Vmain__ConstPool__TABLE_heed7669e_0[__Vtableidx7]) {
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner 
            = Vmain__ConstPool__TABLE_hdf55cab5_0[__Vtableidx7];
    }
    if ((1U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
              [0U]) & ((IData)(vlSelf->main__DOT__wbu_cyc) 
                       >> vlSelf->main__DOT__wbu_xbar__DOT__sindex
                       [0U]))) {
            if ((1U & ((~ (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb)) 
                       | (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_stall))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb 
                    = ((2U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb)) 
                       | (1U & (((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                  [0U]) ? vlSelf->main__DOT__wbu_xbar__DOT__request
                                 [vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                 [0U]] : 0U) & (~ (
                                                   (0U 
                                                    >= 
                                                    vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                                    [0U]) 
                                                   & ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__mfull) 
                                                      >> 
                                                      vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                                      [0U]))))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb 
                = (2U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb 
            = (2U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb));
    }
    if ((1U & ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_err)))) {
        vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb 
            = (2U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb));
    }
    if ((2U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
              [1U]) & ((IData)(vlSelf->main__DOT__wbu_cyc) 
                       >> vlSelf->main__DOT__wbu_xbar__DOT__sindex
                       [1U]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                           >> 1U)) | (~ ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_stall) 
                                         >> 1U))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb 
                    = ((1U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb)) 
                       | (2U & (((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                  [1U]) ? (0xfffffffeU 
                                           & vlSelf->main__DOT__wbu_xbar__DOT__request
                                           [vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                           [1U]]) : 0U) 
                                & ((~ ((0U >= vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                        [1U]) & ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__mfull) 
                                                 >> 
                                                 vlSelf->main__DOT__wbu_xbar__DOT__sindex
                                                 [1U]))) 
                                   << 1U))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb 
                = (1U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb 
            = (1U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb));
    }
    if ((1U & ((IData)(vlSelf->i_reset) | ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__s_err) 
                                           >> 1U)))) {
        vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb 
            = (1U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbu_xbar__o_sstb));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant) 
           & (0xf000U >> vlSelf->main__DOT__wb32_xbar__DOT__mindex
              [0U]));
    if ((0x1000U & vlSelf->main__DOT__wb32_xbar__DOT__grant
         [0U])) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
            = (1U & (~ (IData)(vlSelf->main__DOT__wb32_wbdown_err)));
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc))) 
               | (IData)(vlSelf->main__DOT__wb32_wbdown_err)))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr = 0U;
    }
    vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant 
        = ((2U & (IData)(vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant)) 
           | (1U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant)));
    if ((1U & (vlSelf->main__DOT__wbu_xbar__DOT__request
               [0U] & ((~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__mgrant)) 
                       | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant 
            = (1U | (IData)(vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant 
            = (2U & (IData)(vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant 
        = ((1U & (IData)(vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant)) 
           | (2U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wbu_xbar__DOT__request
                [0U] >> 1U) & ((~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant 
            = (2U | (IData)(vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant 
            = (1U & (IData)(vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__sgrant));
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt))) {
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap = 0U;
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase = 0U;
    } else {
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
             & (0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
            if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) {
                if ((1U & (~ (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                              >> 5U)))) {
                    __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap 
                        = (1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv)));
                }
            } else {
                __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap 
                    = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap) 
                       & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                          >> 9U));
            }
        }
        if (((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv)) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce)) 
             & (0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag) 
                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                      >> 0xbU));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ubus_err_flag) 
                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                      >> 0xaU));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_u) 
                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                      >> 8U));
        } else {
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))) {
                __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag = 1U;
            }
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))) {
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag = 1U;
            }
            if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal)) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)))) {
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u = 1U;
            }
        }
        if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak = 1U;
        } else if (((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                      | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv)) 
                     & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce)) 
                    & (0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ubreak) 
                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                      >> 7U));
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase;
        } else if ((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                     & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce)) 
                    & (0x1fU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase 
                = (1U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                         >> 1U));
        }
    }
    vlSelf->__Vdly__main__DOT__swic__DOT__wdt_reset 
        = ((~ (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                | (IData)(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write)) 
               | (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt))) 
           & (1U == vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered)) 
               | (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                     >> 2U))))) {
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_stopped = 0U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped)))) {
        vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__dr_stopped 
            = (vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter 
               >= vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff);
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered)) 
               | (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                     >> 2U))))) {
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_stopped = 0U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped)))) {
        vlSelf->__Vdly__main__DOT__i2cscopei__DOT__dr_stopped 
            = (vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter 
               >= vlSelf->main__DOT__i2cscopei__DOT__br_holdoff);
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered)) 
               | (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                     >> 2U))))) {
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_stopped = 0U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped)))) {
        vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__dr_stopped 
            = (vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter 
               >= vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff);
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered)) 
               | (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                     >> 2U))))) {
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_stopped = 0U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped)))) {
        vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__dr_stopped 
            = (vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter 
               >= vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff);
    }
    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err 
        = ((~ (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort)) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)))) 
           & (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy) 
               & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err)) 
              | ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err))));
    if ((1U & (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted))))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe = 0U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe = 0U;
        if ((((IData)(vlSelf->main__DOT__swic__DOT__cmd_waddr) 
              == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe = 1U;
        }
        if ((7U == (7U & ((IData)(vlSelf->main__DOT__swic__DOT__cmd_waddr) 
                          >> 1U)))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe = 1U;
        }
    } else {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe = 0U;
    }
    if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc) {
        vlSelf->__Vdly__main__DOT__u_fan__DOT__mem_addr 
            = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr 
            = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr;
    } else {
        if (vlSelf->main__DOT__u_fan__DOT__mem_stb) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__mem_addr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__u_fan__DOT__mem_addr)));
        }
        if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
             & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready))) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr = 0U;
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr)));
        }
    }
    if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset) 
         | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc))) {
        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal = 0U;
    } else {
        if (((IData)(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc) 
             & (IData)(vlSelf->main__DOT__u_fan__DOT__mem_ack))) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid = 1U;
        } else if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid 
                = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid;
        }
        if ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
              & (IData)(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc)) 
             & (IData)(vlSelf->main__DOT__u_fan__DOT__mem_ack))) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid 
                = (1U & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)));
        } else if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid = 0U;
        }
        if ((1U & (((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid)) 
                    | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)) 
                   & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal))))) {
            if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid) {
                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal 
                    = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal;
            }
        }
    }
    if ((((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
          | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache)) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_illegal = 0U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_illegal 
            = ((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err)) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid)) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc))) 
               & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache 
                  == (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                  >> 9U))));
    }
    vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v4 
        = (vlSelf->main__DOT__clock_generator__DOT__counter
           [0U] + vlSelf->main__DOT__clock_generator__DOT__times_five);
    vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v6 
        = (vlSelf->main__DOT__clock_generator__DOT__counter
           [0U] + vlSelf->main__DOT__clock_generator__DOT__times_seven);
    vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v2 
        = (vlSelf->main__DOT__clock_generator__DOT__counter
           [0U] + vlSelf->main__DOT__clock_generator__DOT__times_three);
    vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v5 
        = (vlSelf->main__DOT__clock_generator__DOT__counter
           [0U] + (vlSelf->main__DOT__clock_generator__DOT__times_three 
                   << 1U));
    vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v0 
        = (vlSelf->main__DOT__clock_generator__DOT__counter
           [0U] + vlSelf->main__DOT__clock_generator__DOT__r_delay);
    vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v1 
        = (vlSelf->main__DOT__clock_generator__DOT__counter
           [0U] + (vlSelf->main__DOT__clock_generator__DOT__r_delay 
                   << 1U));
    vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v3 
        = (vlSelf->main__DOT__clock_generator__DOT__counter
           [0U] + (vlSelf->main__DOT__clock_generator__DOT__r_delay 
                   << 2U));
    if (vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr) {
        vlSelf->__Vdlyvval__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem__v0 
            = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift;
        vlSelf->__Vdlyvset__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem__v0 
            = (0x1fU & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr));
    }
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))) 
                | ((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_cyc) 
                   & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                      >> 3U))) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err)))) {
        vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc = 0U;
    } else if ((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                      & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb)))) {
        vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc = 1U;
    }
    if ((IData)((((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                    >> 8U) & (0x100U == (0x700U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))) 
                  & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                     >> 8U)) & (0xf00000000ULL == (0xf00000000ULL 
                                                   & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))))) {
        vlSelf->__Vdly__o_gpio = (0xffU & (((IData)(vlSelf->o_gpio) 
                                            & (~ ((
                                                   vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                                   << 0x10U) 
                                                  | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                                     >> 0x10U)))) 
                                           | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                              & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                                  << 0x10U) 
                                                 | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                                    >> 0x10U)))));
    }
    if (vlSelf->main__DOT__console__DOT__rx_uart_reset) {
        __Vdly__main__DOT__console__DOT__rxfifo__DOT__r_fill = 0U;
        __Vdly__main__DOT__console__DOT__rxfifo__DOT__will_overflow = 0U;
        vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__will_underflow = 1U;
        vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc = 0U;
    } else {
        if ((1U == (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write) 
                     << 1U) | (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read)))) {
            __Vdly__main__DOT__console__DOT__rxfifo__DOT__r_fill 
                = (0x3fU & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                            - (IData)(1U)));
        } else if ((2U == (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write) 
                            << 1U) | (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read)))) {
            __Vdly__main__DOT__console__DOT__rxfifo__DOT__r_fill 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill)));
        }
        if (vlSelf->main__DOT__console__DOT__rxf_wb_read) {
            __Vdly__main__DOT__console__DOT__rxfifo__DOT__will_overflow 
                = ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow) 
                   & (IData)(vlSelf->main__DOT__w_console_rx_stb));
        } else if (vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write) {
            __Vdly__main__DOT__console__DOT__rxfifo__DOT__will_overflow 
                = ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow) 
                   | ((0x3fU & ((IData)(2U) + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr))) 
                      == (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr)));
        } else if (((0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr))) 
                    == (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr))) {
            __Vdly__main__DOT__console__DOT__rxfifo__DOT__will_overflow = 1U;
        }
        if (vlSelf->main__DOT__w_console_rx_stb) {
            vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__will_underflow = 0U;
        } else if (vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read) {
            vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__will_underflow 
                = ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                   | ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next) 
                      == (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)));
        }
        if (((IData)(vlSelf->main__DOT__w_console_rx_stb) 
             & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                | ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read) 
                   & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next) 
                      == (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))))) {
            vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc = 1U;
        } else if (vlSelf->main__DOT__console__DOT__rxf_wb_read) {
            vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc = 0U;
        }
    }
    if (vlSelf->main__DOT__console__DOT__tx_uart_reset) {
        __Vdly__main__DOT__console__DOT__txfifo__DOT__r_fill = 0x3fU;
        vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__will_overflow = 0U;
        vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__will_underflow = 1U;
        vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc = 0U;
    } else {
        if ((1U == (((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write) 
                     << 1U) | (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read)))) {
            __Vdly__main__DOT__console__DOT__txfifo__DOT__r_fill 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill)));
        } else if ((2U == (((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write) 
                            << 1U) | (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read)))) {
            __Vdly__main__DOT__console__DOT__txfifo__DOT__r_fill 
                = (0x3fU & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                            - (IData)(1U)));
        }
        if (vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6) {
            vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__will_overflow 
                = ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow) 
                   & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write));
        } else if (vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write) {
            vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__will_overflow 
                = ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow) 
                   | ((0x3fU & ((IData)(2U) + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr))) 
                      == (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr)));
        } else if (((0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr))) 
                    == (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr))) {
            vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__will_overflow = 1U;
        }
        if (vlSelf->main__DOT__console__DOT__txf_wb_write) {
            vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__will_underflow = 0U;
        } else if (vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read) {
            vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__will_underflow 
                = ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow) 
                   | ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next) 
                      == (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)));
        }
        if (((IData)(vlSelf->main__DOT__console__DOT__txf_wb_write) 
             & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow) 
                | ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read) 
                   & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next) 
                      == (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))))) {
            vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc = 1U;
        } else if (vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6) {
            vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc = 0U;
        }
    }
    if (vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write) {
        vlSelf->__Vdlyvval__main__DOT__console__DOT__rxfifo__DOT__fifo__v0 
            = vlSelf->main__DOT__w_console_rx_data;
        vlSelf->__Vdlyvset__main__DOT__console__DOT__rxfifo__DOT__fifo__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__console__DOT__rxfifo__DOT__fifo__v0 
            = vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_cyc = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) {
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb = 0U;
        } else if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb) 
                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall))) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb = 0U;
        }
        if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack)) 
             | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_cyc = 0U;
        }
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_cyc = 1U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb = 1U;
    }
    if ((((IData)(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set) 
          & VL_LTS_III(32, 0U, vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb)) 
         & ((vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when 
             >> 0x1fU) | (~ (IData)(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set))))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__u_jiffies__DOT__int_when 
            = vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when;
    }
    if ((1U & ((((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err))) 
                | ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc)) 
                   & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce)))) 
               | (3U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state))))) {
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid) {
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending 
            = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce)
                ? 1U : 0U);
    } else if ((1U == (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
                        << 1U) | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) 
                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack))))) {
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending 
            = (0x1fU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending) 
                        - (IData)(1U)));
    } else if ((2U == (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
                        << 1U) | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) 
                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack))))) {
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending)));
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write = 0U;
    } else {
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid) 
             & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
                | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce)))) {
            if ((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock 
                    = (3U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock) 
                             - (IData)(1U)));
            } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock = 3U;
            }
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid = 1U;
        } else if ((1U & (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy)) 
                           & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy))) 
                          | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid = 0U;
        }
        if (((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid) 
               & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock)) 
              & (0U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall = 1U;
        } else if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid) 
                     & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid)) 
                    & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid) 
                       | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall = 0U;
        }
        if (((((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal))) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR)) 
               & (0xeU == (0xeU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R)))) 
              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce))) 
             & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R) 
                != (0xfU | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                            << 4U))))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy)) 
                          & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy))))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write = 0U;
        }
    }
    if (vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write) {
        vlSelf->__Vdlyvval__main__DOT__console__DOT__txfifo__DOT__fifo__v0 
            = vlSelf->main__DOT__console__DOT__txf_wb_data;
        vlSelf->__Vdlyvset__main__DOT__console__DOT__txfifo__DOT__fifo__v0 = 1U;
        vlSelf->__Vdlyvdim0__main__DOT__console__DOT__txfifo__DOT__fifo__v0 
            = vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr;
    }
    if ((((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc)) 
         | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort))) {
        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle = 0U;
    } else if (((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle)) 
                & (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid) 
                    & ((3U == (0xfU & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn) 
                                       >> 4U))) | (0xdU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn) 
                                                       >> 4U))))) 
                   | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid) 
                       & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready)) 
                      & ((3U == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn)) 
                         | (0xdU == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn))))))) {
        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle = 1U;
    } else {
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle = 0U;
        }
        if ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
              & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)) 
             | ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override) 
                & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready)))) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle = 0U;
        }
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort))) {
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU] = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU] = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next = 1U;
    } else {
        if ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full))) 
             & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last))) {
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU] = 0U;
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU] = 0U;
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid) 
                    & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))) {
            __Vtemp_hc94fac31__0[0U] = Vmain__ConstPool__CONST_h93e1b771_0[0U];
            __Vtemp_hc94fac31__0[1U] = Vmain__ConstPool__CONST_h93e1b771_0[1U];
            __Vtemp_hc94fac31__0[2U] = Vmain__ConstPool__CONST_h93e1b771_0[2U];
            __Vtemp_hc94fac31__0[3U] = Vmain__ConstPool__CONST_h93e1b771_0[3U];
            __Vtemp_hc94fac31__0[4U] = Vmain__ConstPool__CONST_h93e1b771_0[4U];
            __Vtemp_hc94fac31__0[5U] = Vmain__ConstPool__CONST_h93e1b771_0[5U];
            __Vtemp_hc94fac31__0[6U] = Vmain__ConstPool__CONST_h93e1b771_0[6U];
            __Vtemp_hc94fac31__0[7U] = Vmain__ConstPool__CONST_h93e1b771_0[7U];
            __Vtemp_hc94fac31__0[8U] = Vmain__ConstPool__CONST_h93e1b771_0[8U];
            __Vtemp_hc94fac31__0[9U] = Vmain__ConstPool__CONST_h93e1b771_0[9U];
            __Vtemp_hc94fac31__0[0xaU] = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
            __Vtemp_hc94fac31__0[0xbU] = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
            __Vtemp_hc94fac31__0[0xcU] = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
            __Vtemp_hc94fac31__0[0xdU] = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
            __Vtemp_hc94fac31__0[0xeU] = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
            __Vtemp_hc94fac31__0[0xfU] = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
            __Vtemp_hc94fac31__0[0x10U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0U];
            __Vtemp_hc94fac31__0[0x11U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[1U];
            __Vtemp_hc94fac31__0[0x12U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[2U];
            __Vtemp_hc94fac31__0[0x13U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[3U];
            __Vtemp_hc94fac31__0[0x14U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[4U];
            __Vtemp_hc94fac31__0[0x15U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[5U];
            __Vtemp_hc94fac31__0[0x16U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[6U];
            __Vtemp_hc94fac31__0[0x17U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[7U];
            __Vtemp_hc94fac31__0[0x18U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[8U];
            __Vtemp_hc94fac31__0[0x19U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[9U];
            __Vtemp_hc94fac31__0[0x1aU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xaU];
            __Vtemp_hc94fac31__0[0x1bU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xbU];
            __Vtemp_hc94fac31__0[0x1cU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xcU];
            __Vtemp_hc94fac31__0[0x1dU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xdU];
            __Vtemp_hc94fac31__0[0x1eU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xeU];
            __Vtemp_hc94fac31__0[0x1fU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xfU];
            VL_SHIFTR_WWI(1024,1024,32, __Vtemp_hfa8722fc__0, __Vtemp_hc94fac31__0, 
                          ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift) 
                           << 3U));
            if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready))) {
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[0U] 
                       | __Vtemp_hfa8722fc__0[0U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[1U] 
                       | __Vtemp_hfa8722fc__0[1U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[2U] 
                       | __Vtemp_hfa8722fc__0[2U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[3U] 
                       | __Vtemp_hfa8722fc__0[3U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[4U] 
                       | __Vtemp_hfa8722fc__0[4U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[5U] 
                       | __Vtemp_hfa8722fc__0[5U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[6U] 
                       | __Vtemp_hfa8722fc__0[6U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[7U] 
                       | __Vtemp_hfa8722fc__0[7U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[8U] 
                       | __Vtemp_hfa8722fc__0[8U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[9U] 
                       | __Vtemp_hfa8722fc__0[9U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[0xaU] 
                       | __Vtemp_hfa8722fc__0[0xaU]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[0xbU] 
                       | __Vtemp_hfa8722fc__0[0xbU]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[0xcU] 
                       | __Vtemp_hfa8722fc__0[0xcU]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[0xdU] 
                       | __Vtemp_hfa8722fc__0[0xdU]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[0xeU] 
                       | __Vtemp_hfa8722fc__0[0xeU]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU] 
                    = (Vmain__ConstPool__CONST_h93e1b771_0[0xfU] 
                       | __Vtemp_hfa8722fc__0[0xfU]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U] 
                       | __Vtemp_hfa8722fc__0[0x10U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U] 
                       | __Vtemp_hfa8722fc__0[0x11U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U] 
                       | __Vtemp_hfa8722fc__0[0x12U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U] 
                       | __Vtemp_hfa8722fc__0[0x13U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U] 
                       | __Vtemp_hfa8722fc__0[0x14U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U] 
                       | __Vtemp_hfa8722fc__0[0x15U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U] 
                       | __Vtemp_hfa8722fc__0[0x16U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U] 
                       | __Vtemp_hfa8722fc__0[0x17U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U] 
                       | __Vtemp_hfa8722fc__0[0x18U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U] 
                       | __Vtemp_hfa8722fc__0[0x19U]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU] 
                       | __Vtemp_hfa8722fc__0[0x1aU]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU] 
                       | __Vtemp_hfa8722fc__0[0x1bU]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU] 
                       | __Vtemp_hfa8722fc__0[0x1cU]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU] 
                       | __Vtemp_hfa8722fc__0[0x1dU]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU] 
                       | __Vtemp_hfa8722fc__0[0x1eU]);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU] 
                    = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU] 
                       | __Vtemp_hfa8722fc__0[0x1fU]);
            } else {
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[1U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[2U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[3U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[4U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[5U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[6U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[7U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[8U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[9U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU] 
                    = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU];
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU] 
                    = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU];
            }
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready))) {
            __Vtemp_hc94fac31__1[0U] = Vmain__ConstPool__CONST_h93e1b771_0[0U];
            __Vtemp_hc94fac31__1[1U] = Vmain__ConstPool__CONST_h93e1b771_0[1U];
            __Vtemp_hc94fac31__1[2U] = Vmain__ConstPool__CONST_h93e1b771_0[2U];
            __Vtemp_hc94fac31__1[3U] = Vmain__ConstPool__CONST_h93e1b771_0[3U];
            __Vtemp_hc94fac31__1[4U] = Vmain__ConstPool__CONST_h93e1b771_0[4U];
            __Vtemp_hc94fac31__1[5U] = Vmain__ConstPool__CONST_h93e1b771_0[5U];
            __Vtemp_hc94fac31__1[6U] = Vmain__ConstPool__CONST_h93e1b771_0[6U];
            __Vtemp_hc94fac31__1[7U] = Vmain__ConstPool__CONST_h93e1b771_0[7U];
            __Vtemp_hc94fac31__1[8U] = Vmain__ConstPool__CONST_h93e1b771_0[8U];
            __Vtemp_hc94fac31__1[9U] = Vmain__ConstPool__CONST_h93e1b771_0[9U];
            __Vtemp_hc94fac31__1[0xaU] = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
            __Vtemp_hc94fac31__1[0xbU] = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
            __Vtemp_hc94fac31__1[0xcU] = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
            __Vtemp_hc94fac31__1[0xdU] = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
            __Vtemp_hc94fac31__1[0xeU] = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
            __Vtemp_hc94fac31__1[0xfU] = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
            __Vtemp_hc94fac31__1[0x10U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0U];
            __Vtemp_hc94fac31__1[0x11U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[1U];
            __Vtemp_hc94fac31__1[0x12U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[2U];
            __Vtemp_hc94fac31__1[0x13U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[3U];
            __Vtemp_hc94fac31__1[0x14U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[4U];
            __Vtemp_hc94fac31__1[0x15U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[5U];
            __Vtemp_hc94fac31__1[0x16U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[6U];
            __Vtemp_hc94fac31__1[0x17U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[7U];
            __Vtemp_hc94fac31__1[0x18U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[8U];
            __Vtemp_hc94fac31__1[0x19U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[9U];
            __Vtemp_hc94fac31__1[0x1aU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xaU];
            __Vtemp_hc94fac31__1[0x1bU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xbU];
            __Vtemp_hc94fac31__1[0x1cU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xcU];
            __Vtemp_hc94fac31__1[0x1dU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xdU];
            __Vtemp_hc94fac31__1[0x1eU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xeU];
            __Vtemp_hc94fac31__1[0x1fU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data[0xfU];
            VL_SHIFTR_WWI(1024,1024,32, __Vtemp_hb4dafc67__0, __Vtemp_hc94fac31__1, 
                          ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift) 
                           << 3U));
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U] 
                   | __Vtemp_hb4dafc67__0[0U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U] 
                   | __Vtemp_hb4dafc67__0[1U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U] 
                   | __Vtemp_hb4dafc67__0[2U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U] 
                   | __Vtemp_hb4dafc67__0[3U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U] 
                   | __Vtemp_hb4dafc67__0[4U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U] 
                   | __Vtemp_hb4dafc67__0[5U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U] 
                   | __Vtemp_hb4dafc67__0[6U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U] 
                   | __Vtemp_hb4dafc67__0[7U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U] 
                   | __Vtemp_hb4dafc67__0[8U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U] 
                   | __Vtemp_hb4dafc67__0[9U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU] 
                   | __Vtemp_hb4dafc67__0[0xaU]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU] 
                   | __Vtemp_hb4dafc67__0[0xbU]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU] 
                   | __Vtemp_hb4dafc67__0[0xcU]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU] 
                   | __Vtemp_hb4dafc67__0[0xdU]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU] 
                   | __Vtemp_hb4dafc67__0[0xeU]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU] 
                   | __Vtemp_hb4dafc67__0[0xfU]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U] 
                   | __Vtemp_hb4dafc67__0[0x10U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U] 
                   | __Vtemp_hb4dafc67__0[0x11U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U] 
                   | __Vtemp_hb4dafc67__0[0x12U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U] 
                   | __Vtemp_hb4dafc67__0[0x13U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U] 
                   | __Vtemp_hb4dafc67__0[0x14U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U] 
                   | __Vtemp_hb4dafc67__0[0x15U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U] 
                   | __Vtemp_hb4dafc67__0[0x16U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U] 
                   | __Vtemp_hb4dafc67__0[0x17U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U] 
                   | __Vtemp_hb4dafc67__0[0x18U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U] 
                   | __Vtemp_hb4dafc67__0[0x19U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU] 
                   | __Vtemp_hb4dafc67__0[0x1aU]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU] 
                   | __Vtemp_hb4dafc67__0[0x1bU]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU] 
                   | __Vtemp_hb4dafc67__0[0x1cU]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU] 
                   | __Vtemp_hb4dafc67__0[0x1dU]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU] 
                   | __Vtemp_hb4dafc67__0[0x1eU]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU] 
                = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU] 
                   | __Vtemp_hb4dafc67__0[0x1fU]);
        }
        if (((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill 
                = (0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U]);
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0U];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[1U];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[2U];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[3U];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[4U];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[5U];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[6U];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[7U];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[8U];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[9U];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xaU];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xbU];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xcU];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xdU];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xeU];
            __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xfU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes 
                = (0x7fU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                             ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                                 ? 1U : ((2U < (0x7fU 
                                                & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U]))
                                          ? 2U : (0x7fU 
                                                  & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])))
                             : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                                 ? ((4U < (0x7fU & 
                                           vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U]))
                                     ? 4U : (0x7fU 
                                             & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U]))
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])));
        } else {
            if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready))) {
                VL_SHIFTL_WWI(512,512,32, __Vtemp_h04488e48__0, vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg, 8U);
                VL_SHIFTL_WWI(512,512,32, __Vtemp_h0448bebe__0, vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg, 0x10U);
                VL_SHIFTL_WWI(512,512,32, __Vtemp_h0448985a__0, vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg, 0x20U);
                if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill = 0U;
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[1U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[2U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[3U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[4U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[5U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[6U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[7U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[8U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[9U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
                } else if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))) {
                    if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))) {
                        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill 
                            = (0x7fU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill) 
                                        - (IData)(1U)));
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U] 
                            = __Vtemp_h04488e48__0[0U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] 
                            = __Vtemp_h04488e48__0[1U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] 
                            = __Vtemp_h04488e48__0[2U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] 
                            = __Vtemp_h04488e48__0[3U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U] 
                            = __Vtemp_h04488e48__0[4U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U] 
                            = __Vtemp_h04488e48__0[5U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U] 
                            = __Vtemp_h04488e48__0[6U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U] 
                            = __Vtemp_h04488e48__0[7U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U] 
                            = __Vtemp_h04488e48__0[8U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U] 
                            = __Vtemp_h04488e48__0[9U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU] 
                            = __Vtemp_h04488e48__0[0xaU];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU] 
                            = __Vtemp_h04488e48__0[0xbU];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU] 
                            = __Vtemp_h04488e48__0[0xcU];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU] 
                            = __Vtemp_h04488e48__0[0xdU];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU] 
                            = __Vtemp_h04488e48__0[0xeU];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU] 
                            = __Vtemp_h04488e48__0[0xfU];
                    } else {
                        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill 
                            = (0x7fU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill) 
                                        - (IData)(2U)));
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U] 
                            = __Vtemp_h0448bebe__0[0U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] 
                            = __Vtemp_h0448bebe__0[1U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] 
                            = __Vtemp_h0448bebe__0[2U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] 
                            = __Vtemp_h0448bebe__0[3U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U] 
                            = __Vtemp_h0448bebe__0[4U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U] 
                            = __Vtemp_h0448bebe__0[5U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U] 
                            = __Vtemp_h0448bebe__0[6U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U] 
                            = __Vtemp_h0448bebe__0[7U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U] 
                            = __Vtemp_h0448bebe__0[8U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U] 
                            = __Vtemp_h0448bebe__0[9U];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU] 
                            = __Vtemp_h0448bebe__0[0xaU];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU] 
                            = __Vtemp_h0448bebe__0[0xbU];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU] 
                            = __Vtemp_h0448bebe__0[0xcU];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU] 
                            = __Vtemp_h0448bebe__0[0xdU];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU] 
                            = __Vtemp_h0448bebe__0[0xeU];
                        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU] 
                            = __Vtemp_h0448bebe__0[0xfU];
                    }
                } else if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill 
                        = (0x7fU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill) 
                                    - (IData)(4U)));
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U] 
                        = __Vtemp_h0448985a__0[0U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] 
                        = __Vtemp_h0448985a__0[1U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] 
                        = __Vtemp_h0448985a__0[2U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] 
                        = __Vtemp_h0448985a__0[3U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U] 
                        = __Vtemp_h0448985a__0[4U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U] 
                        = __Vtemp_h0448985a__0[5U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U] 
                        = __Vtemp_h0448985a__0[6U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U] 
                        = __Vtemp_h0448985a__0[7U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U] 
                        = __Vtemp_h0448985a__0[8U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U] 
                        = __Vtemp_h0448985a__0[9U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU] 
                        = __Vtemp_h0448985a__0[0xaU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU] 
                        = __Vtemp_h0448985a__0[0xbU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU] 
                        = __Vtemp_h0448985a__0[0xcU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU] 
                        = __Vtemp_h0448985a__0[0xdU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU] 
                        = __Vtemp_h0448985a__0[0xeU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU] 
                        = __Vtemp_h0448985a__0[0xfU];
                } else {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill 
                        = (0x7fU & 0U);
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[1U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[2U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[3U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[4U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[5U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[6U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[7U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[8U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[9U];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU] 
                        = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
                }
            }
            if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid)) 
                       | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready)))) {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes 
                    = (0x7fU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                                 ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                                     ? 1U : ((4U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))
                                              ? 2U : 
                                             ((3U == 
                                               (3U 
                                                & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill)))
                                               ? 1U
                                               : 0U)))
                                 : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                                     ? ((8U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))
                                         ? 4U : ((4U 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))
                                                  ? 
                                                 (3U 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))
                                                  : 0U))
                                     : 0U)));
            }
        }
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill;
        if ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid) 
              & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next = 1U;
        } else if (((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next 
                = (1U & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                          ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                              ? (1U == (0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U]))
                              : (2U >= (0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])))
                          : ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size)) 
                             | (4U >= (0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])))));
            if ((0x80U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])) {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next = 0U;
            }
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next 
                = (1U & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                          ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                              ? (2U >= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))
                              : (4U >= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill)))
                          : ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size)) 
                             | (8U >= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill)))));
            if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last) {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next = 0U;
            }
        }
    }
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr) {
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[1U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[2U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[3U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[4U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[5U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[6U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[7U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[8U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[9U] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xaU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xbU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xcU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xdU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xeU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xfU] 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU];
        __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0x10U] 
            = (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last) 
                << 7U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes));
        __Vdlyvset__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0 
            = (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
           & ((((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce) 
                  | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce)) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond)) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid)) 
               & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF) 
                  | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR) 
                     & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R) 
                        == (0xeU | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                                    << 4U)))))) | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd) 
                                                   & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy) 
                                                       | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy)) 
                                                      | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy)))));
    __Vtableidx2 = (((IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight) 
                     << 4U) | ((8U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                      << 2U)) | ((4U 
                                                  & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                                     << 1U)) 
                                                 | (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->main__DOT__wbwide_i2cm_cyc)))));
    if (Vmain__ConstPool__TABLE_hd397e023_0[__Vtableidx2]) {
        __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__inflight 
            = Vmain__ConstPool__TABLE_h9becc847_0[__Vtableidx2];
    }
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted 
        = ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
           | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_halt) 
              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted) 
                 | (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase)) 
                     & (~ (IData)((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))))) 
                    & (((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid) 
                          & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy))) 
                         & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy))) 
                        & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy))) 
                       & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid) 
                          | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal)))))));
    if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset) {
        vlSelf->__Vdly__main__DOT__u_fan__DOT__ign_mem_cyc = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__mem_stb = 0U;
    } else if (vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc) {
        vlSelf->__Vdly__main__DOT__u_fan__DOT__mem_stb 
            = (1U & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb)));
        if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb) 
             & (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight) 
                 + ((IData)(vlSelf->main__DOT__u_fan__DOT__mem_stb)
                     ? 1U : 0U)) == ((IData)(vlSelf->main__DOT__u_fan__DOT__mem_ack)
                                      ? 1U : 0U)))) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__ign_mem_cyc = 0U;
            vlSelf->__Vdly__main__DOT__u_fan__DOT__mem_stb = 0U;
        }
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__ign_mem_cyc = 0U;
            vlSelf->__Vdly__main__DOT__u_fan__DOT__mem_stb = 0U;
        }
    } else if ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc) 
                 | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle)) 
                | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
                    & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)) 
                   & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal))))) {
        vlSelf->__Vdly__main__DOT__u_fan__DOT__mem_stb = 1U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__ign_mem_cyc = 1U;
    }
    vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__mgrant) 
           & (((0xfffffffeU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                               & (((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                   & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                  << 1U))) | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                              & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack))) 
              >> vlSelf->main__DOT__wbu_xbar__DOT__mindex
              [0U]));
    if ((4U & vlSelf->main__DOT__wbu_xbar__DOT__grant
         [0U])) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack = 0U;
    }
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__wbu_cyc))) 
               | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack = 0U;
    }
    if (vlSelf->main__DOT__i2ci__DOT__cpu_new_pc) {
        vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_insn_addr 
            = vlSelf->main__DOT__i2ci__DOT__pf_jump_addr;
        vlSelf->__Vdly__main__DOT__wbwide_i2cm_addr 
            = (0x3fffffU & (vlSelf->main__DOT__i2ci__DOT__pf_jump_addr 
                            >> 6U));
    } else {
        if (((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_insn_addr = 0U;
            vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_insn_addr 
                = (0xfffffffU & ((IData)(1U) + vlSelf->main__DOT__i2ci__DOT__pf_insn_addr));
        }
        if (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
             & (~ ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                   >> 1U)))) {
            vlSelf->__Vdly__main__DOT__wbwide_i2cm_addr 
                = (0x3fffffU & ((IData)(1U) + vlSelf->main__DOT__wbwide_i2cm_addr));
        }
    }
    if ((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid))))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending = 0U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending)))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending 
            = (1U & (((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy)) 
                        & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy))) 
                       & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy))) 
                      & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce))) 
                     & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step)) 
                        | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped)))));
    }
    if ((((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc)) 
         | (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_abort))) {
        vlSelf->__Vdly__main__DOT__i2ci__DOT__imm_cycle = 0U;
    } else if (((~ (IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle)) 
                & (((IData)(vlSelf->main__DOT__i2ci__DOT__next_valid) 
                    & ((3U == (0xfU & ((IData)(vlSelf->main__DOT__i2ci__DOT__next_insn) 
                                       >> 4U))) | (0xdU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->main__DOT__i2ci__DOT__next_insn) 
                                                       >> 4U))))) 
                   | (((IData)(vlSelf->main__DOT__i2ci__DOT__half_valid) 
                       & (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready)) 
                      & ((3U == (IData)(vlSelf->main__DOT__i2ci__DOT__half_insn)) 
                         | (0xdU == (IData)(vlSelf->main__DOT__i2ci__DOT__half_insn))))))) {
        vlSelf->__Vdly__main__DOT__i2ci__DOT__imm_cycle = 1U;
    } else {
        if (vlSelf->main__DOT__i2ci__DOT__bus_jump) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__imm_cycle = 0U;
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
              & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
             | ((IData)(vlSelf->main__DOT__i2ci__DOT__bus_override) 
                & (IData)(vlSelf->main__DOT__i2ci__DOT__ovw_ready)))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__imm_cycle = 0U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid)) 
               | (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)))) {
        if (((IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid) 
             & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid)))) {
            VL_SHIFTL_WWI(512,512,32, __Vtemp_h434d0da1__0, vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word, 8U);
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0U] 
                = __Vtemp_h434d0da1__0[0U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[1U] 
                = __Vtemp_h434d0da1__0[1U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[2U] 
                = __Vtemp_h434d0da1__0[2U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[3U] 
                = __Vtemp_h434d0da1__0[3U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[4U] 
                = __Vtemp_h434d0da1__0[4U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[5U] 
                = __Vtemp_h434d0da1__0[5U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[6U] 
                = __Vtemp_h434d0da1__0[6U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[7U] 
                = __Vtemp_h434d0da1__0[7U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[8U] 
                = __Vtemp_h434d0da1__0[8U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[9U] 
                = __Vtemp_h434d0da1__0[9U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xaU] 
                = __Vtemp_h434d0da1__0[0xaU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xbU] 
                = __Vtemp_h434d0da1__0[0xbU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xcU] 
                = __Vtemp_h434d0da1__0[0xcU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xdU] 
                = __Vtemp_h434d0da1__0[0xdU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xeU] 
                = __Vtemp_h434d0da1__0[0xeU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xfU] 
                = __Vtemp_h434d0da1__0[0xfU];
        } else if ((1U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                           >> 1U) & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid))))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x10U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[1U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x11U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[2U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x12U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[3U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x13U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[4U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x14U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[5U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x15U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[6U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x16U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[7U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x17U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[8U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x18U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[9U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x19U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xaU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1aU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xbU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1bU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xcU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1cU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xdU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1dU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xeU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1eU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xfU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x1fU];
            VL_SHIFTL_WWI(512,512,32, __Vtemp_hfc2bf96b__0, vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted, 8U);
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0U] 
                = __Vtemp_hfc2bf96b__0[0U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[1U] 
                = __Vtemp_hfc2bf96b__0[1U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[2U] 
                = __Vtemp_hfc2bf96b__0[2U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[3U] 
                = __Vtemp_hfc2bf96b__0[3U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[4U] 
                = __Vtemp_hfc2bf96b__0[4U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[5U] 
                = __Vtemp_hfc2bf96b__0[5U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[6U] 
                = __Vtemp_hfc2bf96b__0[6U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[7U] 
                = __Vtemp_hfc2bf96b__0[7U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[8U] 
                = __Vtemp_hfc2bf96b__0[8U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[9U] 
                = __Vtemp_hfc2bf96b__0[9U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xaU] 
                = __Vtemp_hfc2bf96b__0[0xaU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xbU] 
                = __Vtemp_hfc2bf96b__0[0xbU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xcU] 
                = __Vtemp_hfc2bf96b__0[0xcU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xdU] 
                = __Vtemp_hfc2bf96b__0[0xdU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xeU] 
                = __Vtemp_hfc2bf96b__0[0xeU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xfU] 
                = __Vtemp_hfc2bf96b__0[0xfU];
        } else {
            VL_SHIFTL_WWI(512,512,32, __Vtemp_h02cc08c7__0, vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn, 8U);
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0U] 
                = __Vtemp_h02cc08c7__0[0U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[1U] 
                = __Vtemp_h02cc08c7__0[1U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[2U] 
                = __Vtemp_h02cc08c7__0[2U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[3U] 
                = __Vtemp_h02cc08c7__0[3U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[4U] 
                = __Vtemp_h02cc08c7__0[4U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[5U] 
                = __Vtemp_h02cc08c7__0[5U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[6U] 
                = __Vtemp_h02cc08c7__0[6U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[7U] 
                = __Vtemp_h02cc08c7__0[7U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[8U] 
                = __Vtemp_h02cc08c7__0[8U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[9U] 
                = __Vtemp_h02cc08c7__0[9U];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xaU] 
                = __Vtemp_h02cc08c7__0[0xaU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xbU] 
                = __Vtemp_h02cc08c7__0[0xbU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xcU] 
                = __Vtemp_h02cc08c7__0[0xcU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xdU] 
                = __Vtemp_h02cc08c7__0[0xdU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xeU] 
                = __Vtemp_h02cc08c7__0[0xeU];
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn[0xfU] 
                = __Vtemp_h02cc08c7__0[0xfU];
        }
    }
    if (((IData)(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset) 
         | (IData)(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc))) {
        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid = 0U;
        vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_valid = 0U;
        vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_illegal = 0U;
        vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid = 0U;
        __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count = 0U;
    } else {
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
              & (IData)(vlSelf->main__DOT__wbwide_i2cm_cyc)) 
             & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                 | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)) 
                >> 1U))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid 
                = (1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
                         | (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid)));
        } else if (((IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready) 
                    & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid)))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid = 0U;
        }
        if (((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
             & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                 | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)) 
                >> 1U))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_valid = 1U;
        } else if (vlSelf->main__DOT__i2ci__DOT__pf_ready) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_valid 
                = ((IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid) 
                   | (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid));
        }
        if ((1U & (((~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid)) 
                    & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid)) 
                       | (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready))) 
                   & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__pf_illegal))))) {
            if (vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid) {
                vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_illegal 
                    = vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal;
            } else if (((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
                        & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                           >> 1U))) {
                vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_illegal = 1U;
            }
        }
        if (vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__r_valid) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid 
                = (1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
                         | (1U < (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count))));
        } else if ((1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid)) 
                          | (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid = 0U;
            if (vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid) {
                vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid = 1U;
            }
            if ((((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
                  & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                     >> 1U)) & (~ (IData)((0x3fU == (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift)))))) {
                vlSelf->__Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid = 1U;
            }
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
              & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid))) {
            __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count 
                = (0x7fU & ((IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count) 
                            - (IData)(1U)));
        } else if ((1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid)) 
                          | ((IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready) 
                             & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid)))))) {
            if (vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid) {
                __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count = 0x3fU;
            } else if (((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
                        & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                           >> 1U))) {
                __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count 
                    = (0x3fU & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift)));
            }
        }
    }
    if (((((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
           | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort)) 
          | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err)) 
         | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy) {
        if ((1U == (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state))) {
            if ((0U == vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length)) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy = 0U;
            } else if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger) {
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state = 2U;
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request = 1U;
            }
        } else if ((2U == (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state))) {
            if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy)))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request = 0U;
            }
            if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy)) 
                       & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request))))) {
                if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr 
                        = (0xfffffffU & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr 
                                         + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen)));
                }
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length 
                    = ((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length 
                        > (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen))
                        ? (0xfffffffU & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length 
                                         - (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen)))
                        : 0U);
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state = 3U;
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request = 1U;
            }
        } else if ((3U == (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state))) {
            if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy)))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request = 0U;
            }
            if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy)) 
                       & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request))))) {
                if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger) {
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state = 2U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request = 1U;
                } else {
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state = 1U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request = 0U;
                }
                if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen) 
                     > vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length)) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen 
                        = (0x7ffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length);
                }
                if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr 
                        = (0xfffffffU & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr 
                                         + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen)));
                }
                if ((0U == vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length)) {
                    __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state = 0U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request = 0U;
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy = 0U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen 
            = (0x7ffU & ((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length 
                          < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen))
                          ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length
                          : (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen)));
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length = 0U;
        __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request = 0U;
        if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy = 1U;
            if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger) {
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state = 2U;
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request = 1U;
            } else {
                __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state = 1U;
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request = 0U;
            }
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst;
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length;
        }
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc 
            = ((4U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc))
                ? ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc))
                    ? 0x2000000U : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc))
                                     ? (0xffffffcU 
                                        & (((IData)(1U) 
                                            + (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc 
                                               >> 2U)) 
                                           << 2U)) : 
                                    (0xffffffcU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc 
                                                     >> 2U)) 
                                                   << 2U))))
                : ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc))
                    ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc))
                        ? (0xffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc)
                        : (0xffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc))
                    : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc))
                        ? (0xffffffcU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl)
                        : 0x2000000U)));
    }
    if (((IData)(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset) 
         | ((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
            & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
               >> 1U)))) {
        vlSelf->__Vdly__main__DOT__wbwide_i2cm_cyc = 0U;
        vlSelf->__Vdly__main__DOT__wbwide_i2cm_stb = 0U;
    } else if (vlSelf->main__DOT__wbwide_i2cm_cyc) {
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_i2cm_stb)) 
                   | (~ ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                         >> 1U))))) {
            vlSelf->__Vdly__main__DOT__wbwide_i2cm_stb 
                = (1U & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb)));
        }
        if (((((~ (IData)(vlSelf->main__DOT__wbwide_i2cm_stb)) 
               | (~ ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                     >> 1U))) & (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb)) 
             & (((IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight) 
                 + ((IData)(vlSelf->main__DOT__wbwide_i2cm_stb)
                     ? 1U : 0U)) == ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))
                                      ? 1U : 0U)))) {
            vlSelf->__Vdly__main__DOT__wbwide_i2cm_cyc = 0U;
            vlSelf->__Vdly__main__DOT__wbwide_i2cm_stb = 0U;
        }
        if (vlSelf->main__DOT__i2ci__DOT__cpu_new_pc) {
            vlSelf->__Vdly__main__DOT__wbwide_i2cm_cyc = 0U;
            vlSelf->__Vdly__main__DOT__wbwide_i2cm_stb = 0U;
        }
    } else if ((((IData)(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc) 
                 | (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle)) 
                | ((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
                     & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
                    & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid))) 
                   & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal))))) {
        vlSelf->__Vdly__main__DOT__wbwide_i2cm_cyc = 1U;
        vlSelf->__Vdly__main__DOT__wbwide_i2cm_stb = 1U;
    }
    if (((IData)(vlSelf->main__DOT__u_i2cdma__DOT__r_reset) 
         | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__bus_err))) {
        __Vdly__main__DOT__wbwide_i2cdma_sel = (0x8000000000000000ULL 
                                                >> 
                                                (0x3fU 
                                                 & vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr));
        vlSelf->__Vdly__main__DOT__wbwide_i2cdma_addr 
            = (0x3fffffU & (vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr 
                            >> 6U));
        vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__subaddr 
            = (0x3fU & vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr);
    } else if ((((~ (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb)) 
                 | (~ (IData)(vlSelf->__VdfgTmp_h503d14d1__0))) 
                & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT__wb_last) 
                   | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow)))) {
        __Vdly__main__DOT__wbwide_i2cdma_sel = (0x8000000000000000ULL 
                                                >> 
                                                (0x3fU 
                                                 & vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr));
        vlSelf->__Vdly__main__DOT__wbwide_i2cdma_addr 
            = (0x3fffffU & (vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr 
                            >> 6U));
        vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__subaddr 
            = (0x3fU & vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr);
    } else {
        if (((IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
             & (IData)(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready))) {
            __Vdly__main__DOT__wbwide_i2cdma_sel = 
                (((QData)((IData)((1U & (IData)(vlSelf->main__DOT__wbwide_i2cdma_sel)))) 
                  << 0x3fU) | (vlSelf->main__DOT__wbwide_i2cdma_sel 
                               >> 1U));
        }
        if ((((IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
              & (IData)(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready)) 
             & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow)))) {
            vlSelf->__Vdly__main__DOT__wbwide_i2cdma_addr 
                = (0x3fffffU & (((IData)(1U) + ((vlSelf->main__DOT__wbwide_i2cdma_addr 
                                                 << 6U) 
                                                | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__subaddr))) 
                                >> 6U));
            vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__subaddr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__u_i2cdma__DOT__subaddr)));
        }
    }
    if (vlSelf->main__DOT__u_i2cdma__DOT__r_reset) {
        vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__r_overflow = 0U;
    } else if ((((~ (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb)) 
                 | (~ (IData)(vlSelf->__VdfgTmp_h503d14d1__0))) 
                & (IData)(vlSelf->main__DOT__u_i2cdma__DOT__wb_last))) {
        vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__r_overflow = 0U;
    } else if ((((IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
                 & (IData)(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready)) 
                & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                   >> 8U))) {
        vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__r_overflow = 0U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow)))) {
        vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__r_overflow 
            = ((((IData)(1U) + ((vlSelf->main__DOT__wbwide_i2cdma_addr 
                                 << 6U) | (IData)(vlSelf->main__DOT__u_i2cdma__DOT__subaddr))) 
                - vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr) 
               >= vlSelf->main__DOT__u_i2cdma__DOT__r_memlen);
    }
    if ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) {
        if ((1U & ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                   >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                   [0U]))) {
            if ((1U & ((~ (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb)) 
                       | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb 
                    = ((2U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb)) 
                       | (1U & (vlSelf->main__DOT__wbwide_xbar__DOT__request
                                [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                [0U]] & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull) 
                                            >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                            [0U])))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb 
                = (2U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb 
            = (2U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb));
    }
    if ((1U & ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_err)))) {
        vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb 
            = (2U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb));
    }
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) {
        if ((1U & ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                   >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                   [1U]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                           >> 1U)) | (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall) 
                                         >> 1U))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb 
                    = ((1U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb)) 
                       | (2U & (vlSelf->main__DOT__wbwide_xbar__DOT__request
                                [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                [1U]] & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mfull) 
                                             >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                             [1U])) 
                                         << 1U))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb 
                = (1U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb 
            = (1U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb));
    }
    if ((1U & ((IData)(vlSelf->i_reset) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_err) 
                                           >> 1U)))) {
        vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb 
            = (1U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb));
    }
    vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
        = ((2U & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant)) 
           | (1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant)));
    if ((1U & (vlSelf->main__DOT__wbwide_xbar__DOT__request
               [0U] & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant)) 
                       | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
            = (1U | (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant));
    }
    if ((1U & (vlSelf->main__DOT__wbwide_xbar__DOT__request
               [1U] & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                           >> 1U)) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                      >> 1U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
            = (1U | (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant));
    }
    if ((1U & (vlSelf->main__DOT__wbwide_xbar__DOT__request
               [2U] & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                           >> 2U)) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                      >> 2U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
            = (1U | (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant));
    }
    if ((1U & (vlSelf->main__DOT__wbwide_xbar__DOT__request
               [3U] & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                           >> 3U)) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                      >> 3U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
            = (1U | (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
            = (2U & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
        = ((1U & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant)) 
           | (2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                [0U] >> 1U) & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
            = (2U | (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant));
    }
    if ((1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                [1U] >> 1U) & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                   >> 1U)) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                              >> 1U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
            = (2U | (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant));
    }
    if ((1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                [2U] >> 1U) & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                   >> 2U)) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                              >> 2U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
            = (2U | (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant));
    }
    if ((1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                [3U] >> 1U) & ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                   >> 3U)) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                              >> 3U))))) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
            = (2U | (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant 
            = (1U & (IData)(vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant));
    }
    if ((1U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [0U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                       >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [0U]))) {
            if ((1U & ((~ (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0xffeU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (1U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [0U]) ? vlSelf->main__DOT__wb32_xbar__DOT__request
                                 [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                 [0U]] : 0U) & (~ (
                                                   (0U 
                                                    >= 
                                                    vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                    [0U]) 
                                                   & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                      >> 
                                                      vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                      [0U]))))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0xffeU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xffeU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__hx_stb = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__cw_stb = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__wbu_tx_stb = 0U;
        vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__ln_stb = 0U;
        vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge = 0U;
        __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount = 0xc8U;
        vlSelf->__Vdly__main__DOT__i2ci__DOT__i2c_ckedge = 0U;
        __Vdly__main__DOT__i2ci__DOT__i2c_ckcount = 0xfffU;
        vlSelf->__Vdly__main__DOT__spioi__DOT__r_led = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_fpga = 0x1387U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_sys = 0x1387U;
        vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__bus_err = 0U;
        __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr = 0U;
        vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted = 0U;
        vlSelf->__Vdly__main__DOT__i2ci__DOT__r_halted = 1U;
        vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_jump_addr = 0U;
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xffeU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    } else {
        if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy))))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__hx_stb 
                = vlSelf->main__DOT__genbus__DOT__rx_valid;
        }
        vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb 
            = ((6U & ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb) 
                      << 1U)) | ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb) 
                                 & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cod_busy))));
        if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb)) 
                   | (~ (IData)((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))))))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__cw_stb 
                = vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb;
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__genbus__DOT__ps_full))))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wbu_tx_stb 
                = vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb;
        }
        if ((((IData)(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID) 
              & (IData)(vlSelf->main__DOT__i2cdma_ready)) 
             & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid) 
                & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready))))) {
            vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid = 1U;
        } else if (vlSelf->main__DOT__u_i2cdma__DOT__skd_ready) {
            vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid = 0U;
        }
        if ((1U & (((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb)) 
                    | (~ (IData)((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))))) 
                   | (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb))))) {
            if ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                  & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy))) 
                 & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid)))) {
                vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len = 0U;
            } else if ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len) 
                         == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len)) 
                        & (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len)))) {
                vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len 
                    = (((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                        & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy)))
                        ? 1U : 0U);
            } else if (((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                        & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy)))) {
                vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)));
            }
        }
        if (((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy)) 
             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen 
                = ((0x40U & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits))
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen))));
        }
        if ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
              & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy))) 
             & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len = 0U;
        } else if ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                     & (~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy))) 
                    & ((0U == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len)) 
                       | (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len 
                = ((3U == (3U & ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits) 
                                 >> 4U))) ? 2U : ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits) 
                                                       >> 4U)))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits) 
                                                        >> 3U)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits) 
                                                         >> 3U)))
                                                     ? 
                                                    (7U 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (3U 
                                                         & ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits) 
                                                            >> 1U))))
                                                     : 6U))));
        } else if (((((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb)) 
                      | (~ (IData)((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))))) 
                     & ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len) 
                        == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len))) 
                    & (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len = 0U;
        }
        if ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb) 
              & (0x600000000ULL == (0xe00000000ULL 
                                    & vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word))) 
             & (~ (IData)((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr)));
        }
        if (((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb) 
             & (~ (IData)((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw 
                = (3U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                 >> 0x22U)));
        }
        if (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
             & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len 
                = ((0U == (7U & (IData)((vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                         >> 0x21U))))
                    ? 1U : ((2U == (0xfU & (IData)(
                                                   (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                    >> 0x20U))))
                             ? 6U : (7U & ((3U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                              >> 0x20U))))
                                            ? ((IData)(2U) 
                                               + (3U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                             >> 0x1eU))))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                            >> 0x22U))))
                                                ? 2U
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                                >> 0x22U))))
                                                    ? 1U
                                                    : 6U))))));
        } else if (((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy)) 
                    & (0U < (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len)))) {
            vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len 
                = (7U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len) 
                         - (IData)(1U)));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge)) 
                   | (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch))))) {
            __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount 
                = (0xfffU & ((0U < (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount))
                              ? ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount) 
                                 - (IData)(1U)) : (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount)));
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge 
                = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge)
                    ? (0U == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount))
                    : (1U >= (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount)));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge)) 
                   | (~ (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_stretch))))) {
            __Vdly__main__DOT__i2ci__DOT__i2c_ckcount 
                = (0xfffU & ((0U < (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount))
                              ? ((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount) 
                                 - (IData)(1U)) : (IData)(vlSelf->main__DOT__i2ci__DOT__ckcount)));
            vlSelf->__Vdly__main__DOT__i2ci__DOT__i2c_ckedge 
                = ((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge)
                    ? (0U == (IData)(vlSelf->main__DOT__i2ci__DOT__ckcount))
                    : (1U >= (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount)));
        }
        if ((((IData)(vlSelf->main__DOT__wb32_spio_stb) 
              & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                 >> 8U)) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                    >> 0x20U)))) {
            vlSelf->__Vdly__main__DOT__spioi__DOT__r_led 
                = (0xffU & ((1U & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                           >> 0x21U)))
                             ? (((IData)(vlSelf->main__DOT__spioi__DOT__r_led) 
                                 & (~ ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                        << 0x18U) | 
                                       (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                        >> 8U)))) | 
                                (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                 & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                     << 0x18U) | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                                                  >> 8U))))
                             : vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]));
        }
        if ((1U & ((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                    >> 7U) & (~ (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                 >> 0x11U))))) {
            if ((0U == (3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                              >> 0xfU)))) {
                if ((1U & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                   >> 0x1cU)))) {
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_fpga 
                        = ((0x1f00U & (IData)(vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_fpga)) 
                           | (0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]));
                }
                if ((1U & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                   >> 0x1dU)))) {
                    vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_fpga 
                        = ((0xffU & (IData)(vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_fpga)) 
                           | (0x1f00U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]));
                }
            }
            if ((0U != (3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                              >> 0xfU)))) {
                if ((1U == (3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                  >> 0xfU)))) {
                    if ((1U & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                       >> 0x1cU)))) {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_sys 
                            = ((0x1f00U & (IData)(vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_sys)) 
                               | (0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]));
                    }
                    if ((1U & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                       >> 0x1dU)))) {
                        vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_sys 
                            = ((0xffU & (IData)(vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_sys)) 
                               | (0x1f00U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]));
                    }
                }
            }
        } else {
            if ((0x1387U <= (IData)(vlSelf->main__DOT__u_fan__DOT__ctl_fpga))) {
                vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_fpga = 0x1387U;
            }
            if ((0x1387U <= (IData)(vlSelf->main__DOT__u_fan__DOT__ctl_sys))) {
                vlSelf->__Vdly__main__DOT__u_fan__DOT__ctl_sys = 0x1387U;
            }
        }
        if (((IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc) 
             & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))) {
            vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__bus_err = 1U;
        } else if ((0x20U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                             & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))) {
            if ((0x40000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U])) {
                vlSelf->__Vdly__main__DOT__u_i2cdma__DOT__bus_err 
                    = ((0x20000000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U])
                        ? ((IData)(vlSelf->main__DOT__u_i2cdma__DOT__bus_err) 
                           & (0ULL == (0xf00000ULL 
                                       & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel)))
                        : ((IData)(vlSelf->main__DOT__u_i2cdma__DOT__bus_err) 
                           & (0ULL == (0xf00000ULL 
                                       & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))));
            }
        }
        if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc) 
             | ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
                & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)))) {
            __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr)));
        }
        if ((((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
                & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)) 
               & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle))) 
              & (0xc0U == (0xf0U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn)))) 
             | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid) 
                 & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready)) 
                & (0xcU == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn))))) {
            __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr 
                = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target;
        }
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort) {
            __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr 
                = vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address;
        }
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) {
            __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr 
                = (0x1fU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]);
        }
        if (((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid) 
               & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready)) 
              & (0x200U == (0xf00U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn)))) 
             & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request))) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted = 1U;
        }
        if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request) 
             & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort))) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted = 1U;
        }
        if ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
              & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready)) 
             & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal))) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted = 1U;
        }
        if ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid) 
              & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready)) 
             & (0x900U == (0xf00U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))))) {
            vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted = 1U;
        }
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) {
            if (((IData)(((0U == (0x18000U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U])) 
                          & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U] 
                             >> 0x13U))) & (IData)(
                                                   (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                    >> 0x1eU)))) {
                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted = 1U;
            }
            if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual) {
                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted = 1U;
            }
            if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) 
                 & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted))) {
                vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted = 0U;
            }
        }
        if (((((IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid) 
               & (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready)) 
              & (0x200U == (0xf00U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn)))) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__soft_halt_request))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__r_halted = 1U;
        }
        if (((IData)(vlSelf->main__DOT__i2ci__DOT__soft_halt_request) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__i2c_abort))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__r_halted = 1U;
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
              & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_illegal))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__r_halted = 1U;
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid) 
              & (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready)) 
             & (0x900U == (0xf00U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__r_halted = 1U;
        }
        if (vlSelf->main__DOT__i2ci__DOT__bus_write) {
            if (((IData)(((0U == (0x30U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U])) 
                          & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U] 
                             >> 0x13U))) & (IData)(
                                                   (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                    >> 0x12U)))) {
                vlSelf->__Vdly__main__DOT__i2ci__DOT__r_halted = 1U;
            }
            if (vlSelf->main__DOT__i2ci__DOT__bus_manual) {
                vlSelf->__Vdly__main__DOT__i2ci__DOT__r_halted = 1U;
            }
            if (((IData)(vlSelf->main__DOT__i2ci__DOT__bus_jump) 
                 & (IData)(vlSelf->main__DOT__i2ci__DOT__r_halted))) {
                vlSelf->__Vdly__main__DOT__i2ci__DOT__r_halted = 0U;
            }
        }
        if (((IData)(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc) 
             | ((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
                & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_jump_addr 
                = (0xfffffffU & ((IData)(1U) + vlSelf->main__DOT__i2ci__DOT__pf_jump_addr));
        }
        if ((((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
                & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
               & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle))) 
              & (0xc0U == (0xf0U & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_insn)))) 
             | (((IData)(vlSelf->main__DOT__i2ci__DOT__half_valid) 
                 & (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready)) 
                & (0xcU == (IData)(vlSelf->main__DOT__i2ci__DOT__half_insn))))) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_jump_addr 
                = vlSelf->main__DOT__i2ci__DOT__jump_target;
        }
        if (vlSelf->main__DOT__i2ci__DOT__i2c_abort) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_jump_addr 
                = vlSelf->main__DOT__i2ci__DOT__abort_address;
        }
        if (vlSelf->main__DOT__i2ci__DOT__bus_jump) {
            vlSelf->__Vdly__main__DOT__i2ci__DOT__pf_jump_addr 
                = (0xfffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]);
        }
    }
    if ((2U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [1U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                       >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [1U]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                           >> 1U)) | (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                         >> 1U))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0xffdU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (2U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [1U]) ? (0xfffffffeU 
                                           & vlSelf->main__DOT__wb32_xbar__DOT__request
                                           [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [1U]]) : 0U) 
                                & ((~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [1U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                 >> 
                                                 vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                 [1U]))) 
                                   << 1U))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0xffdU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xffdU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xffdU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if ((4U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [2U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                       >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [2U]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                           >> 2U)) | (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                         >> 2U))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0xffbU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (4U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [2U]) ? (0xfffffffcU 
                                           & vlSelf->main__DOT__wb32_xbar__DOT__request
                                           [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [2U]]) : 0U) 
                                & ((~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [2U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                 >> 
                                                 vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                 [2U]))) 
                                   << 2U))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0xffbU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xffbU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xffbU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if ((8U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [3U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                       >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [3U]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                           >> 3U)) | (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                         >> 3U))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0xff7U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (8U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [3U]) ? (0xfffffff8U 
                                           & vlSelf->main__DOT__wb32_xbar__DOT__request
                                           [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [3U]]) : 0U) 
                                & ((~ ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [3U]) & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                 >> 
                                                 vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                 [3U]))) 
                                   << 3U))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0xff7U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xff7U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xff7U & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if ((0x10U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [4U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                       >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [4U]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                           >> 4U)) | (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                         >> 4U))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0xfefU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (0x10U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                     [4U]) ? (0xfffffff0U 
                                              & vlSelf->main__DOT__wb32_xbar__DOT__request
                                              [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                              [4U]])
                                     : 0U) & ((~ ((0U 
                                                   >= 
                                                   vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                   [4U]) 
                                                  & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                     >> 
                                                     vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                     [4U]))) 
                                              << 4U))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0xfefU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xfefU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xfefU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if ((0x20U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [5U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                       >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [5U]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                           >> 5U)) | (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                         >> 5U))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0xfdfU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (0x20U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                     [5U]) ? (0xffffffe0U 
                                              & vlSelf->main__DOT__wb32_xbar__DOT__request
                                              [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                              [5U]])
                                     : 0U) & ((~ ((0U 
                                                   >= 
                                                   vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                   [5U]) 
                                                  & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                     >> 
                                                     vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                     [5U]))) 
                                              << 5U))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0xfdfU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xfdfU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xfdfU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if ((0x40U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [6U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                       >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [6U]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                           >> 6U)) | (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                         >> 6U))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0xfbfU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (0x40U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                     [6U]) ? (0xffffffc0U 
                                              & vlSelf->main__DOT__wb32_xbar__DOT__request
                                              [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                              [6U]])
                                     : 0U) & ((~ ((0U 
                                                   >= 
                                                   vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                   [6U]) 
                                                  & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                     >> 
                                                     vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                     [6U]))) 
                                              << 6U))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0xfbfU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xfbfU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xfbfU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if ((0x80U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [7U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                       >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [7U]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                           >> 7U)) | (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                         >> 7U))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0xf7fU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (0x80U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                     [7U]) ? (0xffffff80U 
                                              & vlSelf->main__DOT__wb32_xbar__DOT__request
                                              [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                              [7U]])
                                     : 0U) & ((~ ((0U 
                                                   >= 
                                                   vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                   [7U]) 
                                                  & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                     >> 
                                                     vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                     [7U]))) 
                                              << 7U))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0xf7fU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xf7fU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xf7fU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if ((0x100U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [8U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                       >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [8U]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                           >> 8U)) | (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                         >> 8U))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0xeffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (0x100U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                      [8U]) ? (0xffffff00U 
                                               & vlSelf->main__DOT__wb32_xbar__DOT__request
                                               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                               [8U]])
                                      : 0U) & ((~ (
                                                   (0U 
                                                    >= 
                                                    vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                    [8U]) 
                                                   & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                      >> 
                                                      vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                      [8U]))) 
                                               << 8U))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0xeffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xeffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xeffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if ((0x200U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [9U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                       >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [9U]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                           >> 9U)) | (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                         >> 9U))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0xdffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (0x200U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                      [9U]) ? (0xfffffe00U 
                                               & vlSelf->main__DOT__wb32_xbar__DOT__request
                                               [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                               [9U]])
                                      : 0U) & ((~ (
                                                   (0U 
                                                    >= 
                                                    vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                    [9U]) 
                                                   & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                      >> 
                                                      vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                      [9U]))) 
                                               << 9U))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0xdffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xdffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xdffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if ((0x400U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [0xaU]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                         >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                         [0xaU]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                           >> 0xaU)) | (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                           >> 0xaU))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0xbffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (0x400U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                      [0xaU]) ? (0xfffffc00U 
                                                 & vlSelf->main__DOT__wb32_xbar__DOT__request
                                                 [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                 [0xaU]])
                                      : 0U) & ((~ (
                                                   (0U 
                                                    >= 
                                                    vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                    [0xaU]) 
                                                   & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                      >> 
                                                      vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                      [0xaU]))) 
                                               << 0xaU))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0xbffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xbffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0xbffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if ((0x800U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
              [0xbU]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                         >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                         [0xbU]))) {
            if ((1U & ((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                           >> 0xbU)) | (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                                           >> 0xbU))))) {
                vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                    = ((0x7ffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb)) 
                       | (0x800U & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                      [0xbU]) ? (0xfffff800U 
                                                 & vlSelf->main__DOT__wb32_xbar__DOT__request
                                                 [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                 [0xbU]])
                                      : 0U) & ((~ (
                                                   (0U 
                                                    >= 
                                                    vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                    [0xbU]) 
                                                   & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull) 
                                                      >> 
                                                      vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                                      [0xbU]))) 
                                               << 0xbU))));
            }
        } else {
            vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
                = (0x7ffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        }
    } else {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0x7ffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
    }
    if (vlSelf->i_reset) {
        vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb 
            = (0x7ffU & (IData)(vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb));
        vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn = 0U;
        __Vdly__main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe = 0U;
        vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded = 0U;
        vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded = 0U;
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded = 0U;
        vlSelf->main__DOT__i2ci__DOT__r_err = 0U;
        vlSelf->main__DOT__i2ci__DOT__r_wait = 0U;
        vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid = 0U;
    } else {
        vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn 
            = (0x1fU & ((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe) 
                        >> 5U));
        __Vdly__main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe 
            = ((0x3e0U & ((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe) 
                          << 5U)) | (IData)(vlSelf->i_btn));
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
            vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded 
                = (((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                    << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
            vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded 
                = (((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                    << 0xcU) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request));
        }
        if (((((((IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd) 
                 | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)) 
                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb)) 
               | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb)) 
              | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid)) 
             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
                | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy) 
                   & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl)) 
                      & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl)))))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active = 1U;
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__ps_full)))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid)) 
                   | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall))))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded 
                = (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                    << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid)) 
                   | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall))))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded 
                = (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                    << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid)) 
                   | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall))))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded 
                = (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                    << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid)) 
                   | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded 
                = (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                    << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)));
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
              & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_illegal))) {
            vlSelf->main__DOT__i2ci__DOT__r_err = 1U;
        }
        if (vlSelf->main__DOT__i2ci__DOT__bus_write) {
            if (((IData)(((0U == (0x30U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U])) 
                          & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U] 
                             >> 0x14U))) & (IData)(
                                                   (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                    >> 0x12U)))) {
                vlSelf->main__DOT__i2ci__DOT__r_err = 0U;
            }
            if (((IData)(vlSelf->main__DOT__i2ci__DOT__bus_jump) 
                 & (IData)(vlSelf->main__DOT__i2ci__DOT__r_halted))) {
                vlSelf->main__DOT__i2ci__DOT__r_err = 0U;
            }
        }
        if (vlSelf->main__DOT__i2ci__DOT__r_halted) {
            vlSelf->main__DOT__i2ci__DOT__r_wait = 0U;
        } else {
            if (((IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid) 
                 & (0x800U == (0xf00U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))))) {
                vlSelf->main__DOT__i2ci__DOT__r_wait = 1U;
            }
            if (vlSelf->main__DOT__i2ci__DOT__bus_jump) {
                vlSelf->main__DOT__i2ci__DOT__r_wait = 0U;
            }
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__i2c_valid)) 
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
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0xffeU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (1U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & (vlSelf->main__DOT__wb32_xbar__DOT__request
               [0U] & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                       | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (1U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0xffeU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0xffdU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (2U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 1U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (2U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0xffdU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0xffbU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (4U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 2U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (4U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0xffbU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0xff7U & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (8U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 3U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (8U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0xff7U & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0xfefU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x10U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 4U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x10U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0xfefU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0xfdfU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x20U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 5U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x20U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0xfdfU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0xfbfU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x40U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 6U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x40U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0xfbfU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0xf7fU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x80U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 7U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x80U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0xf7fU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0xeffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x100U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 8U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x100U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0xeffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0xdffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x200U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 9U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x200U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0xdffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0xbffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x400U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 0xaU) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                                 | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x400U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0xbffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x7ffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x800U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 0xbU) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                                 | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x800U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__11__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x7ffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack 
        = vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack 
        = vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack 
        = vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack 
        = vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack 
        = vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack 
        = vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack 
        = vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5;
    vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack 
        = vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5;
    vlSelf->o_sys_pwm = (((IData)(vlSelf->main__DOT__u_fan__DOT__ctl_sys) 
                          >= (IData)(vlSelf->main__DOT__u_fan__DOT__pwm_counter)) 
                         | (0x1387U <= (IData)(vlSelf->main__DOT__u_fan__DOT__ctl_sys)));
    vlSelf->o_fpga_pwm = (((IData)(vlSelf->main__DOT__u_fan__DOT__ctl_fpga) 
                           >= (IData)(vlSelf->main__DOT__u_fan__DOT__pwm_counter)) 
                          | (0x1387U <= (IData)(vlSelf->main__DOT__u_fan__DOT__ctl_fpga)));
    vlSelf->o_sirefclk_word = ((0x80U & (vlSelf->main__DOT__clock_generator__DOT__counter
                                         [1U] >> 0x18U)) 
                               | ((0x40U & (vlSelf->main__DOT__clock_generator__DOT__counter
                                            [2U] >> 0x19U)) 
                                  | ((0x20U & (vlSelf->main__DOT__clock_generator__DOT__counter
                                               [3U] 
                                               >> 0x1aU)) 
                                     | ((0x10U & (vlSelf->main__DOT__clock_generator__DOT__counter
                                                  [4U] 
                                                  >> 0x1bU)) 
                                        | ((8U & (vlSelf->main__DOT__clock_generator__DOT__counter
                                                  [5U] 
                                                  >> 0x1cU)) 
                                           | ((4U & 
                                               (vlSelf->main__DOT__clock_generator__DOT__counter
                                                [6U] 
                                                >> 0x1dU)) 
                                              | ((2U 
                                                  & (vlSelf->main__DOT__clock_generator__DOT__counter
                                                     [7U] 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->main__DOT__clock_generator__DOT__counter
                                                    [0U] 
                                                    >> 0x1fU))))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup 
        = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags
            [(7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                    >> 9U))] << 3U) | (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                             >> 9U)));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI 
            = (0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I);
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half 
            = (0x7fffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword);
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex 
        = vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex 
        = vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup 
        = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags
            [(7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                    >> 9U))] << 3U) | (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                             >> 9U)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last) 
           & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result)));
    vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt 
        = (1U & (IData)(((4U == (5U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))) 
                         & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                            >> 4U))));
    vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt 
        = (1U & (IData)(((4U == (5U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))) 
                         & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                            >> 4U))));
    vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt 
        = (1U & (IData)(((4U == (5U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))) 
                         & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                            >> 4U))));
    vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt 
        = (1U & (IData)(((4U == (5U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))) 
                         & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                            >> 4U))));
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full 
        = ((~ (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset)) 
           & ((1U != (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr) 
                       << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd))) 
              & ((2U == (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr) 
                          << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd)))
                  ? (0x1fU == (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill))
                  : (0x20U == (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill)))));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result 
        = ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input)) 
           * (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result 
        = VL_MULS_QQQ(64, (((QData)((IData)((- (IData)(
                                                       (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input))), 
                      (((QData)((IData)((- (IData)(
                                                   (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input))));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign 
            = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
               >> 0x1fU);
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl 
            = (((0U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)) 
                & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                    >> 0x1fU) != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                  >> 0x1fU))) | ((2U 
                                                  == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)) 
                                                 & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                     >> 0x1fU) 
                                                    == 
                                                    (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                     >> 0x1fU))));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl 
            = (((((0U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)) 
                  & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                      >> 0x1fU) != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                    >> 0x1fU))) | (
                                                   (2U 
                                                    == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)) 
                                                   & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                       >> 0x1fU) 
                                                      == 
                                                      (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                       >> 0x1fU)))) 
                | (6U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) 
               | (5U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c = 0U;
        if ((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) {
                if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) {
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c 
                        = (1U & ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                                  ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result)
                                  : (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result 
                                             >> 0x20U))));
                } else if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) {
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c 
                        = (1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result));
                }
            } else if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)))) {
                    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c 
                        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                  + (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))) 
                                                 >> 0x20U))));
                }
            } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)))) {
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c 
                    = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                              - (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))) 
                                             >> 0x20U))));
            }
        }
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
            = ((8U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                ? ((4U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                    ? ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                        ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr
                        : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                            ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr
                            : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result)))
                    : ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                        ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                            ? (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result 
                                       >> 0x20U)) : (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result 
                                                             >> 0x20U)))
                        : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                            ? ((0xffff0000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata) 
                               | (0xffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                            : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result)))
                : ((4U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                    ? ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                        ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                            ? (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result 
                                       >> 1U)) : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result))
                        : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                            ? (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result 
                                       >> 1U)) : (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                                                  ^ vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))
                    : ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                        ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                            ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                               | vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)
                            : (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                               + vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                        : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))
                            ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                               & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)
                            : (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata 
                               - vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))));
    } else {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
            = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi)
                ? (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result 
                           >> 0x20U)) : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result));
    }
    if ((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data 
            = vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5) 
         & (IData)(vlSelf->main__DOT__swic__DOT__sys_we))) {
        vlSelf->main__DOT__swic__DOT__mic_int = (1U 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->main__DOT__swic__DOT__sys_data)) 
                                                            >> 0x20U)));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data 
            = vlSelf->main__DOT__swic__DOT__sys_data;
    } else if (vlSelf->main__DOT__swic__DOT__cpu_i_count) {
        vlSelf->main__DOT__swic__DOT__mic_int = (1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((1ULL 
                                                                + (QData)((IData)(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data))) 
                                                               >> 0x20U))));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data 
            = ((IData)(1U) + vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data);
    } else {
        vlSelf->main__DOT__swic__DOT__mic_int = 0U;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5) 
         & (IData)(vlSelf->main__DOT__swic__DOT__sys_we))) {
        vlSelf->main__DOT__swic__DOT__mpc_int = (1U 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->main__DOT__swic__DOT__sys_data)) 
                                                            >> 0x20U)));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data 
            = vlSelf->main__DOT__swic__DOT__sys_data;
    } else if (vlSelf->main__DOT__swic__DOT__cpu_pf_stall) {
        vlSelf->main__DOT__swic__DOT__mpc_int = (1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((1ULL 
                                                                + (QData)((IData)(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data))) 
                                                               >> 0x20U))));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data 
            = ((IData)(1U) + vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data);
    } else {
        vlSelf->main__DOT__swic__DOT__mpc_int = 0U;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5) 
         & (IData)(vlSelf->main__DOT__swic__DOT__sys_we))) {
        vlSelf->main__DOT__swic__DOT__moc_int = (1U 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->main__DOT__swic__DOT__sys_data)) 
                                                            >> 0x20U)));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data 
            = vlSelf->main__DOT__swic__DOT__sys_data;
    } else if (vlSelf->main__DOT__swic__DOT__cpu_op_stall) {
        vlSelf->main__DOT__swic__DOT__moc_int = (1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((1ULL 
                                                                + (QData)((IData)(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data))) 
                                                               >> 0x20U))));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data 
            = ((IData)(1U) + vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data);
    } else {
        vlSelf->main__DOT__swic__DOT__moc_int = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][0U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[1U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][1U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[2U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][2U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[3U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][3U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[4U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][4U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[5U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][5U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[6U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][6U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[7U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][7U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[8U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][8U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[9U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][9U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xaU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][0xaU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xbU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][0xbU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xcU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][0xcU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xdU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][0xdU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xeU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][0xeU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword[0xfU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)][0xfU];
    if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data[0x12U];
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][0U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[1U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][1U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[2U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][2U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[3U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][3U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[4U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][4U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[5U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][5U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[6U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][6U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[7U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][7U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[8U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][8U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[9U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][9U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xaU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][0xaU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xbU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][0xbU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xcU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][0xcU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xdU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][0xdU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xeU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][0xeU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword[0xfU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U))][0xfU];
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid 
            = (0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch))) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal)));
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc 
            = ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                 >> 6U) & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR)) 
               & ((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                         >> 4U)) == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result 
        = ((2U == (3U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data) 
                         >> 6U))) ? (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xfU] 
                                     >> 0x10U) : ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data) 
                                                       >> 6U)))
                                                   ? 
                                                  (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xfU] 
                                                   >> 0x18U)
                                                   : 
                                                  vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted[0xfU]));
    vlSelf->main__DOT__r_sirefclk_ack = ((~ (IData)(vlSelf->i_reset)) 
                                         & (IData)(vlSelf->main__DOT__wb32_sirefclk_stb));
    vlSelf->main__DOT__swic__DOT__wdbus_ack = ((~ ((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
                                                   | (~ (IData)(vlSelf->main__DOT__swic__DOT__sys_cyc)))) 
                                               & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__sel_bus_watchdog)));
    vlSelf->main__DOT__wb32_spio_ack = ((~ (IData)(vlSelf->i_reset)) 
                                        & (IData)(vlSelf->main__DOT__wb32_spio_stb));
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy 
        = ((~ (IData)(vlSelf->i_reset)) & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb) 
                                           & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset)) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
              & (0ULL == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][0U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[1U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][1U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[2U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][2U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[3U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][3U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[4U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][4U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[5U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][5U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[6U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][6U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[7U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][7U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[8U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][8U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[9U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][9U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xaU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][0xaU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xbU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][0xbU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xcU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][0xcU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xdU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][0xdU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xeU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][0xeU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache[0xfU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                   >> 6U))][0xfU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][0U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[1U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][1U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[2U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][2U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[3U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][3U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[4U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][4U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[5U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][5U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[6U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][6U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[7U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][7U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[8U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][8U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[9U] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][9U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xaU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][0xaU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xbU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][0xbU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xcU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][0xcU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xdU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][0xdU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xeU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][0xeU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache[0xfU] 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache
        [(0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                   >> 6U))][0xfU];
    if (vlSelf->main__DOT__u_i2cdma__DOT__skd_ready) {
        vlSelf->main__DOT__wbwide_i2cdma_data[0U] = 
            (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
              << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                         << 0x10U)) 
                           | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                          << 8U)) | 
                              (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[1U] = 
            (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
              << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                         << 0x10U)) 
                           | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                          << 8U)) | 
                              (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[2U] = 
            (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
              << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                         << 0x10U)) 
                           | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                          << 8U)) | 
                              (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[3U] = 
            (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
              << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                         << 0x10U)) 
                           | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                          << 8U)) | 
                              (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[4U] = 
            (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
              << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                         << 0x10U)) 
                           | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                          << 8U)) | 
                              (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[5U] = 
            (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
              << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                         << 0x10U)) 
                           | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                          << 8U)) | 
                              (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[6U] = 
            (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
              << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                         << 0x10U)) 
                           | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                          << 8U)) | 
                              (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[7U] = 
            (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
              << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                         << 0x10U)) 
                           | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                          << 8U)) | 
                              (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[8U] = 
            (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
              << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                         << 0x10U)) 
                           | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                          << 8U)) | 
                              (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[9U] = 
            (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
              << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                         << 0x10U)) 
                           | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                          << 8U)) | 
                              (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[0xaU] 
            = (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                           << 0x10U)) 
                             | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                            << 8U)) 
                                | (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[0xbU] 
            = (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                           << 0x10U)) 
                             | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                            << 8U)) 
                                | (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[0xcU] 
            = (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                           << 0x10U)) 
                             | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                            << 8U)) 
                                | (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[0xdU] 
            = (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                           << 0x10U)) 
                             | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                            << 8U)) 
                                | (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[0xeU] 
            = (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                           << 0x10U)) 
                             | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                            << 8U)) 
                                | (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
        vlSelf->main__DOT__wbwide_i2cdma_data[0xfU] 
            = (((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                << 0x18U) | ((0xff0000U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                           << 0x10U)) 
                             | ((0xff00U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                            << 8U)) 
                                | (0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data)))));
    }
    if ((4U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av 
            = ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc))
                ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc))
                    ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av
                    : (0xeb800000U | ((0x7f0000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av) 
                                      | ((0x10U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))
                                          ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags)
                                          : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags)))))
                : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc))
                    ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v
                    : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl));
    }
    __Vtableidx3 = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
                     << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce));
    if (Vmain__ConstPool__TABLE_h4c25b041_0[__Vtableidx3]) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F 
            = Vmain__ConstPool__TABLE_h7fc47693_0[__Vtableidx3];
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb)) 
               | (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr 
            = (0x7ffffffU & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                     >> 0x24U)));
    }
    if ((4U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc))) {
        if ((0U == (3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv 
                = (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v 
                   + (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I 
                      << 2U));
        } else if ((1U == (3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv 
                = (((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
                     ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
                         ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv
                         : (0xeb800000U | ((0x7f0000U 
                                            & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv) 
                                           | ((0x10U 
                                               & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))
                                               ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags)
                                               : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags)))))
                     : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
                         ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl
                         : 0U)) + vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I);
        } else if ((2U == (2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl;
        }
    }
    vlSelf->main__DOT__spio_int = ((~ (IData)(vlSelf->i_reset)) 
                                   & ((IData)(vlSelf->main__DOT__spioi__DOT__sw_int) 
                                      | (IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int)));
    if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U] 
            = Vmain__ConstPool__CONST_hb679b2e5_0[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U] 
            = vlSelf->main__DOT__wbwide_i2cm_addr;
    }
    if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0x12U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x12U];
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full 
        = ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset)) 
           & ((1U != (((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr) 
                       << 1U) | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd))) 
              & ((2U == (((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr) 
                          << 1U) | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd)))
                  ? (0x1fU == (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill))
                  : (0x20U == (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill)))));
    if ((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy)))) {
        vlSelf->main__DOT__wbu_data = (((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                                 >> 0x1fU)) 
                                        << 0x1eU) | 
                                       (0x3fffffffU 
                                        & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)));
    }
    vlSelf->main__DOT__wbwide_bkram_idata[0U] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][0U];
    vlSelf->main__DOT__wbwide_bkram_idata[1U] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][1U];
    vlSelf->main__DOT__wbwide_bkram_idata[2U] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][2U];
    vlSelf->main__DOT__wbwide_bkram_idata[3U] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][3U];
    vlSelf->main__DOT__wbwide_bkram_idata[4U] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][4U];
    vlSelf->main__DOT__wbwide_bkram_idata[5U] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][5U];
    vlSelf->main__DOT__wbwide_bkram_idata[6U] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][6U];
    vlSelf->main__DOT__wbwide_bkram_idata[7U] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][7U];
    vlSelf->main__DOT__wbwide_bkram_idata[8U] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][8U];
    vlSelf->main__DOT__wbwide_bkram_idata[9U] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][9U];
    vlSelf->main__DOT__wbwide_bkram_idata[0xaU] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][0xaU];
    vlSelf->main__DOT__wbwide_bkram_idata[0xbU] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][0xbU];
    vlSelf->main__DOT__wbwide_bkram_idata[0xcU] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][0xcU];
    vlSelf->main__DOT__wbwide_bkram_idata[0xdU] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][0xdU];
    vlSelf->main__DOT__wbwide_bkram_idata[0xeU] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][0xeU];
    vlSelf->main__DOT__wbwide_bkram_idata[0xfU] = vlSelf->main__DOT__bkrami__DOT__mem
        [vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr][0xfU];
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb)) 
               | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr 
            = (0x1ffffffU & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                     >> 0x24U)));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg 
        = (0x1fU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data) 
                    >> 8U));
    if ((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data 
            = vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data;
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb)) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stall))))) {
        vlSelf->main__DOT__swic__DOT__dbg_we = ((IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)
                                                 ? (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we)
                                                 : (IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_we));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset)) 
                 & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce) 
                     & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__this_is_a_multiply_op))) 
                    | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                       >> 1U))));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid)) 
               | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr 
            = (0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U]);
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data[0x12U] 
            = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                     >> 0x16U));
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid)) 
               | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr 
            = (0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U]);
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data[0x12U] 
            = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                     >> 0x16U));
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid)) 
               | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr 
            = (0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U]);
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data[0x12U] 
            = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                     >> 0x16U));
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid)) 
               | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr 
            = (0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U]);
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[1U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[2U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[3U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[3U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[4U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[4U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[5U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[5U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[6U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[6U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[7U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[7U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[8U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[8U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[9U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[9U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xaU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xaU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xbU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xbU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xcU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xcU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xdU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xdU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xeU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xeU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0xfU] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xfU];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0x10U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x10U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0x11U] 
            = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x11U];
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data[0x12U] 
            = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                     >> 0x16U));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val 
        = vlSelf->main__DOT__swic__DOT__cmd_wdata;
    vlSelf->main__DOT__wbwide_bkram_ack = ((~ (IData)(vlSelf->i_reset)) 
                                           & ((IData)(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb) 
                                              & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc)));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z = 1U;
    } else if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign))) 
                & (~ (IData)((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff 
                              >> 0x20U))))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z = 0U;
    }
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch 
        = ((((vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword 
              == (((IData)((vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word 
                            >> 0x1fU)) << 0x1eU) | 
                  (0x3fffffffU & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word)))) 
             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch)) 
            & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched))) 
           & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)) 
               | (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))))) {
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch = 0U;
    }
    if (vlSelf->main__DOT__swic__DOT__dc_cyc) {
        if ((((IData)(vlSelf->main__DOT__swic__DOT__dc_cyc) 
              & (IData)(vlSelf->main__DOT__swic__DOT__dc_stb)) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc)))) {
            vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner = 0U;
        }
    } else {
        vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner = 1U;
    }
    vlSelf->main__DOT__wb32_wbdown_idata = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)
                                             ? vlSelf->main__DOT__wb32_xbar__DOT__s_data
                                            [vlSelf->main__DOT__wb32_xbar__DOT__mindex
                                            [0U]] : 0U);
    vlSelf->main__DOT__swic__DOT__jif_ack = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
                                             & (IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb));
    vlSelf->main__DOT__swic__DOT__tmc_ack = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
                                             & (IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb));
    vlSelf->main__DOT__swic__DOT__tmb_ack = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
                                             & (IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb));
    vlSelf->main__DOT__swic__DOT__tma_ack = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
                                             & (IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb));
    vlSelf->main__DOT__swic__DOT__wdt_ack = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
                                             & (IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb));
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                                >> 1U))) 
                | (~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc))) 
               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[1U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[2U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[3U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[4U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[5U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[6U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[7U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[8U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[9U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xaU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xbU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xcU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xdU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xeU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xfU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
    } else {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0U] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[1U] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[1U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[2U] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[2U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[3U] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[3U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[4U] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[4U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[5U] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[5U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[6U] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[6U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[7U] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[7U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[8U] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[8U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[9U] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[9U];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xaU] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xaU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xbU] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xbU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xcU] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xcU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xdU] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xdU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xeU] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xeU];
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xfU] 
            = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data[0xfU];
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size;
    }
    vlSelf->main__DOT__swic__DOT__sys_ack = ((4U & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                              ? ((2U 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                                   ? (IData)(vlSelf->main__DOT__swic__DOT__last_sys_stb)
                                                   : (IData)(vlSelf->main__DOT__swic__DOT__dmac_ack))
                                                  : (IData)(vlSelf->main__DOT__swic__DOT__last_sys_stb))
                                              : ((2U 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                                  ? (IData)(vlSelf->main__DOT__swic__DOT__last_sys_stb)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->main__DOT__swic__DOT__ack_idx))
                                                   ? (IData)(vlSelf->main__DOT__swic__DOT__last_sys_stb)
                                                   : (IData)(vlSelf->main__DOT__swic__DOT__r_mmus_ack))));
    if ((1U & ((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__sys_cyc))))) {
        vlSelf->main__DOT__swic__DOT__sys_ack = 0U;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset) 
         | ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc) 
            & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel = 0ULL;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel = 0ULL;
    } else if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy) {
        if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall)))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel;
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel;
        }
    } else {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel = 0ULL;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel = 0ULL;
        if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))) {
            if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))) {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel 
                    = (0x8000000000000000ULL >> (0x3fU 
                                                 & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr));
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel 
                    = (0x8000000000000000ULL >> (0x3fU 
                                                 & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr));
            } else {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel 
                    = (0xc000000000000000ULL >> (0x3eU 
                                                 & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr));
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel 
                    = ((0x4000000000000000ULL | ((QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))) 
                                                 << 0x3fU)) 
                       >> (0x3eU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr));
            }
        } else if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel 
                = (0xf000000000000000ULL >> (0x3cU 
                                             & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr));
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel 
                = ((2U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)
                    ? ((1U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)
                        ? (0x1000000000000000ULL >> 
                           (0x3cU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                        : (0x3000000000000000ULL >> 
                           (0x3cU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                    : ((1U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)
                        ? (0x7000000000000000ULL >> 
                           (0x3cU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                        : (0xf000000000000000ULL >> 
                           (0x3cU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))));
        } else {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel = 0xffffffffffffffffULL;
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel 
                = (0xffffffffffffffffULL >> (0x3fU 
                                             & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr));
        }
    }
    if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce) 
          | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce)) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg 
            = vlSelf->main__DOT__swic__DOT__cmd_waddr;
    }
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                                >> 1U))) 
                | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err)) 
               | ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                  & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we = 0U;
    } else if ((IData)((((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                         >> 1U) & (~ (IData)(vlSelf->main__DOT__wbwide_wbdown_stall))))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we 
            = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                     >> 1U));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall 
        = (1U & ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                 | (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted)) 
                     | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                        & (0xeU == (0xeU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))))) 
                    | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                       & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
              & (0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
         & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags 
            = (0xfU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl);
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
         & (0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags 
            = (0xfU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl);
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags;
    }
    __Vtableidx5 = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay) 
                     << 6U) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
                                << 5U) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal) 
                                           << 4U) | 
                                          (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v) 
                                            << 3U) 
                                           | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance) 
                                               << 2U) 
                                              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc 
        = Vmain__ConstPool__TABLE_h97873ec7_0[__Vtableidx5];
    if ((2U & Vmain__ConstPool__TABLE_h179527bd_0[__Vtableidx5])) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay 
            = Vmain__ConstPool__TABLE_h164a10d3_0[__Vtableidx5];
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5) 
         & (IData)(vlSelf->main__DOT__swic__DOT__sys_we))) {
        vlSelf->main__DOT__swic__DOT__mtc_int = (1U 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->main__DOT__swic__DOT__sys_data)) 
                                                            >> 0x20U)));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data 
            = vlSelf->main__DOT__swic__DOT__sys_data;
    } else if (vlSelf->main__DOT__swic__DOT__cmd_halt) {
        vlSelf->main__DOT__swic__DOT__mtc_int = 0U;
    } else {
        vlSelf->main__DOT__swic__DOT__mtc_int = (1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((1ULL 
                                                                + (QData)((IData)(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data))) 
                                                               >> 0x20U))));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data 
            = ((IData)(1U) + vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data);
    }
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy) {
        if (((((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb)) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall))) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full))) 
             & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last) 
                | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid)))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[1U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[1U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[2U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[2U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[3U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[3U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[4U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[4U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[5U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[5U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[6U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[6U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[7U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[7U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[8U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[8U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[9U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[9U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xaU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xaU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xbU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xbU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xcU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xcU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xdU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xdU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xeU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xeU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xfU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xfU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[1U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[2U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[3U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[4U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[5U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[6U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[7U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[8U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[9U] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xaU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xbU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xcU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xdU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xeU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xfU] 
                = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU];
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel 
                = (((QData)((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[2U])));
        }
    } else {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[1U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[2U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[3U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[4U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[5U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[6U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[7U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[8U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[9U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xaU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xbU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xcU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xdU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xeU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data[0xfU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[1U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[2U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[3U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[4U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[5U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[6U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[7U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[8U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[9U] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xaU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xbU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xcU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xdU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xeU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xfU] = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel = 0ULL;
    }
    vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data 
        = ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__read_address)
            ? ((0x10U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe))
                ? vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem
                : vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data)
            : (0xa00000U | (((~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                 >> 2U)) << 0x1fU) 
                            | ((0x40000000U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                               << 0x1aU)) 
                               | (((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered) 
                                   << 0x1dU) | (((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed) 
                                                 << 0x1cU) 
                                                | ((0x8000000U 
                                                    & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                                       << 0x1aU)) 
                                                   | ((0x4000000U 
                                                       & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                                          << 0x1aU)) 
                                                      | (((0U 
                                                           == (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr)) 
                                                          << 0x19U) 
                                                         | vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff)))))))));
    vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data 
        = ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__read_address)
            ? ((0x10U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe))
                ? vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem
                : vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data)
            : (0xa00000U | (((~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                 >> 2U)) << 0x1fU) 
                            | ((0x40000000U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                               << 0x1aU)) 
                               | (((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered) 
                                   << 0x1dU) | (((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed) 
                                                 << 0x1cU) 
                                                | ((0x8000000U 
                                                    & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                                       << 0x1aU)) 
                                                   | ((0x4000000U 
                                                       & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                                          << 0x1aU)) 
                                                      | (((0U 
                                                           == (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr)) 
                                                          << 0x19U) 
                                                         | vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff)))))))));
    vlSelf->main__DOT__i2cscopei__DOT__o_bus_data = 
        ((IData)(vlSelf->main__DOT__i2cscopei__DOT__read_address)
          ? ((0x10U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe))
              ? vlSelf->main__DOT__i2cscopei__DOT__nxt_mem
              : vlSelf->main__DOT__i2cscopei__DOT__qd_data)
          : (0xa00000U | (((~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                               >> 2U)) << 0x1fU) | 
                          ((0x40000000U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                           << 0x1aU)) 
                           | (((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered) 
                               << 0x1dU) | (((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_primed) 
                                             << 0x1cU) 
                                            | ((0x8000000U 
                                                & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                                   << 0x1aU)) 
                                               | ((0x4000000U 
                                                   & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                                      << 0x1aU)) 
                                                  | (((0U 
                                                       == (IData)(vlSelf->main__DOT__i2cscopei__DOT__raddr)) 
                                                      << 0x19U) 
                                                     | vlSelf->main__DOT__i2cscopei__DOT__br_holdoff)))))))));
    vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data 
        = ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__read_address)
            ? ((0x10U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe))
                ? vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem
                : vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data)
            : (0xa00000U | (((~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                 >> 2U)) << 0x1fU) 
                            | ((0x40000000U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                               << 0x1aU)) 
                               | (((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered) 
                                   << 0x1dU) | (((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed) 
                                                 << 0x1cU) 
                                                | ((0x8000000U 
                                                    & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                                       << 0x1aU)) 
                                                   | ((0x4000000U 
                                                       & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                                          << 0x1aU)) 
                                                      | (((0U 
                                                           == (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr)) 
                                                          << 0x19U) 
                                                         | vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff)))))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb 
        = ((~ ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid) 
              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid)));
    if (((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5) 
         & (IData)(vlSelf->main__DOT__swic__DOT__sys_we))) {
        vlSelf->main__DOT__swic__DOT__uic_int = (1U 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->main__DOT__swic__DOT__sys_data)) 
                                                            >> 0x20U)));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data 
            = vlSelf->main__DOT__swic__DOT__sys_data;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__cpu_i_count) 
                & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                   >> 1U))) {
        vlSelf->main__DOT__swic__DOT__uic_int = (1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((1ULL 
                                                                + (QData)((IData)(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data))) 
                                                               >> 0x20U))));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data 
            = ((IData)(1U) + vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data);
    } else {
        vlSelf->main__DOT__swic__DOT__uic_int = 0U;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5) 
         & (IData)(vlSelf->main__DOT__swic__DOT__sys_we))) {
        vlSelf->main__DOT__swic__DOT__upc_int = (1U 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->main__DOT__swic__DOT__sys_data)) 
                                                            >> 0x20U)));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data 
            = vlSelf->main__DOT__swic__DOT__sys_data;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__cpu_pf_stall) 
                & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                   >> 1U))) {
        vlSelf->main__DOT__swic__DOT__upc_int = (1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((1ULL 
                                                                + (QData)((IData)(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data))) 
                                                               >> 0x20U))));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data 
            = ((IData)(1U) + vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data);
    } else {
        vlSelf->main__DOT__swic__DOT__upc_int = 0U;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5) 
         & (IData)(vlSelf->main__DOT__swic__DOT__sys_we))) {
        vlSelf->main__DOT__swic__DOT__uoc_int = (1U 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->main__DOT__swic__DOT__sys_data)) 
                                                            >> 0x20U)));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data 
            = vlSelf->main__DOT__swic__DOT__sys_data;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__cpu_op_stall) 
                & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                   >> 1U))) {
        vlSelf->main__DOT__swic__DOT__uoc_int = (1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((1ULL 
                                                                + (QData)((IData)(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data))) 
                                                               >> 0x20U))));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data 
            = ((IData)(1U) + vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data);
    } else {
        vlSelf->main__DOT__swic__DOT__uoc_int = 0U;
    }
    vlSelf->main__DOT__w_sirefclk_unused_stb = (1U 
                                                & (IData)(
                                                          (1ULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->main__DOT__clock_generator__DOT__counter
                                                                               [0U])) 
                                                               + (QData)((IData)(
                                                                                (vlSelf->main__DOT__clock_generator__DOT__r_delay 
                                                                                << 3U)))) 
                                                              >> 0x20U))));
    vlSelf->__Vdlyvval__main__DOT__clock_generator__DOT__counter__v7 
        = (vlSelf->main__DOT__clock_generator__DOT__counter
           [0U] + (vlSelf->main__DOT__clock_generator__DOT__r_delay 
                   << 3U));
    vlSelf->main__DOT__w_led = ((IData)(vlSelf->main__DOT__spioi__DOT__led_demo)
                                 ? (IData)(vlSelf->main__DOT__spioi__DOT__bounced)
                                 : (IData)(vlSelf->main__DOT__spioi__DOT__r_led));
    if (((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5) 
         & (IData)(vlSelf->main__DOT__swic__DOT__sys_we))) {
        vlSelf->main__DOT__swic__DOT__utc_int = (1U 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->main__DOT__swic__DOT__sys_data)) 
                                                            >> 0x20U)));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data 
            = vlSelf->main__DOT__swic__DOT__sys_data;
    } else if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                      & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                         >> 1U)))) {
        vlSelf->main__DOT__swic__DOT__utc_int = (1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((1ULL 
                                                                + (QData)((IData)(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data))) 
                                                               >> 0x20U))));
        vlSelf->__Vdly__main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data 
            = ((IData)(1U) + vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data);
    } else {
        vlSelf->main__DOT__swic__DOT__utc_int = 0U;
    }
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))) 
                | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err)) 
               | ((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc) 
                  & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                     >> 3U))))) {
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr = 0U;
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb = 0U;
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel = 0ULL;
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we = 0U;
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
    } else if ((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                      & (~ (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))))) {
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr 
            = (0x3fffffU & (IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                    >> 4U)));
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb = 1U;
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel 
            = ((0x3fU >= (0x3cU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr) 
                                   << 2U))) ? (((QData)((IData)(
                                                                (0xfU 
                                                                 & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)))) 
                                                << 0x3cU) 
                                               >> (0x3cU 
                                                   & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr) 
                                                      << 2U)))
                : 0ULL);
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we 
            = (1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe));
        __Vtemp_hcfafa750__0[0U] = Vmain__ConstPool__CONST_hbd99daea_0[0U];
        __Vtemp_hcfafa750__0[1U] = Vmain__ConstPool__CONST_hbd99daea_0[1U];
        __Vtemp_hcfafa750__0[2U] = Vmain__ConstPool__CONST_hbd99daea_0[2U];
        __Vtemp_hcfafa750__0[3U] = Vmain__ConstPool__CONST_hbd99daea_0[3U];
        __Vtemp_hcfafa750__0[4U] = Vmain__ConstPool__CONST_hbd99daea_0[4U];
        __Vtemp_hcfafa750__0[5U] = Vmain__ConstPool__CONST_hbd99daea_0[5U];
        __Vtemp_hcfafa750__0[6U] = Vmain__ConstPool__CONST_hbd99daea_0[6U];
        __Vtemp_hcfafa750__0[7U] = Vmain__ConstPool__CONST_hbd99daea_0[7U];
        __Vtemp_hcfafa750__0[8U] = Vmain__ConstPool__CONST_hbd99daea_0[8U];
        __Vtemp_hcfafa750__0[9U] = Vmain__ConstPool__CONST_hbd99daea_0[9U];
        __Vtemp_hcfafa750__0[0xaU] = Vmain__ConstPool__CONST_hbd99daea_0[0xaU];
        __Vtemp_hcfafa750__0[0xbU] = Vmain__ConstPool__CONST_hbd99daea_0[0xbU];
        __Vtemp_hcfafa750__0[0xcU] = Vmain__ConstPool__CONST_hbd99daea_0[0xcU];
        __Vtemp_hcfafa750__0[0xdU] = Vmain__ConstPool__CONST_hbd99daea_0[0xdU];
        __Vtemp_hcfafa750__0[0xeU] = Vmain__ConstPool__CONST_hbd99daea_0[0xeU];
        __Vtemp_hcfafa750__0[0xfU] = (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata);
        VL_SHIFTR_WWI(512,512,32, __Vtemp_haaa3c8b7__0, __Vtemp_hcfafa750__0, 
                      (0x1e0U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr) 
                                 << 5U)));
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0U] 
            = __Vtemp_haaa3c8b7__0[0U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[1U] 
            = __Vtemp_haaa3c8b7__0[1U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[2U] 
            = __Vtemp_haaa3c8b7__0[2U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[3U] 
            = __Vtemp_haaa3c8b7__0[3U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[4U] 
            = __Vtemp_haaa3c8b7__0[4U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[5U] 
            = __Vtemp_haaa3c8b7__0[5U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[6U] 
            = __Vtemp_haaa3c8b7__0[6U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[7U] 
            = __Vtemp_haaa3c8b7__0[7U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[8U] 
            = __Vtemp_haaa3c8b7__0[8U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[9U] 
            = __Vtemp_haaa3c8b7__0[9U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xaU] 
            = __Vtemp_haaa3c8b7__0[0xaU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xbU] 
            = __Vtemp_haaa3c8b7__0[0xbU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xcU] 
            = __Vtemp_haaa3c8b7__0[0xcU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xdU] 
            = __Vtemp_haaa3c8b7__0[0xdU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xeU] 
            = __Vtemp_haaa3c8b7__0[0xeU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xfU] 
            = __Vtemp_haaa3c8b7__0[0xfU];
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb = 0U;
    }
    if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid) 
          & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce)) 
         & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc 
            = (0xfffffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc 
                             - (IData)(4U)));
    }
    if (vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read) {
        vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data 
            = vlSelf->main__DOT__console__DOT__txfifo__DOT__fifo
            [vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next];
    }
    if (vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read) {
        vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data 
            = vlSelf->main__DOT__console__DOT__rxfifo__DOT__fifo
            [vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next];
    }
    vlSelf->main__DOT__uart_debug = ((0x7fffU & vlSelf->main__DOT__uart_debug) 
                                     | (((IData)(vlSelf->main__DOT__console__DOT__txf_status) 
                                         << 0x14U) 
                                        | ((0xf0000U 
                                            & ((IData)(vlSelf->main__DOT__console__DOT__rxf_status) 
                                               << 0x10U)) 
                                           | (0x8000U 
                                              & ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)) 
                                                 << 0xfU)))));
    vlSelf->main__DOT__uart_debug = ((0xffff80ffU & vlSelf->main__DOT__uart_debug) 
                                     | (0x7f00U & (
                                                   (((IData)(
                                                             (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                                               >> 6U) 
                                                              & (0xc00000U 
                                                                 == 
                                                                 (0xc00000U 
                                                                  & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U])))) 
                                                     & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                         >> 6U) 
                                                        & (IData)(
                                                                  (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                                   >> 0x18U))))
                                                     ? 
                                                    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]
                                                     : 
                                                    ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)
                                                      ? 0U
                                                      : (IData)(vlSelf->main__DOT__w_console_tx_data))) 
                                                   << 8U)));
    vlSelf->main__DOT__uart_debug = ((0xffffff00U & vlSelf->main__DOT__uart_debug) 
                                     | (((IData)(vlSelf->main__DOT__w_console_rx_stb) 
                                         << 7U) | ((IData)(vlSelf->main__DOT__w_console_rx_stb)
                                                    ? (IData)(vlSelf->main__DOT__w_console_rx_data)
                                                    : (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_data))));
    vlSelf->main__DOT__wb32_uart_idata = ((2U & (IData)(vlSelf->main__DOT__console__DOT__r_wb_addr))
                                           ? ((1U & (IData)(vlSelf->main__DOT__console__DOT__r_wb_addr))
                                               ? (((IData)(vlSelf->__VdfgTmp_ha46ae6a3__0) 
                                                   << 0xdU) 
                                                  | ((((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write)) 
                                                       & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write)) 
                                                      << 0xcU) 
                                                     | ((0x400U 
                                                         & ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)) 
                                                            << 0xaU)) 
                                                        | (((IData)(vlSelf->main__DOT__console__DOT____VdfgTmp_h60af6732__0) 
                                                            << 8U) 
                                                           | ((IData)(vlSelf->main__DOT__console__DOT____VdfgTmp_h60af6732__0)
                                                               ? (IData)(vlSelf->main__DOT__console__DOT__txf_wb_data)
                                                               : 0U)))))
                                               : ((
                                                   ((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                                    & (IData)(vlSelf->main__DOT__w_console_rx_stb)) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_data))))
                                           : ((1U & (IData)(vlSelf->main__DOT__console__DOT__r_wb_addr))
                                               ? (((IData)(vlSelf->main__DOT__console__DOT__txf_status) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelf->main__DOT__console__DOT__rxf_status))
                                               : 0U));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
           & ((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state))
               ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack)
               : ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid) 
                  | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid))));
    if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) 
         | (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe 
            = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe) 
               & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem));
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                   == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe = 0U;
    }
    vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda 
        = ((IData)(vlSelf->i_reset) | ((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual)
                                        ? (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda)
                                        : (IData)(vlSelf->main__DOT__i2ci__DOT__w_sda)));
    vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl 
        = ((IData)(vlSelf->i_reset) | ((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual)
                                        ? (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl)
                                        : (IData)(vlSelf->main__DOT__i2ci__DOT__w_scl)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc 
        = (((((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                           >> 9U)) == (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                                   >> 9U))) 
             & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
                 == (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                 >> 9U))) & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                             >> (7U 
                                                 & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                    >> 9U))))) 
            & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result))) 
           & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal)));
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr = 0x2000000U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid) 
                | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu) 
                << 2U) | ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu) 
                            | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div)) 
                           << 1U) | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem) 
                                     | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div))));
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index 
        = (3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index));
    if (((IData)(vlSelf->main__DOT__w_console_rx_stb) 
         & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
            | ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read) 
               & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next) 
                  == (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))))) {
        vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write 
            = vlSelf->main__DOT__w_console_rx_data;
    }
    if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))) {
        __Vtemp_hc1851150__0[0U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x30U];
        __Vtemp_hc1851150__0[1U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x31U];
        __Vtemp_hc1851150__0[2U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x32U];
        __Vtemp_hc1851150__0[3U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x33U];
        __Vtemp_hc1851150__0[4U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x34U];
        __Vtemp_hc1851150__0[5U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x35U];
        __Vtemp_hc1851150__0[6U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x36U];
        __Vtemp_hc1851150__0[7U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x37U];
        __Vtemp_hc1851150__0[8U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x38U];
        __Vtemp_hc1851150__0[9U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x39U];
        __Vtemp_hc1851150__0[0xaU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3aU];
        __Vtemp_hc1851150__0[0xbU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3bU];
        __Vtemp_hc1851150__0[0xcU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3cU];
        __Vtemp_hc1851150__0[0xdU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3dU];
        __Vtemp_hc1851150__0[0xeU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3eU];
        __Vtemp_hc1851150__0[0xfU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x3fU];
        VL_SHIFTL_WWI(512,512,32, __Vtemp_hfebc76e7__0, __Vtemp_hc1851150__0, 
                      (vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem
                       [(0x1fU & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr))] 
                       << 5U));
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0U] 
            = __Vtemp_hfebc76e7__0[0U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[1U] 
            = __Vtemp_hfebc76e7__0[1U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[2U] 
            = __Vtemp_hfebc76e7__0[2U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[3U] 
            = __Vtemp_hfebc76e7__0[3U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[4U] 
            = __Vtemp_hfebc76e7__0[4U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[5U] 
            = __Vtemp_hfebc76e7__0[5U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[6U] 
            = __Vtemp_hfebc76e7__0[6U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[7U] 
            = __Vtemp_hfebc76e7__0[7U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[8U] 
            = __Vtemp_hfebc76e7__0[8U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[9U] 
            = __Vtemp_hfebc76e7__0[9U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xaU] 
            = __Vtemp_hfebc76e7__0[0xaU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xbU] 
            = __Vtemp_hfebc76e7__0[0xbU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xcU] 
            = __Vtemp_hfebc76e7__0[0xcU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xdU] 
            = __Vtemp_hfebc76e7__0[0xdU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xeU] 
            = __Vtemp_hfebc76e7__0[0xeU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU] 
            = __Vtemp_hfebc76e7__0[0xfU];
    }
    vlSelf->main__DOT__r_wb32_sio_data = ((0x400U & 
                                           vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U])
                                           ? 0x20230827U
                                           : ((0x200U 
                                               & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U])
                                               ? ((0x100U 
                                                   & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U])
                                                   ? 
                                                  (((IData)(vlSelf->main__DOT__spioi__DOT__led_demo) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw) 
                                                          << 8U) 
                                                         | (IData)(vlSelf->main__DOT__spioi__DOT__r_led))))
                                                   : 
                                                  (((~ (IData)(vlSelf->main__DOT__r_sirefclk_en)) 
                                                    << 0x1fU) 
                                                   | vlSelf->main__DOT__r_sirefclk_data))
                                               : ((0x100U 
                                                   & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U])
                                                   ? 
                                                  (((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->o_gpio))
                                                   : 0x93822U)));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled)) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending))))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
            = (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                            >> 6U));
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv 
            = (1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v) 
                     >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                               >> 9U))));
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable 
            = (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn)) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable)) 
               & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce));
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending 
            = ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable)) 
               & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow) 
                   | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr)) 
                  | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb)));
    } else {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending) 
                & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc)) 
                   | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err)))) 
               & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag 
                   != vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_ctag) 
                  | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv))));
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv 
            = (1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v) 
                     >> (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cline)));
    }
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid 
        = ((((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid)) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid))) 
              & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag 
                 == vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_ctag)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv)) 
            & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending));
    if (((((vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag 
            == vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_ctag) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv)) 
          & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable)) 
         & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid = 1U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_ctag;
    } else if ((((3U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state)) 
                 & ((7U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag) 
                    == (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                              >> 3U)))) & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack) 
                                           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err)))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid = 0U;
    }
    vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss 
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
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->__Vdly__main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__u_jiffies__DOT__r_counter = 0U;
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks = 0U;
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__u_watchdog__DOT__r_zero = 1U;
        vlSelf->__Vdly__main__DOT__swic__DOT__u_watchdog__DOT__r_value = 0U;
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_zero = 1U;
        vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_zero = 1U;
        vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_zero = 1U;
        vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_value = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_value = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_value = 0U;
        __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner = 1U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 0U;
    } else {
        if (vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints) {
            vlSelf->__Vdly__main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable 
                = (0x7fffU & ((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable) 
                              | (vlSelf->main__DOT__swic__DOT__sys_data 
                                 >> 0x10U)));
        } else if (vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints) {
            vlSelf->__Vdly__main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable 
                = ((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable) 
                   & (~ (vlSelf->main__DOT__swic__DOT__sys_data 
                         >> 0x10U)));
        }
        if (vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints) {
            vlSelf->__Vdly__main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable 
                = (0x7fffU & ((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable) 
                              | (vlSelf->main__DOT__swic__DOT__sys_data 
                                 >> 0x10U)));
        } else if (vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints) {
            vlSelf->__Vdly__main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable 
                = ((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable) 
                   & (~ (vlSelf->main__DOT__swic__DOT__sys_data 
                         >> 0x10U)));
        }
        vlSelf->__Vdly__main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state 
            = ((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write)
                ? ((IData)(vlSelf->main__DOT__swic__DOT__main_int_vector) 
                   | ((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state) 
                      & (~ vlSelf->main__DOT__swic__DOT__sys_data)))
                : ((IData)(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state) 
                   | (IData)(vlSelf->main__DOT__swic__DOT__main_int_vector)));
        vlSelf->__Vdly__main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state 
            = ((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write)
                ? ((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
                   | ((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state) 
                      & (~ vlSelf->main__DOT__swic__DOT__sys_data)))
                : ((IData)(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state) 
                   | (IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector)));
        if ((0U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack = 0U;
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack = 1U;
            } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack = 0U;
            } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
                        & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable)))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack = 1U;
            }
        } else if ((3U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack)
                    ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack) 
                       | (3U == (3U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr) 
                                       >> 1U)))) : 
                   ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack) 
                    | (7U == (7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr)))));
        } else if ((1U == (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
                            << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack)))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack 
                = (2U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending));
        } else if ((2U == (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
                            << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack)))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack 
                = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc)) 
                         | (0U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending))));
        }
        if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__u_jiffies__DOT__r_counter 
                = ((IData)(1U) + vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter);
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks 
                = ((IData)(1U) + vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks);
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv) 
             & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag) 
                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                      >> 0xbU));
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag) 
                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                      >> 0xaU));
            __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i) 
                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                      >> 8U));
        } else {
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)))) {
                __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag = 1U;
            }
            if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)))) {
                __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag = 1U;
            }
            if ((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal)) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)))) {
                __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i = 1U;
            }
        }
        if (vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write) {
            vlSelf->__Vdly__main__DOT__swic__DOT__u_watchdog__DOT__r_zero 
                = (0U == (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data));
            vlSelf->__Vdly__main__DOT__swic__DOT__u_watchdog__DOT__r_value 
                = (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data);
        } else {
            if (((IData)(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))) {
                if ((1U == vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value)) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__u_watchdog__DOT__r_zero = 1U;
                }
            }
            if (((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero)))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__u_watchdog__DOT__r_value 
                        = (0x7fffffffU & (vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value 
                                          - (IData)(1U)));
                }
            }
        }
        if (vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write) {
            vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_zero 
                = (0U == (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data));
            vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_value 
                = (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data);
        } else {
            if (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))) {
                if ((1U == vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value)) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_zero = 1U;
                } else if (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero) 
                            & (IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_zero = 0U;
                }
            }
            if (((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running))) {
                if (vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero) {
                    if (vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) {
                        vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_value 
                            = vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count;
                    }
                } else {
                    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_c__DOT__r_value 
                        = (0x7fffffffU & (vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value 
                                          - (IData)(1U)));
                }
            }
        }
        if (vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write) {
            vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_zero 
                = (0U == (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data));
            vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_value 
                = (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data);
        } else {
            if (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))) {
                if ((1U == vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_zero = 1U;
                } else if (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero) 
                            & (IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_zero = 0U;
                }
            }
            if (((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running))) {
                if (vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero) {
                    if (vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) {
                        vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_value 
                            = vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count;
                    }
                } else {
                    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_b__DOT__r_value 
                        = (0x7fffffffU & (vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value 
                                          - (IData)(1U)));
                }
            }
        }
        if (vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write) {
            vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_zero 
                = (0U == (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data));
            vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_value 
                = (0x7fffffffU & vlSelf->main__DOT__swic__DOT__sys_data);
        } else {
            if (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))) {
                if ((1U == vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_zero = 1U;
                } else if (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero) 
                            & (IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_zero = 0U;
                }
            }
            if (((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running))) {
                if (vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero) {
                    if (vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) {
                        vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_value 
                            = vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count;
                    }
                } else {
                    vlSelf->__Vdly__main__DOT__swic__DOT__u_timer_a__DOT__r_value 
                        = (0x7fffffffU & (vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value 
                                          - (IData)(1U)));
                }
            }
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
             & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en 
                = (1U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                         >> 7U));
        }
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) {
            if ((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl)) 
                  & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl))) 
                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb))) {
                vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner = 0U;
            }
        } else {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner = 1U;
        }
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl 
                = (0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                             >> 0x18U));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl 
                = (0xffU != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                             >> 0x18U));
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl = 0U;
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl) 
             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl = 0U;
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock)))))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl = 0U;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl = 0U;
        }
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF 
                = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond)) 
                   & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal)));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR 
                = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond)) 
                   & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal)));
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF = 0U;
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted) 
                   & ((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                      & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall))));
        }
        if ((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid)) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase 
                = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase;
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
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
        = __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir 
        = __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_dir;
    vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner 
        = __Vdly__main__DOT__spioi__DOT__knightrider__DOT__led_owner;
    vlSelf->main__DOT__txv__DOT__baud_counter = __Vdly__main__DOT__txv__DOT__baud_counter;
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr 
        = __Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr;
    if (__Vdlyvset__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[__Vdlyvdim0__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0] 
            = __Vdlyvval__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem__v0;
    }
    vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value 
        = __Vdly__main__DOT__swic__DOT__u_watchbus__DOT__r_value;
    vlSelf->main__DOT__genbus__DOT__ofifo_empty_n = __Vdly__main__DOT__genbus__DOT__ofifo_empty_n;
    vlSelf->main__DOT__rcv__DOT__baud_counter = __Vdly__main__DOT__rcv__DOT__baud_counter;
    vlSelf->main__DOT__swic__DOT__cmd_read = __Vdly__main__DOT__swic__DOT__cmd_read;
    vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit 
        = __Vdly__main__DOT__scope3_ddr3i__DOT__dr_force_inhibit;
    vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit 
        = __Vdly__main__DOT__i2cscopei__DOT__dr_force_inhibit;
    vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit 
        = __Vdly__main__DOT__scope2_ddr3i__DOT__dr_force_inhibit;
    vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit 
        = __Vdly__main__DOT__scope1_ddr3i__DOT__dr_force_inhibit;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table 
        = __Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table;
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow 
        = __Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result;
    vlSelf->main__DOT__genbus__DOT__r_wdt_timer = __Vdly__main__DOT__genbus__DOT__r_wdt_timer;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed 
        = __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_acks_needed;
    vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len 
        = __Vdly__main__DOT__genbus__DOT__runwb__DOT__r_len;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend;
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data__v0;
    }
    vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow 
        = __Vdly__main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word 
        = __Vdly__main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks;
    vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter 
        = __Vdly__main__DOT__scope3_ddr3i__DOT__holdoff_counter;
    vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter 
        = __Vdly__main__DOT__i2cscopei__DOT__holdoff_counter;
    vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter 
        = __Vdly__main__DOT__scope2_ddr3i__DOT__holdoff_counter;
    vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter 
        = __Vdly__main__DOT__scope1_ddr3i__DOT__holdoff_counter;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount 
        = __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount;
    vlSelf->main__DOT__i2ci__DOT__i2c_ckcount = __Vdly__main__DOT__i2ci__DOT__i2c_ckcount;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr 
        = __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill 
        = __Vdly__main__DOT__console__DOT__rxfifo__DOT__r_fill;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill 
        = __Vdly__main__DOT__console__DOT__txfifo__DOT__r_fill;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[1U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[2U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[3U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[4U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[5U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[6U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[7U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[8U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[9U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xaU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xbU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xcU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xdU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xeU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0xfU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr;
    if (__Vdlyvset__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0U] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][1U] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[1U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][2U] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[2U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][3U] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[3U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][4U] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[4U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][5U] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[5U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][6U] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[6U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][7U] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[7U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][8U] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[8U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][9U] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[9U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xaU] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xaU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xbU] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xbU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xcU] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xcU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xdU] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xdU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xeU] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xeU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0xfU] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0xfU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[__Vdlyvdim0__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0][0x10U] 
            = __Vdlyvval__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem__v0[0x10U];
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[4U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[5U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[6U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[7U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[8U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[9U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xaU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xbU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xcU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xdU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xeU];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU] 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[0xfU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i 
        = __Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight 
        = __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight;
    if (__Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v0) {
        vlSelf->main__DOT__wbu_xbar__DOT__grant[0U] = 0U;
    }
    if (__Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v1) {
        vlSelf->main__DOT__wbu_xbar__DOT__grant[0U] 
            = __Vdlyvval__main__DOT__wbu_xbar__DOT__grant__v1;
    }
    if (__Vdlyvset__main__DOT__wbu_xbar__DOT__grant__v2) {
        vlSelf->main__DOT__wbu_xbar__DOT__grant[0U] = 0U;
    }
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr 
        = __Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow 
        = __Vdly__main__DOT__console__DOT__rxfifo__DOT__will_overflow;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state 
        = __Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state;
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count 
        = __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count;
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight 
        = __Vdly__main__DOT__i2ci__DOT__u_fetch__DOT__inflight;
    vlSelf->main__DOT__wbwide_i2cdma_sel = __Vdly__main__DOT__wbwide_i2cdma_sel;
    vlSelf->main__DOT__u_fan__DOT__pwm_counter = __Vdly__main__DOT__u_fan__DOT__pwm_counter;
    vlSelf->main__DOT__txv__DOT__lcl_data = __Vdly__main__DOT__txv__DOT__lcl_data;
    vlSelf->main__DOT__txv__DOT__zero_baud_counter 
        = __Vdly__main__DOT__txv__DOT__zero_baud_counter;
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags__v0;
    }
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill 
        = __Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill;
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v0);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v1);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v2);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v3);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v4);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v5);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v6);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v7);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v8);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v9);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v10);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v11);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v12);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v13);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v14);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v15);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v16);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v17);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v18);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v19);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v20);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v21);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v22);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v23);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v24);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v25);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v26);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v27);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v28);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v29);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v30);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v31);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v32);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v33);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v34);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v35);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v36);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v37);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v38);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v39);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v40);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v41);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v42);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v43);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v44);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v45);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v46);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v47);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v48);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v49);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v50);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v51);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v52);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v53);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v54);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v55);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v56);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v57);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v58);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v59);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v60);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v61);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v62);
    }
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63) {
        VL_ASSIGNSEL_WI(512,8,(IData)(__Vdlyvlsb__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63), 
                        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem
                        [__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63], __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_mem__v63);
    }
    vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe 
        = __Vdly__main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe;
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0U] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][1U] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[1U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][2U] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[2U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][3U] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[3U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][4U] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[4U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][5U] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[5U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][6U] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[6U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][7U] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[7U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][8U] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[8U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][9U] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[9U];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xaU] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xaU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xbU] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xbU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xcU] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xcU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xdU] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xdU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xeU] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xeU];
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0][0xfU] 
            = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache__v0[0xfU];
    }
}
