// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


void Vmain___024root__trace_chg_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_top_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmain___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<15>/*479:0*/ Vmain__ConstPool__CONST_hbd99daea_0;
extern const VlWide<16>/*511:0*/ Vmain__ConstPool__CONST_h93e1b771_0;
extern const VlWide<18>/*575:0*/ Vmain__ConstPool__CONST_hb679b2e5_0;

void Vmain___024root__trace_chg_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<16>/*511:0*/ __Vtemp_h053daff0__0;
    VlWide<16>/*511:0*/ __Vtemp_h3711b190__0;
    VlWide<16>/*511:0*/ __Vtemp_h58eb921b__0;
    VlWide<16>/*511:0*/ __Vtemp_hc1d82fb0__0;
    VlWide<16>/*511:0*/ __Vtemp_hc1851150__0;
    VlWide<16>/*511:0*/ __Vtemp_h07963193__0;
    VlWide<16>/*511:0*/ __Vtemp_h07b62ab3__0;
    VlWide<16>/*511:0*/ __Vtemp_hd1e4c677__0;
    VlWide<16>/*511:0*/ __Vtemp_h6ddae8d1__0;
    VlWide<16>/*511:0*/ __Vtemp_hc1d82fb0__1;
    VlWide<16>/*511:0*/ __Vtemp_h6d0d1506__0;
    VlWide<17>/*543:0*/ __Vtemp_h6b3f223d__0;
    VlWide<16>/*511:0*/ __Vtemp_h01ff8f7b__0;
    VlWide<16>/*511:0*/ __Vtemp_he3c3974d__0;
    VlWide<16>/*511:0*/ __Vtemp_hcfafa750__0;
    VlWide<3>/*95:0*/ __Vtemp_h708d16f1__0;
    VlWide<64>/*2047:0*/ __Vtemp_h95b27ed2__0;
    VlWide<8>/*255:0*/ __Vtemp_h7cab7483__0;
    VlWide<32>/*1023:0*/ __Vtemp_h7899650d__0;
    VlWide<16>/*511:0*/ __Vtemp_h53a5df10__0;
    VlWide<19>/*607:0*/ __Vtemp_hb52cb2db__0;
    VlWide<16>/*511:0*/ __Vtemp_hebded4b4__0;
    VlWide<19>/*607:0*/ __Vtemp_h0a2cdfa5__0;
    VlWide<19>/*607:0*/ __Vtemp_he57bd368__0;
    VlWide<16>/*511:0*/ __Vtemp_h0964a254__0;
    VlWide<19>/*607:0*/ __Vtemp_h925b4b87__0;
    VlWide<16>/*511:0*/ __Vtemp_h5b5f8605__0;
    VlWide<19>/*607:0*/ __Vtemp_hfe9179b2__0;
    VlWide<12>/*383:0*/ __Vtemp_hdec7dd6c__0;
    VlWide<4>/*127:0*/ __Vtemp_h7c167694__0;
    VlWide<4>/*127:0*/ __Vtemp_hc5461f3d__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k),32);
        bufp->chgCData(oldp+1,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv),7);
        bufp->chgIData(oldp+2,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__k),32);
        bufp->chgCData(oldp+3,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__newv),7);
        bufp->chgIData(oldp+4,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k),32);
        bufp->chgIData(oldp+5,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__ik),32);
        bufp->chgSData(oldp+6,(vlSelf->main__DOT__wb32_xbar__DOT__requested[0]),12);
        bufp->chgBit(oldp+7,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[0]));
        bufp->chgBit(oldp+8,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[1]));
        bufp->chgBit(oldp+9,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[2]));
        bufp->chgBit(oldp+10,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[3]));
        bufp->chgBit(oldp+11,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[4]));
        bufp->chgBit(oldp+12,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[5]));
        bufp->chgBit(oldp+13,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[6]));
        bufp->chgBit(oldp+14,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[7]));
        bufp->chgBit(oldp+15,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[8]));
        bufp->chgBit(oldp+16,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[9]));
        bufp->chgBit(oldp+17,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[10]));
        bufp->chgBit(oldp+18,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[11]));
        bufp->chgBit(oldp+19,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[12]));
        bufp->chgBit(oldp+20,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[13]));
        bufp->chgBit(oldp+21,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[14]));
        bufp->chgBit(oldp+22,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[15]));
        bufp->chgIData(oldp+23,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__iM),32);
        bufp->chgCData(oldp+24,(vlSelf->main__DOT__wbu_xbar__DOT__requested[0]),2);
        bufp->chgBit(oldp+25,(vlSelf->main__DOT__wbu_xbar__DOT__sindex[0]));
        bufp->chgBit(oldp+26,(vlSelf->main__DOT__wbu_xbar__DOT__sindex[1]));
        bufp->chgBit(oldp+27,(vlSelf->main__DOT__wbu_xbar__DOT__sindex[2]));
        bufp->chgBit(oldp+28,(vlSelf->main__DOT__wbu_xbar__DOT__sindex[3]));
        bufp->chgIData(oldp+29,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__iM),32);
        bufp->chgIData(oldp+30,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__iM),32);
        bufp->chgIData(oldp+31,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__iM),32);
        bufp->chgIData(oldp+32,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__iM),32);
        bufp->chgIData(oldp+33,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__iM),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+34,(vlSelf->main__DOT____Vcellinp__ddr3_controller_inst__i_rst_n));
        bufp->chgIData(oldp+35,(vlSelf->main__DOT____Vcellinp__scope3_ddr3i____pinNumber4),31);
        bufp->chgBit(oldp+36,(vlSelf->main__DOT____Vcellinp__swic__i_reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+37,((((IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted) 
                                  << 0x1fU) | vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4)),32);
        bufp->chgIData(oldp+38,((((IData)(vlSelf->main__DOT__i2ci__DOT__half_insn) 
                                  << 0x1cU) | (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual) 
                                                << 0x18U) 
                                               | vlSelf->main__DOT__i2ci__DOT____VdfgTmp_h373818eb__0))),32);
        bufp->chgBit(oldp+39,(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN));
        bufp->chgBit(oldp+40,(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset));
        bufp->chgIData(oldp+41,(vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4),31);
        bufp->chgBit(oldp+42,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc));
        bufp->chgBit(oldp+43,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb));
        bufp->chgBit(oldp+44,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_we));
        bufp->chgCData(oldp+45,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_addr),7);
        bufp->chgIData(oldp+46,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_data),32);
        bufp->chgBit(oldp+47,(vlSelf->main__DOT__swic__DOT__cpu_op_stall));
        bufp->chgBit(oldp+48,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_op_stall) 
                               & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                  >> 1U))));
        bufp->chgBit(oldp+49,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ready));
        bufp->chgBit(oldp+50,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce));
        bufp->chgBit(oldp+51,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance));
        bufp->chgBit(oldp+52,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall));
        bufp->chgBit(oldp+53,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_stalled));
        bufp->chgBit(oldp+54,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce));
        bufp->chgBit(oldp+55,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA) 
                               & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h39e03a19__0) 
                                   & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_he857573c__0) 
                                      & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                         >> 6U))) | 
                                  (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 6U) & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd))))));
        bufp->chgBit(oldp+56,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB) 
                               & ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h39e03a19__0) 
                                    | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy)) 
                                   & (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI)) 
                                       & ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R) 
                                            == (0x1fU 
                                                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))) 
                                           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR)) 
                                          | (((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe)) 
                                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy)) 
                                             | ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy) 
                                                  | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy) 
                                                     | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy))) 
                                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg) 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B)))) 
                                                | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                                                   & (0xeU 
                                                      == 
                                                      (0xeU 
                                                       & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))))))) 
                                      | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_he857573c__0) 
                                         & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                            >> 6U)))) 
                                  | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                      >> 6U) & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd))))));
        bufp->chgBit(oldp+57,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_stall));
        bufp->chgIData(oldp+58,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v),32);
        bufp->chgIData(oldp+59,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v),32);
        bufp->chgBit(oldp+60,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce));
        bufp->chgBit(oldp+61,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall) 
                                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy)) 
                                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu)) 
                               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0))));
        bufp->chgBit(oldp+62,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce));
        bufp->chgBit(oldp+63,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_stalled));
        bufp->chgBit(oldp+64,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce));
        bufp->chgBit(oldp+65,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional));
        bufp->chgBit(oldp+66,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset));
        bufp->chgCData(oldp+67,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc),3);
        bufp->chgCData(oldp+68,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc),3);
        bufp->chgCData(oldp+69,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc),3);
        bufp->chgBit(oldp+70,(((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
                               & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
                                  & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) 
                                     & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond) 
                                        & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim) 
                                           & ((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                                                  & ((0xfU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))) 
                                                     & ((1U 
                                                         & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                                                            >> 4U)) 
                                                        == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie))))) 
                                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu)))))))));
        bufp->chgBit(oldp+71,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__this_is_a_multiply_op));
        bufp->chgBit(oldp+72,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN));
        bufp->chgBit(oldp+73,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset));
        bufp->chgBit(oldp+74,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset));
        bufp->chgCData(oldp+75,(vlSelf->main__DOT__wbu_xbar__DOT__s_stall),4);
        bufp->chgBit(oldp+76,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
        bufp->chgBit(oldp+77,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+78,((((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                  << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                            & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)))),3);
        bufp->chgCData(oldp+79,(((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                 & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest))),2);
        bufp->chgBit(oldp+80,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+81,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+82,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+83,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+84,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+85,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
        bufp->chgBit(oldp+86,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+87,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                  << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                            & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)))),3);
        bufp->chgCData(oldp+88,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                 & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest))),2);
        bufp->chgBit(oldp+89,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+90,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+91,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+92,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb));
        bufp->chgBit(oldp+93,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+94,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                  << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid))) 
                                            & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)))),3);
        bufp->chgCData(oldp+95,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid))) 
                                 & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest))),2);
        bufp->chgBit(oldp+96,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+97,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+98,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+99,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb));
        bufp->chgBit(oldp+100,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+101,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                   << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid))) 
                                             & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)))),3);
        bufp->chgCData(oldp+102,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid))) 
                                  & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest))),2);
        bufp->chgBit(oldp+103,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+104,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+105,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+106,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb));
        bufp->chgBit(oldp+107,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+108,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                   << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid))) 
                                             & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)))),3);
        bufp->chgCData(oldp+109,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid))) 
                                  & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest))),2);
        bufp->chgBit(oldp+110,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+111,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+112,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+113,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset));
        bufp->chgBit(oldp+114,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
        bufp->chgBit(oldp+115,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
        bufp->chgSData(oldp+116,((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                   << 0xcU) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),13);
        bufp->chgSData(oldp+117,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),12);
        bufp->chgBit(oldp+118,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+119,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+120,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+121,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+122,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+123,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__11__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+124,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+125,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+126,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+127,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+128,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+129,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+130,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+131,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+132,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+133,(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
        bufp->chgBit(oldp+134,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
        bufp->chgBit(oldp+135,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+136,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
        bufp->chgBit(oldp+137,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+138,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+139,(vlSelf->main__DOT__scope1_ddr3_int));
        bufp->chgBit(oldp+140,(vlSelf->main__DOT__scope2_ddr3_int));
        bufp->chgBit(oldp+141,((1U & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                      >> 5U))));
        bufp->chgBit(oldp+142,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)))));
        bufp->chgBit(oldp+143,((1U & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                      >> 5U))));
        bufp->chgBit(oldp+144,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)))));
        bufp->chgBit(oldp+145,(vlSelf->main__DOT__i2cscope_int));
        bufp->chgBit(oldp+146,(vlSelf->main__DOT__scope3_ddr3_int));
        bufp->chgBit(oldp+147,(vlSelf->main__DOT__gpio_int));
        bufp->chgBit(oldp+148,(vlSelf->main__DOT__spio_int));
        bufp->chgBit(oldp+149,(vlSelf->main__DOT__r_sirefclk_en));
        bufp->chgIData(oldp+150,(vlSelf->main__DOT__r_sirefclk_data),30);
        bufp->chgBit(oldp+151,(vlSelf->main__DOT__w_sirefclk_unused_stb));
        bufp->chgBit(oldp+152,(vlSelf->main__DOT__r_sirefclk_ack));
        bufp->chgBit(oldp+153,((1U & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+154,(vlSelf->main__DOT__i2c_valid));
        bufp->chgBit(oldp+155,(vlSelf->main__DOT__i2c_ready));
        bufp->chgBit(oldp+156,(vlSelf->main__DOT__i2c_last));
        bufp->chgCData(oldp+157,(vlSelf->main__DOT__i2c_data),8);
        bufp->chgCData(oldp+158,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid),2);
        bufp->chgBit(oldp+159,(vlSelf->main__DOT__w_console_rx_stb));
        bufp->chgBit(oldp+160,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)))));
        bufp->chgBit(oldp+161,(vlSelf->main__DOT__w_console_busy));
        bufp->chgCData(oldp+162,(vlSelf->main__DOT__w_console_rx_data),7);
        bufp->chgCData(oldp+163,(vlSelf->main__DOT__w_console_tx_data),7);
        bufp->chgIData(oldp+164,(vlSelf->main__DOT__uart_debug),32);
        bufp->chgBit(oldp+165,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb));
        bufp->chgBit(oldp+166,(vlSelf->main__DOT__raw_cpu_dbg_ack));
        bufp->chgSData(oldp+167,((((IData)(vlSelf->main__DOT__gpio_int) 
                                   << 0xfU) | (((IData)(vlSelf->main__DOT__scope3_ddr3_int) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->main__DOT__i2cscope_int) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & ((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)) 
                                                            << 0xbU)) 
                                                        | (((IData)(vlSelf->main__DOT__scope2_ddr3_int) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->main__DOT__scope1_ddr3_int) 
                                                               << 9U) 
                                                              | (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h29ee39ef__0))))))))),16);
        bufp->chgBit(oldp+168,(vlSelf->main__DOT__zip_cpu_int));
        bufp->chgCData(oldp+169,(vlSelf->main__DOT__wbu_rx_data),8);
        bufp->chgCData(oldp+170,(vlSelf->main__DOT__genbus__DOT__ps_data),8);
        bufp->chgBit(oldp+171,(vlSelf->main__DOT__wbu_rx_stb));
        bufp->chgBit(oldp+172,(vlSelf->main__DOT__genbus__DOT__ps_full));
        bufp->chgBit(oldp+173,(vlSelf->main__DOT__txv__DOT__r_busy));
        bufp->chgBit(oldp+174,(vlSelf->main__DOT__genbus__DOT__r_wdt_reset));
        bufp->chgCData(oldp+175,(vlSelf->main__DOT__w_led),8);
        bufp->chgSData(oldp+176,((((IData)(vlSelf->main__DOT__spio_int) 
                                   << 8U) | ((0x80U 
                                              & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                                 << 2U)) 
                                             | (0x40U 
                                                & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                                   << 1U))))),15);
        bufp->chgSData(oldp+177,((((IData)(vlSelf->main__DOT__gpio_int) 
                                   << 0xeU) | (((IData)(vlSelf->main__DOT__scope3_ddr3_int) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->main__DOT__i2cscope_int) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & ((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)) 
                                                            << 0xaU)) 
                                                        | (((IData)(vlSelf->main__DOT__scope2_ddr3_int) 
                                                            << 9U) 
                                                           | ((IData)(vlSelf->main__DOT__scope1_ddr3_int) 
                                                              << 8U)))))))),15);
        bufp->chgBit(oldp+178,(vlSelf->main__DOT__wbwide_i2cdma_cyc));
        bufp->chgBit(oldp+179,(vlSelf->main__DOT__wbwide_i2cdma_stb));
        bufp->chgIData(oldp+180,(vlSelf->main__DOT__wbwide_i2cdma_addr),22);
        bufp->chgWData(oldp+181,(vlSelf->main__DOT__wbwide_i2cdma_data),512);
        bufp->chgQData(oldp+197,(vlSelf->main__DOT__wbwide_i2cdma_sel),64);
        bufp->chgBit(oldp+199,((1U & (IData)(vlSelf->__VdfgTmp_h503d14d1__0))));
        bufp->chgBit(oldp+200,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))));
        bufp->chgBit(oldp+201,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))));
        __Vtemp_h053daff0__0[0U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0U];
        __Vtemp_h053daff0__0[1U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[1U];
        __Vtemp_h053daff0__0[2U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[2U];
        __Vtemp_h053daff0__0[3U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[3U];
        __Vtemp_h053daff0__0[4U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[4U];
        __Vtemp_h053daff0__0[5U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[5U];
        __Vtemp_h053daff0__0[6U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[6U];
        __Vtemp_h053daff0__0[7U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[7U];
        __Vtemp_h053daff0__0[8U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[8U];
        __Vtemp_h053daff0__0[9U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[9U];
        __Vtemp_h053daff0__0[0xaU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xaU];
        __Vtemp_h053daff0__0[0xbU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xbU];
        __Vtemp_h053daff0__0[0xcU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xcU];
        __Vtemp_h053daff0__0[0xdU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xdU];
        __Vtemp_h053daff0__0[0xeU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xeU];
        __Vtemp_h053daff0__0[0xfU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0xfU];
        bufp->chgWData(oldp+202,(__Vtemp_h053daff0__0),512);
        bufp->chgBit(oldp+218,(vlSelf->main__DOT__wbwide_i2cm_cyc));
        bufp->chgBit(oldp+219,(vlSelf->main__DOT__wbwide_i2cm_stb));
        bufp->chgIData(oldp+220,(vlSelf->main__DOT__wbwide_i2cm_addr),22);
        bufp->chgBit(oldp+221,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+222,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                      >> 1U))));
        bufp->chgBit(oldp+223,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                                      >> 1U))));
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
        bufp->chgWData(oldp+224,(__Vtemp_h3711b190__0),512);
        bufp->chgBit(oldp+240,(vlSelf->main__DOT__wbwide_zip_cyc));
        bufp->chgBit(oldp+241,(vlSelf->main__DOT__wbwide_zip_stb));
        bufp->chgBit(oldp+242,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                       ? (IData)(vlSelf->main__DOT__swic__DOT__cpu_we)
                                       : (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))))));
        bufp->chgIData(oldp+243,(vlSelf->main__DOT__wbwide_zip_addr),22);
        if (vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner) {
            __Vtemp_h58eb921b__0[0U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0U];
            __Vtemp_h58eb921b__0[1U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[1U];
            __Vtemp_h58eb921b__0[2U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[2U];
            __Vtemp_h58eb921b__0[3U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[3U];
            __Vtemp_h58eb921b__0[4U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[4U];
            __Vtemp_h58eb921b__0[5U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[5U];
            __Vtemp_h58eb921b__0[6U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[6U];
            __Vtemp_h58eb921b__0[7U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[7U];
            __Vtemp_h58eb921b__0[8U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[8U];
            __Vtemp_h58eb921b__0[9U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[9U];
            __Vtemp_h58eb921b__0[0xaU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xaU];
            __Vtemp_h58eb921b__0[0xbU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xbU];
            __Vtemp_h58eb921b__0[0xcU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xcU];
            __Vtemp_h58eb921b__0[0xdU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xdU];
            __Vtemp_h58eb921b__0[0xeU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xeU];
            __Vtemp_h58eb921b__0[0xfU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xfU];
        } else {
            __Vtemp_h58eb921b__0[0U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0U];
            __Vtemp_h58eb921b__0[1U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[1U];
            __Vtemp_h58eb921b__0[2U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[2U];
            __Vtemp_h58eb921b__0[3U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[3U];
            __Vtemp_h58eb921b__0[4U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[4U];
            __Vtemp_h58eb921b__0[5U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[5U];
            __Vtemp_h58eb921b__0[6U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[6U];
            __Vtemp_h58eb921b__0[7U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[7U];
            __Vtemp_h58eb921b__0[8U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[8U];
            __Vtemp_h58eb921b__0[9U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[9U];
            __Vtemp_h58eb921b__0[0xaU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xaU];
            __Vtemp_h58eb921b__0[0xbU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xbU];
            __Vtemp_h58eb921b__0[0xcU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xcU];
            __Vtemp_h58eb921b__0[0xdU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xdU];
            __Vtemp_h58eb921b__0[0xeU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xeU];
            __Vtemp_h58eb921b__0[0xfU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xfU];
        }
        bufp->chgWData(oldp+244,(__Vtemp_h58eb921b__0),512);
        bufp->chgQData(oldp+260,(((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                   ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                       ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                       : 0xffffffffffffffffULL)
                                   : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                       ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                       : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel))),64);
        bufp->chgBit(oldp+262,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+263,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                      >> 2U))));
        bufp->chgBit(oldp+264,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                                      >> 2U))));
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
        bufp->chgWData(oldp+265,(__Vtemp_hc1d82fb0__0),512);
        bufp->chgBit(oldp+281,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc));
        bufp->chgBit(oldp+282,(vlSelf->main__DOT__wbwide_wbu_arbiter_stb));
        bufp->chgBit(oldp+283,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we));
        bufp->chgIData(oldp+284,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr),22);
        bufp->chgWData(oldp+285,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data),512);
        bufp->chgQData(oldp+301,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel),64);
        bufp->chgBit(oldp+303,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+304,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                      >> 3U))));
        bufp->chgBit(oldp+305,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                                      >> 3U))));
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
        bufp->chgWData(oldp+306,(__Vtemp_hc1851150__0),512);
        bufp->chgBit(oldp+322,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe))));
        bufp->chgIData(oldp+323,((0x3fffffU & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr))),22);
        __Vtemp_h07963193__0[0U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0U];
        __Vtemp_h07963193__0[1U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[1U];
        __Vtemp_h07963193__0[2U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[2U];
        __Vtemp_h07963193__0[3U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[3U];
        __Vtemp_h07963193__0[4U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[4U];
        __Vtemp_h07963193__0[5U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[5U];
        __Vtemp_h07963193__0[6U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[6U];
        __Vtemp_h07963193__0[7U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[7U];
        __Vtemp_h07963193__0[8U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[8U];
        __Vtemp_h07963193__0[9U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[9U];
        __Vtemp_h07963193__0[0xaU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xaU];
        __Vtemp_h07963193__0[0xbU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xbU];
        __Vtemp_h07963193__0[0xcU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xcU];
        __Vtemp_h07963193__0[0xdU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xdU];
        __Vtemp_h07963193__0[0xeU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xeU];
        __Vtemp_h07963193__0[0xfU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xfU];
        bufp->chgWData(oldp+324,(__Vtemp_h07963193__0),512);
        bufp->chgQData(oldp+340,((((QData)((IData)(
                                                   vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))),64);
        bufp->chgBit(oldp+342,(vlSelf->main__DOT__wbwide_bkram_ack));
        bufp->chgWData(oldp+343,(vlSelf->main__DOT__wbwide_bkram_idata),512);
        bufp->chgBit(oldp+359,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                                      >> 1U))));
        bufp->chgIData(oldp+360,((0x3fffffU & (IData)(
                                                      (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr 
                                                       >> 0x16U)))),22);
        __Vtemp_h07b62ab3__0[0U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x10U];
        __Vtemp_h07b62ab3__0[1U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x11U];
        __Vtemp_h07b62ab3__0[2U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x12U];
        __Vtemp_h07b62ab3__0[3U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x13U];
        __Vtemp_h07b62ab3__0[4U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x14U];
        __Vtemp_h07b62ab3__0[5U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x15U];
        __Vtemp_h07b62ab3__0[6U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x16U];
        __Vtemp_h07b62ab3__0[7U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x17U];
        __Vtemp_h07b62ab3__0[8U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x18U];
        __Vtemp_h07b62ab3__0[9U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x19U];
        __Vtemp_h07b62ab3__0[0xaU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1aU];
        __Vtemp_h07b62ab3__0[0xbU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1bU];
        __Vtemp_h07b62ab3__0[0xcU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1cU];
        __Vtemp_h07b62ab3__0[0xdU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1dU];
        __Vtemp_h07b62ab3__0[0xeU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1eU];
        __Vtemp_h07b62ab3__0[0xfU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1fU];
        bufp->chgWData(oldp+361,(__Vtemp_h07b62ab3__0),512);
        bufp->chgQData(oldp+377,((((QData)((IData)(
                                                   vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])))),64);
        bufp->chgBit(oldp+379,(vlSelf->main__DOT__wbwide_wbdown_stall));
        bufp->chgBit(oldp+380,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack));
        bufp->chgWData(oldp+381,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data),512);
        bufp->chgBit(oldp+397,(vlSelf->main__DOT__wb32_wbdown_stb));
        bufp->chgBit(oldp+398,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we));
        bufp->chgIData(oldp+399,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr),25);
        bufp->chgIData(oldp+400,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU]),32);
        bufp->chgCData(oldp+401,((0xfU & (IData)((vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                                  >> 0x3cU)))),4);
        bufp->chgBit(oldp+402,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+403,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
        bufp->chgIData(oldp+404,(vlSelf->main__DOT__wb32_wbdown_idata),32);
        bufp->chgIData(oldp+405,((((~ (IData)(vlSelf->main__DOT__r_sirefclk_en)) 
                                   << 0x1fU) | vlSelf->main__DOT__r_sirefclk_data)),32);
        bufp->chgBit(oldp+406,(vlSelf->main__DOT__wb32_spio_ack));
        bufp->chgIData(oldp+407,((((IData)(vlSelf->main__DOT__spioi__DOT__led_demo) 
                                   << 0x18U) | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->main__DOT__spioi__DOT__r_led))))),32);
        bufp->chgBit(oldp+408,(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack));
        bufp->chgIData(oldp+409,(vlSelf->main__DOT__i2cscopei__DOT__o_bus_data),32);
        bufp->chgBit(oldp+410,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack));
        bufp->chgIData(oldp+411,(vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data),32);
        bufp->chgBit(oldp+412,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack));
        bufp->chgIData(oldp+413,(vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data),32);
        bufp->chgBit(oldp+414,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack));
        bufp->chgIData(oldp+415,(vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data),32);
        bufp->chgBit(oldp+416,(vlSelf->main__DOT__wb32_i2cs_ack));
        bufp->chgIData(oldp+417,(vlSelf->main__DOT__i2ci__DOT__bus_read_data),32);
        bufp->chgBit(oldp+418,(vlSelf->main__DOT__wb32_i2cdma_ack));
        bufp->chgIData(oldp+419,(vlSelf->main__DOT__wb32_i2cdma_idata),32);
        bufp->chgBit(oldp+420,(vlSelf->main__DOT__wb32_uart_ack));
        bufp->chgIData(oldp+421,(vlSelf->main__DOT__wb32_uart_idata),32);
        bufp->chgBit(oldp+422,(vlSelf->main__DOT__wb32_fan_ack));
        bufp->chgIData(oldp+423,(vlSelf->main__DOT__wb32_fan_idata),32);
        bufp->chgBit(oldp+424,(vlSelf->main__DOT__r_wb32_sio_ack));
        bufp->chgIData(oldp+425,(vlSelf->main__DOT__r_wb32_sio_data),32);
        bufp->chgBit(oldp+426,(vlSelf->main__DOT__r_cfg_ack));
        bufp->chgBit(oldp+427,(vlSelf->main__DOT__wbu_cyc));
        bufp->chgBit(oldp+428,(vlSelf->main__DOT__wbu_stb));
        bufp->chgBit(oldp+429,(vlSelf->main__DOT__wbu_we));
        bufp->chgIData(oldp+430,((0x7ffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),27);
        bufp->chgIData(oldp+431,(vlSelf->main__DOT__wbu_data),32);
        bufp->chgBit(oldp+432,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+433,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
        bufp->chgBit(oldp+434,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
        bufp->chgIData(oldp+435,(vlSelf->main__DOT__wbu_idata),32);
        bufp->chgBit(oldp+436,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))));
        bufp->chgBit(oldp+437,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb))));
        bufp->chgBit(oldp+438,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe))));
        bufp->chgIData(oldp+439,((0x7ffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),27);
        bufp->chgIData(oldp+440,((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata)),32);
        bufp->chgCData(oldp+441,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel))),4);
        bufp->chgBit(oldp+442,(vlSelf->main__DOT__wbu_wbu_arbiter_stall));
        bufp->chgBit(oldp+443,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack));
        bufp->chgBit(oldp+444,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err));
        bufp->chgIData(oldp+445,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU]),32);
        bufp->chgBit(oldp+446,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                      >> 1U))));
        bufp->chgBit(oldp+447,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                      >> 1U))));
        bufp->chgBit(oldp+448,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                                      >> 1U))));
        bufp->chgIData(oldp+449,((0x7ffffffU & (IData)(
                                                       (vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                                        >> 0x1bU)))),27);
        bufp->chgIData(oldp+450,((IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                                          >> 0x20U))),32);
        bufp->chgCData(oldp+451,((0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                          >> 4U))),4);
        bufp->chgIData(oldp+452,(vlSelf->main__DOT__wbu_zip_idata),32);
        bufp->chgIData(oldp+453,((0x3fffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),30);
        bufp->chgSData(oldp+454,((0x3fffU & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr))),14);
        bufp->chgBit(oldp+455,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb));
        bufp->chgBit(oldp+456,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb));
        bufp->chgWData(oldp+457,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data),512);
        bufp->chgSData(oldp+473,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr),14);
        bufp->chgQData(oldp+474,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel),64);
        bufp->chgIData(oldp+476,(vlSelf->main__DOT__bkrami__DOT__WRITE_TO_MEMORY__DOT__ik),32);
        bufp->chgIData(oldp+477,(vlSelf->main__DOT__r_sirefclk_data),32);
        bufp->chgIData(oldp+478,(vlSelf->main__DOT__clock_generator__DOT__counter[0]),32);
        bufp->chgIData(oldp+479,(vlSelf->main__DOT__clock_generator__DOT__counter[1]),32);
        bufp->chgIData(oldp+480,(vlSelf->main__DOT__clock_generator__DOT__counter[2]),32);
        bufp->chgIData(oldp+481,(vlSelf->main__DOT__clock_generator__DOT__counter[3]),32);
        bufp->chgIData(oldp+482,(vlSelf->main__DOT__clock_generator__DOT__counter[4]),32);
        bufp->chgIData(oldp+483,(vlSelf->main__DOT__clock_generator__DOT__counter[5]),32);
        bufp->chgIData(oldp+484,(vlSelf->main__DOT__clock_generator__DOT__counter[6]),32);
        bufp->chgIData(oldp+485,(vlSelf->main__DOT__clock_generator__DOT__counter[7]),32);
        bufp->chgIData(oldp+486,(vlSelf->main__DOT__clock_generator__DOT__r_delay),32);
        bufp->chgIData(oldp+487,(vlSelf->main__DOT__clock_generator__DOT__times_three),32);
        bufp->chgIData(oldp+488,(vlSelf->main__DOT__clock_generator__DOT__times_five),32);
        bufp->chgIData(oldp+489,(vlSelf->main__DOT__clock_generator__DOT__times_seven),32);
        bufp->chgBit(oldp+490,(vlSelf->main__DOT__console__DOT__rx_uart_reset));
        bufp->chgBit(oldp+491,(((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                & (IData)(vlSelf->main__DOT__w_console_rx_stb))));
        bufp->chgCData(oldp+492,(vlSelf->main__DOT__console__DOT__rxf_wb_data),7);
        bufp->chgSData(oldp+493,(vlSelf->main__DOT__console__DOT__rxf_status),16);
        bufp->chgBit(oldp+494,(vlSelf->main__DOT__console__DOT__rxf_wb_read));
        bufp->chgIData(oldp+495,(((((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                    & (IData)(vlSelf->main__DOT__w_console_rx_stb)) 
                                   << 0xcU) | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                                                << 8U) 
                                               | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_data)))),32);
        bufp->chgBit(oldp+496,(((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write)) 
                                & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write))));
        bufp->chgSData(oldp+497,(vlSelf->main__DOT__console__DOT__txf_status),16);
        bufp->chgBit(oldp+498,(vlSelf->main__DOT__console__DOT__txf_wb_write));
        bufp->chgBit(oldp+499,(vlSelf->main__DOT__console__DOT__tx_uart_reset));
        bufp->chgCData(oldp+500,(vlSelf->main__DOT__console__DOT__txf_wb_data),7);
        bufp->chgIData(oldp+501,((((IData)(vlSelf->__VdfgTmp_ha46ae6a3__0) 
                                   << 0xdU) | ((((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write)) 
                                                 & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write)) 
                                                << 0xcU) 
                                               | ((0x400U 
                                                   & ((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)) 
                                                      << 0xaU)) 
                                                  | (((IData)(vlSelf->main__DOT__console__DOT____VdfgTmp_h60af6732__0) 
                                                      << 8U) 
                                                     | ((IData)(vlSelf->main__DOT__console__DOT____VdfgTmp_h60af6732__0)
                                                         ? (IData)(vlSelf->main__DOT__console__DOT__txf_wb_data)
                                                         : 0U)))))),32);
        bufp->chgIData(oldp+502,((((IData)(vlSelf->main__DOT__console__DOT__txf_status) 
                                   << 0x10U) | (IData)(vlSelf->main__DOT__console__DOT__rxf_status))),32);
        bufp->chgCData(oldp+503,(vlSelf->main__DOT__console__DOT__r_wb_addr),2);
        bufp->chgBit(oldp+504,(vlSelf->main__DOT__console__DOT__r_wb_ack));
        bufp->chgCData(oldp+505,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data),7);
        bufp->chgCData(oldp+506,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write),7);
        bufp->chgCData(oldp+507,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+508,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr),6);
        bufp->chgCData(oldp+509,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next),6);
        bufp->chgBit(oldp+510,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow));
        bufp->chgBit(oldp+511,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow));
        bufp->chgBit(oldp+512,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc));
        bufp->chgCData(oldp+513,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
        bufp->chgCData(oldp+514,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
        bufp->chgBit(oldp+515,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write));
        bufp->chgBit(oldp+516,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read));
        bufp->chgCData(oldp+517,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill),6);
        bufp->chgSData(oldp+518,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill),10);
        bufp->chgBit(oldp+519,(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6));
        bufp->chgCData(oldp+520,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data),7);
        bufp->chgCData(oldp+521,(vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write),7);
        bufp->chgCData(oldp+522,(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+523,(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr),6);
        bufp->chgCData(oldp+524,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next),6);
        bufp->chgBit(oldp+525,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow));
        bufp->chgBit(oldp+526,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow));
        bufp->chgBit(oldp+527,(vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc));
        bufp->chgCData(oldp+528,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
        bufp->chgCData(oldp+529,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
        bufp->chgBit(oldp+530,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write));
        bufp->chgBit(oldp+531,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read));
        bufp->chgCData(oldp+532,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill),6);
        bufp->chgSData(oldp+533,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill),10);
        bufp->chgBit(oldp+534,(vlSelf->main__DOT__genbus__DOT__soft_reset));
        bufp->chgBit(oldp+535,(vlSelf->main__DOT__genbus__DOT__rx_valid));
        bufp->chgCData(oldp+536,((0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))),8);
        bufp->chgBit(oldp+537,(vlSelf->main__DOT__genbus__DOT__in_stb));
        bufp->chgBit(oldp+538,(((IData)(vlSelf->main__DOT__genbus__DOT__rx_valid) 
                                | ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                     | (IData)(vlSelf->main__DOT__genbus__DOT__in_stb)) 
                                    | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
                                   | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))))));
        bufp->chgQData(oldp+539,(vlSelf->main__DOT__genbus__DOT__in_word),36);
        bufp->chgBit(oldp+541,(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
        bufp->chgCData(oldp+542,(vlSelf->main__DOT__genbus__DOT__wbu_tx_data),8);
        bufp->chgBit(oldp+543,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n));
        bufp->chgQData(oldp+544,(vlSelf->main__DOT__genbus__DOT__ififo_codword),36);
        bufp->chgBit(oldp+546,(vlSelf->main__DOT__genbus__DOT__exec_stb));
        bufp->chgQData(oldp+547,(vlSelf->main__DOT__genbus__DOT__exec_word),36);
        bufp->chgBit(oldp+549,(vlSelf->main__DOT__genbus__DOT__ofifo_rd));
        bufp->chgQData(oldp+550,(vlSelf->main__DOT__genbus__DOT__ofifo_codword),36);
        bufp->chgBit(oldp+552,((((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
                                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)) 
                                    & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow))) 
                                | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))));
        bufp->chgBit(oldp+553,(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
        bufp->chgBit(oldp+554,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy));
        bufp->chgIData(oldp+555,(vlSelf->main__DOT__genbus__DOT__r_wdt_timer),19);
        bufp->chgBit(oldp+556,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb))));
        bufp->chgBit(oldp+557,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb));
        bufp->chgBit(oldp+558,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active))));
        bufp->chgSData(oldp+559,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr),11);
        bufp->chgSData(oldp+560,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr),11);
        bufp->chgSData(oldp+561,((0x7ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)))),11);
        bufp->chgSData(oldp+562,((0x7ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr)))),11);
        bufp->chgBit(oldp+563,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow));
        bufp->chgBit(oldp+564,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow));
        bufp->chgBit(oldp+565,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))));
        bufp->chgBit(oldp+566,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write));
        bufp->chgBit(oldp+567,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read));
        bufp->chgBit(oldp+568,((((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)) 
                                    & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow))) 
                                | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)))));
        bufp->chgBit(oldp+569,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd));
        bufp->chgCData(oldp+570,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr),7);
        bufp->chgCData(oldp+571,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr),7);
        bufp->chgCData(oldp+572,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)))),7);
        bufp->chgCData(oldp+573,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr)))),7);
        bufp->chgBit(oldp+574,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow));
        bufp->chgBit(oldp+575,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow));
        bufp->chgBit(oldp+576,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)))));
        bufp->chgBit(oldp+577,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write));
        bufp->chgBit(oldp+578,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read));
        bufp->chgBit(oldp+579,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb));
        bufp->chgBit(oldp+580,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid));
        bufp->chgCData(oldp+581,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits),6);
        bufp->chgBit(oldp+582,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb));
        bufp->chgBit(oldp+583,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy));
        bufp->chgBit(oldp+584,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)))));
        bufp->chgQData(oldp+585,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word),36);
        bufp->chgBit(oldp+587,((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))));
        bufp->chgBit(oldp+588,(((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                                | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))));
        bufp->chgCData(oldp+589,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr),8);
        bufp->chgQData(oldp+590,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word),36);
        bufp->chgCData(oldp+592,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr),8);
        bufp->chgIData(oldp+593,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr),25);
        bufp->chgIData(oldp+594,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr),32);
        bufp->chgSData(oldp+595,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len),10);
        bufp->chgIData(oldp+596,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword),32);
        bufp->chgCData(oldp+597,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb),3);
        bufp->chgBit(oldp+598,((3U == (7U & (IData)(
                                                    (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                     >> 0x21U))))));
        bufp->chgCData(oldp+599,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len),3);
        bufp->chgCData(oldp+600,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len),3);
        bufp->chgCData(oldp+601,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw),2);
        bufp->chgBit(oldp+602,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb));
        bufp->chgQData(oldp+603,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg),36);
        bufp->chgIData(oldp+605,((((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                            >> 0x1fU)) 
                                   << 0x1eU) | (0x3fffffffU 
                                                & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)))),32);
        bufp->chgCData(oldp+606,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state),2);
        bufp->chgSData(oldp+607,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed),10);
        bufp->chgSData(oldp+608,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len),10);
        bufp->chgBit(oldp+609,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc));
        bufp->chgBit(oldp+610,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr));
        bufp->chgBit(oldp+611,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request));
        bufp->chgBit(oldp+612,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack));
        bufp->chgBit(oldp+613,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks));
        bufp->chgIData(oldp+614,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr),32);
        bufp->chgBit(oldp+615,(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy));
        bufp->chgBit(oldp+616,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
        bufp->chgBit(oldp+617,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb));
        bufp->chgBit(oldp+618,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
        bufp->chgBit(oldp+619,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy));
        bufp->chgBit(oldp+620,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy));
        bufp->chgBit(oldp+621,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy));
        bufp->chgBit(oldp+622,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
                                   | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)))));
        bufp->chgBit(oldp+623,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))));
        bufp->chgBit(oldp+624,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
                                | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy) 
                                   & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl)) 
                                      & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl))))));
        bufp->chgQData(oldp+625,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword),36);
        bufp->chgQData(oldp+627,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword),36);
        bufp->chgCData(oldp+629,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits),7);
        bufp->chgCData(oldp+630,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits),7);
        bufp->chgBit(oldp+631,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active));
        bufp->chgBit(oldp+632,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid));
        bufp->chgQData(oldp+633,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword),36);
        bufp->chgIData(oldp+635,((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)),32);
        bufp->chgCData(oldp+636,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck),4);
        bufp->chgBit(oldp+637,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
        bufp->chgBit(oldp+638,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))));
        bufp->chgQData(oldp+639,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word),36);
        bufp->chgSData(oldp+641,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr),10);
        bufp->chgBit(oldp+642,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled));
        bufp->chgSData(oldp+643,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr),10);
        bufp->chgBit(oldp+644,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch));
        bufp->chgBit(oldp+645,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch));
        bufp->chgBit(oldp+646,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr));
        bufp->chgIData(oldp+647,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword),32);
        bufp->chgSData(oldp+648,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr),10);
        bufp->chgBit(oldp+649,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched));
        bufp->chgBit(oldp+650,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch));
        bufp->chgBit(oldp+651,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch));
        bufp->chgSData(oldp+652,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld),10);
        bufp->chgCData(oldp+653,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd),3);
        bufp->chgSData(oldp+654,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr),10);
        bufp->chgBit(oldp+655,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table));
        bufp->chgBit(oldp+656,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table));
        bufp->chgBit(oldp+657,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match));
        bufp->chgBit(oldp+658,((1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld) 
                                      >> 9U))));
        bufp->chgBit(oldp+659,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy));
        bufp->chgBit(oldp+660,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request));
        bufp->chgBit(oldp+661,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent));
        bufp->chgBit(oldp+662,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state)) 
                                & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                                   >> 0x15U))));
        bufp->chgBit(oldp+663,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state));
        bufp->chgIData(oldp+664,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter),22);
        bufp->chgCData(oldp+665,(((0U == (7U & (IData)(
                                                       (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                        >> 0x21U))))
                                   ? 1U : ((2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                              >> 0x20U))))
                                            ? 6U : 
                                           (7U & ((3U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                               >> 0x20U))))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                               >> 0x1eU))))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                                >> 0x22U))))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                                 >> 0x22U))))
                                                     ? 1U
                                                     : 6U))))))),3);
        bufp->chgCData(oldp+666,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len),3);
        bufp->chgIData(oldp+667,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word),30);
        bufp->chgBit(oldp+668,(((IData)(vlSelf->main__DOT__wbu_cyc) 
                                | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                   | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy)))));
        bufp->chgBit(oldp+669,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl));
        bufp->chgBit(oldp+670,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl));
        bufp->chgBit(oldp+671,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line));
        bufp->chgBit(oldp+672,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy));
        bufp->chgCData(oldp+673,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen),7);
        bufp->chgSData(oldp+674,(vlSelf->main__DOT__gpioi__DOT__r_gpio),16);
        bufp->chgSData(oldp+675,(vlSelf->main__DOT__gpioi__DOT__x_gpio),16);
        bufp->chgSData(oldp+676,(vlSelf->main__DOT__gpioi__DOT__q_gpio),16);
        bufp->chgBit(oldp+677,(vlSelf->main__DOT__i2ci__DOT__r_halted));
        bufp->chgBit(oldp+678,(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc));
        bufp->chgIData(oldp+679,(vlSelf->main__DOT__i2ci__DOT__pf_jump_addr),28);
        bufp->chgBit(oldp+680,(vlSelf->main__DOT__i2ci__DOT__pf_valid));
        bufp->chgBit(oldp+681,(vlSelf->main__DOT__i2ci__DOT__pf_ready));
        bufp->chgCData(oldp+682,(vlSelf->main__DOT__i2ci__DOT__pf_insn),8);
        bufp->chgIData(oldp+683,(vlSelf->main__DOT__i2ci__DOT__pf_insn_addr),28);
        bufp->chgBit(oldp+684,(vlSelf->main__DOT__i2ci__DOT__pf_illegal));
        bufp->chgBit(oldp+685,(vlSelf->main__DOT__i2ci__DOT__half_valid));
        bufp->chgBit(oldp+686,(vlSelf->main__DOT__i2ci__DOT__imm_cycle));
        bufp->chgBit(oldp+687,(vlSelf->main__DOT__i2ci__DOT__insn_ready));
        bufp->chgBit(oldp+688,(vlSelf->main__DOT__i2ci__DOT__half_ready));
        bufp->chgBit(oldp+689,(vlSelf->main__DOT__i2ci__DOT__i2c_abort));
        bufp->chgBit(oldp+690,(vlSelf->main__DOT__i2ci__DOT__insn_valid));
        bufp->chgSData(oldp+691,(vlSelf->main__DOT__i2ci__DOT__insn),12);
        bufp->chgCData(oldp+692,(vlSelf->main__DOT__i2ci__DOT__half_insn),4);
        bufp->chgBit(oldp+693,(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge));
        bufp->chgBit(oldp+694,(vlSelf->main__DOT__i2ci__DOT__i2c_stretch));
        bufp->chgSData(oldp+695,(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount),12);
        bufp->chgSData(oldp+696,(vlSelf->main__DOT__i2ci__DOT__ckcount),12);
        bufp->chgIData(oldp+697,(vlSelf->main__DOT__i2ci__DOT__abort_address),28);
        bufp->chgIData(oldp+698,(vlSelf->main__DOT__i2ci__DOT__jump_target),28);
        bufp->chgBit(oldp+699,(vlSelf->main__DOT__i2ci__DOT__r_wait));
        bufp->chgBit(oldp+700,(vlSelf->main__DOT__i2ci__DOT__soft_halt_request));
        bufp->chgBit(oldp+701,(vlSelf->main__DOT__i2ci__DOT__r_err));
        bufp->chgBit(oldp+702,(vlSelf->main__DOT__i2ci__DOT__r_aborted));
        bufp->chgBit(oldp+703,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual));
        bufp->chgBit(oldp+704,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda));
        bufp->chgBit(oldp+705,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl));
        bufp->chgBit(oldp+706,(((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                                | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
        bufp->chgBit(oldp+707,(vlSelf->main__DOT__i2ci__DOT__w_sda));
        bufp->chgBit(oldp+708,(vlSelf->main__DOT__i2ci__DOT__w_scl));
        bufp->chgBit(oldp+709,(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
        bufp->chgBit(oldp+710,(vlSelf->main__DOT__i2ci__DOT__s_tvalid));
        bufp->chgSData(oldp+711,(vlSelf->main__DOT__i2ci__DOT__ovw_data),10);
        bufp->chgBit(oldp+712,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl));
        bufp->chgBit(oldp+713,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda));
        bufp->chgBit(oldp+714,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt));
        bufp->chgCData(oldp+715,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel),2);
        bufp->chgSData(oldp+716,((0x7ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))),11);
        bufp->chgBit(oldp+717,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte));
        bufp->chgBit(oldp+718,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir));
        bufp->chgBit(oldp+719,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack));
        bufp->chgCData(oldp+720,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state),4);
        bufp->chgCData(oldp+721,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits),3);
        bufp->chgCData(oldp+722,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg),8);
        bufp->chgBit(oldp+723,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl));
        bufp->chgBit(oldp+724,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda));
        bufp->chgBit(oldp+725,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl));
        bufp->chgBit(oldp+726,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda));
        bufp->chgBit(oldp+727,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl));
        bufp->chgBit(oldp+728,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda));
        bufp->chgBit(oldp+729,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit));
        bufp->chgBit(oldp+730,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy));
        bufp->chgBit(oldp+731,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb));
        bufp->chgBit(oldp+732,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle));
        bufp->chgWData(oldp+733,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word),512);
        bufp->chgBit(oldp+749,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid));
        bufp->chgCData(oldp+750,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight),2);
        bufp->chgBit(oldp+751,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal));
        bufp->chgBit(oldp+752,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid));
        bufp->chgWData(oldp+753,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn),512);
        bufp->chgWData(oldp+769,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted),512);
        bufp->chgCData(oldp+785,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count),7);
        bufp->chgCData(oldp+786,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift),6);
        bufp->chgBit(oldp+787,(vlSelf->main__DOT__i2cscopei__DOT__read_address));
        bufp->chgSData(oldp+788,(vlSelf->main__DOT__i2cscopei__DOT__raddr),10);
        bufp->chgSData(oldp+789,(vlSelf->main__DOT__i2cscopei__DOT__waddr),10);
        bufp->chgBit(oldp+790,((1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                         >> 2U)))));
        bufp->chgBit(oldp+791,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                      >> 1U))));
        bufp->chgBit(oldp+792,((1U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))));
        bufp->chgCData(oldp+793,(vlSelf->main__DOT__i2cscopei__DOT__br_config),3);
        bufp->chgIData(oldp+794,(vlSelf->main__DOT__i2cscopei__DOT__br_holdoff),20);
        bufp->chgIData(oldp+795,(vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+796,(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered));
        bufp->chgBit(oldp+797,(vlSelf->main__DOT__i2cscopei__DOT__dr_primed));
        bufp->chgBit(oldp+798,(vlSelf->main__DOT__i2cscopei__DOT__dw_trigger));
        bufp->chgBit(oldp+799,(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped));
        bufp->chgCData(oldp+800,(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+801,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                      >> 4U))));
        bufp->chgIData(oldp+802,(vlSelf->main__DOT__i2cscopei__DOT__ck_addr),31);
        bufp->chgIData(oldp+803,(vlSelf->main__DOT__i2cscopei__DOT__qd_data),31);
        bufp->chgBit(oldp+804,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write));
        bufp->chgBit(oldp+805,(vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout));
        bufp->chgBit(oldp+806,(vlSelf->main__DOT__i2cscopei__DOT__new_data));
        bufp->chgBit(oldp+807,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+808,(vlSelf->main__DOT__i2cscopei__DOT__imm_adr));
        bufp->chgBit(oldp+809,(vlSelf->main__DOT__i2cscopei__DOT__lst_adr));
        bufp->chgIData(oldp+810,(vlSelf->main__DOT__i2cscopei__DOT__lst_val),31);
        bufp->chgIData(oldp+811,(vlSelf->main__DOT__i2cscopei__DOT__imm_val),31);
        bufp->chgBit(oldp+812,(vlSelf->main__DOT__i2cscopei__DOT__record_ce));
        bufp->chgIData(oldp+813,(vlSelf->main__DOT__i2cscopei__DOT__r_data),32);
        bufp->chgBit(oldp+814,(vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+815,(vlSelf->main__DOT__i2cscopei__DOT__this_addr),10);
        bufp->chgIData(oldp+816,(vlSelf->main__DOT__i2cscopei__DOT__nxt_mem),32);
        bufp->chgBit(oldp+817,(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt));
        bufp->chgCData(oldp+818,(vlSelf->main__DOT__rcv__DOT__state),4);
        bufp->chgCData(oldp+819,(vlSelf->main__DOT__rcv__DOT__baud_counter),7);
        bufp->chgBit(oldp+820,(vlSelf->main__DOT__rcv__DOT__zero_baud_counter));
        bufp->chgBit(oldp+821,(vlSelf->main__DOT__rcv__DOT__q_uart));
        bufp->chgBit(oldp+822,(vlSelf->main__DOT__rcv__DOT__qq_uart));
        bufp->chgBit(oldp+823,(vlSelf->main__DOT__rcv__DOT__ck_uart));
        bufp->chgCData(oldp+824,(vlSelf->main__DOT__rcv__DOT__chg_counter),7);
        bufp->chgBit(oldp+825,(vlSelf->main__DOT__rcv__DOT__half_baud_time));
        bufp->chgCData(oldp+826,(vlSelf->main__DOT__rcv__DOT__data_reg),8);
        bufp->chgBit(oldp+827,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_address));
        bufp->chgSData(oldp+828,(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr),10);
        bufp->chgSData(oldp+829,(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr),10);
        bufp->chgBit(oldp+830,((1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                         >> 2U)))));
        bufp->chgBit(oldp+831,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                      >> 1U))));
        bufp->chgBit(oldp+832,((1U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))));
        bufp->chgCData(oldp+833,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config),3);
        bufp->chgIData(oldp+834,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff),20);
        bufp->chgIData(oldp+835,(vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+836,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered));
        bufp->chgBit(oldp+837,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed));
        bufp->chgBit(oldp+838,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped));
        bufp->chgCData(oldp+839,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+840,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                      >> 4U))));
        bufp->chgIData(oldp+841,(vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr),31);
        bufp->chgIData(oldp+842,(vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data),31);
        bufp->chgBit(oldp+843,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write));
        bufp->chgBit(oldp+844,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout));
        bufp->chgBit(oldp+845,(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data));
        bufp->chgBit(oldp+846,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+847,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr));
        bufp->chgBit(oldp+848,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr));
        bufp->chgIData(oldp+849,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val),31);
        bufp->chgIData(oldp+850,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val),31);
        bufp->chgBit(oldp+851,(vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce));
        bufp->chgIData(oldp+852,(vlSelf->main__DOT__scope1_ddr3i__DOT__r_data),32);
        bufp->chgBit(oldp+853,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+854,(vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr),10);
        bufp->chgIData(oldp+855,(vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem),32);
        bufp->chgBit(oldp+856,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt));
        bufp->chgBit(oldp+857,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_address));
        bufp->chgSData(oldp+858,(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr),10);
        bufp->chgSData(oldp+859,(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr),10);
        bufp->chgBit(oldp+860,((1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                         >> 2U)))));
        bufp->chgBit(oldp+861,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                      >> 1U))));
        bufp->chgBit(oldp+862,((1U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))));
        bufp->chgCData(oldp+863,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config),3);
        bufp->chgIData(oldp+864,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff),20);
        bufp->chgIData(oldp+865,(vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+866,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered));
        bufp->chgBit(oldp+867,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed));
        bufp->chgBit(oldp+868,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped));
        bufp->chgCData(oldp+869,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+870,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                      >> 4U))));
        bufp->chgIData(oldp+871,(vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr),31);
        bufp->chgIData(oldp+872,(vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data),31);
        bufp->chgBit(oldp+873,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write));
        bufp->chgBit(oldp+874,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout));
        bufp->chgBit(oldp+875,(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data));
        bufp->chgBit(oldp+876,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+877,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr));
        bufp->chgBit(oldp+878,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr));
        bufp->chgIData(oldp+879,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val),31);
        bufp->chgIData(oldp+880,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val),31);
        bufp->chgBit(oldp+881,(vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce));
        bufp->chgIData(oldp+882,(vlSelf->main__DOT__scope2_ddr3i__DOT__r_data),32);
        bufp->chgBit(oldp+883,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+884,(vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr),10);
        bufp->chgIData(oldp+885,(vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem),32);
        bufp->chgBit(oldp+886,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt));
        bufp->chgBit(oldp+887,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_address));
        bufp->chgSData(oldp+888,(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr),10);
        bufp->chgSData(oldp+889,(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr),10);
        bufp->chgBit(oldp+890,((1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                         >> 2U)))));
        bufp->chgBit(oldp+891,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                      >> 1U))));
        bufp->chgBit(oldp+892,((1U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))));
        bufp->chgCData(oldp+893,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config),3);
        bufp->chgIData(oldp+894,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff),20);
        bufp->chgIData(oldp+895,(vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+896,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered));
        bufp->chgBit(oldp+897,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed));
        bufp->chgBit(oldp+898,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped));
        bufp->chgCData(oldp+899,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+900,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                      >> 4U))));
        bufp->chgIData(oldp+901,(vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr),31);
        bufp->chgIData(oldp+902,(vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data),31);
        bufp->chgBit(oldp+903,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write));
        bufp->chgBit(oldp+904,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout));
        bufp->chgBit(oldp+905,(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data));
        bufp->chgBit(oldp+906,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+907,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr));
        bufp->chgBit(oldp+908,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr));
        bufp->chgIData(oldp+909,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val),31);
        bufp->chgIData(oldp+910,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val),31);
        bufp->chgBit(oldp+911,(vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce));
        bufp->chgIData(oldp+912,(vlSelf->main__DOT__scope3_ddr3i__DOT__r_data),32);
        bufp->chgBit(oldp+913,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+914,(vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr),10);
        bufp->chgIData(oldp+915,(vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem),32);
        bufp->chgBit(oldp+916,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt));
        bufp->chgBit(oldp+917,(vlSelf->main__DOT__spioi__DOT__led_demo));
        bufp->chgCData(oldp+918,(vlSelf->main__DOT__spioi__DOT__r_led),8);
        bufp->chgCData(oldp+919,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),8);
        bufp->chgCData(oldp+920,(vlSelf->main__DOT__spioi__DOT__bounced),8);
        bufp->chgCData(oldp+921,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw),8);
        bufp->chgBit(oldp+922,(vlSelf->main__DOT__spioi__DOT__sw_int));
        bufp->chgBit(oldp+923,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int));
        bufp->chgCData(oldp+924,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn),5);
        bufp->chgCData(oldp+925,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),5);
        bufp->chgSData(oldp+926,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe),10);
        bufp->chgSData(oldp+927,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe),16);
        bufp->chgCData(oldp+928,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner),8);
        bufp->chgBit(oldp+929,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir));
        bufp->chgIData(oldp+930,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr),25);
        bufp->chgBit(oldp+931,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk));
        bufp->chgCData(oldp+932,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr),5);
        bufp->chgCData(oldp+933,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness),5);
        bufp->chgCData(oldp+934,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness),5);
        bufp->chgCData(oldp+935,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness),5);
        bufp->chgCData(oldp+936,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness),5);
        bufp->chgCData(oldp+937,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness),5);
        bufp->chgCData(oldp+938,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness),5);
        bufp->chgCData(oldp+939,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness),5);
        bufp->chgCData(oldp+940,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness),5);
        bufp->chgSData(oldp+941,(vlSelf->main__DOT__swic__DOT__main_int_vector),15);
        bufp->chgSData(oldp+942,(vlSelf->main__DOT__swic__DOT__alt_int_vector),15);
        bufp->chgBit(oldp+943,(vlSelf->main__DOT__swic__DOT__ctri_int));
        bufp->chgBit(oldp+944,(vlSelf->main__DOT__swic__DOT__tma_int));
        bufp->chgBit(oldp+945,(vlSelf->main__DOT__swic__DOT__tmb_int));
        bufp->chgBit(oldp+946,(vlSelf->main__DOT__swic__DOT__tmc_int));
        bufp->chgBit(oldp+947,(vlSelf->main__DOT__swic__DOT__jif_int));
        bufp->chgBit(oldp+948,(vlSelf->main__DOT__swic__DOT__dmac_int));
        bufp->chgBit(oldp+949,(vlSelf->main__DOT__swic__DOT__mtc_int));
        bufp->chgBit(oldp+950,(vlSelf->main__DOT__swic__DOT__moc_int));
        bufp->chgBit(oldp+951,(vlSelf->main__DOT__swic__DOT__mpc_int));
        bufp->chgBit(oldp+952,(vlSelf->main__DOT__swic__DOT__mic_int));
        bufp->chgBit(oldp+953,(vlSelf->main__DOT__swic__DOT__utc_int));
        bufp->chgBit(oldp+954,(vlSelf->main__DOT__swic__DOT__uoc_int));
        bufp->chgBit(oldp+955,(vlSelf->main__DOT__swic__DOT__upc_int));
        bufp->chgBit(oldp+956,(vlSelf->main__DOT__swic__DOT__uic_int));
        bufp->chgIData(oldp+957,(((4U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                   ? ((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                       ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                           ? vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data
                                           : vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data)
                                       : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                           ? vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data
                                           : vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data))
                                   : ((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                       ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                           ? vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data
                                           : vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data)
                                       : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                           ? vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data
                                           : vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data)))),32);
        bufp->chgBit(oldp+958,(vlSelf->main__DOT__swic__DOT__actr_ack));
        bufp->chgBit(oldp+959,(((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                                | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_read) 
                                   | ((~ ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                          >> 6U)) & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb))))));
        bufp->chgBit(oldp+960,(vlSelf->main__DOT__swic__DOT__sys_cyc));
        bufp->chgBit(oldp+961,(vlSelf->main__DOT__swic__DOT__sys_stb));
        bufp->chgBit(oldp+962,(vlSelf->main__DOT__swic__DOT__sys_we));
        bufp->chgCData(oldp+963,(vlSelf->main__DOT__swic__DOT__sys_addr),8);
        bufp->chgIData(oldp+964,(vlSelf->main__DOT__swic__DOT__sys_data),32);
        bufp->chgIData(oldp+965,(vlSelf->main__DOT__swic__DOT__cpu_addr),22);
        bufp->chgIData(oldp+966,(vlSelf->main__DOT__swic__DOT__sys_idata),32);
        bufp->chgBit(oldp+967,(vlSelf->main__DOT__swic__DOT__sys_ack));
        bufp->chgBit(oldp+968,(vlSelf->main__DOT__swic__DOT__sel_timer));
        bufp->chgBit(oldp+969,(vlSelf->main__DOT__swic__DOT__sel_pic));
        bufp->chgBit(oldp+970,(vlSelf->main__DOT__swic__DOT__sel_apic));
        bufp->chgBit(oldp+971,(vlSelf->main__DOT__swic__DOT__sel_watchdog));
        bufp->chgBit(oldp+972,(vlSelf->main__DOT__swic__DOT__sel_bus_watchdog));
        bufp->chgBit(oldp+973,(vlSelf->main__DOT__swic__DOT__sel_dmac));
        bufp->chgBit(oldp+974,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                & ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                                   >> 7U))));
        bufp->chgBit(oldp+975,(vlSelf->main__DOT__swic__DOT__dbg_cyc));
        bufp->chgBit(oldp+976,(vlSelf->main__DOT__swic__DOT__dbg_stb));
        bufp->chgBit(oldp+977,(vlSelf->main__DOT__swic__DOT__dbg_we));
        bufp->chgCData(oldp+978,(vlSelf->main__DOT__swic__DOT__dbg_addr),7);
        bufp->chgIData(oldp+979,(vlSelf->main__DOT__swic__DOT__dbg_idata),32);
        bufp->chgBit(oldp+980,(vlSelf->main__DOT__swic__DOT__dbg_ack));
        bufp->chgBit(oldp+981,(vlSelf->main__DOT__swic__DOT__dbg_stall));
        bufp->chgIData(oldp+982,(vlSelf->main__DOT__swic__DOT__dbg_odata),32);
        bufp->chgCData(oldp+983,(vlSelf->main__DOT__swic__DOT__dbg_sel),4);
        bufp->chgBit(oldp+984,(vlSelf->main__DOT__swic__DOT__no_dbg_err));
        bufp->chgBit(oldp+985,(vlSelf->main__DOT__swic__DOT__cpu_break));
        bufp->chgBit(oldp+986,(vlSelf->main__DOT__swic__DOT__dbg_cmd_write));
        bufp->chgBit(oldp+987,(vlSelf->main__DOT__swic__DOT__dbg_cpu_write));
        bufp->chgBit(oldp+988,(vlSelf->main__DOT__swic__DOT__dbg_cpu_read));
        bufp->chgBit(oldp+989,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold));
        bufp->chgBit(oldp+990,(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch));
        bufp->chgBit(oldp+991,(vlSelf->main__DOT__swic__DOT__reset_request));
        bufp->chgBit(oldp+992,(((~ vlSelf->main__DOT__swic__DOT__dbg_idata) 
                                & (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0))));
        bufp->chgBit(oldp+993,(vlSelf->main__DOT__swic__DOT__halt_request));
        bufp->chgBit(oldp+994,(vlSelf->main__DOT__swic__DOT__step_request));
        bufp->chgBit(oldp+995,(vlSelf->main__DOT__swic__DOT__clear_cache_request));
        bufp->chgBit(oldp+996,(vlSelf->main__DOT__swic__DOT__cmd_reset));
        bufp->chgBit(oldp+997,(vlSelf->main__DOT__swic__DOT__cmd_halt));
        bufp->chgBit(oldp+998,(vlSelf->main__DOT__swic__DOT__cmd_step));
        bufp->chgBit(oldp+999,(vlSelf->main__DOT__swic__DOT__cmd_clear_cache));
        bufp->chgBit(oldp+1000,(vlSelf->main__DOT__swic__DOT__cmd_write));
        bufp->chgBit(oldp+1001,(vlSelf->main__DOT__swic__DOT__cmd_read));
        bufp->chgCData(oldp+1002,(vlSelf->main__DOT__swic__DOT__cmd_waddr),5);
        bufp->chgIData(oldp+1003,(vlSelf->main__DOT__swic__DOT__cmd_wdata),32);
        bufp->chgCData(oldp+1004,(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc),3);
        bufp->chgBit(oldp+1005,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))));
        bufp->chgBit(oldp+1006,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall));
        bufp->chgIData(oldp+1007,(((((IData)(vlSelf->main__DOT__gpio_int) 
                                     << 0x1bU) | (((IData)(vlSelf->main__DOT__scope3_ddr3_int) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->main__DOT__i2cscope_int) 
                                                      << 0x19U) 
                                                     | ((0x1000000U 
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
                                       << 0xbU) | (
                                                   ((IData)(vlSelf->main__DOT__swic__DOT__pic_interrupt) 
                                                    << 0xaU) 
                                                   | ((0x300U 
                                                       & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                                          << 8U)) 
                                                      | (((IData)(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                                                             << 3U) 
                                                            | ((2U 
                                                                & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)) 
                                                                   << 1U)) 
                                                               | (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt))))))))),32);
        bufp->chgBit(oldp+1008,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                       >> 1U))));
        bufp->chgBit(oldp+1009,(vlSelf->main__DOT__swic__DOT__wdt_ack));
        bufp->chgBit(oldp+1010,(vlSelf->main__DOT__swic__DOT__wdt_reset));
        bufp->chgIData(oldp+1011,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),32);
        bufp->chgBit(oldp+1012,(vlSelf->main__DOT__swic__DOT__wdbus_ack));
        bufp->chgIData(oldp+1013,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),22);
        bufp->chgIData(oldp+1014,(vlSelf->main__DOT__swic__DOT__pic_data),32);
        bufp->chgIData(oldp+1015,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),32);
        bufp->chgBit(oldp+1016,((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                                       | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                          | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                             >> 2U))))));
        bufp->chgBit(oldp+1017,(vlSelf->main__DOT__swic__DOT__wdbus_int));
        bufp->chgBit(oldp+1018,(vlSelf->main__DOT__swic__DOT__cpu_pf_stall));
        bufp->chgBit(oldp+1019,(vlSelf->main__DOT__swic__DOT__cpu_i_count));
        bufp->chgBit(oldp+1020,(vlSelf->main__DOT__swic__DOT__dmac_stb));
        bufp->chgBit(oldp+1021,(vlSelf->main__DOT__swic__DOT__dc_err));
        bufp->chgIData(oldp+1022,(vlSelf->main__DOT__swic__DOT__dmac_data),32);
        bufp->chgBit(oldp+1023,(vlSelf->main__DOT__swic__DOT__dmac_ack));
        bufp->chgBit(oldp+1024,(vlSelf->main__DOT__swic__DOT__dc_cyc));
        bufp->chgBit(oldp+1025,(vlSelf->main__DOT__swic__DOT__dc_stb));
        bufp->chgBit(oldp+1026,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)))));
        bufp->chgBit(oldp+1027,(vlSelf->main__DOT__swic__DOT__dc_stall));
        bufp->chgBit(oldp+1028,(vlSelf->main__DOT__swic__DOT__dc_ack));
        bufp->chgIData(oldp+1029,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr
                                    : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr)),22);
        bufp->chgWData(oldp+1030,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data),512);
        bufp->chgQData(oldp+1046,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                    : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)),64);
        bufp->chgBit(oldp+1048,(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc));
        bufp->chgIData(oldp+1049,((((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
                                    << 0x10U) | (((IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h29ee39ef__0) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->main__DOT__swic__DOT__ctri_int) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->main__DOT__swic__DOT__tma_int) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->main__DOT__swic__DOT__tmb_int) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->main__DOT__swic__DOT__tmc_int) 
                                                              << 2U) 
                                                             | ((IData)(vlSelf->main__DOT__swic__DOT__jif_int) 
                                                                << 1U)))))))),32);
        bufp->chgBit(oldp+1050,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__sel_apic))));
        bufp->chgIData(oldp+1051,(vlSelf->main__DOT__swic__DOT__ctri_data),32);
        bufp->chgBit(oldp+1052,(vlSelf->main__DOT__swic__DOT__tma_ack));
        bufp->chgBit(oldp+1053,(vlSelf->main__DOT__swic__DOT__tmb_ack));
        bufp->chgBit(oldp+1054,(vlSelf->main__DOT__swic__DOT__tmc_ack));
        bufp->chgBit(oldp+1055,(vlSelf->main__DOT__swic__DOT__jif_ack));
        bufp->chgIData(oldp+1056,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                    << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)),32);
        bufp->chgIData(oldp+1057,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                    << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)),32);
        bufp->chgIData(oldp+1058,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                    << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value)),32);
        bufp->chgIData(oldp+1059,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter),32);
        bufp->chgBit(oldp+1060,(((IData)(vlSelf->main__DOT__swic__DOT__sys_cyc) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                    & (IData)(vlSelf->main__DOT__swic__DOT__sel_pic)))));
        bufp->chgBit(oldp+1061,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                  ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                                  : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb))));
        bufp->chgBit(oldp+1062,(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc));
        bufp->chgBit(oldp+1063,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl))));
        bufp->chgBit(oldp+1064,(vlSelf->main__DOT__swic__DOT__cpu_we));
        bufp->chgWData(oldp+1065,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data),512);
        bufp->chgQData(oldp+1081,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                    : 0xffffffffffffffffULL)),64);
        bufp->chgWData(oldp+1083,(vlSelf->main__DOT__swic__DOT__cpu_idata),512);
        bufp->chgBit(oldp+1099,(vlSelf->main__DOT__swic__DOT__cpu_stall));
        bufp->chgBit(oldp+1100,(vlSelf->main__DOT__swic__DOT__pic_interrupt));
        bufp->chgBit(oldp+1101,(vlSelf->main__DOT__swic__DOT__cpu_ack));
        bufp->chgBit(oldp+1102,(vlSelf->main__DOT__swic__DOT__cpu_err));
        bufp->chgIData(oldp+1103,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg),32);
        bufp->chgBit(oldp+1104,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                       | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1105,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                  >> 2U) & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
        bufp->chgBit(oldp+1106,(((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
        bufp->chgBit(oldp+1107,(vlSelf->main__DOT__swic__DOT__r_mmus_ack));
        bufp->chgBit(oldp+1108,(vlSelf->main__DOT__swic__DOT__ext_err));
        bufp->chgIData(oldp+1109,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                    ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                        ? vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter
                                        : (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                            << 0x1fU) 
                                           | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value))
                                    : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
                                        ? (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                            << 0x1fU) 
                                           | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)
                                        : (((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                            << 0x1fU) 
                                           | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)))),32);
        bufp->chgCData(oldp+1110,(vlSelf->main__DOT__swic__DOT__w_ack_idx),3);
        bufp->chgCData(oldp+1111,(vlSelf->main__DOT__swic__DOT__ack_idx),3);
        bufp->chgBit(oldp+1112,(vlSelf->main__DOT__swic__DOT__last_sys_stb));
        bufp->chgBit(oldp+1113,(vlSelf->main__DOT__swic__DOT__cmd_read_ack));
        bufp->chgBit(oldp+1114,(vlSelf->main__DOT__swic__DOT__dbg_pre_ack));
        bufp->chgCData(oldp+1115,(vlSelf->main__DOT__swic__DOT__dbg_pre_addr),2);
        bufp->chgIData(oldp+1116,(vlSelf->main__DOT__swic__DOT__dbg_cpu_status),32);
        bufp->chgBit(oldp+1117,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack));
        bufp->chgBit(oldp+1118,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack));
        bufp->chgBit(oldp+1119,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack));
        bufp->chgBit(oldp+1120,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack));
        bufp->chgBit(oldp+1121,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack));
        bufp->chgBit(oldp+1122,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack));
        bufp->chgBit(oldp+1123,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack));
        bufp->chgBit(oldp+1124,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack));
        bufp->chgIData(oldp+1125,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data),32);
        bufp->chgIData(oldp+1126,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data),32);
        bufp->chgIData(oldp+1127,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data),32);
        bufp->chgIData(oldp+1128,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data),32);
        bufp->chgIData(oldp+1129,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data),32);
        bufp->chgIData(oldp+1130,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data),32);
        bufp->chgIData(oldp+1131,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data),32);
        bufp->chgIData(oldp+1132,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data),32);
        bufp->chgBit(oldp+1133,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5));
        bufp->chgBit(oldp+1134,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1135,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1136,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))));
        bufp->chgBit(oldp+1137,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5));
        bufp->chgBit(oldp+1138,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_i_count) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                    >> 1U))));
        bufp->chgBit(oldp+1139,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5));
        bufp->chgBit(oldp+1140,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1141,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_pf_stall) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                    >> 1U))));
        bufp->chgBit(oldp+1142,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1143,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                                       & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1144,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5));
        bufp->chgBit(oldp+1145,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we));
        bufp->chgCData(oldp+1146,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr),7);
        bufp->chgIData(oldp+1147,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data),32);
        bufp->chgCData(oldp+1148,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel),4);
        bufp->chgCData(oldp+1149,((3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))),2);
        bufp->chgBit(oldp+1150,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request));
        bufp->chgBit(oldp+1151,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort));
        bufp->chgBit(oldp+1152,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy));
        bufp->chgBit(oldp+1153,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err));
        bufp->chgIData(oldp+1154,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src),28);
        bufp->chgIData(oldp+1155,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst),28);
        bufp->chgIData(oldp+1156,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                                   << 6U)),28);
        bufp->chgIData(oldp+1157,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                                   << 6U)),28);
        bufp->chgIData(oldp+1158,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length),28);
        bufp->chgIData(oldp+1159,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length),28);
        bufp->chgSData(oldp+1160,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen),11);
        bufp->chgBit(oldp+1161,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger));
        bufp->chgBit(oldp+1162,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request));
        bufp->chgBit(oldp+1163,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request));
        bufp->chgBit(oldp+1164,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy));
        bufp->chgBit(oldp+1165,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy));
        bufp->chgBit(oldp+1166,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err));
        bufp->chgBit(oldp+1167,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err));
        bufp->chgBit(oldp+1168,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc));
        bufp->chgBit(oldp+1169,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc));
        bufp->chgCData(oldp+1170,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size),2);
        bufp->chgCData(oldp+1171,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size),2);
        bufp->chgIData(oldp+1172,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr),28);
        bufp->chgIData(oldp+1173,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr),28);
        bufp->chgSData(oldp+1174,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen),11);
        bufp->chgBit(oldp+1175,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc));
        bufp->chgBit(oldp+1176,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb));
        bufp->chgBit(oldp+1177,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall));
        bufp->chgBit(oldp+1178,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack));
        bufp->chgBit(oldp+1179,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err));
        bufp->chgIData(oldp+1180,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr),22);
        bufp->chgQData(oldp+1181,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel),64);
        bufp->chgBit(oldp+1183,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid));
        bufp->chgBit(oldp+1184,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready));
        bufp->chgBit(oldp+1185,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last));
        bufp->chgWData(oldp+1186,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg),512);
        bufp->chgCData(oldp+1202,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes),7);
        bufp->chgBit(oldp+1203,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
        bufp->chgBit(oldp+1204,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))));
        bufp->chgBit(oldp+1205,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last));
        __Vtemp_hd1e4c677__0[0U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U];
        __Vtemp_hd1e4c677__0[1U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U];
        __Vtemp_hd1e4c677__0[2U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U];
        __Vtemp_hd1e4c677__0[3U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U];
        __Vtemp_hd1e4c677__0[4U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U];
        __Vtemp_hd1e4c677__0[5U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U];
        __Vtemp_hd1e4c677__0[6U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U];
        __Vtemp_hd1e4c677__0[7U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U];
        __Vtemp_hd1e4c677__0[8U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U];
        __Vtemp_hd1e4c677__0[9U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U];
        __Vtemp_hd1e4c677__0[0xaU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU];
        __Vtemp_hd1e4c677__0[0xbU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU];
        __Vtemp_hd1e4c677__0[0xcU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU];
        __Vtemp_hd1e4c677__0[0xdU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU];
        __Vtemp_hd1e4c677__0[0xeU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU];
        __Vtemp_hd1e4c677__0[0xfU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU];
        bufp->chgWData(oldp+1206,(__Vtemp_hd1e4c677__0),512);
        bufp->chgCData(oldp+1222,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes),7);
        bufp->chgBit(oldp+1223,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)))));
        bufp->chgBit(oldp+1224,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
        bufp->chgBit(oldp+1225,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
                                       >> 7U))));
        __Vtemp_h6ddae8d1__0[0U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0U];
        __Vtemp_h6ddae8d1__0[1U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[1U];
        __Vtemp_h6ddae8d1__0[2U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[2U];
        __Vtemp_h6ddae8d1__0[3U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[3U];
        __Vtemp_h6ddae8d1__0[4U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[4U];
        __Vtemp_h6ddae8d1__0[5U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[5U];
        __Vtemp_h6ddae8d1__0[6U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[6U];
        __Vtemp_h6ddae8d1__0[7U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[7U];
        __Vtemp_h6ddae8d1__0[8U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[8U];
        __Vtemp_h6ddae8d1__0[9U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[9U];
        __Vtemp_h6ddae8d1__0[0xaU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xaU];
        __Vtemp_h6ddae8d1__0[0xbU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xbU];
        __Vtemp_h6ddae8d1__0[0xcU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xcU];
        __Vtemp_h6ddae8d1__0[0xdU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xdU];
        __Vtemp_h6ddae8d1__0[0xeU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xeU];
        __Vtemp_h6ddae8d1__0[0xfU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0xfU];
        bufp->chgWData(oldp+1226,(__Vtemp_h6ddae8d1__0),512);
        bufp->chgCData(oldp+1242,((0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])),7);
        bufp->chgBit(oldp+1243,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full));
        bufp->chgBit(oldp+1244,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty));
        bufp->chgCData(oldp+1245,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill),5);
        bufp->chgBit(oldp+1246,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid));
        bufp->chgBit(oldp+1247,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready));
        bufp->chgBit(oldp+1248,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last));
        bufp->chgWData(oldp+1249,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg),512);
        bufp->chgCData(oldp+1265,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes),7);
        bufp->chgBit(oldp+1266,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc));
        bufp->chgBit(oldp+1267,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb));
        bufp->chgBit(oldp+1268,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall));
        bufp->chgBit(oldp+1269,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack));
        bufp->chgBit(oldp+1270,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err));
        bufp->chgIData(oldp+1271,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr),22);
        bufp->chgQData(oldp+1272,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel),64);
        bufp->chgBit(oldp+1274,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
        bufp->chgBit(oldp+1275,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner));
        bufp->chgBit(oldp+1276,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger));
        bufp->chgBit(oldp+1277,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err));
        bufp->chgBit(oldp+1278,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len));
        bufp->chgBit(oldp+1279,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy));
        bufp->chgCData(oldp+1280,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel),5);
        bufp->chgIData(oldp+1281,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src),32);
        bufp->chgIData(oldp+1282,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst),32);
        bufp->chgIData(oldp+1283,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len),32);
        bufp->chgIData(oldp+1284,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen),32);
        bufp->chgIData(oldp+1285,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg),32);
        bufp->chgCData(oldp+1286,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state),2);
        bufp->chgBit(oldp+1287,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset));
        bufp->chgCData(oldp+1288,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size),7);
        bufp->chgCData(oldp+1289,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size),7);
        bufp->chgCData(oldp+1290,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size),7);
        bufp->chgCData(oldp+1291,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size),7);
        bufp->chgIData(oldp+1292,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr),28);
        bufp->chgIData(oldp+1293,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr),28);
        bufp->chgCData(oldp+1294,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr),6);
        bufp->chgCData(oldp+1295,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr),6);
        bufp->chgQData(oldp+1296,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel),64);
        bufp->chgQData(oldp+1298,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                    ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                        ? (0x8000000000000000ULL 
                                           >> (0x3fU 
                                               & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                        : ((0x4000000000000000ULL 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))) 
                                               << 0x3fU)) 
                                           >> (0x3eU 
                                               & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                    : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                        ? ((2U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)
                                            ? ((1U 
                                                & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)
                                                ? (0x1000000000000000ULL 
                                                   >> 
                                                   (0x3cU 
                                                    & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                                : (0x3000000000000000ULL 
                                                   >> 
                                                   (0x3cU 
                                                    & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                            : ((1U 
                                                & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)
                                                ? (0x7000000000000000ULL 
                                                   >> 
                                                   (0x3cU 
                                                    & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                                : (0xf000000000000000ULL 
                                                   >> 
                                                   (0x3cU 
                                                    & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))))
                                        : (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))))),64);
        bufp->chgQData(oldp+1300,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel),64);
        bufp->chgQData(oldp+1302,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                    ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                        ? (0x8000000000000000ULL 
                                           >> (0x3fU 
                                               & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                        : (0xc000000000000000ULL 
                                           >> (0x3eU 
                                               & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                    : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                        ? (0xf000000000000000ULL 
                                           >> (0x3cU 
                                               & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                        : 0xffffffffffffffffULL))),64);
        bufp->chgSData(oldp+1304,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding),11);
        bufp->chgCData(oldp+1305,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill),8);
        bufp->chgCData(oldp+1306,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill),8);
        bufp->chgSData(oldp+1307,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len),11);
        bufp->chgSData(oldp+1308,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len),11);
        bufp->chgCData(oldp+1309,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift),6);
        __Vtemp_hc1d82fb0__1[0U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x20U];
        __Vtemp_hc1d82fb0__1[1U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x21U];
        __Vtemp_hc1d82fb0__1[2U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x22U];
        __Vtemp_hc1d82fb0__1[3U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x23U];
        __Vtemp_hc1d82fb0__1[4U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x24U];
        __Vtemp_hc1d82fb0__1[5U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x25U];
        __Vtemp_hc1d82fb0__1[6U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x26U];
        __Vtemp_hc1d82fb0__1[7U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x27U];
        __Vtemp_hc1d82fb0__1[8U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x28U];
        __Vtemp_hc1d82fb0__1[9U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x29U];
        __Vtemp_hc1d82fb0__1[0xaU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2aU];
        __Vtemp_hc1d82fb0__1[0xbU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2bU];
        __Vtemp_hc1d82fb0__1[0xcU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2cU];
        __Vtemp_hc1d82fb0__1[0xdU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2dU];
        __Vtemp_hc1d82fb0__1[0xeU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2eU];
        __Vtemp_hc1d82fb0__1[0xfU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata[0x2fU];
        VL_SHIFTL_WWI(512,512,32, __Vtemp_h6d0d1506__0, __Vtemp_hc1d82fb0__1, 
                      ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift) 
                       << 3U));
        bufp->chgWData(oldp+1310,(__Vtemp_h6d0d1506__0),512);
        bufp->chgBit(oldp+1326,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc));
        bufp->chgCData(oldp+1327,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size),2);
        bufp->chgWData(oldp+1328,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg),1024);
        bufp->chgCData(oldp+1360,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill),8);
        bufp->chgCData(oldp+1361,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill),8);
        bufp->chgBit(oldp+1362,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last));
        bufp->chgBit(oldp+1363,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last));
        bufp->chgBit(oldp+1364,((0x40U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill))));
        bufp->chgCData(oldp+1365,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift),6);
        bufp->chgWData(oldp+1366,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data),512);
        bufp->chgBit(oldp+1382,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc));
        bufp->chgCData(oldp+1383,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size),2);
        bufp->chgIData(oldp+1384,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr),29);
        bufp->chgCData(oldp+1385,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr),6);
        bufp->chgWData(oldp+1386,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data),1024);
        bufp->chgWData(oldp+1418,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data),512);
        bufp->chgWData(oldp+1434,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel),128);
        bufp->chgWData(oldp+1438,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel),128);
        bufp->chgQData(oldp+1442,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel),64);
        bufp->chgBit(oldp+1444,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last));
        bufp->chgSData(oldp+1445,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding),10);
        bufp->chgBit(oldp+1446,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full));
        bufp->chgBit(oldp+1447,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
                                       >> 0x1cU))));
        __Vtemp_h6b3f223d__0[0U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x10U];
        __Vtemp_h6b3f223d__0[1U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x11U];
        __Vtemp_h6b3f223d__0[2U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x12U];
        __Vtemp_h6b3f223d__0[3U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x13U];
        __Vtemp_h6b3f223d__0[4U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x14U];
        __Vtemp_h6b3f223d__0[5U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x15U];
        __Vtemp_h6b3f223d__0[6U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x16U];
        __Vtemp_h6b3f223d__0[7U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x17U];
        __Vtemp_h6b3f223d__0[8U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x18U];
        __Vtemp_h6b3f223d__0[9U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x19U];
        __Vtemp_h6b3f223d__0[0xaU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1aU];
        __Vtemp_h6b3f223d__0[0xbU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1bU];
        __Vtemp_h6b3f223d__0[0xcU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1cU];
        __Vtemp_h6b3f223d__0[0xdU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1dU];
        __Vtemp_h6b3f223d__0[0xeU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1eU];
        __Vtemp_h6b3f223d__0[0xfU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg[0x1fU];
        __Vtemp_h6b3f223d__0[0x10U] = (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last) 
                                        << 7U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes));
        bufp->chgWData(oldp+1448,(__Vtemp_h6b3f223d__0),520);
        bufp->chgWData(oldp+1465,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data),520);
        bufp->chgWData(oldp+1482,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[0]),520);
        bufp->chgWData(oldp+1499,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[1]),520);
        bufp->chgWData(oldp+1516,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[2]),520);
        bufp->chgWData(oldp+1533,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[3]),520);
        bufp->chgWData(oldp+1550,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[4]),520);
        bufp->chgWData(oldp+1567,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[5]),520);
        bufp->chgWData(oldp+1584,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[6]),520);
        bufp->chgWData(oldp+1601,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[7]),520);
        bufp->chgWData(oldp+1618,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[8]),520);
        bufp->chgWData(oldp+1635,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[9]),520);
        bufp->chgWData(oldp+1652,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[10]),520);
        bufp->chgWData(oldp+1669,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[11]),520);
        bufp->chgWData(oldp+1686,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[12]),520);
        bufp->chgWData(oldp+1703,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[13]),520);
        bufp->chgWData(oldp+1720,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[14]),520);
        bufp->chgWData(oldp+1737,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[15]),520);
        bufp->chgCData(oldp+1754,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr),5);
        bufp->chgCData(oldp+1755,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr),5);
        bufp->chgBit(oldp+1756,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr));
        bufp->chgBit(oldp+1757,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd));
        bufp->chgBit(oldp+1758,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last));
        bufp->chgBit(oldp+1759,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next));
        bufp->chgCData(oldp+1760,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill),7);
        bufp->chgCData(oldp+1761,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter),5);
        bufp->chgSData(oldp+1762,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state),15);
        bufp->chgSData(oldp+1763,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable),15);
        bufp->chgBit(oldp+1764,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie));
        bufp->chgBit(oldp+1765,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any));
        bufp->chgBit(oldp+1766,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write));
        bufp->chgBit(oldp+1767,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints));
        bufp->chgBit(oldp+1768,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints));
        bufp->chgSData(oldp+1769,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state),15);
        bufp->chgSData(oldp+1770,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable),15);
        bufp->chgBit(oldp+1771,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie));
        bufp->chgBit(oldp+1772,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any));
        bufp->chgBit(oldp+1773,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write));
        bufp->chgBit(oldp+1774,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints));
        bufp->chgBit(oldp+1775,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints));
        bufp->chgBit(oldp+1776,(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner));
        bufp->chgCData(oldp+1777,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))),5);
        bufp->chgBit(oldp+1778,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc));
        bufp->chgBit(oldp+1779,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
        bufp->chgIData(oldp+1780,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address),28);
        bufp->chgIData(oldp+1781,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]),32);
        bufp->chgIData(oldp+1782,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc),28);
        bufp->chgBit(oldp+1783,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
        bufp->chgBit(oldp+1784,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
        bufp->chgBit(oldp+1785,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
        bufp->chgBit(oldp+1786,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
        bufp->chgBit(oldp+1787,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
        bufp->chgBit(oldp+1788,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
        bufp->chgBit(oldp+1789,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err));
        bufp->chgIData(oldp+1790,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr),22);
        bufp->chgBit(oldp+1791,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache));
        bufp->chgBit(oldp+1792,((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
        bufp->chgCData(oldp+1793,((7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),3);
        bufp->chgIData(oldp+1794,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr),32);
        bufp->chgIData(oldp+1795,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc),28);
        bufp->chgIData(oldp+1796,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata),32);
        bufp->chgCData(oldp+1797,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R),5);
        bufp->chgBit(oldp+1798,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
        bufp->chgBit(oldp+1799,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy));
        bufp->chgBit(oldp+1800,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled));
        bufp->chgBit(oldp+1801,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
        bufp->chgBit(oldp+1802,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err));
        bufp->chgCData(oldp+1803,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
        bufp->chgIData(oldp+1804,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
        bufp->chgBit(oldp+1805,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
        bufp->chgBit(oldp+1806,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
        bufp->chgBit(oldp+1807,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
        bufp->chgBit(oldp+1808,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl));
        bufp->chgIData(oldp+1809,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr),22);
        bufp->chgBit(oldp+1810,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
        bufp->chgBit(oldp+1811,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
        bufp->chgBit(oldp+1812,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
        bufp->chgBit(oldp+1813,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err));
        bufp->chgQData(oldp+1814,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel),64);
        bufp->chgIData(oldp+1816,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__ik),32);
        bufp->chgBit(oldp+1817,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc));
        bufp->chgBit(oldp+1818,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb));
        bufp->chgBit(oldp+1819,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack));
        bufp->chgBit(oldp+1820,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line));
        bufp->chgBit(oldp+1821,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb));
        bufp->chgBit(oldp+1822,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
        bufp->chgBit(oldp+1823,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
        bufp->chgCData(oldp+1824,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending),5);
        bufp->chgCData(oldp+1825,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v),8);
        bufp->chgIData(oldp+1826,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[0]),19);
        bufp->chgIData(oldp+1827,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[1]),19);
        bufp->chgIData(oldp+1828,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[2]),19);
        bufp->chgIData(oldp+1829,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[3]),19);
        bufp->chgIData(oldp+1830,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[4]),19);
        bufp->chgIData(oldp+1831,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[5]),19);
        bufp->chgIData(oldp+1832,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[6]),19);
        bufp->chgIData(oldp+1833,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[7]),19);
        bufp->chgBit(oldp+1834,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag));
        bufp->chgCData(oldp+1835,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state),2);
        bufp->chgCData(oldp+1836,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr),6);
        bufp->chgWData(oldp+1837,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword),512);
        bufp->chgWData(oldp+1853,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword),512);
        bufp->chgBit(oldp+1869,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl));
        bufp->chgBit(oldp+1870,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl));
        bufp->chgBit(oldp+1871,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr));
        bufp->chgWData(oldp+1872,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata),512);
        bufp->chgQData(oldp+1888,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel),64);
        bufp->chgCData(oldp+1890,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr),6);
        bufp->chgIData(oldp+1891,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag),19);
        bufp->chgBit(oldp+1892,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid));
        bufp->chgCData(oldp+1893,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 9U))),3);
        bufp->chgCData(oldp+1894,((0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                            >> 6U))),6);
        bufp->chgBit(oldp+1895,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow));
        bufp->chgBit(oldp+1896,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable));
        bufp->chgBit(oldp+1897,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address));
        bufp->chgBit(oldp+1898,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable));
        bufp->chgBit(oldp+1899,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid));
        bufp->chgBit(oldp+1900,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid));
        bufp->chgBit(oldp+1901,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd));
        bufp->chgBit(oldp+1902,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss));
        bufp->chgBit(oldp+1903,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending));
        bufp->chgIData(oldp+1904,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr),22);
        bufp->chgCData(oldp+1905,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                         >> 3U))),3);
        bufp->chgCData(oldp+1906,((0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)),6);
        bufp->chgIData(oldp+1907,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                               >> 3U))),19);
        bufp->chgBit(oldp+1908,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb));
        bufp->chgBit(oldp+1909,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv));
        bufp->chgBit(oldp+1910,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache));
        bufp->chgIData(oldp+1911,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag),19);
        bufp->chgSData(oldp+1912,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data),13);
        bufp->chgBit(oldp+1913,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie));
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
        bufp->chgWData(oldp+1914,(__Vtemp_h01ff8f7b__0),512);
        bufp->chgWData(oldp+1930,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted),512);
        bufp->chgCData(oldp+1946,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel),4);
        bufp->chgQData(oldp+1947,(((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                              >> 0x18U))
                                    ? ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                       >> (3U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                                    : (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                        << 0x3cU) >> 
                                       (0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),64);
        bufp->chgIData(oldp+1949,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift),32);
        bufp->chgWData(oldp+1950,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift),512);
        bufp->chgWData(oldp+1966,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data),512);
        bufp->chgSData(oldp+1982,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[0]),12);
        bufp->chgSData(oldp+1983,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[1]),12);
        bufp->chgSData(oldp+1984,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[2]),12);
        bufp->chgSData(oldp+1985,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[3]),12);
        bufp->chgSData(oldp+1986,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[4]),12);
        bufp->chgSData(oldp+1987,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[5]),12);
        bufp->chgSData(oldp+1988,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[6]),12);
        bufp->chgSData(oldp+1989,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[7]),12);
        bufp->chgSData(oldp+1990,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[8]),12);
        bufp->chgSData(oldp+1991,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[9]),12);
        bufp->chgSData(oldp+1992,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[10]),12);
        bufp->chgSData(oldp+1993,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[11]),12);
        bufp->chgSData(oldp+1994,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[12]),12);
        bufp->chgSData(oldp+1995,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[13]),12);
        bufp->chgSData(oldp+1996,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[14]),12);
        bufp->chgSData(oldp+1997,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[15]),12);
        bufp->chgCData(oldp+1998,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr),5);
        bufp->chgCData(oldp+1999,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr),5);
        bufp->chgIData(oldp+2000,((0xfffffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)),28);
        bufp->chgBit(oldp+2001,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v));
        if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc) {
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
        bufp->chgWData(oldp+2002,(__Vtemp_he3c3974d__0),512);
        bufp->chgSData(oldp+2018,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[0]),16);
        bufp->chgSData(oldp+2019,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[1]),16);
        bufp->chgSData(oldp+2020,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[2]),16);
        bufp->chgSData(oldp+2021,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[3]),16);
        bufp->chgSData(oldp+2022,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[4]),16);
        bufp->chgSData(oldp+2023,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[5]),16);
        bufp->chgSData(oldp+2024,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[6]),16);
        bufp->chgSData(oldp+2025,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[7]),16);
        bufp->chgCData(oldp+2026,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask),8);
        bufp->chgBit(oldp+2027,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc));
        bufp->chgBit(oldp+2028,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
        bufp->chgBit(oldp+2029,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc));
        bufp->chgBit(oldp+2030,((((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                               >> 9U)) 
                                  == (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                                  >> 9U))) 
                                 & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
                                     == (0x7ffffU & 
                                         (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                          >> 9U))) 
                                    & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                       >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                 >> 9U)))))));
        bufp->chgBit(oldp+2031,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last));
        bufp->chgIData(oldp+2032,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc),28);
        bufp->chgCData(oldp+2033,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr),6);
        bufp->chgIData(oldp+2034,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup),19);
        bufp->chgIData(oldp+2035,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup),19);
        bufp->chgIData(oldp+2036,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup),19);
        bufp->chgIData(oldp+2037,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                               >> 9U))),19);
        bufp->chgIData(oldp+2038,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                               >> 9U))),19);
        bufp->chgBit(oldp+2039,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid));
        bufp->chgIData(oldp+2040,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache),19);
        bufp->chgWData(oldp+2041,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache),512);
        bufp->chgWData(oldp+2057,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache),512);
        bufp->chgBit(oldp+2073,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc));
        bufp->chgCData(oldp+2074,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay),2);
        bufp->chgBit(oldp+2075,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask));
        bufp->chgBit(oldp+2076,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack));
        bufp->chgBit(oldp+2077,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload));
        bufp->chgBit(oldp+2078,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr));
        bufp->chgBit(oldp+2079,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort));
        bufp->chgCData(oldp+2080,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr),3);
        bufp->chgBit(oldp+2081,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result));
        bufp->chgCData(oldp+2082,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                         >> 9U))),3);
        bufp->chgCData(oldp+2083,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                         >> 9U))),3);
        bufp->chgWData(oldp+2084,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted),512);
        bufp->chgCData(oldp+2100,((0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                           >> 2U))),4);
        bufp->chgBit(oldp+2101,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
        bufp->chgIData(oldp+2102,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[0]),32);
        bufp->chgIData(oldp+2103,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[1]),32);
        bufp->chgIData(oldp+2104,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[2]),32);
        bufp->chgIData(oldp+2105,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[3]),32);
        bufp->chgIData(oldp+2106,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[4]),32);
        bufp->chgIData(oldp+2107,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[5]),32);
        bufp->chgIData(oldp+2108,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[6]),32);
        bufp->chgIData(oldp+2109,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[7]),32);
        bufp->chgIData(oldp+2110,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[8]),32);
        bufp->chgIData(oldp+2111,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[9]),32);
        bufp->chgIData(oldp+2112,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[10]),32);
        bufp->chgIData(oldp+2113,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[11]),32);
        bufp->chgIData(oldp+2114,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[12]),32);
        bufp->chgIData(oldp+2115,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[13]),32);
        bufp->chgIData(oldp+2116,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[14]),32);
        bufp->chgIData(oldp+2117,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[15]),32);
        bufp->chgIData(oldp+2118,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[16]),32);
        bufp->chgIData(oldp+2119,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[17]),32);
        bufp->chgIData(oldp+2120,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[18]),32);
        bufp->chgIData(oldp+2121,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[19]),32);
        bufp->chgIData(oldp+2122,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[20]),32);
        bufp->chgIData(oldp+2123,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[21]),32);
        bufp->chgIData(oldp+2124,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[22]),32);
        bufp->chgIData(oldp+2125,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[23]),32);
        bufp->chgIData(oldp+2126,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[24]),32);
        bufp->chgIData(oldp+2127,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[25]),32);
        bufp->chgIData(oldp+2128,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[26]),32);
        bufp->chgIData(oldp+2129,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[27]),32);
        bufp->chgIData(oldp+2130,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[28]),32);
        bufp->chgIData(oldp+2131,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[29]),32);
        bufp->chgIData(oldp+2132,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[30]),32);
        bufp->chgIData(oldp+2133,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[31]),32);
        bufp->chgCData(oldp+2134,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags),4);
        bufp->chgCData(oldp+2135,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags),4);
        bufp->chgSData(oldp+2136,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags),16);
        bufp->chgSData(oldp+2137,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags),16);
        bufp->chgBit(oldp+2138,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en));
        bufp->chgBit(oldp+2139,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
        bufp->chgBit(oldp+2140,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep));
        bufp->chgBit(oldp+2141,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted));
        bufp->chgBit(oldp+2142,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending));
        bufp->chgBit(oldp+2143,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
        bufp->chgBit(oldp+2144,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie));
        bufp->chgBit(oldp+2145,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
        bufp->chgBit(oldp+2146,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt));
        bufp->chgBit(oldp+2147,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped));
        bufp->chgBit(oldp+2148,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step));
        bufp->chgBit(oldp+2149,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
        bufp->chgBit(oldp+2150,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i));
        bufp->chgBit(oldp+2151,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag));
        bufp->chgBit(oldp+2152,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
        bufp->chgBit(oldp+2153,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag));
        bufp->chgBit(oldp+2154,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag));
        bufp->chgBit(oldp+2155,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
        bufp->chgBit(oldp+2156,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
        bufp->chgBit(oldp+2157,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce));
        bufp->chgIData(oldp+2158,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc),28);
        bufp->chgBit(oldp+2159,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
        bufp->chgCData(oldp+2160,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn),4);
        bufp->chgBit(oldp+2161,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
        bufp->chgCData(oldp+2162,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))),5);
        bufp->chgCData(oldp+2163,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))),5);
        bufp->chgCData(oldp+2164,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R))),5);
        bufp->chgCData(oldp+2165,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA),5);
        bufp->chgCData(oldp+2166,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB),5);
        bufp->chgBit(oldp+2167,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                       >> 6U))));
        bufp->chgBit(oldp+2168,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                       >> 6U))));
        bufp->chgBit(oldp+2169,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                       >> 5U))));
        bufp->chgBit(oldp+2170,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                       >> 5U))));
        bufp->chgBit(oldp+2171,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                       >> 6U))));
        bufp->chgBit(oldp+2172,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                       >> 5U))));
        bufp->chgCData(oldp+2173,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F),4);
        bufp->chgBit(oldp+2174,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR));
        bufp->chgBit(oldp+2175,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA));
        bufp->chgBit(oldp+2176,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB));
        bufp->chgBit(oldp+2177,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU));
        bufp->chgBit(oldp+2178,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M));
        bufp->chgBit(oldp+2179,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV));
        bufp->chgBit(oldp+2180,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP));
        bufp->chgBit(oldp+2181,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF));
        bufp->chgBit(oldp+2182,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break));
        bufp->chgBit(oldp+2183,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock));
        bufp->chgBit(oldp+2184,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe));
        bufp->chgBit(oldp+2185,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp));
        bufp->chgBit(oldp+2186,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid));
        bufp->chgIData(oldp+2187,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I),32);
        bufp->chgBit(oldp+2188,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI));
        bufp->chgBit(oldp+2189,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal));
        bufp->chgBit(oldp+2190,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch));
        bufp->chgBit(oldp+2191,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb));
        bufp->chgIData(oldp+2192,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc),28);
        bufp->chgBit(oldp+2193,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall));
        bufp->chgBit(oldp+2194,((1U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
        bufp->chgBit(oldp+2195,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd));
        bufp->chgBit(oldp+2196,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write));
        bufp->chgBit(oldp+2197,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem));
        bufp->chgBit(oldp+2198,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
        bufp->chgBit(oldp+2199,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div));
        bufp->chgBit(oldp+2200,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu));
        bufp->chgCData(oldp+2201,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn),4);
        bufp->chgBit(oldp+2202,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc));
        bufp->chgCData(oldp+2203,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid),5);
        bufp->chgCData(oldp+2204,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid),5);
        bufp->chgBit(oldp+2205,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA));
        bufp->chgBit(oldp+2206,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB));
        bufp->chgIData(oldp+2207,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av),32);
        bufp->chgIData(oldp+2208,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv),32);
        bufp->chgIData(oldp+2209,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),28);
        bufp->chgIData(oldp+2210,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av),32);
        bufp->chgIData(oldp+2211,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv),32);
        bufp->chgIData(oldp+2212,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
                                    ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
                                        ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv
                                        : (0xeb800000U 
                                           | ((0x7f0000U 
                                               & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv) 
                                              | ((0x10U 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))
                                                  ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags)
                                                  : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags)))))
                                    : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
                                        ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl
                                        : 0U))),32);
        bufp->chgBit(oldp+2213,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR));
        bufp->chgBit(oldp+2214,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
        bufp->chgCData(oldp+2215,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                                    ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0)
                                    : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))),4);
        bufp->chgCData(oldp+2216,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F),7);
        bufp->chgCData(oldp+2217,(((0x80U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F) 
                                             << 4U)) 
                                   | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F))),8);
        bufp->chgBit(oldp+2218,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
        bufp->chgBit(oldp+2219,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe));
        bufp->chgBit(oldp+2220,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break));
        bufp->chgBit(oldp+2221,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
        bufp->chgBit(oldp+2222,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal));
        bufp->chgBit(oldp+2223,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock));
        bufp->chgIData(oldp+2224,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc),28);
        bufp->chgCData(oldp+2225,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg),5);
        bufp->chgBit(oldp+2226,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
        bufp->chgBit(oldp+2227,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid));
        bufp->chgBit(oldp+2228,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
        bufp->chgBit(oldp+2229,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
        bufp->chgIData(oldp+2230,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result),32);
        bufp->chgCData(oldp+2231,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                                     & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0)) 
                                    << 3U) | ((4U & 
                                               ((4U 
                                                 & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                                                    >> 0x1dU)) 
                                                ^ (
                                                   ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                                                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0)) 
                                                   << 2U))) 
                                              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c) 
                                                  << 1U) 
                                                 | (0U 
                                                    == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result))))),4);
        bufp->chgBit(oldp+2232,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid));
        bufp->chgBit(oldp+2233,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy));
        bufp->chgBit(oldp+2234,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond));
        bufp->chgBit(oldp+2235,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR));
        bufp->chgBit(oldp+2236,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF));
        bufp->chgBit(oldp+2237,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal));
        bufp->chgBit(oldp+2238,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error));
        bufp->chgBit(oldp+2239,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy));
        bufp->chgBit(oldp+2240,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid));
        bufp->chgIData(oldp+2241,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result),32);
        bufp->chgCData(oldp+2242,(((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                          >> 0x1dU)) 
                                   | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
                                       << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z)))),4);
        bufp->chgBit(oldp+2243,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv));
        bufp->chgBit(oldp+2244,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe));
        bufp->chgIData(oldp+2245,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val),32);
        bufp->chgIData(oldp+2246,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc),32);
        bufp->chgBit(oldp+2247,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall));
        bufp->chgBit(oldp+2248,((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
        bufp->chgBit(oldp+2249,((0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
        bufp->chgBit(oldp+2250,((0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
        bufp->chgBit(oldp+2251,((0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
        bufp->chgBit(oldp+2252,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce));
        bufp->chgBit(oldp+2253,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce));
        bufp->chgCData(oldp+2254,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags),4);
        bufp->chgCData(oldp+2255,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index),3);
        bufp->chgCData(oldp+2256,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id),5);
        bufp->chgIData(oldp+2257,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl),32);
        bufp->chgIData(oldp+2258,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl),32);
        bufp->chgBit(oldp+2259,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt));
        bufp->chgBit(oldp+2260,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt));
        bufp->chgIData(oldp+2261,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc),28);
        bufp->chgIData(oldp+2262,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc),28);
        bufp->chgBit(oldp+2263,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc));
        bufp->chgBit(oldp+2264,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc))));
        bufp->chgCData(oldp+2265,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R),7);
        bufp->chgCData(oldp+2266,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A),7);
        bufp->chgCData(oldp+2267,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B),7);
        bufp->chgCData(oldp+2268,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc),2);
        bufp->chgBit(oldp+2269,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim));
        bufp->chgIData(oldp+2270,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv),23);
        bufp->chgCData(oldp+2271,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid),5);
        bufp->chgCData(oldp+2272,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock),2);
        bufp->chgBit(oldp+2273,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset));
        bufp->chgBit(oldp+2274,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
        bufp->chgBit(oldp+2275,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
        bufp->chgIData(oldp+2276,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
        bufp->chgQData(oldp+2277,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
        bufp->chgQData(oldp+2279,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
        bufp->chgBit(oldp+2281,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
        bufp->chgBit(oldp+2282,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
        bufp->chgBit(oldp+2283,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
        bufp->chgBit(oldp+2284,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
        bufp->chgBit(oldp+2285,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
        bufp->chgCData(oldp+2286,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
        bufp->chgBit(oldp+2287,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
        bufp->chgBit(oldp+2288,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2289,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
        bufp->chgBit(oldp+2290,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb));
        bufp->chgIData(oldp+2291,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr),28);
        bufp->chgIData(oldp+2292,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks),32);
        bufp->chgBit(oldp+2293,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim));
        bufp->chgIData(oldp+2294,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv),23);
        bufp->chgIData(oldp+2295,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                                  [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))]),32);
        bufp->chgIData(oldp+2296,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result),32);
        bufp->chgBit(oldp+2297,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)));
        bufp->chgBit(oldp+2298,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2299,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
        bufp->chgBit(oldp+2300,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
        bufp->chgBit(oldp+2301,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c));
        bufp->chgBit(oldp+2302,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign));
        bufp->chgBit(oldp+2303,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl));
        bufp->chgBit(oldp+2304,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl));
        bufp->chgQData(oldp+2305,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result),33);
        bufp->chgQData(oldp+2307,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result),33);
        bufp->chgQData(oldp+2309,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result),33);
        bufp->chgQData(oldp+2311,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result),64);
        bufp->chgBit(oldp+2313,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi));
        bufp->chgBit(oldp+2314,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe))));
        bufp->chgBit(oldp+2315,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                                       >> 1U))));
        bufp->chgQData(oldp+2316,(((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                   << 1U)),33);
        bufp->chgQData(oldp+2318,((0x1ffffffffULL & 
                                   VL_SHIFTRS_QQI(33,33,5, 
                                                  ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                   << 1U), 
                                                  (0x1fU 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),33);
        bufp->chgCData(oldp+2320,((3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),2);
        bufp->chgQData(oldp+2321,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result),64);
        bufp->chgQData(oldp+2323,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result),64);
        bufp->chgIData(oldp+2325,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input),32);
        bufp->chgIData(oldp+2326,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input),32);
        bufp->chgCData(oldp+2327,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe),2);
        bufp->chgCData(oldp+2328,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn),2);
        bufp->chgQData(oldp+2329,((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input)))),64);
        bufp->chgQData(oldp+2331,((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input)))),64);
        bufp->chgQData(oldp+2333,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input))),64);
        bufp->chgQData(oldp+2335,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input))),64);
        bufp->chgBit(oldp+2337,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset));
        bufp->chgCData(oldp+2338,((0x1fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                            >> 0x16U))),5);
        bufp->chgBit(oldp+2339,((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                  >> 1U)))));
        bufp->chgBit(oldp+2340,((0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2341,((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                >> 1U)))));
        bufp->chgBit(oldp+2342,((9U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2343,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU));
        bufp->chgBit(oldp+2344,((8U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2345,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
        bufp->chgBit(oldp+2346,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock));
        bufp->chgBit(oldp+2347,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 & (0x7800000U == (0x7c00000U 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
        bufp->chgBit(oldp+2348,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 & (0x7000000U == (0x7c00000U 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
        bufp->chgBit(oldp+2349,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special));
        bufp->chgBit(oldp+2350,((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2351,(((5U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U))) 
                                 | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))));
        bufp->chgBit(oldp+2352,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc));
        bufp->chgBit(oldp+2353,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc));
        bufp->chgBit(oldp+2354,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                                 & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
        bufp->chgBit(oldp+2355,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                                 & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
        bufp->chgCData(oldp+2356,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0)
                                    ? 8U : (((0U == 
                                              (7U & 
                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))) 
                                             << 3U) 
                                            | (7U & 
                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))))),4);
        bufp->chgBit(oldp+2357,(((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U))) 
                                 | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0) 
                                     | (0U == (7U & 
                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
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
                                                          >> 0x1cU))))))))))));
        bufp->chgBit(oldp+2358,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem));
        bufp->chgBit(oldp+2359,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto));
        bufp->chgBit(oldp+2360,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div));
        bufp->chgBit(oldp+2361,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu));
        bufp->chgBit(oldp+2362,((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                          | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                             | (8U 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                    >> 1U)))))))));
        bufp->chgBit(oldp+2363,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                                 | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                     & ((8U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                        & (0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                                    | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                       | (8U == (0xfU 
                                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                    >> 1U))))))));
        bufp->chgBit(oldp+2364,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB));
        bufp->chgBit(oldp+2365,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                    | (8U == (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U)))))));
        bufp->chgBit(oldp+2366,((0x7c87c000U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
        bufp->chgBit(oldp+2367,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp));
        bufp->chgIData(oldp+2368,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword),32);
        bufp->chgBit(oldp+2369,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid));
        bufp->chgSData(oldp+2370,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half),15);
        bufp->chgCData(oldp+2371,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op),5);
        bufp->chgIData(oldp+2372,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I),23);
        bufp->chgIData(oldp+2373,((0x7fffffU & ((2U 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
                                                  ? 
                                                 ((0x7fc000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                                     >> 0xdU)))) 
                                                      << 0xeU)) 
                                                  | (0x3fffU 
                                                     & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword))
                                                  : 
                                                 ((0x7c0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                                     >> 0x11U)))) 
                                                      << 0x12U)) 
                                                  | (0x3ffffU 
                                                     & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
                                                  ? 
                                                 ((0x7fe000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                                     >> 0xcU)))) 
                                                      << 0xdU)) 
                                                  | (0x1fffU 
                                                     & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword))
                                                  : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))),23);
        bufp->chgIData(oldp+2374,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I),23);
        bufp->chgBit(oldp+2375,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I)));
        bufp->chgCData(oldp+2376,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc),2);
        bufp->chgBit(oldp+2377,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable));
        bufp->chgCData(oldp+2378,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
        bufp->chgCData(oldp+2379,((0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                            >> 0x10U))),8);
        bufp->chgBit(oldp+2380,(((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                                 & (IData)((0x78800000U 
                                            == (0xfffc0000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]))))));
        bufp->chgBit(oldp+2381,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb));
        bufp->chgBit(oldp+2382,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set));
        bufp->chgBit(oldp+2383,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set));
        bufp->chgBit(oldp+2384,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now));
        bufp->chgIData(oldp+2385,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when),32);
        bufp->chgIData(oldp+2386,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when),32);
        bufp->chgIData(oldp+2387,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb),32);
        bufp->chgIData(oldp+2388,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when),32);
        bufp->chgBit(oldp+2389,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb));
        bufp->chgBit(oldp+2390,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running));
        bufp->chgBit(oldp+2391,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero));
        bufp->chgIData(oldp+2392,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value),31);
        bufp->chgBit(oldp+2393,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write));
        bufp->chgBit(oldp+2394,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload));
        bufp->chgIData(oldp+2395,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count),31);
        bufp->chgBit(oldp+2396,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb));
        bufp->chgBit(oldp+2397,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running));
        bufp->chgBit(oldp+2398,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero));
        bufp->chgIData(oldp+2399,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value),31);
        bufp->chgBit(oldp+2400,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write));
        bufp->chgBit(oldp+2401,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload));
        bufp->chgIData(oldp+2402,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count),31);
        bufp->chgBit(oldp+2403,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb));
        bufp->chgBit(oldp+2404,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running));
        bufp->chgBit(oldp+2405,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero));
        bufp->chgIData(oldp+2406,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value),31);
        bufp->chgBit(oldp+2407,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write));
        bufp->chgBit(oldp+2408,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload));
        bufp->chgIData(oldp+2409,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count),31);
        bufp->chgBit(oldp+2410,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2));
        bufp->chgSData(oldp+2411,(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value),14);
        bufp->chgBit(oldp+2412,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb));
        bufp->chgBit(oldp+2413,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running));
        bufp->chgBit(oldp+2414,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero));
        bufp->chgIData(oldp+2415,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),31);
        bufp->chgBit(oldp+2416,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write));
        bufp->chgCData(oldp+2417,(vlSelf->main__DOT__txv__DOT__baud_counter),7);
        bufp->chgCData(oldp+2418,(vlSelf->main__DOT__txv__DOT__state),4);
        bufp->chgCData(oldp+2419,(vlSelf->main__DOT__txv__DOT__lcl_data),8);
        bufp->chgBit(oldp+2420,(vlSelf->main__DOT__txv__DOT__zero_baud_counter));
        bufp->chgSData(oldp+2421,(vlSelf->main__DOT__u_fan__DOT__pwm_counter),13);
        bufp->chgSData(oldp+2422,(vlSelf->main__DOT__u_fan__DOT__ctl_fpga),13);
        bufp->chgSData(oldp+2423,(vlSelf->main__DOT__u_fan__DOT__ctl_sys),13);
        bufp->chgBit(oldp+2424,(vlSelf->main__DOT__u_fan__DOT__ck_tach));
        bufp->chgBit(oldp+2425,(vlSelf->main__DOT__u_fan__DOT__last_tach));
        bufp->chgCData(oldp+2426,(vlSelf->main__DOT__u_fan__DOT__pipe_tach),2);
        bufp->chgBit(oldp+2427,(vlSelf->main__DOT__u_fan__DOT__tach_reset));
        bufp->chgIData(oldp+2428,(vlSelf->main__DOT__u_fan__DOT__tach_count),27);
        bufp->chgIData(oldp+2429,(vlSelf->main__DOT__u_fan__DOT__tach_counter),27);
        bufp->chgIData(oldp+2430,(vlSelf->main__DOT__u_fan__DOT__tach_timer),27);
        bufp->chgBit(oldp+2431,(vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack));
        bufp->chgIData(oldp+2432,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data),32);
        bufp->chgBit(oldp+2433,(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc));
        bufp->chgBit(oldp+2434,(vlSelf->main__DOT__u_fan__DOT__mem_stb));
        bufp->chgCData(oldp+2435,(vlSelf->main__DOT__u_fan__DOT__mem_addr),5);
        bufp->chgCData(oldp+2436,(vlSelf->main__DOT__u_fan__DOT__mem_data),8);
        bufp->chgBit(oldp+2437,(vlSelf->main__DOT__u_fan__DOT__mem_ack));
        bufp->chgBit(oldp+2438,(vlSelf->main__DOT__u_fan__DOT__i2cd_valid));
        bufp->chgBit(oldp+2439,(vlSelf->main__DOT__u_fan__DOT__i2cd_last));
        bufp->chgCData(oldp+2440,(vlSelf->main__DOT__u_fan__DOT__i2cd_data),8);
        bufp->chgBit(oldp+2441,(vlSelf->main__DOT__u_fan__DOT__pp_ms));
        bufp->chgIData(oldp+2442,(vlSelf->main__DOT__u_fan__DOT__trigger_counter),17);
        bufp->chgIData(oldp+2443,(vlSelf->main__DOT__u_fan__DOT__temp_tmp),24);
        bufp->chgIData(oldp+2444,(vlSelf->main__DOT__u_fan__DOT__temp_data),32);
        bufp->chgBit(oldp+2445,(vlSelf->main__DOT__u_fan__DOT__pre_ack));
        bufp->chgIData(oldp+2446,(vlSelf->main__DOT__u_fan__DOT__pre_data),32);
        bufp->chgBit(oldp+2447,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
        bufp->chgBit(oldp+2448,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc));
        bufp->chgCData(oldp+2449,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr),5);
        bufp->chgBit(oldp+2450,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid));
        bufp->chgBit(oldp+2451,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
        bufp->chgCData(oldp+2452,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn),8);
        bufp->chgCData(oldp+2453,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr),5);
        bufp->chgBit(oldp+2454,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal));
        bufp->chgBit(oldp+2455,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid));
        bufp->chgBit(oldp+2456,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle));
        bufp->chgBit(oldp+2457,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready));
        bufp->chgBit(oldp+2458,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready));
        bufp->chgBit(oldp+2459,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort));
        bufp->chgBit(oldp+2460,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid));
        bufp->chgSData(oldp+2461,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn),12);
        bufp->chgCData(oldp+2462,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn),4);
        bufp->chgBit(oldp+2463,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge));
        bufp->chgBit(oldp+2464,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch));
        bufp->chgSData(oldp+2465,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount),12);
        bufp->chgSData(oldp+2466,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount),12);
        bufp->chgCData(oldp+2467,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address),5);
        bufp->chgCData(oldp+2468,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target),5);
        bufp->chgBit(oldp+2469,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait));
        bufp->chgBit(oldp+2470,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request));
        bufp->chgBit(oldp+2471,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err));
        bufp->chgBit(oldp+2472,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted));
        bufp->chgBit(oldp+2473,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual));
        bufp->chgBit(oldp+2474,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda));
        bufp->chgBit(oldp+2475,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl));
        bufp->chgBit(oldp+2476,(((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
                                 | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
        bufp->chgBit(oldp+2477,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda));
        bufp->chgBit(oldp+2478,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl));
        bufp->chgBit(oldp+2479,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
        bufp->chgBit(oldp+2480,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid));
        bufp->chgSData(oldp+2481,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data),10);
        bufp->chgBit(oldp+2482,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl));
        bufp->chgBit(oldp+2483,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda));
        bufp->chgSData(oldp+2484,((0x7ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))),11);
        bufp->chgBit(oldp+2485,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte));
        bufp->chgBit(oldp+2486,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir));
        bufp->chgBit(oldp+2487,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack));
        bufp->chgCData(oldp+2488,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state),4);
        bufp->chgCData(oldp+2489,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits),3);
        bufp->chgCData(oldp+2490,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg),8);
        bufp->chgBit(oldp+2491,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl));
        bufp->chgBit(oldp+2492,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda));
        bufp->chgBit(oldp+2493,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl));
        bufp->chgBit(oldp+2494,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda));
        bufp->chgBit(oldp+2495,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl));
        bufp->chgBit(oldp+2496,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda));
        bufp->chgBit(oldp+2497,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit));
        bufp->chgBit(oldp+2498,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy));
        bufp->chgBit(oldp+2499,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb));
        bufp->chgBit(oldp+2500,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle));
        bufp->chgCData(oldp+2501,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word),8);
        bufp->chgBit(oldp+2502,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid));
        bufp->chgCData(oldp+2503,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight),2);
        bufp->chgBit(oldp+2504,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal));
        bufp->chgBit(oldp+2505,(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID));
        bufp->chgIData(oldp+2506,(vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr),28);
        bufp->chgIData(oldp+2507,(vlSelf->main__DOT__u_i2cdma__DOT__r_memlen),28);
        bufp->chgCData(oldp+2508,(vlSelf->main__DOT__u_i2cdma__DOT__subaddr),6);
        bufp->chgIData(oldp+2509,(vlSelf->main__DOT__u_i2cdma__DOT__current_addr),28);
        bufp->chgBit(oldp+2510,(vlSelf->main__DOT__u_i2cdma__DOT__wb_last));
        bufp->chgBit(oldp+2511,(vlSelf->main__DOT__u_i2cdma__DOT__bus_err));
        bufp->chgBit(oldp+2512,(vlSelf->main__DOT__u_i2cdma__DOT__r_reset));
        bufp->chgBit(oldp+2513,(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow));
        bufp->chgBit(oldp+2514,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
        bufp->chgBit(oldp+2515,(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready));
        bufp->chgBit(oldp+2516,((1U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                       >> 8U))));
        bufp->chgCData(oldp+2517,((0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data))),8);
        bufp->chgSData(oldp+2518,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data),9);
        bufp->chgSData(oldp+2519,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data),9);
        bufp->chgSData(oldp+2520,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data),9);
        bufp->chgBit(oldp+2521,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid));
        bufp->chgIData(oldp+2522,((0x1fffffU & (IData)(
                                                       (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr 
                                                        >> 0x16U)))),21);
        bufp->chgBit(oldp+2523,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
        bufp->chgBit(oldp+2524,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first));
        bufp->chgBit(oldp+2525,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null));
        bufp->chgBit(oldp+2526,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last));
        bufp->chgWData(oldp+2527,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data),512);
        bufp->chgWData(oldp+2543,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data),512);
        bufp->chgQData(oldp+2559,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel),64);
        bufp->chgQData(oldp+2561,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel),64);
        bufp->chgCData(oldp+2563,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift),4);
        bufp->chgCData(oldp+2564,((0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data))),4);
        bufp->chgCData(oldp+2565,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr),4);
        bufp->chgBit(oldp+2566,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full));
        bufp->chgBit(oldp+2567,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty));
        bufp->chgBit(oldp+2568,((1U & ((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                                       >> 4U))));
        bufp->chgCData(oldp+2569,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill),6);
        bufp->chgIData(oldp+2570,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm),32);
        bufp->chgBit(oldp+2571,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
        bufp->chgCData(oldp+2572,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data),5);
        bufp->chgCData(oldp+2573,(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data),5);
        bufp->chgBit(oldp+2574,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
        bufp->chgBit(oldp+2575,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
        bufp->chgCData(oldp+2576,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[0]),5);
        bufp->chgCData(oldp+2577,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[1]),5);
        bufp->chgCData(oldp+2578,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[2]),5);
        bufp->chgCData(oldp+2579,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[3]),5);
        bufp->chgCData(oldp+2580,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[4]),5);
        bufp->chgCData(oldp+2581,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[5]),5);
        bufp->chgCData(oldp+2582,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[6]),5);
        bufp->chgCData(oldp+2583,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[7]),5);
        bufp->chgCData(oldp+2584,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[8]),5);
        bufp->chgCData(oldp+2585,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[9]),5);
        bufp->chgCData(oldp+2586,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[10]),5);
        bufp->chgCData(oldp+2587,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[11]),5);
        bufp->chgCData(oldp+2588,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[12]),5);
        bufp->chgCData(oldp+2589,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[13]),5);
        bufp->chgCData(oldp+2590,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[14]),5);
        bufp->chgCData(oldp+2591,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[15]),5);
        bufp->chgCData(oldp+2592,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[16]),5);
        bufp->chgCData(oldp+2593,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[17]),5);
        bufp->chgCData(oldp+2594,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[18]),5);
        bufp->chgCData(oldp+2595,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[19]),5);
        bufp->chgCData(oldp+2596,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[20]),5);
        bufp->chgCData(oldp+2597,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[21]),5);
        bufp->chgCData(oldp+2598,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[22]),5);
        bufp->chgCData(oldp+2599,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[23]),5);
        bufp->chgCData(oldp+2600,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[24]),5);
        bufp->chgCData(oldp+2601,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[25]),5);
        bufp->chgCData(oldp+2602,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[26]),5);
        bufp->chgCData(oldp+2603,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[27]),5);
        bufp->chgCData(oldp+2604,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[28]),5);
        bufp->chgCData(oldp+2605,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[29]),5);
        bufp->chgCData(oldp+2606,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[30]),5);
        bufp->chgCData(oldp+2607,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[31]),5);
        bufp->chgCData(oldp+2608,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+2609,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr),6);
        bufp->chgBit(oldp+2610,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr));
        bufp->chgBit(oldp+2611,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd));
        bufp->chgSData(oldp+2612,(vlSelf->main__DOT__wb32_xbar__DOT__grant[0]),13);
        bufp->chgBit(oldp+2613,(vlSelf->main__DOT__wb32_xbar__DOT__mgrant));
        bufp->chgCData(oldp+2614,(vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0]),6);
        bufp->chgBit(oldp+2615,(vlSelf->main__DOT__wb32_xbar__DOT__mfull));
        bufp->chgBit(oldp+2616,(vlSelf->main__DOT__wb32_xbar__DOT__mnearfull));
        bufp->chgBit(oldp+2617,(vlSelf->main__DOT__wb32_xbar__DOT__mempty));
        bufp->chgIData(oldp+2618,(vlSelf->main__DOT__wb32_xbar__DOT__iN),32);
        bufp->chgCData(oldp+2619,(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
        bufp->chgSData(oldp+2620,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),13);
        bufp->chgBit(oldp+2621,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgIData(oldp+2622,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),25);
        bufp->chgQData(oldp+2623,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),62);
        bufp->chgQData(oldp+2625,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),62);
        bufp->chgIData(oldp+2627,((0x3ffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),26);
        bufp->chgBit(oldp+2628,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
        bufp->chgWData(oldp+2629,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data),512);
        bufp->chgCData(oldp+2645,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift),4);
        bufp->chgBit(oldp+2646,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full));
        bufp->chgBit(oldp+2647,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty));
        bufp->chgCData(oldp+2648,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill),6);
        bufp->chgCData(oldp+2649,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),4);
        bufp->chgCData(oldp+2650,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem
                                  [(0x1fU & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr))]),4);
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
        bufp->chgWData(oldp+2651,(__Vtemp_hcfafa750__0),512);
        bufp->chgQData(oldp+2667,(((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)))) 
                                   << 0x3cU)),64);
        bufp->chgBit(oldp+2669,(((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                                 & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb))));
        bufp->chgCData(oldp+2670,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[0]),4);
        bufp->chgCData(oldp+2671,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[1]),4);
        bufp->chgCData(oldp+2672,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[2]),4);
        bufp->chgCData(oldp+2673,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[3]),4);
        bufp->chgCData(oldp+2674,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[4]),4);
        bufp->chgCData(oldp+2675,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[5]),4);
        bufp->chgCData(oldp+2676,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[6]),4);
        bufp->chgCData(oldp+2677,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[7]),4);
        bufp->chgCData(oldp+2678,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[8]),4);
        bufp->chgCData(oldp+2679,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[9]),4);
        bufp->chgCData(oldp+2680,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[10]),4);
        bufp->chgCData(oldp+2681,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[11]),4);
        bufp->chgCData(oldp+2682,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[12]),4);
        bufp->chgCData(oldp+2683,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[13]),4);
        bufp->chgCData(oldp+2684,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[14]),4);
        bufp->chgCData(oldp+2685,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[15]),4);
        bufp->chgCData(oldp+2686,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[16]),4);
        bufp->chgCData(oldp+2687,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[17]),4);
        bufp->chgCData(oldp+2688,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[18]),4);
        bufp->chgCData(oldp+2689,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[19]),4);
        bufp->chgCData(oldp+2690,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[20]),4);
        bufp->chgCData(oldp+2691,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[21]),4);
        bufp->chgCData(oldp+2692,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[22]),4);
        bufp->chgCData(oldp+2693,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[23]),4);
        bufp->chgCData(oldp+2694,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[24]),4);
        bufp->chgCData(oldp+2695,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[25]),4);
        bufp->chgCData(oldp+2696,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[26]),4);
        bufp->chgCData(oldp+2697,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[27]),4);
        bufp->chgCData(oldp+2698,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[28]),4);
        bufp->chgCData(oldp+2699,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[29]),4);
        bufp->chgCData(oldp+2700,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[30]),4);
        bufp->chgCData(oldp+2701,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[31]),4);
        bufp->chgCData(oldp+2702,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+2703,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr),6);
        bufp->chgBit(oldp+2704,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr));
        bufp->chgBit(oldp+2705,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd));
        bufp->chgCData(oldp+2706,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc),2);
        bufp->chgCData(oldp+2707,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb),2);
        bufp->chgCData(oldp+2708,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe),2);
        bufp->chgQData(oldp+2709,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr),54);
        bufp->chgQData(oldp+2711,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata),64);
        bufp->chgCData(oldp+2713,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel),8);
        bufp->chgQData(oldp+2714,((((QData)((IData)(vlSelf->main__DOT__wbu_zip_idata)) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU])))),64);
        bufp->chgCData(oldp+2716,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err),2);
        bufp->chgCData(oldp+2717,(vlSelf->main__DOT__wbu_xbar__DOT__request[0]),3);
        bufp->chgCData(oldp+2718,(vlSelf->main__DOT__wbu_xbar__DOT__grant[0]),3);
        bufp->chgBit(oldp+2719,(vlSelf->main__DOT__wbu_xbar__DOT__mgrant));
        bufp->chgCData(oldp+2720,(vlSelf->main__DOT__wbu_xbar__DOT__sgrant),2);
        bufp->chgCData(oldp+2721,(vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0]),6);
        bufp->chgBit(oldp+2722,(vlSelf->main__DOT__wbu_xbar__DOT__mfull));
        bufp->chgBit(oldp+2723,(vlSelf->main__DOT__wbu_xbar__DOT__mnearfull));
        bufp->chgBit(oldp+2724,(vlSelf->main__DOT__wbu_xbar__DOT__mempty));
        bufp->chgBit(oldp+2725,(vlSelf->main__DOT__wbu_xbar__DOT__m_stb));
        bufp->chgBit(oldp+2726,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                               >> 0x24U)))));
        bufp->chgIData(oldp+2727,(vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0]),27);
        bufp->chgIData(oldp+2728,(vlSelf->main__DOT__wbu_xbar__DOT__m_data[0]),32);
        bufp->chgCData(oldp+2729,(vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0]),4);
        bufp->chgIData(oldp+2730,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[0]),32);
        bufp->chgIData(oldp+2731,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[1]),32);
        bufp->chgIData(oldp+2732,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[2]),32);
        bufp->chgIData(oldp+2733,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[3]),32);
        bufp->chgCData(oldp+2734,(vlSelf->main__DOT__wbu_xbar__DOT__s_err),4);
        bufp->chgBit(oldp+2735,(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
        bufp->chgIData(oldp+2736,(vlSelf->main__DOT__wbu_xbar__DOT__iN),32);
        bufp->chgBit(oldp+2737,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+2738,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+2739,(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
        bufp->chgBit(oldp+2740,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                               >> 0x3fU)))));
        bufp->chgIData(oldp+2741,((0x7ffffffU & (IData)(
                                                        (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                         >> 0x24U)))),27);
        bufp->chgIData(oldp+2742,((IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                           >> 4U))),32);
        bufp->chgCData(oldp+2743,((0xfU & (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
        bufp->chgCData(oldp+2744,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
        bufp->chgBit(oldp+2745,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgQData(oldp+2746,((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                                >> 0x3fU))))) 
                                    << 0x24U) | (0xfffffffffULL 
                                                 & vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
        bufp->chgIData(oldp+2748,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),27);
        bufp->chgQData(oldp+2749,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
        bufp->chgCData(oldp+2751,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
        bufp->chgQData(oldp+2752,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),64);
        bufp->chgQData(oldp+2754,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),64);
        bufp->chgQData(oldp+2756,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),64);
        bufp->chgCData(oldp+2758,((((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb) 
                                    << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                               << 2U) 
                                              | (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb))))),4);
        bufp->chgCData(oldp+2759,((1U | (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we) 
                                          << 3U) | 
                                         (4U & (((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                                  ? (IData)(vlSelf->main__DOT__swic__DOT__cpu_we)
                                                  : 
                                                 (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))) 
                                                << 2U))))),4);
        __Vtemp_h708d16f1__0[0U] = (IData)((((QData)((IData)(vlSelf->main__DOT__wbwide_i2cm_addr)) 
                                             << 0x16U) 
                                            | (QData)((IData)(vlSelf->main__DOT__wbwide_i2cdma_addr))));
        __Vtemp_h708d16f1__0[1U] = ((vlSelf->main__DOT__wbwide_zip_addr 
                                     << 0xcU) | (IData)(
                                                        ((((QData)((IData)(vlSelf->main__DOT__wbwide_i2cm_addr)) 
                                                           << 0x16U) 
                                                          | (QData)((IData)(vlSelf->main__DOT__wbwide_i2cdma_addr))) 
                                                         >> 0x20U)));
        __Vtemp_h708d16f1__0[2U] = ((vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr 
                                     << 2U) | (vlSelf->main__DOT__wbwide_zip_addr 
                                               >> 0x14U));
        bufp->chgWData(oldp+2760,(__Vtemp_h708d16f1__0),88);
        __Vtemp_h95b27ed2__0[0U] = vlSelf->main__DOT__wbwide_i2cdma_data[0U];
        __Vtemp_h95b27ed2__0[1U] = vlSelf->main__DOT__wbwide_i2cdma_data[1U];
        __Vtemp_h95b27ed2__0[2U] = vlSelf->main__DOT__wbwide_i2cdma_data[2U];
        __Vtemp_h95b27ed2__0[3U] = vlSelf->main__DOT__wbwide_i2cdma_data[3U];
        __Vtemp_h95b27ed2__0[4U] = vlSelf->main__DOT__wbwide_i2cdma_data[4U];
        __Vtemp_h95b27ed2__0[5U] = vlSelf->main__DOT__wbwide_i2cdma_data[5U];
        __Vtemp_h95b27ed2__0[6U] = vlSelf->main__DOT__wbwide_i2cdma_data[6U];
        __Vtemp_h95b27ed2__0[7U] = vlSelf->main__DOT__wbwide_i2cdma_data[7U];
        __Vtemp_h95b27ed2__0[8U] = vlSelf->main__DOT__wbwide_i2cdma_data[8U];
        __Vtemp_h95b27ed2__0[9U] = vlSelf->main__DOT__wbwide_i2cdma_data[9U];
        __Vtemp_h95b27ed2__0[0xaU] = vlSelf->main__DOT__wbwide_i2cdma_data[0xaU];
        __Vtemp_h95b27ed2__0[0xbU] = vlSelf->main__DOT__wbwide_i2cdma_data[0xbU];
        __Vtemp_h95b27ed2__0[0xcU] = vlSelf->main__DOT__wbwide_i2cdma_data[0xcU];
        __Vtemp_h95b27ed2__0[0xdU] = vlSelf->main__DOT__wbwide_i2cdma_data[0xdU];
        __Vtemp_h95b27ed2__0[0xeU] = vlSelf->main__DOT__wbwide_i2cdma_data[0xeU];
        __Vtemp_h95b27ed2__0[0xfU] = vlSelf->main__DOT__wbwide_i2cdma_data[0xfU];
        __Vtemp_h95b27ed2__0[0x10U] = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h95b27ed2__0[0x11U] = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h95b27ed2__0[0x12U] = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h95b27ed2__0[0x13U] = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h95b27ed2__0[0x14U] = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h95b27ed2__0[0x15U] = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h95b27ed2__0[0x16U] = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h95b27ed2__0[0x17U] = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h95b27ed2__0[0x18U] = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h95b27ed2__0[0x19U] = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h95b27ed2__0[0x1aU] = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h95b27ed2__0[0x1bU] = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h95b27ed2__0[0x1cU] = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h95b27ed2__0[0x1dU] = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h95b27ed2__0[0x1eU] = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h95b27ed2__0[0x1fU] = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
        if (vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner) {
            __Vtemp_h95b27ed2__0[0x20U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0U];
            __Vtemp_h95b27ed2__0[0x21U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[1U];
            __Vtemp_h95b27ed2__0[0x22U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[2U];
            __Vtemp_h95b27ed2__0[0x23U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[3U];
            __Vtemp_h95b27ed2__0[0x24U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[4U];
            __Vtemp_h95b27ed2__0[0x25U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[5U];
            __Vtemp_h95b27ed2__0[0x26U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[6U];
            __Vtemp_h95b27ed2__0[0x27U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[7U];
            __Vtemp_h95b27ed2__0[0x28U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[8U];
            __Vtemp_h95b27ed2__0[0x29U] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[9U];
            __Vtemp_h95b27ed2__0[0x2aU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xaU];
            __Vtemp_h95b27ed2__0[0x2bU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xbU];
            __Vtemp_h95b27ed2__0[0x2cU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xcU];
            __Vtemp_h95b27ed2__0[0x2dU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xdU];
            __Vtemp_h95b27ed2__0[0x2eU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xeU];
            __Vtemp_h95b27ed2__0[0x2fU] = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0xfU];
        } else {
            __Vtemp_h95b27ed2__0[0x20U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0U];
            __Vtemp_h95b27ed2__0[0x21U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[1U];
            __Vtemp_h95b27ed2__0[0x22U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[2U];
            __Vtemp_h95b27ed2__0[0x23U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[3U];
            __Vtemp_h95b27ed2__0[0x24U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[4U];
            __Vtemp_h95b27ed2__0[0x25U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[5U];
            __Vtemp_h95b27ed2__0[0x26U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[6U];
            __Vtemp_h95b27ed2__0[0x27U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[7U];
            __Vtemp_h95b27ed2__0[0x28U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[8U];
            __Vtemp_h95b27ed2__0[0x29U] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[9U];
            __Vtemp_h95b27ed2__0[0x2aU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xaU];
            __Vtemp_h95b27ed2__0[0x2bU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xbU];
            __Vtemp_h95b27ed2__0[0x2cU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xcU];
            __Vtemp_h95b27ed2__0[0x2dU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xdU];
            __Vtemp_h95b27ed2__0[0x2eU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xeU];
            __Vtemp_h95b27ed2__0[0x2fU] = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data[0xfU];
        }
        __Vtemp_h95b27ed2__0[0x30U] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0U];
        __Vtemp_h95b27ed2__0[0x31U] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[1U];
        __Vtemp_h95b27ed2__0[0x32U] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[2U];
        __Vtemp_h95b27ed2__0[0x33U] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[3U];
        __Vtemp_h95b27ed2__0[0x34U] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[4U];
        __Vtemp_h95b27ed2__0[0x35U] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[5U];
        __Vtemp_h95b27ed2__0[0x36U] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[6U];
        __Vtemp_h95b27ed2__0[0x37U] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[7U];
        __Vtemp_h95b27ed2__0[0x38U] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[8U];
        __Vtemp_h95b27ed2__0[0x39U] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[9U];
        __Vtemp_h95b27ed2__0[0x3aU] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xaU];
        __Vtemp_h95b27ed2__0[0x3bU] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xbU];
        __Vtemp_h95b27ed2__0[0x3cU] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xcU];
        __Vtemp_h95b27ed2__0[0x3dU] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xdU];
        __Vtemp_h95b27ed2__0[0x3eU] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xeU];
        __Vtemp_h95b27ed2__0[0x3fU] = vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xfU];
        bufp->chgWData(oldp+2763,(__Vtemp_h95b27ed2__0),2048);
        __Vtemp_h7cab7483__0[0U] = (IData)(vlSelf->main__DOT__wbwide_i2cdma_sel);
        __Vtemp_h7cab7483__0[1U] = (IData)((vlSelf->main__DOT__wbwide_i2cdma_sel 
                                            >> 0x20U));
        __Vtemp_h7cab7483__0[2U] = 0xffffffffU;
        __Vtemp_h7cab7483__0[3U] = 0xffffffffU;
        __Vtemp_h7cab7483__0[4U] = (IData)(((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                             ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                                 ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                                 : 0xffffffffffffffffULL)
                                             : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)));
        __Vtemp_h7cab7483__0[5U] = (IData)((((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                              ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                                  ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                                  : 0xffffffffffffffffULL)
                                              : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                                  ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                                  : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)) 
                                            >> 0x20U));
        __Vtemp_h7cab7483__0[6U] = (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel);
        __Vtemp_h7cab7483__0[7U] = (IData)((vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel 
                                            >> 0x20U));
        bufp->chgWData(oldp+2827,(__Vtemp_h7cab7483__0),256);
        bufp->chgCData(oldp+2835,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
                                    << 3U) | (IData)(vlSelf->__VdfgTmp_h503d14d1__0))),4);
        bufp->chgCData(oldp+2836,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack),4);
        bufp->chgWData(oldp+2837,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata),2048);
        bufp->chgCData(oldp+2901,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr),4);
        bufp->chgCData(oldp+2902,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe),2);
        bufp->chgQData(oldp+2903,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr),44);
        bufp->chgWData(oldp+2905,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata),1024);
        bufp->chgWData(oldp+2937,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel),128);
        bufp->chgCData(oldp+2941,(((IData)(vlSelf->main__DOT__wbwide_wbdown_stall) 
                                   << 1U)),2);
        bufp->chgCData(oldp+2942,((((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack) 
                                    << 1U) | (IData)(vlSelf->main__DOT__wbwide_bkram_ack))),2);
        __Vtemp_h7899650d__0[0U] = vlSelf->main__DOT__wbwide_bkram_idata[0U];
        __Vtemp_h7899650d__0[1U] = vlSelf->main__DOT__wbwide_bkram_idata[1U];
        __Vtemp_h7899650d__0[2U] = vlSelf->main__DOT__wbwide_bkram_idata[2U];
        __Vtemp_h7899650d__0[3U] = vlSelf->main__DOT__wbwide_bkram_idata[3U];
        __Vtemp_h7899650d__0[4U] = vlSelf->main__DOT__wbwide_bkram_idata[4U];
        __Vtemp_h7899650d__0[5U] = vlSelf->main__DOT__wbwide_bkram_idata[5U];
        __Vtemp_h7899650d__0[6U] = vlSelf->main__DOT__wbwide_bkram_idata[6U];
        __Vtemp_h7899650d__0[7U] = vlSelf->main__DOT__wbwide_bkram_idata[7U];
        __Vtemp_h7899650d__0[8U] = vlSelf->main__DOT__wbwide_bkram_idata[8U];
        __Vtemp_h7899650d__0[9U] = vlSelf->main__DOT__wbwide_bkram_idata[9U];
        __Vtemp_h7899650d__0[0xaU] = vlSelf->main__DOT__wbwide_bkram_idata[0xaU];
        __Vtemp_h7899650d__0[0xbU] = vlSelf->main__DOT__wbwide_bkram_idata[0xbU];
        __Vtemp_h7899650d__0[0xcU] = vlSelf->main__DOT__wbwide_bkram_idata[0xcU];
        __Vtemp_h7899650d__0[0xdU] = vlSelf->main__DOT__wbwide_bkram_idata[0xdU];
        __Vtemp_h7899650d__0[0xeU] = vlSelf->main__DOT__wbwide_bkram_idata[0xeU];
        __Vtemp_h7899650d__0[0xfU] = vlSelf->main__DOT__wbwide_bkram_idata[0xfU];
        __Vtemp_h7899650d__0[0x10U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0U];
        __Vtemp_h7899650d__0[0x11U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[1U];
        __Vtemp_h7899650d__0[0x12U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[2U];
        __Vtemp_h7899650d__0[0x13U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[3U];
        __Vtemp_h7899650d__0[0x14U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[4U];
        __Vtemp_h7899650d__0[0x15U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[5U];
        __Vtemp_h7899650d__0[0x16U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[6U];
        __Vtemp_h7899650d__0[0x17U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[7U];
        __Vtemp_h7899650d__0[0x18U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[8U];
        __Vtemp_h7899650d__0[0x19U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[9U];
        __Vtemp_h7899650d__0[0x1aU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xaU];
        __Vtemp_h7899650d__0[0x1bU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xbU];
        __Vtemp_h7899650d__0[0x1cU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xcU];
        __Vtemp_h7899650d__0[0x1dU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xdU];
        __Vtemp_h7899650d__0[0x1eU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xeU];
        __Vtemp_h7899650d__0[0x1fU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xfU];
        bufp->chgWData(oldp+2943,(__Vtemp_h7899650d__0),1024);
        bufp->chgCData(oldp+2975,(vlSelf->main__DOT__wbwide_xbar__DOT__request[0]),3);
        bufp->chgCData(oldp+2976,(vlSelf->main__DOT__wbwide_xbar__DOT__request[1]),3);
        bufp->chgCData(oldp+2977,(vlSelf->main__DOT__wbwide_xbar__DOT__request[2]),3);
        bufp->chgCData(oldp+2978,(vlSelf->main__DOT__wbwide_xbar__DOT__request[3]),3);
        bufp->chgCData(oldp+2979,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[0]),2);
        bufp->chgCData(oldp+2980,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[1]),2);
        bufp->chgCData(oldp+2981,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[2]),2);
        bufp->chgCData(oldp+2982,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[3]),2);
        bufp->chgCData(oldp+2983,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[0]),3);
        bufp->chgCData(oldp+2984,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[1]),3);
        bufp->chgCData(oldp+2985,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[2]),3);
        bufp->chgCData(oldp+2986,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[3]),3);
        bufp->chgCData(oldp+2987,(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant),4);
        bufp->chgCData(oldp+2988,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0]),6);
        bufp->chgCData(oldp+2989,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1]),6);
        bufp->chgCData(oldp+2990,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2]),6);
        bufp->chgCData(oldp+2991,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3]),6);
        bufp->chgCData(oldp+2992,(vlSelf->main__DOT__wbwide_xbar__DOT__mfull),4);
        bufp->chgCData(oldp+2993,(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull),4);
        bufp->chgCData(oldp+2994,(vlSelf->main__DOT__wbwide_xbar__DOT__mempty),4);
        bufp->chgCData(oldp+2995,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb),4);
        bufp->chgCData(oldp+2996,(vlSelf->main__DOT__wbwide_xbar__DOT__m_we),4);
        bufp->chgIData(oldp+2997,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0]),22);
        bufp->chgIData(oldp+2998,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1]),22);
        bufp->chgIData(oldp+2999,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2]),22);
        bufp->chgIData(oldp+3000,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3]),22);
        bufp->chgWData(oldp+3001,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0]),512);
        bufp->chgWData(oldp+3017,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1]),512);
        bufp->chgWData(oldp+3033,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2]),512);
        bufp->chgWData(oldp+3049,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3]),512);
        bufp->chgQData(oldp+3065,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[0]),64);
        bufp->chgQData(oldp+3067,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[1]),64);
        bufp->chgQData(oldp+3069,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[2]),64);
        bufp->chgQData(oldp+3071,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[3]),64);
        bufp->chgWData(oldp+3073,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0]),512);
        bufp->chgWData(oldp+3089,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1]),512);
        bufp->chgWData(oldp+3105,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2]),512);
        bufp->chgWData(oldp+3121,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3]),512);
        bufp->chgCData(oldp+3137,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid) 
                                    << 3U) | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid) 
                                               << 2U) 
                                              | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))))),4);
        bufp->chgBit(oldp+3138,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+3139,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+3140,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+3141,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel));
        bufp->chgCData(oldp+3142,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
        bufp->chgCData(oldp+3143,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending),6);
        bufp->chgCData(oldp+3144,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending),6);
        bufp->chgCData(oldp+3145,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending),6);
        bufp->chgBit(oldp+3146,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+3147,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])),22);
        __Vtemp_h53a5df10__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U];
        __Vtemp_h53a5df10__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[3U];
        __Vtemp_h53a5df10__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[4U];
        __Vtemp_h53a5df10__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[5U];
        __Vtemp_h53a5df10__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[6U];
        __Vtemp_h53a5df10__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[7U];
        __Vtemp_h53a5df10__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[8U];
        __Vtemp_h53a5df10__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[9U];
        __Vtemp_h53a5df10__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_h53a5df10__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_h53a5df10__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_h53a5df10__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_h53a5df10__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_h53a5df10__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_h53a5df10__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_h53a5df10__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x11U];
        bufp->chgWData(oldp+3148,(__Vtemp_h53a5df10__0),512);
        bufp->chgQData(oldp+3164,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+3166,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
        bufp->chgBit(oldp+3167,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        __Vtemp_hb52cb2db__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U];
        __Vtemp_hb52cb2db__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U];
        __Vtemp_hb52cb2db__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U];
        __Vtemp_hb52cb2db__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[3U];
        __Vtemp_hb52cb2db__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[4U];
        __Vtemp_hb52cb2db__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[5U];
        __Vtemp_hb52cb2db__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[6U];
        __Vtemp_hb52cb2db__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[7U];
        __Vtemp_hb52cb2db__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[8U];
        __Vtemp_hb52cb2db__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[9U];
        __Vtemp_hb52cb2db__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_hb52cb2db__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_hb52cb2db__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_hb52cb2db__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_hb52cb2db__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_hb52cb2db__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_hb52cb2db__0[0x10U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_hb52cb2db__0[0x11U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x11U];
        __Vtemp_hb52cb2db__0[0x12U] = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                             >> 0x16U));
        bufp->chgWData(oldp+3168,(__Vtemp_hb52cb2db__0),577);
        bufp->chgBit(oldp+3187,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+3188,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),22);
        bufp->chgWData(oldp+3189,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+3208,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
        bufp->chgWData(oldp+3209,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),599);
        bufp->chgWData(oldp+3228,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),599);
        bufp->chgWData(oldp+3247,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
        bufp->chgBit(oldp+3266,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+3267,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+3268,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])),22);
        __Vtemp_hebded4b4__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[2U];
        __Vtemp_hebded4b4__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[3U];
        __Vtemp_hebded4b4__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[4U];
        __Vtemp_hebded4b4__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[5U];
        __Vtemp_hebded4b4__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[6U];
        __Vtemp_hebded4b4__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[7U];
        __Vtemp_hebded4b4__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[8U];
        __Vtemp_hebded4b4__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[9U];
        __Vtemp_hebded4b4__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_hebded4b4__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_hebded4b4__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_hebded4b4__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_hebded4b4__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_hebded4b4__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_hebded4b4__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_hebded4b4__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x11U];
        bufp->chgWData(oldp+3269,(__Vtemp_hebded4b4__0),512);
        bufp->chgQData(oldp+3285,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+3287,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded),3);
        bufp->chgBit(oldp+3288,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        __Vtemp_h0a2cdfa5__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U];
        __Vtemp_h0a2cdfa5__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U];
        __Vtemp_h0a2cdfa5__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[2U];
        __Vtemp_h0a2cdfa5__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[3U];
        __Vtemp_h0a2cdfa5__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[4U];
        __Vtemp_h0a2cdfa5__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[5U];
        __Vtemp_h0a2cdfa5__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[6U];
        __Vtemp_h0a2cdfa5__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[7U];
        __Vtemp_h0a2cdfa5__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[8U];
        __Vtemp_h0a2cdfa5__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[9U];
        __Vtemp_h0a2cdfa5__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_h0a2cdfa5__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_h0a2cdfa5__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_h0a2cdfa5__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_h0a2cdfa5__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_h0a2cdfa5__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_h0a2cdfa5__0[0x10U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_h0a2cdfa5__0[0x11U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x11U];
        __Vtemp_h0a2cdfa5__0[0x12U] = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                             >> 0x16U));
        bufp->chgWData(oldp+3289,(__Vtemp_h0a2cdfa5__0),577);
        bufp->chgBit(oldp+3308,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+3309,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr),22);
        bufp->chgWData(oldp+3310,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+3329,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest),2);
        __Vtemp_he57bd368__0[0U] = Vmain__ConstPool__CONST_hb679b2e5_0[0U];
        __Vtemp_he57bd368__0[1U] = Vmain__ConstPool__CONST_hb679b2e5_0[1U];
        __Vtemp_he57bd368__0[2U] = Vmain__ConstPool__CONST_hb679b2e5_0[2U];
        __Vtemp_he57bd368__0[3U] = Vmain__ConstPool__CONST_hb679b2e5_0[3U];
        __Vtemp_he57bd368__0[4U] = Vmain__ConstPool__CONST_hb679b2e5_0[4U];
        __Vtemp_he57bd368__0[5U] = Vmain__ConstPool__CONST_hb679b2e5_0[5U];
        __Vtemp_he57bd368__0[6U] = Vmain__ConstPool__CONST_hb679b2e5_0[6U];
        __Vtemp_he57bd368__0[7U] = Vmain__ConstPool__CONST_hb679b2e5_0[7U];
        __Vtemp_he57bd368__0[8U] = Vmain__ConstPool__CONST_hb679b2e5_0[8U];
        __Vtemp_he57bd368__0[9U] = Vmain__ConstPool__CONST_hb679b2e5_0[9U];
        __Vtemp_he57bd368__0[0xaU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xaU];
        __Vtemp_he57bd368__0[0xbU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xbU];
        __Vtemp_he57bd368__0[0xcU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xcU];
        __Vtemp_he57bd368__0[0xdU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xdU];
        __Vtemp_he57bd368__0[0xeU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xeU];
        __Vtemp_he57bd368__0[0xfU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xfU];
        __Vtemp_he57bd368__0[0x10U] = Vmain__ConstPool__CONST_hb679b2e5_0[0x10U];
        __Vtemp_he57bd368__0[0x11U] = Vmain__ConstPool__CONST_hb679b2e5_0[0x11U];
        __Vtemp_he57bd368__0[0x12U] = vlSelf->main__DOT__wbwide_i2cm_addr;
        bufp->chgWData(oldp+3330,(__Vtemp_he57bd368__0),599);
        bufp->chgWData(oldp+3349,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data),599);
        bufp->chgWData(oldp+3368,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
        bufp->chgBit(oldp+3387,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+3388,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+3389,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])),22);
        __Vtemp_h0964a254__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[2U];
        __Vtemp_h0964a254__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[3U];
        __Vtemp_h0964a254__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[4U];
        __Vtemp_h0964a254__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[5U];
        __Vtemp_h0964a254__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[6U];
        __Vtemp_h0964a254__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[7U];
        __Vtemp_h0964a254__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[8U];
        __Vtemp_h0964a254__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[9U];
        __Vtemp_h0964a254__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_h0964a254__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_h0964a254__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_h0964a254__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_h0964a254__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_h0964a254__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_h0964a254__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_h0964a254__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x11U];
        bufp->chgWData(oldp+3390,(__Vtemp_h0964a254__0),512);
        bufp->chgQData(oldp+3406,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+3408,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded),3);
        bufp->chgBit(oldp+3409,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        __Vtemp_h925b4b87__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U];
        __Vtemp_h925b4b87__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U];
        __Vtemp_h925b4b87__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[2U];
        __Vtemp_h925b4b87__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[3U];
        __Vtemp_h925b4b87__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[4U];
        __Vtemp_h925b4b87__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[5U];
        __Vtemp_h925b4b87__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[6U];
        __Vtemp_h925b4b87__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[7U];
        __Vtemp_h925b4b87__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[8U];
        __Vtemp_h925b4b87__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[9U];
        __Vtemp_h925b4b87__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_h925b4b87__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_h925b4b87__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_h925b4b87__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_h925b4b87__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_h925b4b87__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_h925b4b87__0[0x10U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_h925b4b87__0[0x11U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x11U];
        __Vtemp_h925b4b87__0[0x12U] = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                             >> 0x16U));
        bufp->chgWData(oldp+3410,(__Vtemp_h925b4b87__0),577);
        bufp->chgBit(oldp+3429,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+3430,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr),22);
        bufp->chgWData(oldp+3431,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+3450,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest),2);
        bufp->chgWData(oldp+3451,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data),599);
        bufp->chgWData(oldp+3470,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data),599);
        bufp->chgWData(oldp+3489,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
        bufp->chgBit(oldp+3508,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+3509,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+3510,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])),22);
        __Vtemp_h5b5f8605__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[2U];
        __Vtemp_h5b5f8605__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[3U];
        __Vtemp_h5b5f8605__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[4U];
        __Vtemp_h5b5f8605__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[5U];
        __Vtemp_h5b5f8605__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[6U];
        __Vtemp_h5b5f8605__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[7U];
        __Vtemp_h5b5f8605__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[8U];
        __Vtemp_h5b5f8605__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[9U];
        __Vtemp_h5b5f8605__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_h5b5f8605__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_h5b5f8605__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_h5b5f8605__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_h5b5f8605__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_h5b5f8605__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_h5b5f8605__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_h5b5f8605__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x11U];
        bufp->chgWData(oldp+3511,(__Vtemp_h5b5f8605__0),512);
        bufp->chgQData(oldp+3527,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+3529,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded),3);
        bufp->chgBit(oldp+3530,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        __Vtemp_hfe9179b2__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U];
        __Vtemp_hfe9179b2__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U];
        __Vtemp_hfe9179b2__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[2U];
        __Vtemp_hfe9179b2__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[3U];
        __Vtemp_hfe9179b2__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[4U];
        __Vtemp_hfe9179b2__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[5U];
        __Vtemp_hfe9179b2__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[6U];
        __Vtemp_hfe9179b2__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[7U];
        __Vtemp_hfe9179b2__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[8U];
        __Vtemp_hfe9179b2__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[9U];
        __Vtemp_hfe9179b2__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_hfe9179b2__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_hfe9179b2__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_hfe9179b2__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_hfe9179b2__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_hfe9179b2__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_hfe9179b2__0[0x10U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_hfe9179b2__0[0x11U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x11U];
        __Vtemp_hfe9179b2__0[0x12U] = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                             >> 0x16U));
        bufp->chgWData(oldp+3531,(__Vtemp_hfe9179b2__0),577);
        bufp->chgBit(oldp+3550,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+3551,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr),22);
        bufp->chgWData(oldp+3552,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+3571,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest),2);
        bufp->chgWData(oldp+3572,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data),599);
        bufp->chgWData(oldp+3591,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data),599);
        bufp->chgWData(oldp+3610,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
        bufp->chgCData(oldp+3629,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
        bufp->chgCData(oldp+3630,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgSData(oldp+3631,((((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                     [0U] & (0xeU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                                    << 0xbU) | (((IData)(vlSelf->main__DOT__wb32_ddr3_phy_ack) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->main__DOT__r_cfg_ack) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->main__DOT__r_wb32_sio_ack) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->main__DOT__wb32_fan_ack) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->main__DOT__wb32_uart_ack) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->main__DOT__wb32_i2cdma_ack) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->main__DOT__wb32_i2cs_ack) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack))))))))))))),12);
        __Vtemp_hdec7dd6c__0[0U] = vlSelf->main__DOT__i2cscopei__DOT__o_bus_data;
        __Vtemp_hdec7dd6c__0[1U] = vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data;
        __Vtemp_hdec7dd6c__0[2U] = vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data;
        __Vtemp_hdec7dd6c__0[3U] = vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data;
        __Vtemp_hdec7dd6c__0[4U] = vlSelf->main__DOT__i2ci__DOT__bus_read_data;
        __Vtemp_hdec7dd6c__0[5U] = vlSelf->main__DOT__wb32_i2cdma_idata;
        __Vtemp_hdec7dd6c__0[6U] = vlSelf->main__DOT__wb32_uart_idata;
        __Vtemp_hdec7dd6c__0[7U] = vlSelf->main__DOT__wb32_fan_idata;
        __Vtemp_hdec7dd6c__0[8U] = vlSelf->main__DOT__r_wb32_sio_data;
        __Vtemp_hdec7dd6c__0[9U] = 0U;
        __Vtemp_hdec7dd6c__0[0xaU] = (IData)((((QData)((IData)(
                                                               vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data[0U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->main__DOT__wb32_ddr3_phy_idata))));
        __Vtemp_hdec7dd6c__0[0xbU] = (IData)(((((QData)((IData)(
                                                                vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data[0U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->main__DOT__wb32_ddr3_phy_idata))) 
                                              >> 0x20U));
        bufp->chgWData(oldp+3632,(__Vtemp_hdec7dd6c__0),384);
        bufp->chgIData(oldp+3644,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[0]),32);
        bufp->chgIData(oldp+3645,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[1]),32);
        bufp->chgIData(oldp+3646,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[2]),32);
        bufp->chgIData(oldp+3647,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[3]),32);
        bufp->chgIData(oldp+3648,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[4]),32);
        bufp->chgIData(oldp+3649,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[5]),32);
        bufp->chgIData(oldp+3650,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[6]),32);
        bufp->chgIData(oldp+3651,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[7]),32);
        bufp->chgIData(oldp+3652,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[8]),32);
        bufp->chgIData(oldp+3653,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[9]),32);
        bufp->chgIData(oldp+3654,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[10]),32);
        bufp->chgIData(oldp+3655,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[11]),32);
        bufp->chgIData(oldp+3656,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[12]),32);
        bufp->chgIData(oldp+3657,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[13]),32);
        bufp->chgIData(oldp+3658,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[14]),32);
        bufp->chgIData(oldp+3659,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[15]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+3660,(vlSelf->main__DOT__wb32_ddr3_phy_stall));
        bufp->chgBit(oldp+3661,(vlSelf->main__DOT__wb32_ddr3_phy_ack));
        bufp->chgIData(oldp+3662,(vlSelf->main__DOT__wb32_ddr3_phy_idata),32);
        bufp->chgBit(oldp+3663,(vlSelf->main__DOT__wb32_ddr3_controller_stall));
        __Vtemp_h7c167694__0[0U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
            [1U][0U];
        __Vtemp_h7c167694__0[1U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
            [1U][1U];
        __Vtemp_h7c167694__0[2U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
            [1U][2U];
        __Vtemp_h7c167694__0[3U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
            [1U][3U];
        bufp->chgWData(oldp+3664,(__Vtemp_h7c167694__0),128);
        bufp->chgSData(oldp+3668,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                                  [1U]),16);
        bufp->chgIData(oldp+3669,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index),32);
        bufp->chgCData(oldp+3670,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address),5);
        bufp->chgIData(oldp+3671,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction),28);
        bufp->chgIData(oldp+3672,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter),18);
        bufp->chgBit(oldp+3673,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero));
        bufp->chgBit(oldp+3674,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done));
        bufp->chgBit(oldp+3675,(vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter));
        bufp->chgBit(oldp+3676,(((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                                 & (0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data)))));
        bufp->chgBit(oldp+3677,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update));
        bufp->chgCData(oldp+3678,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q),8);
        bufp->chgSData(oldp+3679,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0]),14);
        bufp->chgSData(oldp+3680,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1]),14);
        bufp->chgSData(oldp+3681,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2]),14);
        bufp->chgSData(oldp+3682,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3]),14);
        bufp->chgSData(oldp+3683,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4]),14);
        bufp->chgSData(oldp+3684,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5]),14);
        bufp->chgSData(oldp+3685,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6]),14);
        bufp->chgSData(oldp+3686,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7]),14);
        bufp->chgBit(oldp+3687,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending));
        bufp->chgBit(oldp+3688,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux));
        bufp->chgBit(oldp+3689,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we));
        bufp->chgWData(oldp+3690,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data),128);
        bufp->chgSData(oldp+3694,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm),16);
        bufp->chgSData(oldp+3695,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col),10);
        bufp->chgCData(oldp+3696,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank),3);
        bufp->chgSData(oldp+3697,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row),14);
        bufp->chgCData(oldp+3698,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank),3);
        bufp->chgSData(oldp+3699,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row),14);
        bufp->chgBit(oldp+3700,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending));
        bufp->chgBit(oldp+3701,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux));
        bufp->chgBit(oldp+3702,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we));
        bufp->chgSData(oldp+3703,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned),16);
        bufp->chgSData(oldp+3704,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp),16);
        bufp->chgSData(oldp+3705,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0]),16);
        bufp->chgSData(oldp+3706,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1]),16);
        bufp->chgWData(oldp+3707,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned),128);
        bufp->chgWData(oldp+3711,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp),128);
        bufp->chgWData(oldp+3715,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0]),128);
        bufp->chgWData(oldp+3719,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1]),128);
        bufp->chgQData(oldp+3723,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0]),64);
        bufp->chgQData(oldp+3725,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[1]),64);
        bufp->chgCData(oldp+3727,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0]),8);
        bufp->chgCData(oldp+3728,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[1]),8);
        bufp->chgSData(oldp+3729,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col),10);
        bufp->chgCData(oldp+3730,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank),3);
        bufp->chgSData(oldp+3731,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row),14);
        bufp->chgCData(oldp+3732,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0]),4);
        bufp->chgCData(oldp+3733,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1]),4);
        bufp->chgCData(oldp+3734,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2]),4);
        bufp->chgCData(oldp+3735,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3]),4);
        bufp->chgCData(oldp+3736,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4]),4);
        bufp->chgCData(oldp+3737,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5]),4);
        bufp->chgCData(oldp+3738,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6]),4);
        bufp->chgCData(oldp+3739,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7]),4);
        bufp->chgCData(oldp+3740,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0]),4);
        bufp->chgCData(oldp+3741,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1]),4);
        bufp->chgCData(oldp+3742,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2]),4);
        bufp->chgCData(oldp+3743,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3]),4);
        bufp->chgCData(oldp+3744,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4]),4);
        bufp->chgCData(oldp+3745,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5]),4);
        bufp->chgCData(oldp+3746,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6]),4);
        bufp->chgCData(oldp+3747,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7]),4);
        bufp->chgCData(oldp+3748,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0]),4);
        bufp->chgCData(oldp+3749,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1]),4);
        bufp->chgCData(oldp+3750,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2]),4);
        bufp->chgCData(oldp+3751,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3]),4);
        bufp->chgCData(oldp+3752,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4]),4);
        bufp->chgCData(oldp+3753,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5]),4);
        bufp->chgCData(oldp+3754,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6]),4);
        bufp->chgCData(oldp+3755,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7]),4);
        bufp->chgCData(oldp+3756,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0]),4);
        bufp->chgCData(oldp+3757,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1]),4);
        bufp->chgCData(oldp+3758,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2]),4);
        bufp->chgCData(oldp+3759,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3]),4);
        bufp->chgCData(oldp+3760,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4]),4);
        bufp->chgCData(oldp+3761,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5]),4);
        bufp->chgCData(oldp+3762,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6]),4);
        bufp->chgCData(oldp+3763,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7]),4);
        bufp->chgBit(oldp+3764,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q));
        bufp->chgBit(oldp+3765,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q));
        bufp->chgCData(oldp+3766,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q),2);
        bufp->chgBit(oldp+3767,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d));
        bufp->chgCData(oldp+3768,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs),3);
        bufp->chgCData(oldp+3769,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val),3);
        bufp->chgBit(oldp+3770,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q));
        bufp->chgBit(oldp+3771,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
        bufp->chgCData(oldp+3772,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq),4);
        bufp->chgCData(oldp+3773,(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate),5);
        bufp->chgQData(oldp+3774,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store),40);
        bufp->chgCData(oldp+3776,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat),4);
        bufp->chgCData(oldp+3777,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index),6);
        bufp->chgCData(oldp+3778,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored),6);
        bufp->chgCData(oldp+3779,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index),6);
        bufp->chgCData(oldp+3780,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig),6);
        bufp->chgCData(oldp+3781,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index),6);
        bufp->chgCData(oldp+3782,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value),6);
        bufp->chgCData(oldp+3783,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat),3);
        bufp->chgCData(oldp+3784,(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay),2);
        bufp->chgCData(oldp+3785,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data),4);
        bufp->chgCData(oldp+3786,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback),5);
        bufp->chgBit(oldp+3787,(vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs));
        bufp->chgBit(oldp+3788,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane));
        bufp->chgCData(oldp+3789,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8),4);
        bufp->chgSData(oldp+3790,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement),16);
        bufp->chgCData(oldp+3791,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max),4);
        bufp->chgCData(oldp+3792,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0]),4);
        bufp->chgCData(oldp+3793,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[1]),4);
        bufp->chgCData(oldp+3794,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0]),2);
        bufp->chgCData(oldp+3795,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1]),2);
        bufp->chgCData(oldp+3796,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2]),2);
        bufp->chgCData(oldp+3797,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3]),2);
        bufp->chgCData(oldp+3798,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4]),2);
        bufp->chgCData(oldp+3799,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0]),2);
        bufp->chgCData(oldp+3800,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1]),2);
        bufp->chgCData(oldp+3801,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2]),2);
        bufp->chgCData(oldp+3802,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3]),2);
        bufp->chgCData(oldp+3803,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4]),2);
        bufp->chgBit(oldp+3804,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe));
        bufp->chgBit(oldp+3805,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data));
        bufp->chgSData(oldp+3806,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0]),16);
        bufp->chgSData(oldp+3807,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1]),16);
        bufp->chgWData(oldp+3808,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0]),128);
        bufp->chgWData(oldp+3812,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1]),128);
        bufp->chgBit(oldp+3816,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb));
        bufp->chgBit(oldp+3817,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux));
        bufp->chgBit(oldp+3818,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we));
        bufp->chgSData(oldp+3819,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col),10);
        bufp->chgWData(oldp+3820,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data),128);
        bufp->chgBit(oldp+3824,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt));
        bufp->chgBit(oldp+3825,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs));
        bufp->chgBit(oldp+3826,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq));
        bufp->chgBit(oldp+3827,(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback));
        bufp->chgWData(oldp+3828,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store),128);
        bufp->chgWData(oldp+3832,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern),128);
        bufp->chgCData(oldp+3836,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0]),7);
        bufp->chgCData(oldp+3837,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[1]),7);
        bufp->chgCData(oldp+3838,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0]),5);
        bufp->chgCData(oldp+3839,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[1]),5);
        bufp->chgCData(oldp+3840,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0]),5);
        bufp->chgCData(oldp+3841,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[1]),5);
        bufp->chgCData(oldp+3842,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0]),5);
        bufp->chgCData(oldp+3843,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[1]),5);
        bufp->chgCData(oldp+3844,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev),5);
        bufp->chgCData(oldp+3845,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0]),5);
        bufp->chgCData(oldp+3846,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[1]),5);
        bufp->chgBit(oldp+3847,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb));
        bufp->chgBit(oldp+3848,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update));
        bufp->chgBit(oldp+3849,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we));
        bufp->chgCData(oldp+3850,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr),7);
        bufp->chgIData(oldp+3851,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data),32);
        bufp->chgCData(oldp+3852,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel),4);
        bufp->chgCData(oldp+3853,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein),5);
        bufp->chgCData(oldp+3854,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein),5);
        bufp->chgCData(oldp+3855,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein),5);
        bufp->chgCData(oldp+3856,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein),5);
        bufp->chgCData(oldp+3857,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld),2);
        bufp->chgCData(oldp+3858,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld),2);
        bufp->chgCData(oldp+3859,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld),2);
        bufp->chgCData(oldp+3860,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld),2);
        bufp->chgBit(oldp+3861,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane));
        bufp->chgIData(oldp+3862,(vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4),31);
        bufp->chgSData(oldp+3863,((((IData)(vlSelf->main__DOT__wb32_ddr3_controller_stall) 
                                    << 0xbU) | ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                                << 0xaU))),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+3864,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))));
        bufp->chgBit(oldp+3865,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb))));
        bufp->chgBit(oldp+3866,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                       >> 1U))));
        bufp->chgBit(oldp+3867,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                       >> 1U))));
        bufp->chgBit(oldp+3868,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err));
        bufp->chgBit(oldp+3869,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
        bufp->chgBit(oldp+3870,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
        bufp->chgBit(oldp+3871,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 8U))));
        bufp->chgBit(oldp+3872,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                          >> 8U) & 
                                         (0U == (0x700U 
                                                 & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
        bufp->chgBit(oldp+3873,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 8U))));
        bufp->chgIData(oldp+3874,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]),32);
        bufp->chgCData(oldp+3875,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x20U)))),4);
        bufp->chgBit(oldp+3876,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                          >> 8U) & 
                                         (0x100U == 
                                          (0x700U & 
                                           vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
        bufp->chgBit(oldp+3877,(vlSelf->main__DOT__wb32_sirefclk_stb));
        bufp->chgBit(oldp+3878,(vlSelf->main__DOT__wb32_spio_stb));
        bufp->chgBit(oldp+3879,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                          >> 8U) & 
                                         (0x400U == 
                                          (0x700U & 
                                           vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
        bufp->chgBit(oldp+3880,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc))));
        bufp->chgBit(oldp+3881,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb))));
        bufp->chgBit(oldp+3882,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe))));
        bufp->chgIData(oldp+3883,((0x1ffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])),25);
        bufp->chgIData(oldp+3884,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U]),32);
        bufp->chgCData(oldp+3885,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))),4);
        bufp->chgBit(oldp+3886,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 1U))));
        bufp->chgBit(oldp+3887,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 1U))));
        bufp->chgBit(oldp+3888,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 1U))));
        bufp->chgIData(oldp+3889,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                                  << 7U) 
                                                 | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                                    >> 0x19U)))),25);
        bufp->chgIData(oldp+3890,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U]),32);
        bufp->chgCData(oldp+3891,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 4U)))),4);
        bufp->chgBit(oldp+3892,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 2U))));
        bufp->chgBit(oldp+3893,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 2U))));
        bufp->chgBit(oldp+3894,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 2U))));
        bufp->chgIData(oldp+3895,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                                  << 0xeU) 
                                                 | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                                    >> 0x12U)))),25);
        bufp->chgIData(oldp+3896,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U]),32);
        bufp->chgCData(oldp+3897,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 8U)))),4);
        bufp->chgBit(oldp+3898,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 3U))));
        bufp->chgBit(oldp+3899,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 3U))));
        bufp->chgBit(oldp+3900,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 3U))));
        bufp->chgIData(oldp+3901,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                                  << 0x15U) 
                                                 | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                                    >> 0xbU)))),25);
        bufp->chgIData(oldp+3902,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U]),32);
        bufp->chgCData(oldp+3903,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0xcU)))),4);
        bufp->chgBit(oldp+3904,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 4U))));
        bufp->chgBit(oldp+3905,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 4U))));
        bufp->chgBit(oldp+3906,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 4U))));
        bufp->chgIData(oldp+3907,((0x1ffffffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                                 >> 4U))),25);
        bufp->chgIData(oldp+3908,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]),32);
        bufp->chgCData(oldp+3909,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x10U)))),4);
        bufp->chgBit(oldp+3910,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 5U))));
        bufp->chgBit(oldp+3911,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 5U))));
        bufp->chgBit(oldp+3912,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 5U))));
        bufp->chgIData(oldp+3913,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                                  << 3U) 
                                                 | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                                    >> 0x1dU)))),25);
        bufp->chgIData(oldp+3914,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U]),32);
        bufp->chgCData(oldp+3915,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x14U)))),4);
        bufp->chgBit(oldp+3916,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 6U))));
        bufp->chgBit(oldp+3917,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 6U))));
        bufp->chgBit(oldp+3918,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 6U))));
        bufp->chgIData(oldp+3919,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                                  << 0xaU) 
                                                 | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                                    >> 0x16U)))),25);
        bufp->chgIData(oldp+3920,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]),32);
        bufp->chgCData(oldp+3921,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x18U)))),4);
        bufp->chgBit(oldp+3922,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 7U))));
        bufp->chgBit(oldp+3923,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 7U))));
        bufp->chgBit(oldp+3924,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 7U))));
        bufp->chgIData(oldp+3925,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U] 
                                                  << 0x11U) 
                                                 | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                                    >> 0xfU)))),25);
        bufp->chgIData(oldp+3926,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]),32);
        bufp->chgCData(oldp+3927,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x1cU)))),4);
        bufp->chgBit(oldp+3928,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 8U))));
        bufp->chgIData(oldp+3929,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                                  << 0x18U) 
                                                 | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U] 
                                                    >> 8U)))),25);
        bufp->chgBit(oldp+3930,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 9U))));
        bufp->chgBit(oldp+3931,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 9U))));
        bufp->chgBit(oldp+3932,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 9U))));
        bufp->chgIData(oldp+3933,((0x1ffffffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                                 >> 1U))),25);
        bufp->chgIData(oldp+3934,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[9U]),32);
        bufp->chgCData(oldp+3935,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x24U)))),4);
        bufp->chgBit(oldp+3936,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+3937,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+3938,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 0xaU))));
        bufp->chgIData(oldp+3939,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                  << 6U) 
                                                 | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                                    >> 0x1aU)))),25);
        bufp->chgIData(oldp+3940,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU]),32);
        bufp->chgCData(oldp+3941,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x28U)))),4);
        bufp->chgBit(oldp+3942,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+3943,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+3944,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 0xbU))));
        bufp->chgIData(oldp+3945,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                                  << 0xdU) 
                                                 | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                    >> 0x13U)))),25);
        bufp->chgIData(oldp+3946,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU]),32);
        bufp->chgCData(oldp+3947,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x2cU)))),4);
        bufp->chgCData(oldp+3948,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                         >> 0x16U))),2);
        bufp->chgIData(oldp+3949,((0xffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                                 << 0xdU) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                   >> 0x13U)))),24);
        __Vtemp_hc5461f3d__0[0U] = vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU];
        __Vtemp_hc5461f3d__0[1U] = 0U;
        __Vtemp_hc5461f3d__0[2U] = 0U;
        __Vtemp_hc5461f3d__0[3U] = 0U;
        bufp->chgWData(oldp+3950,(__Vtemp_hc5461f3d__0),128);
        bufp->chgSData(oldp+3954,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x2cU)))),16);
        bufp->chgCData(oldp+3955,((0x7fU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                             << 6U) 
                                            | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                               >> 0x1aU)))),7);
        bufp->chgIData(oldp+3956,((0xffffffU & ((IData)(5U) 
                                                + (
                                                   (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                                    << 0xdU) 
                                                   | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                      >> 0x13U))))),24);
        bufp->chgIData(oldp+3957,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2),32);
        bufp->chgCData(oldp+3958,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                         >> 4U))),2);
        bufp->chgBit(oldp+3959,(vlSelf->main__DOT__i2ci__DOT__next_valid));
        bufp->chgCData(oldp+3960,(vlSelf->main__DOT__i2ci__DOT__next_insn),8);
        bufp->chgBit(oldp+3961,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        >> 4U) & (~ 
                                                  ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                   >> 4U))))));
        bufp->chgBit(oldp+3962,(vlSelf->main__DOT__i2ci__DOT__bus_write));
        bufp->chgBit(oldp+3963,(vlSelf->main__DOT__i2ci__DOT__bus_override));
        bufp->chgBit(oldp+3964,(vlSelf->main__DOT__i2ci__DOT__bus_manual));
        bufp->chgBit(oldp+3965,(vlSelf->main__DOT__i2ci__DOT__bus_jump));
        bufp->chgBit(oldp+3966,((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])));
        bufp->chgBit(oldp+3967,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))));
        bufp->chgBit(oldp+3968,(vlSelf->main__DOT__i2cscopei__DOT__read_from_data));
        bufp->chgBit(oldp+3969,(vlSelf->main__DOT__i2cscopei__DOT__write_to_control));
        bufp->chgBit(oldp+3970,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+3971,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                       >> 1U))));
        bufp->chgBit(oldp+3972,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data));
        bufp->chgBit(oldp+3973,(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control));
        bufp->chgBit(oldp+3974,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+3975,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                       >> 2U))));
        bufp->chgBit(oldp+3976,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data));
        bufp->chgBit(oldp+3977,(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control));
        bufp->chgBit(oldp+3978,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+3979,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                       >> 3U))));
        bufp->chgBit(oldp+3980,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data));
        bufp->chgBit(oldp+3981,(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control));
        bufp->chgCData(oldp+3982,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn),5);
        bufp->chgBit(oldp+3983,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int));
        bufp->chgCData(oldp+3984,((7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                         >> 0xfU))),3);
        bufp->chgBit(oldp+3985,(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
        bufp->chgCData(oldp+3986,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                         >> 0xfU))),2);
        bufp->chgBit(oldp+3987,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid));
        bufp->chgCData(oldp+3988,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn),8);
        bufp->chgBit(oldp+3989,(((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
                                 & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 7U)))));
        bufp->chgBit(oldp+3990,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write));
        bufp->chgBit(oldp+3991,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override));
        bufp->chgBit(oldp+3992,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual));
        bufp->chgBit(oldp+3993,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump));
        bufp->chgCData(oldp+3994,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                         >> 0x1dU))),2);
        bufp->chgIData(oldp+3995,(vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr),32);
        bufp->chgIData(oldp+3996,(vlSelf->main__DOT__u_i2cdma__DOT__next_memlen),32);
        bufp->chgSData(oldp+3997,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc),12);
        bufp->chgSData(oldp+3998,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb),12);
        bufp->chgSData(oldp+3999,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe),12);
        bufp->chgWData(oldp+4000,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr),300);
        bufp->chgWData(oldp+4010,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata),384);
        bufp->chgQData(oldp+4022,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel),48);
        bufp->chgSData(oldp+4024,(vlSelf->main__DOT__wb32_xbar__DOT__request[0]),13);
        bufp->chgSData(oldp+4025,(vlSelf->main__DOT__wb32_xbar__DOT__sgrant),12);
        bufp->chgCData(oldp+4026,(vlSelf->main__DOT__wb32_xbar__DOT__mindex[0]),4);
        bufp->chgBit(oldp+4027,(vlSelf->main__DOT__wb32_xbar__DOT__m_stb));
        bufp->chgBit(oldp+4028,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                               >> 0x24U)))));
        bufp->chgIData(oldp+4029,(vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0]),25);
        bufp->chgIData(oldp+4030,(vlSelf->main__DOT__wb32_xbar__DOT__m_data[0]),32);
        bufp->chgCData(oldp+4031,(vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0]),4);
        bufp->chgBit(oldp+4032,(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
        bufp->chgSData(oldp+4033,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),13);
        bufp->chgBit(oldp+4034,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+4035,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+4036,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),4);
        bufp->chgBit(oldp+4037,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                               >> 0x3dU)))));
        bufp->chgIData(oldp+4038,((0x1ffffffU & (IData)(
                                                        (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                         >> 0x24U)))),25);
        bufp->chgIData(oldp+4039,((IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                           >> 4U))),32);
        bufp->chgCData(oldp+4040,((0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
        bufp->chgQData(oldp+4041,((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                                >> 0x3dU))))) 
                                    << 0x24U) | (0xfffffffffULL 
                                                 & vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
        bufp->chgQData(oldp+4043,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
        bufp->chgSData(oldp+4045,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),12);
        bufp->chgQData(oldp+4046,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),62);
        bufp->chgCData(oldp+4048,(vlSelf->main__DOT__wbu_xbar__DOT__mindex[0]),2);
        bufp->chgCData(oldp+4049,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
        bufp->chgCData(oldp+4050,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4051,(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc),4);
        bufp->chgCData(oldp+4052,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc),2);
        bufp->chgCData(oldp+4053,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb),2);
        bufp->chgCData(oldp+4054,(((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err) 
                                   << 1U)),2);
        bufp->chgCData(oldp+4055,(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant),2);
        bufp->chgCData(oldp+4056,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0]),2);
        bufp->chgCData(oldp+4057,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1]),2);
        bufp->chgCData(oldp+4058,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2]),2);
        bufp->chgCData(oldp+4059,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3]),2);
        bufp->chgCData(oldp+4060,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0]),2);
        bufp->chgCData(oldp+4061,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1]),2);
        bufp->chgCData(oldp+4062,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2]),2);
        bufp->chgCData(oldp+4063,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[3]),2);
        bufp->chgCData(oldp+4064,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall),4);
        bufp->chgCData(oldp+4065,(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall),4);
        bufp->chgCData(oldp+4066,(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack),4);
        bufp->chgCData(oldp+4067,(vlSelf->main__DOT__wbwide_xbar__DOT__s_err),4);
        bufp->chgCData(oldp+4068,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
        bufp->chgBit(oldp+4069,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+4070,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4071,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
        bufp->chgBit(oldp+4072,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+4073,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4074,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
        bufp->chgBit(oldp+4075,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+4076,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4077,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
        bufp->chgBit(oldp+4078,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+4079,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgBit(oldp+4080,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4081,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4082,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
        bufp->chgBit(oldp+4083,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4084,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4085,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))));
        bufp->chgBit(oldp+4086,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4087,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4088,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))));
        bufp->chgBit(oldp+4089,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4090,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4091,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))));
        bufp->chgCData(oldp+4092,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
        bufp->chgCData(oldp+4093,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
        bufp->chgCData(oldp+4094,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
        bufp->chgCData(oldp+4095,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+4096,((1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                       [0U] >> 1U))));
        bufp->chgIData(oldp+4097,(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data[0U]),32);
        bufp->chgWData(oldp+4098,(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data),128);
        bufp->chgCData(oldp+4102,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0]),2);
        bufp->chgCData(oldp+4103,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1]),2);
        bufp->chgCData(oldp+4104,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2]),2);
        bufp->chgCData(oldp+4105,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3]),2);
        bufp->chgCData(oldp+4106,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4]),2);
        bufp->chgCData(oldp+4107,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5]),2);
        bufp->chgCData(oldp+4108,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6]),2);
        bufp->chgCData(oldp+4109,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7]),2);
        bufp->chgCData(oldp+4110,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8]),2);
        bufp->chgCData(oldp+4111,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9]),2);
        bufp->chgCData(oldp+4112,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[10]),2);
        bufp->chgCData(oldp+4113,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[11]),2);
        bufp->chgCData(oldp+4114,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[12]),2);
        bufp->chgCData(oldp+4115,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[13]),2);
        bufp->chgCData(oldp+4116,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[14]),2);
        bufp->chgCData(oldp+4117,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[15]),2);
        bufp->chgBit(oldp+4118,((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U])));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+4119,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall));
        bufp->chgBit(oldp+4120,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall));
        bufp->chgCData(oldp+4121,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d),8);
        bufp->chgSData(oldp+4122,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[0]),14);
        bufp->chgSData(oldp+4123,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[1]),14);
        bufp->chgSData(oldp+4124,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[2]),14);
        bufp->chgSData(oldp+4125,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[3]),14);
        bufp->chgSData(oldp+4126,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[4]),14);
        bufp->chgSData(oldp+4127,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[5]),14);
        bufp->chgSData(oldp+4128,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[6]),14);
        bufp->chgSData(oldp+4129,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[7]),14);
        bufp->chgCData(oldp+4130,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[0]),4);
        bufp->chgCData(oldp+4131,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[1]),4);
        bufp->chgCData(oldp+4132,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[2]),4);
        bufp->chgCData(oldp+4133,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[3]),4);
        bufp->chgCData(oldp+4134,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[4]),4);
        bufp->chgCData(oldp+4135,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[5]),4);
        bufp->chgCData(oldp+4136,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[6]),4);
        bufp->chgCData(oldp+4137,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[7]),4);
        bufp->chgCData(oldp+4138,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[0]),4);
        bufp->chgCData(oldp+4139,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[1]),4);
        bufp->chgCData(oldp+4140,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[2]),4);
        bufp->chgCData(oldp+4141,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[3]),4);
        bufp->chgCData(oldp+4142,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[4]),4);
        bufp->chgCData(oldp+4143,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[5]),4);
        bufp->chgCData(oldp+4144,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[6]),4);
        bufp->chgCData(oldp+4145,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[7]),4);
        bufp->chgCData(oldp+4146,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[0]),4);
        bufp->chgCData(oldp+4147,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[1]),4);
        bufp->chgCData(oldp+4148,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[2]),4);
        bufp->chgCData(oldp+4149,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[3]),4);
        bufp->chgCData(oldp+4150,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[4]),4);
        bufp->chgCData(oldp+4151,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[5]),4);
        bufp->chgCData(oldp+4152,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[6]),4);
        bufp->chgCData(oldp+4153,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[7]),4);
        bufp->chgCData(oldp+4154,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0]),4);
        bufp->chgCData(oldp+4155,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1]),4);
        bufp->chgCData(oldp+4156,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2]),4);
        bufp->chgCData(oldp+4157,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3]),4);
        bufp->chgCData(oldp+4158,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4]),4);
        bufp->chgCData(oldp+4159,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5]),4);
        bufp->chgCData(oldp+4160,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6]),4);
        bufp->chgCData(oldp+4161,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7]),4);
        bufp->chgIData(oldp+4162,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0]),24);
        bufp->chgIData(oldp+4163,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1]),24);
        bufp->chgIData(oldp+4164,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2]),24);
        bufp->chgIData(oldp+4165,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3]),24);
        bufp->chgBit(oldp+4166,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt));
        bufp->chgBit(oldp+4167,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en));
        bufp->chgBit(oldp+4168,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n));
        bufp->chgBit(oldp+4169,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d));
        bufp->chgBit(oldp+4170,(vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy));
        bufp->chgBit(oldp+4171,(vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy));
        bufp->chgBit(oldp+4172,(vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger));
        bufp->chgBit(oldp+4173,(vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger));
        bufp->chgBit(oldp+4174,(vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger));
        bufp->chgBit(oldp+4175,(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
        bufp->chgSData(oldp+4176,(vlSelf->main__DOT__wb32_xbar__DOT__s_stall),16);
        bufp->chgBit(oldp+4177,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4178,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4179,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    }
    bufp->chgBit(oldp+4180,(vlSelf->i_clk));
    bufp->chgBit(oldp+4181,(vlSelf->i_reset));
    bufp->chgWData(oldp+4182,(vlSelf->i_ddr3_controller_iserdes_data),128);
    bufp->chgSData(oldp+4186,(vlSelf->i_ddr3_controller_iserdes_dqs),16);
    bufp->chgSData(oldp+4187,(vlSelf->i_ddr3_controller_iserdes_bitslip_reference),16);
    bufp->chgBit(oldp+4188,(vlSelf->i_ddr3_controller_idelayctrl_rdy));
    bufp->chgWData(oldp+4189,(vlSelf->o_ddr3_controller_cmd),96);
    bufp->chgBit(oldp+4192,(vlSelf->o_ddr3_controller_dqs_tri_control));
    bufp->chgBit(oldp+4193,(vlSelf->o_ddr3_controller_dq_tri_control));
    bufp->chgBit(oldp+4194,(vlSelf->o_ddr3_controller_toggle_dqs));
    bufp->chgIData(oldp+4195,(vlSelf->o_ddr3_controller_data),32);
    bufp->chgCData(oldp+4196,(vlSelf->o_ddr3_controller_dm),4);
    bufp->chgCData(oldp+4197,(vlSelf->o_ddr3_controller_odelay_data_cntvaluein),5);
    bufp->chgCData(oldp+4198,(vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein),5);
    bufp->chgCData(oldp+4199,(vlSelf->o_ddr3_controller_idelay_data_cntvaluein),5);
    bufp->chgCData(oldp+4200,(vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein),5);
    bufp->chgCData(oldp+4201,(vlSelf->o_ddr3_controller_odelay_data_ld),2);
    bufp->chgCData(oldp+4202,(vlSelf->o_ddr3_controller_odelay_dqs_ld),2);
    bufp->chgCData(oldp+4203,(vlSelf->o_ddr3_controller_idelay_data_ld),2);
    bufp->chgCData(oldp+4204,(vlSelf->o_ddr3_controller_idelay_dqs_ld),2);
    bufp->chgCData(oldp+4205,(vlSelf->o_ddr3_controller_bitslip),2);
    bufp->chgCData(oldp+4206,(vlSelf->o_sirefclk_word),8);
    bufp->chgBit(oldp+4207,(vlSelf->o_sirefclk_ce));
    bufp->chgBit(oldp+4208,(vlSelf->i_fan_sda));
    bufp->chgBit(oldp+4209,(vlSelf->i_fan_scl));
    bufp->chgBit(oldp+4210,(vlSelf->o_fan_sda));
    bufp->chgBit(oldp+4211,(vlSelf->o_fan_scl));
    bufp->chgBit(oldp+4212,(vlSelf->o_fpga_pwm));
    bufp->chgBit(oldp+4213,(vlSelf->o_sys_pwm));
    bufp->chgBit(oldp+4214,(vlSelf->i_fan_tach));
    bufp->chgBit(oldp+4215,(vlSelf->i_i2c_sda));
    bufp->chgBit(oldp+4216,(vlSelf->i_i2c_scl));
    bufp->chgBit(oldp+4217,(vlSelf->o_i2c_sda));
    bufp->chgBit(oldp+4218,(vlSelf->o_i2c_scl));
    bufp->chgBit(oldp+4219,(vlSelf->cpu_sim_cyc));
    bufp->chgBit(oldp+4220,(vlSelf->cpu_sim_stb));
    bufp->chgBit(oldp+4221,(vlSelf->cpu_sim_we));
    bufp->chgCData(oldp+4222,(vlSelf->cpu_sim_addr),7);
    bufp->chgIData(oldp+4223,(vlSelf->cpu_sim_data),32);
    bufp->chgBit(oldp+4224,(vlSelf->cpu_sim_stall));
    bufp->chgBit(oldp+4225,(vlSelf->cpu_sim_ack));
    bufp->chgIData(oldp+4226,(vlSelf->cpu_sim_idata),32);
    bufp->chgBit(oldp+4227,(vlSelf->cpu_prof_stb));
    bufp->chgIData(oldp+4228,(vlSelf->cpu_prof_addr),28);
    bufp->chgIData(oldp+4229,(vlSelf->cpu_prof_ticks),32);
    bufp->chgBit(oldp+4230,(vlSelf->i_cpu_reset));
    bufp->chgBit(oldp+4231,(vlSelf->i_wbu_uart_rx));
    bufp->chgBit(oldp+4232,(vlSelf->o_wbu_uart_tx));
    bufp->chgBit(oldp+4233,(vlSelf->o_wbu_uart_cts_n));
    bufp->chgSData(oldp+4234,(vlSelf->i_gpio),16);
    bufp->chgCData(oldp+4235,(vlSelf->o_gpio),8);
    bufp->chgCData(oldp+4236,(vlSelf->i_sw),8);
    bufp->chgCData(oldp+4237,(vlSelf->i_btn),5);
    bufp->chgCData(oldp+4238,(vlSelf->o_led),8);
    bufp->chgBit(oldp+4239,(vlSelf->i_clk200));
    bufp->chgIData(oldp+4240,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                [0U] << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4)),32);
    bufp->chgIData(oldp+4241,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                [0U] << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope2_ddr3i____pinNumber4)),32);
    bufp->chgIData(oldp+4242,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                [0U] << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope3_ddr3i____pinNumber4)),32);
    bufp->chgIData(oldp+4243,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
                                << 0x1fU) | ((0x40000000U 
                                              & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data) 
                                                 << 0x15U)) 
                                             | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait) 
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
                                                                                | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))))))))))))))))))),32);
    bufp->chgIData(oldp+4244,((((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                << 0x10U) | (IData)(vlSelf->o_gpio))),32);
    bufp->chgBit(oldp+4245,((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                             [0U] & (0xeU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))));
    bufp->chgBit(oldp+4246,(((IData)(vlSelf->cpu_sim_cyc) 
                             | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb))));
    bufp->chgBit(oldp+4247,(((~ (IData)(vlSelf->cpu_sim_cyc)) 
                             & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack))));
    bufp->chgBit(oldp+4248,((0U == (((vlSelf->i_ddr3_controller_iserdes_data[0U] 
                                      | vlSelf->i_ddr3_controller_iserdes_data[1U]) 
                                     | vlSelf->i_ddr3_controller_iserdes_data[2U]) 
                                    | vlSelf->i_ddr3_controller_iserdes_data[3U]))));
    bufp->chgSData(oldp+4249,(vlSelf->o_gpio),16);
    bufp->chgIData(oldp+4250,(vlSelf->main__DOT____Vcellinp__scope2_ddr3i____pinNumber4),31);
    bufp->chgCData(oldp+4251,(((IData)(vlSelf->cpu_sim_cyc)
                                ? 0xfU : (0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                                  >> 4U)))),4);
    bufp->chgIData(oldp+4252,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc),28);
    bufp->chgBit(oldp+4253,((((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
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
                                    & (IData)(((0xeU 
                                                == 
                                                (0xeU 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R))) 
                                               & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R) 
                                                  != 
                                                  (0xfU 
                                                   | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                                                      << 4U))))))) 
                                | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write)))));
    bufp->chgBit(oldp+4254,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim));
    bufp->chgIData(oldp+4255,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv),23);
    bufp->chgBit(oldp+4256,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid));
    bufp->chgBit(oldp+4257,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim));
    bufp->chgIData(oldp+4258,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv),23);
    bufp->chgBit(oldp+4259,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim));
    bufp->chgIData(oldp+4260,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv),23);
    bufp->chgBit(oldp+4261,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce));
    bufp->chgIData(oldp+4262,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
                                << 0x1cU) | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual) 
                                              << 0x18U) 
                                             | (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait) 
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
                                                                                | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn)))))))))))))))),32);
    bufp->chgSData(oldp+4263,(((0xfffff800U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                               & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                                   [0U] 
                                                   & (0xeU 
                                                      == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                                                  << 0xbU))) 
                               | ((0xfffffc00U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                  & ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_ack) 
                                                     << 0xaU))) 
                                  | ((0xfffffe00U & 
                                      ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
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
                                                                & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack)))))))))))))),16);
    bufp->chgIData(oldp+4264,(vlSelf->main__DOT__wb32_xbar__DOT__iM),32);
    bufp->chgCData(oldp+4265,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),4);
    bufp->chgCData(oldp+4266,(((((IData)(vlSelf->cpu_sim_cyc) 
                                 | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                << 1U) | (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))),2);
    bufp->chgCData(oldp+4267,(((((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                 & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack))),2);
    bufp->chgCData(oldp+4268,(((0xfffffffeU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                               & (((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                                   & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                                  << 1U))) 
                               | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                  & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack)))),4);
    bufp->chgIData(oldp+4269,(vlSelf->main__DOT__wbu_xbar__DOT__iM),32);
    bufp->chgCData(oldp+4270,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgIData(oldp+4271,(vlSelf->main__DOT__wbwide_xbar__DOT__iN),32);
    bufp->chgIData(oldp+4272,(vlSelf->main__DOT__wbwide_xbar__DOT__iM),32);
    bufp->chgCData(oldp+4273,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgCData(oldp+4274,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgCData(oldp+4275,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgCData(oldp+4276,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
}

void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_cleanup\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
