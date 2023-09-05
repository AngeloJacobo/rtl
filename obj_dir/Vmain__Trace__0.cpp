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
    VlWide<12>/*383:0*/ __Vtemp_ha8cd40b0__0;
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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+34,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                  [0U] << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4)),32);
        bufp->chgIData(oldp+35,((((IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted) 
                                  << 0x1fU) | vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4)),32);
        bufp->chgIData(oldp+36,((((IData)(vlSelf->main__DOT__i2ci__DOT__half_insn) 
                                  << 0x1cU) | (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual) 
                                                << 0x18U) 
                                               | vlSelf->main__DOT__i2ci__DOT____VdfgTmp_h373818eb__0))),32);
        bufp->chgBit(oldp+37,(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN));
        bufp->chgBit(oldp+38,(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset));
        bufp->chgIData(oldp+39,(vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4),31);
        bufp->chgIData(oldp+40,(vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4),31);
        bufp->chgBit(oldp+41,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc));
        bufp->chgBit(oldp+42,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb));
        bufp->chgBit(oldp+43,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_we));
        bufp->chgCData(oldp+44,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_addr),7);
        bufp->chgIData(oldp+45,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_data),32);
        bufp->chgBit(oldp+46,(vlSelf->main__DOT__swic__DOT__cpu_op_stall));
        bufp->chgBit(oldp+47,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_op_stall) 
                               & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                  >> 1U))));
        bufp->chgBit(oldp+48,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ready));
        bufp->chgBit(oldp+49,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce));
        bufp->chgBit(oldp+50,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance));
        bufp->chgBit(oldp+51,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall));
        bufp->chgBit(oldp+52,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_stalled));
        bufp->chgBit(oldp+53,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce));
        bufp->chgBit(oldp+54,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA) 
                               & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h39e03a19__0) 
                                   & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_he857573c__0) 
                                      & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                         >> 6U))) | 
                                  (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 6U) & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd))))));
        bufp->chgBit(oldp+55,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB) 
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
        bufp->chgBit(oldp+56,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_stall));
        bufp->chgIData(oldp+57,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v),32);
        bufp->chgIData(oldp+58,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v),32);
        bufp->chgBit(oldp+59,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce));
        bufp->chgBit(oldp+60,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall) 
                                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy)) 
                                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu)) 
                               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0))));
        bufp->chgBit(oldp+61,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce));
        bufp->chgBit(oldp+62,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_stalled));
        bufp->chgBit(oldp+63,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce));
        bufp->chgBit(oldp+64,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional));
        bufp->chgBit(oldp+65,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset));
        bufp->chgCData(oldp+66,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc),3);
        bufp->chgCData(oldp+67,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc),3);
        bufp->chgCData(oldp+68,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc),3);
        bufp->chgBit(oldp+69,(((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
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
        bufp->chgBit(oldp+70,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__this_is_a_multiply_op));
        bufp->chgBit(oldp+71,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN));
        bufp->chgBit(oldp+72,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset));
        bufp->chgBit(oldp+73,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset));
        bufp->chgBit(oldp+74,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
        bufp->chgBit(oldp+75,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
        bufp->chgSData(oldp+76,((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                  << 0xcU) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),13);
        bufp->chgSData(oldp+77,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),12);
        bufp->chgBit(oldp+78,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+79,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+80,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+81,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+82,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+83,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__11__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+84,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+85,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+86,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+87,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+88,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+89,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+90,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+91,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+92,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+93,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset));
        bufp->chgCData(oldp+94,(vlSelf->main__DOT__wbu_xbar__DOT__s_stall),4);
        bufp->chgBit(oldp+95,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
        bufp->chgBit(oldp+96,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+97,((((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                  << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                            & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)))),3);
        bufp->chgCData(oldp+98,(((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                 & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest))),2);
        bufp->chgBit(oldp+99,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+100,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+101,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+102,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+103,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+104,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
        bufp->chgBit(oldp+105,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+106,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                   << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                             & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)))),3);
        bufp->chgCData(oldp+107,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                  & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest))),2);
        bufp->chgBit(oldp+108,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+109,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+110,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+111,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb));
        bufp->chgBit(oldp+112,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+113,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                   << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid))) 
                                             & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)))),3);
        bufp->chgCData(oldp+114,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid))) 
                                  & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest))),2);
        bufp->chgBit(oldp+115,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+116,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+117,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+118,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb));
        bufp->chgBit(oldp+119,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+120,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                   << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid))) 
                                             & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)))),3);
        bufp->chgCData(oldp+121,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid))) 
                                  & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest))),2);
        bufp->chgBit(oldp+122,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+123,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+124,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+125,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb));
        bufp->chgBit(oldp+126,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+127,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                   << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid))) 
                                             & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)))),3);
        bufp->chgCData(oldp+128,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid))) 
                                  & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest))),2);
        bufp->chgBit(oldp+129,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+130,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+131,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+132,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+133,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+134,(vlSelf->main__DOT__scope1_ddr3_int));
        bufp->chgBit(oldp+135,(vlSelf->main__DOT__scope2_ddr3_int));
        bufp->chgBit(oldp+136,((1U & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                      >> 5U))));
        bufp->chgBit(oldp+137,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)))));
        bufp->chgBit(oldp+138,((1U & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                      >> 5U))));
        bufp->chgBit(oldp+139,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)))));
        bufp->chgBit(oldp+140,(vlSelf->main__DOT__i2cscope_int));
        bufp->chgBit(oldp+141,(vlSelf->main__DOT__scope3_ddr3_int));
        bufp->chgBit(oldp+142,(vlSelf->main__DOT__gpio_int));
        bufp->chgBit(oldp+143,(vlSelf->main__DOT__spio_int));
        bufp->chgBit(oldp+144,((1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                      [0U] >> 1U))));
        bufp->chgBit(oldp+145,(vlSelf->main__DOT__r_sirefclk_en));
        bufp->chgIData(oldp+146,(vlSelf->main__DOT__r_sirefclk_data),30);
        bufp->chgBit(oldp+147,(vlSelf->main__DOT__w_sirefclk_unused_stb));
        bufp->chgBit(oldp+148,(vlSelf->main__DOT__r_sirefclk_ack));
        bufp->chgBit(oldp+149,((1U & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+150,(vlSelf->main__DOT__i2c_valid));
        bufp->chgBit(oldp+151,(vlSelf->main__DOT__i2c_ready));
        bufp->chgBit(oldp+152,(vlSelf->main__DOT__i2c_last));
        bufp->chgCData(oldp+153,(vlSelf->main__DOT__i2c_data),8);
        bufp->chgCData(oldp+154,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid),2);
        bufp->chgBit(oldp+155,(vlSelf->main__DOT__w_console_rx_stb));
        bufp->chgBit(oldp+156,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)))));
        bufp->chgBit(oldp+157,(vlSelf->main__DOT__w_console_busy));
        bufp->chgCData(oldp+158,(vlSelf->main__DOT__w_console_rx_data),7);
        bufp->chgCData(oldp+159,(vlSelf->main__DOT__w_console_tx_data),7);
        bufp->chgIData(oldp+160,(vlSelf->main__DOT__uart_debug),32);
        bufp->chgBit(oldp+161,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb));
        bufp->chgBit(oldp+162,(vlSelf->main__DOT__raw_cpu_dbg_ack));
        bufp->chgSData(oldp+163,((((IData)(vlSelf->main__DOT__gpio_int) 
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
        bufp->chgBit(oldp+164,(vlSelf->main__DOT__zip_cpu_int));
        bufp->chgCData(oldp+165,(vlSelf->main__DOT__wbu_rx_data),8);
        bufp->chgCData(oldp+166,(vlSelf->main__DOT__genbus__DOT__ps_data),8);
        bufp->chgBit(oldp+167,(vlSelf->main__DOT__wbu_rx_stb));
        bufp->chgBit(oldp+168,(vlSelf->main__DOT__genbus__DOT__ps_full));
        bufp->chgBit(oldp+169,(vlSelf->main__DOT__txv__DOT__r_busy));
        bufp->chgBit(oldp+170,(vlSelf->main__DOT__genbus__DOT__r_wdt_reset));
        bufp->chgCData(oldp+171,(vlSelf->main__DOT__w_led),8);
        bufp->chgSData(oldp+172,((((IData)(vlSelf->main__DOT__spio_int) 
                                   << 8U) | ((0x80U 
                                              & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                                 << 2U)) 
                                             | (0x40U 
                                                & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                                   << 1U))))),15);
        bufp->chgSData(oldp+173,((((IData)(vlSelf->main__DOT__gpio_int) 
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
        bufp->chgBit(oldp+174,(vlSelf->main__DOT__wbwide_i2cdma_cyc));
        bufp->chgBit(oldp+175,(vlSelf->main__DOT__wbwide_i2cdma_stb));
        bufp->chgIData(oldp+176,(vlSelf->main__DOT__wbwide_i2cdma_addr),22);
        bufp->chgWData(oldp+177,(vlSelf->main__DOT__wbwide_i2cdma_data),512);
        bufp->chgQData(oldp+193,(vlSelf->main__DOT__wbwide_i2cdma_sel),64);
        bufp->chgBit(oldp+195,((1U & (IData)(vlSelf->__VdfgTmp_h503d14d1__0))));
        bufp->chgBit(oldp+196,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))));
        bufp->chgBit(oldp+197,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))));
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
        bufp->chgWData(oldp+198,(__Vtemp_h053daff0__0),512);
        bufp->chgBit(oldp+214,(vlSelf->main__DOT__wbwide_i2cm_cyc));
        bufp->chgBit(oldp+215,(vlSelf->main__DOT__wbwide_i2cm_stb));
        bufp->chgIData(oldp+216,(vlSelf->main__DOT__wbwide_i2cm_addr),22);
        bufp->chgBit(oldp+217,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+218,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                      >> 1U))));
        bufp->chgBit(oldp+219,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
        bufp->chgWData(oldp+220,(__Vtemp_h3711b190__0),512);
        bufp->chgBit(oldp+236,(vlSelf->main__DOT__wbwide_zip_cyc));
        bufp->chgBit(oldp+237,(vlSelf->main__DOT__wbwide_zip_stb));
        bufp->chgBit(oldp+238,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                       ? (IData)(vlSelf->main__DOT__swic__DOT__cpu_we)
                                       : (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))))));
        bufp->chgIData(oldp+239,(vlSelf->main__DOT__wbwide_zip_addr),22);
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
        bufp->chgWData(oldp+240,(__Vtemp_h58eb921b__0),512);
        bufp->chgQData(oldp+256,(((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                   ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                       ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                       : 0xffffffffffffffffULL)
                                   : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                       ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                       : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel))),64);
        bufp->chgBit(oldp+258,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+259,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                      >> 2U))));
        bufp->chgBit(oldp+260,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
        bufp->chgWData(oldp+261,(__Vtemp_hc1d82fb0__0),512);
        bufp->chgBit(oldp+277,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc));
        bufp->chgBit(oldp+278,(vlSelf->main__DOT__wbwide_wbu_arbiter_stb));
        bufp->chgBit(oldp+279,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we));
        bufp->chgIData(oldp+280,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr),22);
        bufp->chgWData(oldp+281,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data),512);
        bufp->chgQData(oldp+297,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel),64);
        bufp->chgBit(oldp+299,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+300,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                      >> 3U))));
        bufp->chgBit(oldp+301,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
        bufp->chgWData(oldp+302,(__Vtemp_hc1851150__0),512);
        bufp->chgBit(oldp+318,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))));
        bufp->chgBit(oldp+319,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb))));
        bufp->chgBit(oldp+320,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe))));
        bufp->chgIData(oldp+321,((0x3fffffU & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr))),22);
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
        bufp->chgWData(oldp+322,(__Vtemp_h07963193__0),512);
        bufp->chgQData(oldp+338,((((QData)((IData)(
                                                   vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))),64);
        bufp->chgBit(oldp+340,(vlSelf->main__DOT__wbwide_bkram_ack));
        bufp->chgWData(oldp+341,(vlSelf->main__DOT__wbwide_bkram_idata),512);
        bufp->chgBit(oldp+357,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                      >> 1U))));
        bufp->chgBit(oldp+358,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                      >> 1U))));
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
        bufp->chgBit(oldp+381,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err));
        bufp->chgWData(oldp+382,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data),512);
        bufp->chgBit(oldp+398,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
        bufp->chgBit(oldp+399,(vlSelf->main__DOT__wb32_wbdown_stb));
        bufp->chgBit(oldp+400,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we));
        bufp->chgIData(oldp+401,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr),25);
        bufp->chgIData(oldp+402,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU]),32);
        bufp->chgCData(oldp+403,((0xfU & (IData)((vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                                  >> 0x3cU)))),4);
        bufp->chgBit(oldp+404,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+405,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
        bufp->chgBit(oldp+406,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
        bufp->chgIData(oldp+407,(vlSelf->main__DOT__wb32_wbdown_idata),32);
        bufp->chgBit(oldp+408,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                      >> 8U))));
        bufp->chgBit(oldp+409,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                         >> 8U) & (0U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
        bufp->chgBit(oldp+410,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                      >> 8U))));
        bufp->chgIData(oldp+411,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]),32);
        bufp->chgCData(oldp+412,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x20U)))),4);
        bufp->chgBit(oldp+413,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                         >> 8U) & (0x100U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
        bufp->chgBit(oldp+414,(vlSelf->main__DOT__wb32_sirefclk_stb));
        bufp->chgIData(oldp+415,((((~ (IData)(vlSelf->main__DOT__r_sirefclk_en)) 
                                   << 0x1fU) | vlSelf->main__DOT__r_sirefclk_data)),32);
        bufp->chgBit(oldp+416,(vlSelf->main__DOT__wb32_spio_stb));
        bufp->chgBit(oldp+417,(vlSelf->main__DOT__wb32_spio_ack));
        bufp->chgIData(oldp+418,((((IData)(vlSelf->main__DOT__spioi__DOT__led_demo) 
                                   << 0x18U) | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->main__DOT__spioi__DOT__r_led))))),32);
        bufp->chgBit(oldp+419,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                         >> 8U) & (0x400U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
        bufp->chgBit(oldp+420,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc))));
        bufp->chgBit(oldp+421,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb))));
        bufp->chgBit(oldp+422,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe))));
        bufp->chgIData(oldp+423,((0x1ffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])),25);
        bufp->chgIData(oldp+424,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U]),32);
        bufp->chgCData(oldp+425,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))),4);
        bufp->chgBit(oldp+426,(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack));
        bufp->chgIData(oldp+427,(vlSelf->main__DOT__i2cscopei__DOT__o_bus_data),32);
        bufp->chgBit(oldp+428,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                      >> 1U))));
        bufp->chgBit(oldp+429,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 1U))));
        bufp->chgBit(oldp+430,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                      >> 1U))));
        bufp->chgIData(oldp+431,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                                 << 7U) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                                   >> 0x19U)))),25);
        bufp->chgIData(oldp+432,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U]),32);
        bufp->chgCData(oldp+433,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 4U)))),4);
        bufp->chgBit(oldp+434,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack));
        bufp->chgIData(oldp+435,(vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data),32);
        bufp->chgBit(oldp+436,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                      >> 2U))));
        bufp->chgBit(oldp+437,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 2U))));
        bufp->chgBit(oldp+438,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                      >> 2U))));
        bufp->chgIData(oldp+439,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                                 << 0xeU) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                                   >> 0x12U)))),25);
        bufp->chgIData(oldp+440,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U]),32);
        bufp->chgCData(oldp+441,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 8U)))),4);
        bufp->chgBit(oldp+442,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack));
        bufp->chgIData(oldp+443,(vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data),32);
        bufp->chgBit(oldp+444,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                      >> 3U))));
        bufp->chgBit(oldp+445,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 3U))));
        bufp->chgBit(oldp+446,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                      >> 3U))));
        bufp->chgIData(oldp+447,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                                 << 0x15U) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                                   >> 0xbU)))),25);
        bufp->chgIData(oldp+448,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U]),32);
        bufp->chgCData(oldp+449,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0xcU)))),4);
        bufp->chgBit(oldp+450,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack));
        bufp->chgIData(oldp+451,(vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data),32);
        bufp->chgBit(oldp+452,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                      >> 4U))));
        bufp->chgBit(oldp+453,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 4U))));
        bufp->chgBit(oldp+454,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                      >> 4U))));
        bufp->chgIData(oldp+455,((0x1ffffffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                                >> 4U))),25);
        bufp->chgIData(oldp+456,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]),32);
        bufp->chgCData(oldp+457,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x10U)))),4);
        bufp->chgBit(oldp+458,(vlSelf->main__DOT__wb32_i2cs_ack));
        bufp->chgIData(oldp+459,(vlSelf->main__DOT__i2ci__DOT__bus_read_data),32);
        bufp->chgBit(oldp+460,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                      >> 5U))));
        bufp->chgBit(oldp+461,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 5U))));
        bufp->chgBit(oldp+462,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                      >> 5U))));
        bufp->chgIData(oldp+463,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                                 << 3U) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                                   >> 0x1dU)))),25);
        bufp->chgIData(oldp+464,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U]),32);
        bufp->chgCData(oldp+465,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x14U)))),4);
        bufp->chgBit(oldp+466,(vlSelf->main__DOT__wb32_i2cdma_ack));
        bufp->chgIData(oldp+467,(vlSelf->main__DOT__wb32_i2cdma_idata),32);
        bufp->chgBit(oldp+468,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                      >> 6U))));
        bufp->chgBit(oldp+469,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 6U))));
        bufp->chgBit(oldp+470,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                      >> 6U))));
        bufp->chgIData(oldp+471,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                                 << 0xaU) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                                   >> 0x16U)))),25);
        bufp->chgIData(oldp+472,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]),32);
        bufp->chgCData(oldp+473,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x18U)))),4);
        bufp->chgBit(oldp+474,(vlSelf->main__DOT__wb32_uart_ack));
        bufp->chgIData(oldp+475,(vlSelf->main__DOT__wb32_uart_idata),32);
        bufp->chgBit(oldp+476,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                      >> 7U))));
        bufp->chgBit(oldp+477,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 7U))));
        bufp->chgBit(oldp+478,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                      >> 7U))));
        bufp->chgIData(oldp+479,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U] 
                                                 << 0x11U) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                                   >> 0xfU)))),25);
        bufp->chgIData(oldp+480,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]),32);
        bufp->chgCData(oldp+481,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x1cU)))),4);
        bufp->chgBit(oldp+482,(vlSelf->main__DOT__wb32_fan_ack));
        bufp->chgIData(oldp+483,(vlSelf->main__DOT__wb32_fan_idata),32);
        bufp->chgBit(oldp+484,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 8U))));
        bufp->chgIData(oldp+485,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                                 << 0x18U) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U] 
                                                   >> 8U)))),25);
        bufp->chgBit(oldp+486,(vlSelf->main__DOT__r_wb32_sio_ack));
        bufp->chgIData(oldp+487,(vlSelf->main__DOT__r_wb32_sio_data),32);
        bufp->chgBit(oldp+488,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                      >> 9U))));
        bufp->chgBit(oldp+489,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 9U))));
        bufp->chgBit(oldp+490,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                      >> 9U))));
        bufp->chgIData(oldp+491,((0x1ffffffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                                >> 1U))),25);
        bufp->chgIData(oldp+492,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[9U]),32);
        bufp->chgCData(oldp+493,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x24U)))),4);
        bufp->chgBit(oldp+494,(vlSelf->main__DOT__r_cfg_ack));
        bufp->chgBit(oldp+495,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+496,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+497,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                      >> 0xaU))));
        bufp->chgIData(oldp+498,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                 << 6U) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                                   >> 0x1aU)))),25);
        bufp->chgIData(oldp+499,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU]),32);
        bufp->chgCData(oldp+500,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x28U)))),4);
        bufp->chgBit(oldp+501,(vlSelf->main__DOT__wb32_ddr3_phy_stall));
        bufp->chgBit(oldp+502,(vlSelf->main__DOT__wb32_ddr3_phy_ack));
        bufp->chgIData(oldp+503,(vlSelf->main__DOT__wb32_ddr3_phy_idata),32);
        bufp->chgBit(oldp+504,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+505,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+506,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                      >> 0xbU))));
        bufp->chgIData(oldp+507,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                                 << 0xdU) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                   >> 0x13U)))),25);
        bufp->chgIData(oldp+508,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU]),32);
        bufp->chgCData(oldp+509,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x2cU)))),4);
        bufp->chgBit(oldp+510,(vlSelf->main__DOT__wb32_ddr3_controller_stall));
        bufp->chgBit(oldp+511,((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                [0U] & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))));
        bufp->chgIData(oldp+512,((IData)(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data)),32);
        bufp->chgBit(oldp+513,(vlSelf->main__DOT__wbu_cyc));
        bufp->chgBit(oldp+514,(vlSelf->main__DOT__wbu_stb));
        bufp->chgBit(oldp+515,(vlSelf->main__DOT__wbu_we));
        bufp->chgIData(oldp+516,((0x7ffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),27);
        bufp->chgIData(oldp+517,(vlSelf->main__DOT__wbu_data),32);
        bufp->chgBit(oldp+518,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+519,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
        bufp->chgBit(oldp+520,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
        bufp->chgIData(oldp+521,(vlSelf->main__DOT__wbu_idata),32);
        bufp->chgBit(oldp+522,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))));
        bufp->chgBit(oldp+523,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb))));
        bufp->chgBit(oldp+524,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe))));
        bufp->chgIData(oldp+525,((0x7ffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),27);
        bufp->chgIData(oldp+526,((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata)),32);
        bufp->chgCData(oldp+527,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel))),4);
        bufp->chgBit(oldp+528,(vlSelf->main__DOT__wbu_wbu_arbiter_stall));
        bufp->chgBit(oldp+529,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack));
        bufp->chgBit(oldp+530,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err));
        bufp->chgIData(oldp+531,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU]),32);
        bufp->chgBit(oldp+532,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                      >> 1U))));
        bufp->chgBit(oldp+533,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                      >> 1U))));
        bufp->chgBit(oldp+534,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                                      >> 1U))));
        bufp->chgIData(oldp+535,((0x7ffffffU & (IData)(
                                                       (vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                                        >> 0x1bU)))),27);
        bufp->chgIData(oldp+536,((IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                                          >> 0x20U))),32);
        bufp->chgCData(oldp+537,((0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                          >> 4U))),4);
        bufp->chgIData(oldp+538,(vlSelf->main__DOT__wbu_zip_idata),32);
        bufp->chgIData(oldp+539,((0x3fffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),30);
        bufp->chgSData(oldp+540,((0x3fffU & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr))),14);
        bufp->chgBit(oldp+541,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb));
        bufp->chgBit(oldp+542,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb));
        bufp->chgWData(oldp+543,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data),512);
        bufp->chgSData(oldp+559,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr),14);
        bufp->chgQData(oldp+560,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel),64);
        bufp->chgIData(oldp+562,(vlSelf->main__DOT__bkrami__DOT__WRITE_TO_MEMORY__DOT__ik),32);
        bufp->chgIData(oldp+563,(vlSelf->main__DOT__r_sirefclk_data),32);
        bufp->chgIData(oldp+564,(vlSelf->main__DOT__clock_generator__DOT__counter[0]),32);
        bufp->chgIData(oldp+565,(vlSelf->main__DOT__clock_generator__DOT__counter[1]),32);
        bufp->chgIData(oldp+566,(vlSelf->main__DOT__clock_generator__DOT__counter[2]),32);
        bufp->chgIData(oldp+567,(vlSelf->main__DOT__clock_generator__DOT__counter[3]),32);
        bufp->chgIData(oldp+568,(vlSelf->main__DOT__clock_generator__DOT__counter[4]),32);
        bufp->chgIData(oldp+569,(vlSelf->main__DOT__clock_generator__DOT__counter[5]),32);
        bufp->chgIData(oldp+570,(vlSelf->main__DOT__clock_generator__DOT__counter[6]),32);
        bufp->chgIData(oldp+571,(vlSelf->main__DOT__clock_generator__DOT__counter[7]),32);
        bufp->chgIData(oldp+572,(vlSelf->main__DOT__clock_generator__DOT__r_delay),32);
        bufp->chgIData(oldp+573,(vlSelf->main__DOT__clock_generator__DOT__times_three),32);
        bufp->chgIData(oldp+574,(vlSelf->main__DOT__clock_generator__DOT__times_five),32);
        bufp->chgIData(oldp+575,(vlSelf->main__DOT__clock_generator__DOT__times_seven),32);
        bufp->chgCData(oldp+576,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                        >> 0x16U))),2);
        bufp->chgBit(oldp+577,(vlSelf->main__DOT__console__DOT__rx_uart_reset));
        bufp->chgBit(oldp+578,(((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                & (IData)(vlSelf->main__DOT__w_console_rx_stb))));
        bufp->chgCData(oldp+579,(vlSelf->main__DOT__console__DOT__rxf_wb_data),7);
        bufp->chgSData(oldp+580,(vlSelf->main__DOT__console__DOT__rxf_status),16);
        bufp->chgBit(oldp+581,(vlSelf->main__DOT__console__DOT__rxf_wb_read));
        bufp->chgIData(oldp+582,(((((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                    & (IData)(vlSelf->main__DOT__w_console_rx_stb)) 
                                   << 0xcU) | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                                                << 8U) 
                                               | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_data)))),32);
        bufp->chgBit(oldp+583,(((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write)) 
                                & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write))));
        bufp->chgSData(oldp+584,(vlSelf->main__DOT__console__DOT__txf_status),16);
        bufp->chgBit(oldp+585,(vlSelf->main__DOT__console__DOT__txf_wb_write));
        bufp->chgBit(oldp+586,(vlSelf->main__DOT__console__DOT__tx_uart_reset));
        bufp->chgCData(oldp+587,(vlSelf->main__DOT__console__DOT__txf_wb_data),7);
        bufp->chgIData(oldp+588,((((IData)(vlSelf->__VdfgTmp_ha46ae6a3__0) 
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
        bufp->chgIData(oldp+589,((((IData)(vlSelf->main__DOT__console__DOT__txf_status) 
                                   << 0x10U) | (IData)(vlSelf->main__DOT__console__DOT__rxf_status))),32);
        bufp->chgCData(oldp+590,(vlSelf->main__DOT__console__DOT__r_wb_addr),2);
        bufp->chgBit(oldp+591,(vlSelf->main__DOT__console__DOT__r_wb_ack));
        bufp->chgCData(oldp+592,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data),7);
        bufp->chgCData(oldp+593,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write),7);
        bufp->chgCData(oldp+594,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+595,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr),6);
        bufp->chgCData(oldp+596,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next),6);
        bufp->chgBit(oldp+597,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow));
        bufp->chgBit(oldp+598,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow));
        bufp->chgBit(oldp+599,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc));
        bufp->chgCData(oldp+600,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
        bufp->chgCData(oldp+601,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
        bufp->chgBit(oldp+602,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write));
        bufp->chgBit(oldp+603,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read));
        bufp->chgCData(oldp+604,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill),6);
        bufp->chgSData(oldp+605,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill),10);
        bufp->chgBit(oldp+606,(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6));
        bufp->chgCData(oldp+607,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data),7);
        bufp->chgCData(oldp+608,(vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write),7);
        bufp->chgCData(oldp+609,(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+610,(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr),6);
        bufp->chgCData(oldp+611,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next),6);
        bufp->chgBit(oldp+612,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow));
        bufp->chgBit(oldp+613,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow));
        bufp->chgBit(oldp+614,(vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc));
        bufp->chgCData(oldp+615,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
        bufp->chgCData(oldp+616,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
        bufp->chgBit(oldp+617,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write));
        bufp->chgBit(oldp+618,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read));
        bufp->chgCData(oldp+619,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill),6);
        bufp->chgSData(oldp+620,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill),10);
        bufp->chgIData(oldp+621,((0xffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                                << 0xdU) 
                                               | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                  >> 0x13U)))),24);
        bufp->chgQData(oldp+622,(((0xffffffffULL & (QData)((IData)(
                                                                   vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU]))) 
                                  | ((QData)((IData)(
                                                     vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU])) 
                                     >> 0x20U))),64);
        bufp->chgCData(oldp+624,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                  >> 0x2cU)))),8);
        bufp->chgQData(oldp+625,(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data),64);
        bufp->chgCData(oldp+627,((0x7fU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                            << 6U) 
                                           | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                              >> 0x1aU)))),7);
        bufp->chgIData(oldp+628,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index),32);
        bufp->chgCData(oldp+629,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address),5);
        bufp->chgIData(oldp+630,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction),28);
        bufp->chgSData(oldp+631,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter),16);
        bufp->chgBit(oldp+632,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero));
        bufp->chgBit(oldp+633,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done));
        bufp->chgBit(oldp+634,(vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter));
        bufp->chgBit(oldp+635,(((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                                & (0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data)))));
        bufp->chgBit(oldp+636,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update));
        bufp->chgBit(oldp+637,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall));
        bufp->chgBit(oldp+638,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall));
        bufp->chgCData(oldp+639,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q),8);
        bufp->chgCData(oldp+640,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d),8);
        bufp->chgSData(oldp+641,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0]),14);
        bufp->chgSData(oldp+642,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1]),14);
        bufp->chgSData(oldp+643,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2]),14);
        bufp->chgSData(oldp+644,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3]),14);
        bufp->chgSData(oldp+645,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4]),14);
        bufp->chgSData(oldp+646,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5]),14);
        bufp->chgSData(oldp+647,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6]),14);
        bufp->chgSData(oldp+648,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7]),14);
        bufp->chgSData(oldp+649,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[0]),14);
        bufp->chgSData(oldp+650,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[1]),14);
        bufp->chgSData(oldp+651,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[2]),14);
        bufp->chgSData(oldp+652,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[3]),14);
        bufp->chgSData(oldp+653,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[4]),14);
        bufp->chgSData(oldp+654,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[5]),14);
        bufp->chgSData(oldp+655,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[6]),14);
        bufp->chgSData(oldp+656,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[7]),14);
        bufp->chgBit(oldp+657,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending));
        bufp->chgBit(oldp+658,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux));
        bufp->chgBit(oldp+659,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we));
        bufp->chgQData(oldp+660,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data),64);
        bufp->chgCData(oldp+662,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm),8);
        bufp->chgSData(oldp+663,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col),10);
        bufp->chgCData(oldp+664,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank),3);
        bufp->chgSData(oldp+665,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row),14);
        bufp->chgCData(oldp+666,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank),3);
        bufp->chgSData(oldp+667,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row),14);
        bufp->chgIData(oldp+668,((0xffffffU & ((IData)(5U) 
                                               + ((
                                                   vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                                   << 0xdU) 
                                                  | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                     >> 0x13U))))),24);
        bufp->chgBit(oldp+669,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending));
        bufp->chgBit(oldp+670,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux));
        bufp->chgBit(oldp+671,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we));
        bufp->chgCData(oldp+672,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned),8);
        bufp->chgCData(oldp+673,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp),8);
        bufp->chgCData(oldp+674,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0]),8);
        bufp->chgCData(oldp+675,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1]),8);
        bufp->chgQData(oldp+676,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned),64);
        bufp->chgQData(oldp+678,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp),64);
        bufp->chgQData(oldp+680,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0]),64);
        bufp->chgQData(oldp+682,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1]),64);
        bufp->chgQData(oldp+684,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0]),64);
        bufp->chgCData(oldp+686,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0]),8);
        bufp->chgSData(oldp+687,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col),10);
        bufp->chgCData(oldp+688,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank),3);
        bufp->chgSData(oldp+689,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row),14);
        bufp->chgCData(oldp+690,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0]),4);
        bufp->chgCData(oldp+691,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1]),4);
        bufp->chgCData(oldp+692,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2]),4);
        bufp->chgCData(oldp+693,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3]),4);
        bufp->chgCData(oldp+694,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4]),4);
        bufp->chgCData(oldp+695,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5]),4);
        bufp->chgCData(oldp+696,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6]),4);
        bufp->chgCData(oldp+697,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7]),4);
        bufp->chgCData(oldp+698,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[0]),4);
        bufp->chgCData(oldp+699,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[1]),4);
        bufp->chgCData(oldp+700,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[2]),4);
        bufp->chgCData(oldp+701,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[3]),4);
        bufp->chgCData(oldp+702,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[4]),4);
        bufp->chgCData(oldp+703,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[5]),4);
        bufp->chgCData(oldp+704,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[6]),4);
        bufp->chgCData(oldp+705,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[7]),4);
        bufp->chgCData(oldp+706,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0]),4);
        bufp->chgCData(oldp+707,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1]),4);
        bufp->chgCData(oldp+708,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2]),4);
        bufp->chgCData(oldp+709,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3]),4);
        bufp->chgCData(oldp+710,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4]),4);
        bufp->chgCData(oldp+711,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5]),4);
        bufp->chgCData(oldp+712,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6]),4);
        bufp->chgCData(oldp+713,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7]),4);
        bufp->chgCData(oldp+714,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[0]),4);
        bufp->chgCData(oldp+715,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[1]),4);
        bufp->chgCData(oldp+716,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[2]),4);
        bufp->chgCData(oldp+717,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[3]),4);
        bufp->chgCData(oldp+718,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[4]),4);
        bufp->chgCData(oldp+719,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[5]),4);
        bufp->chgCData(oldp+720,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[6]),4);
        bufp->chgCData(oldp+721,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[7]),4);
        bufp->chgCData(oldp+722,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0]),4);
        bufp->chgCData(oldp+723,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1]),4);
        bufp->chgCData(oldp+724,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2]),4);
        bufp->chgCData(oldp+725,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3]),4);
        bufp->chgCData(oldp+726,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4]),4);
        bufp->chgCData(oldp+727,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5]),4);
        bufp->chgCData(oldp+728,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6]),4);
        bufp->chgCData(oldp+729,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7]),4);
        bufp->chgCData(oldp+730,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[0]),4);
        bufp->chgCData(oldp+731,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[1]),4);
        bufp->chgCData(oldp+732,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[2]),4);
        bufp->chgCData(oldp+733,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[3]),4);
        bufp->chgCData(oldp+734,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[4]),4);
        bufp->chgCData(oldp+735,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[5]),4);
        bufp->chgCData(oldp+736,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[6]),4);
        bufp->chgCData(oldp+737,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[7]),4);
        bufp->chgCData(oldp+738,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0]),4);
        bufp->chgCData(oldp+739,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1]),4);
        bufp->chgCData(oldp+740,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2]),4);
        bufp->chgCData(oldp+741,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3]),4);
        bufp->chgCData(oldp+742,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4]),4);
        bufp->chgCData(oldp+743,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5]),4);
        bufp->chgCData(oldp+744,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6]),4);
        bufp->chgCData(oldp+745,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7]),4);
        bufp->chgCData(oldp+746,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0]),4);
        bufp->chgCData(oldp+747,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1]),4);
        bufp->chgCData(oldp+748,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2]),4);
        bufp->chgCData(oldp+749,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3]),4);
        bufp->chgCData(oldp+750,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4]),4);
        bufp->chgCData(oldp+751,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5]),4);
        bufp->chgCData(oldp+752,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6]),4);
        bufp->chgCData(oldp+753,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7]),4);
        bufp->chgIData(oldp+754,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0]),24);
        bufp->chgIData(oldp+755,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1]),24);
        bufp->chgIData(oldp+756,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2]),24);
        bufp->chgIData(oldp+757,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3]),24);
        bufp->chgBit(oldp+758,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q));
        bufp->chgBit(oldp+759,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt));
        bufp->chgBit(oldp+760,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en));
        bufp->chgBit(oldp+761,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n));
        bufp->chgBit(oldp+762,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q));
        bufp->chgBit(oldp+763,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d));
        bufp->chgBit(oldp+764,(vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy));
        bufp->chgBit(oldp+765,(vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy));
        bufp->chgCData(oldp+766,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q),2);
        bufp->chgBit(oldp+767,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d));
        bufp->chgCData(oldp+768,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs),3);
        bufp->chgCData(oldp+769,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val),3);
        bufp->chgBit(oldp+770,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q));
        bufp->chgBit(oldp+771,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
        bufp->chgCData(oldp+772,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq),4);
        bufp->chgCData(oldp+773,(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate),5);
        bufp->chgQData(oldp+774,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store),40);
        bufp->chgCData(oldp+776,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat),4);
        bufp->chgCData(oldp+777,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index),6);
        bufp->chgCData(oldp+778,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored),6);
        bufp->chgCData(oldp+779,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index),6);
        bufp->chgCData(oldp+780,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig),6);
        bufp->chgCData(oldp+781,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[0]),6);
        bufp->chgCData(oldp+782,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value),6);
        bufp->chgBit(oldp+783,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat));
        bufp->chgCData(oldp+784,(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay),2);
        bufp->chgCData(oldp+785,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data),4);
        bufp->chgCData(oldp+786,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback),5);
        bufp->chgBit(oldp+787,(vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs));
        bufp->chgBit(oldp+788,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane));
        bufp->chgCData(oldp+789,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8),3);
        bufp->chgSData(oldp+790,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement),16);
        bufp->chgCData(oldp+791,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max),4);
        bufp->chgCData(oldp+792,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0]),4);
        bufp->chgCData(oldp+793,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0]),2);
        bufp->chgCData(oldp+794,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1]),2);
        bufp->chgCData(oldp+795,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2]),2);
        bufp->chgCData(oldp+796,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3]),2);
        bufp->chgCData(oldp+797,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4]),2);
        bufp->chgCData(oldp+798,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0]),2);
        bufp->chgCData(oldp+799,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1]),2);
        bufp->chgCData(oldp+800,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2]),2);
        bufp->chgCData(oldp+801,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3]),2);
        bufp->chgCData(oldp+802,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4]),2);
        bufp->chgBit(oldp+803,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe));
        bufp->chgBit(oldp+804,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data));
        bufp->chgSData(oldp+805,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0]),16);
        bufp->chgSData(oldp+806,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1]),16);
        bufp->chgQData(oldp+807,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0]),64);
        bufp->chgQData(oldp+809,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1]),64);
        bufp->chgCData(oldp+811,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0]),2);
        bufp->chgCData(oldp+812,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1]),2);
        bufp->chgCData(oldp+813,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2]),2);
        bufp->chgCData(oldp+814,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3]),2);
        bufp->chgCData(oldp+815,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4]),2);
        bufp->chgCData(oldp+816,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5]),2);
        bufp->chgCData(oldp+817,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6]),2);
        bufp->chgCData(oldp+818,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7]),2);
        bufp->chgCData(oldp+819,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8]),2);
        bufp->chgCData(oldp+820,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9]),2);
        bufp->chgCData(oldp+821,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[10]),2);
        bufp->chgCData(oldp+822,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[11]),2);
        bufp->chgCData(oldp+823,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[12]),2);
        bufp->chgCData(oldp+824,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[13]),2);
        bufp->chgCData(oldp+825,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[14]),2);
        bufp->chgCData(oldp+826,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[15]),2);
        bufp->chgBit(oldp+827,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb));
        bufp->chgBit(oldp+828,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux));
        bufp->chgBit(oldp+829,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we));
        bufp->chgSData(oldp+830,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col),10);
        bufp->chgQData(oldp+831,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data),64);
        bufp->chgBit(oldp+833,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt));
        bufp->chgBit(oldp+834,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs));
        bufp->chgBit(oldp+835,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq));
        bufp->chgBit(oldp+836,(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback));
        bufp->chgQData(oldp+837,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store),64);
        bufp->chgWData(oldp+839,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern),128);
        bufp->chgCData(oldp+843,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0]),7);
        bufp->chgCData(oldp+844,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0]),5);
        bufp->chgCData(oldp+845,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0]),5);
        bufp->chgCData(oldp+846,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0]),5);
        bufp->chgCData(oldp+847,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev),5);
        bufp->chgCData(oldp+848,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0]),5);
        bufp->chgCData(oldp+849,(vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat),6);
        bufp->chgBit(oldp+850,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback));
        bufp->chgCData(oldp+851,(vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check),6);
        bufp->chgQData(oldp+852,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data),64);
        bufp->chgBit(oldp+854,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated));
        bufp->chgBit(oldp+855,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb));
        bufp->chgBit(oldp+856,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update));
        bufp->chgBit(oldp+857,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we));
        bufp->chgCData(oldp+858,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr),7);
        bufp->chgIData(oldp+859,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data),32);
        bufp->chgCData(oldp+860,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel),4);
        bufp->chgCData(oldp+861,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein),5);
        bufp->chgCData(oldp+862,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein),5);
        bufp->chgCData(oldp+863,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein),5);
        bufp->chgCData(oldp+864,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein),5);
        bufp->chgBit(oldp+865,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld));
        bufp->chgBit(oldp+866,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld));
        bufp->chgBit(oldp+867,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld));
        bufp->chgBit(oldp+868,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld));
        bufp->chgBit(oldp+869,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_level_fail));
        bufp->chgBit(oldp+870,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane));
        bufp->chgBit(oldp+871,(vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst));
        bufp->chgIData(oldp+872,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2),32);
        bufp->chgBit(oldp+873,((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                [0U])));
        bufp->chgBit(oldp+874,(vlSelf->main__DOT__genbus__DOT__soft_reset));
        bufp->chgBit(oldp+875,(vlSelf->main__DOT__genbus__DOT__rx_valid));
        bufp->chgCData(oldp+876,((0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))),8);
        bufp->chgBit(oldp+877,(vlSelf->main__DOT__genbus__DOT__in_stb));
        bufp->chgBit(oldp+878,(((IData)(vlSelf->main__DOT__genbus__DOT__rx_valid) 
                                | ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                     | (IData)(vlSelf->main__DOT__genbus__DOT__in_stb)) 
                                    | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
                                   | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))))));
        bufp->chgQData(oldp+879,(vlSelf->main__DOT__genbus__DOT__in_word),36);
        bufp->chgBit(oldp+881,(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
        bufp->chgCData(oldp+882,(vlSelf->main__DOT__genbus__DOT__wbu_tx_data),8);
        bufp->chgBit(oldp+883,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n));
        bufp->chgQData(oldp+884,(vlSelf->main__DOT__genbus__DOT__ififo_codword),36);
        bufp->chgBit(oldp+886,(vlSelf->main__DOT__genbus__DOT__exec_stb));
        bufp->chgQData(oldp+887,(vlSelf->main__DOT__genbus__DOT__exec_word),36);
        bufp->chgBit(oldp+889,(vlSelf->main__DOT__genbus__DOT__ofifo_rd));
        bufp->chgQData(oldp+890,(vlSelf->main__DOT__genbus__DOT__ofifo_codword),36);
        bufp->chgBit(oldp+892,((((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
                                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)) 
                                    & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow))) 
                                | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))));
        bufp->chgBit(oldp+893,(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
        bufp->chgBit(oldp+894,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy));
        bufp->chgIData(oldp+895,(vlSelf->main__DOT__genbus__DOT__r_wdt_timer),19);
        bufp->chgBit(oldp+896,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb))));
        bufp->chgBit(oldp+897,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb));
        bufp->chgBit(oldp+898,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active))));
        bufp->chgSData(oldp+899,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr),11);
        bufp->chgSData(oldp+900,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr),11);
        bufp->chgSData(oldp+901,((0x7ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)))),11);
        bufp->chgSData(oldp+902,((0x7ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr)))),11);
        bufp->chgBit(oldp+903,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow));
        bufp->chgBit(oldp+904,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow));
        bufp->chgBit(oldp+905,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))));
        bufp->chgBit(oldp+906,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write));
        bufp->chgBit(oldp+907,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read));
        bufp->chgBit(oldp+908,((((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)) 
                                    & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow))) 
                                | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)))));
        bufp->chgBit(oldp+909,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd));
        bufp->chgCData(oldp+910,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr),7);
        bufp->chgCData(oldp+911,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr),7);
        bufp->chgCData(oldp+912,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)))),7);
        bufp->chgCData(oldp+913,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr)))),7);
        bufp->chgBit(oldp+914,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow));
        bufp->chgBit(oldp+915,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow));
        bufp->chgBit(oldp+916,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)))));
        bufp->chgBit(oldp+917,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write));
        bufp->chgBit(oldp+918,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read));
        bufp->chgBit(oldp+919,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb));
        bufp->chgBit(oldp+920,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid));
        bufp->chgCData(oldp+921,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits),6);
        bufp->chgBit(oldp+922,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb));
        bufp->chgBit(oldp+923,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy));
        bufp->chgBit(oldp+924,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)))));
        bufp->chgQData(oldp+925,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word),36);
        bufp->chgBit(oldp+927,((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))));
        bufp->chgBit(oldp+928,(((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                                | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))));
        bufp->chgCData(oldp+929,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr),8);
        bufp->chgQData(oldp+930,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word),36);
        bufp->chgCData(oldp+932,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr),8);
        bufp->chgIData(oldp+933,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr),25);
        bufp->chgIData(oldp+934,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr),32);
        bufp->chgSData(oldp+935,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len),10);
        bufp->chgIData(oldp+936,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword),32);
        bufp->chgCData(oldp+937,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb),3);
        bufp->chgBit(oldp+938,((3U == (7U & (IData)(
                                                    (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                     >> 0x21U))))));
        bufp->chgCData(oldp+939,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len),3);
        bufp->chgCData(oldp+940,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len),3);
        bufp->chgCData(oldp+941,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw),2);
        bufp->chgBit(oldp+942,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb));
        bufp->chgQData(oldp+943,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg),36);
        bufp->chgIData(oldp+945,((((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                            >> 0x1fU)) 
                                   << 0x1eU) | (0x3fffffffU 
                                                & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)))),32);
        bufp->chgCData(oldp+946,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state),2);
        bufp->chgSData(oldp+947,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed),10);
        bufp->chgSData(oldp+948,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len),10);
        bufp->chgBit(oldp+949,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc));
        bufp->chgBit(oldp+950,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr));
        bufp->chgBit(oldp+951,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request));
        bufp->chgBit(oldp+952,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack));
        bufp->chgBit(oldp+953,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks));
        bufp->chgIData(oldp+954,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr),32);
        bufp->chgBit(oldp+955,(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy));
        bufp->chgBit(oldp+956,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
        bufp->chgBit(oldp+957,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb));
        bufp->chgBit(oldp+958,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
        bufp->chgBit(oldp+959,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy));
        bufp->chgBit(oldp+960,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy));
        bufp->chgBit(oldp+961,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy));
        bufp->chgBit(oldp+962,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
                                   | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)))));
        bufp->chgBit(oldp+963,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))));
        bufp->chgBit(oldp+964,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
                                | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy) 
                                   & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl)) 
                                      & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl))))));
        bufp->chgQData(oldp+965,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword),36);
        bufp->chgQData(oldp+967,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword),36);
        bufp->chgCData(oldp+969,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits),7);
        bufp->chgCData(oldp+970,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits),7);
        bufp->chgBit(oldp+971,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active));
        bufp->chgBit(oldp+972,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid));
        bufp->chgQData(oldp+973,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword),36);
        bufp->chgIData(oldp+975,((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)),32);
        bufp->chgCData(oldp+976,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck),4);
        bufp->chgBit(oldp+977,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
        bufp->chgBit(oldp+978,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))));
        bufp->chgQData(oldp+979,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word),36);
        bufp->chgSData(oldp+981,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr),10);
        bufp->chgBit(oldp+982,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled));
        bufp->chgSData(oldp+983,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr),10);
        bufp->chgBit(oldp+984,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch));
        bufp->chgBit(oldp+985,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch));
        bufp->chgBit(oldp+986,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr));
        bufp->chgIData(oldp+987,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword),32);
        bufp->chgSData(oldp+988,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr),10);
        bufp->chgBit(oldp+989,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched));
        bufp->chgBit(oldp+990,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch));
        bufp->chgBit(oldp+991,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch));
        bufp->chgSData(oldp+992,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld),10);
        bufp->chgCData(oldp+993,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd),3);
        bufp->chgSData(oldp+994,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr),10);
        bufp->chgBit(oldp+995,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table));
        bufp->chgBit(oldp+996,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table));
        bufp->chgBit(oldp+997,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match));
        bufp->chgBit(oldp+998,((1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld) 
                                      >> 9U))));
        bufp->chgBit(oldp+999,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy));
        bufp->chgBit(oldp+1000,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request));
        bufp->chgBit(oldp+1001,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent));
        bufp->chgBit(oldp+1002,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state)) 
                                 & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                                    >> 0x15U))));
        bufp->chgBit(oldp+1003,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state));
        bufp->chgIData(oldp+1004,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter),22);
        bufp->chgCData(oldp+1005,(((0U == (7U & (IData)(
                                                        (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                         >> 0x21U))))
                                    ? 1U : ((2U == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                         >> 0x20U))))
                                             ? 6U : 
                                            (7U & (
                                                   (3U 
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
        bufp->chgCData(oldp+1006,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len),3);
        bufp->chgIData(oldp+1007,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word),30);
        bufp->chgBit(oldp+1008,(((IData)(vlSelf->main__DOT__wbu_cyc) 
                                 | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                    | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy)))));
        bufp->chgBit(oldp+1009,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl));
        bufp->chgBit(oldp+1010,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl));
        bufp->chgBit(oldp+1011,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line));
        bufp->chgBit(oldp+1012,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy));
        bufp->chgCData(oldp+1013,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen),7);
        bufp->chgSData(oldp+1014,(vlSelf->main__DOT__gpioi__DOT__r_gpio),16);
        bufp->chgSData(oldp+1015,(vlSelf->main__DOT__gpioi__DOT__x_gpio),16);
        bufp->chgSData(oldp+1016,(vlSelf->main__DOT__gpioi__DOT__q_gpio),16);
        bufp->chgCData(oldp+1017,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                         >> 4U))),2);
        bufp->chgBit(oldp+1018,(vlSelf->main__DOT__i2ci__DOT__r_halted));
        bufp->chgBit(oldp+1019,(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc));
        bufp->chgIData(oldp+1020,(vlSelf->main__DOT__i2ci__DOT__pf_jump_addr),28);
        bufp->chgBit(oldp+1021,(vlSelf->main__DOT__i2ci__DOT__pf_valid));
        bufp->chgBit(oldp+1022,(vlSelf->main__DOT__i2ci__DOT__pf_ready));
        bufp->chgCData(oldp+1023,(vlSelf->main__DOT__i2ci__DOT__pf_insn),8);
        bufp->chgIData(oldp+1024,(vlSelf->main__DOT__i2ci__DOT__pf_insn_addr),28);
        bufp->chgBit(oldp+1025,(vlSelf->main__DOT__i2ci__DOT__pf_illegal));
        bufp->chgBit(oldp+1026,(vlSelf->main__DOT__i2ci__DOT__half_valid));
        bufp->chgBit(oldp+1027,(vlSelf->main__DOT__i2ci__DOT__imm_cycle));
        bufp->chgBit(oldp+1028,(vlSelf->main__DOT__i2ci__DOT__next_valid));
        bufp->chgCData(oldp+1029,(vlSelf->main__DOT__i2ci__DOT__next_insn),8);
        bufp->chgBit(oldp+1030,(vlSelf->main__DOT__i2ci__DOT__insn_ready));
        bufp->chgBit(oldp+1031,(vlSelf->main__DOT__i2ci__DOT__half_ready));
        bufp->chgBit(oldp+1032,(vlSelf->main__DOT__i2ci__DOT__i2c_abort));
        bufp->chgBit(oldp+1033,(vlSelf->main__DOT__i2ci__DOT__insn_valid));
        bufp->chgSData(oldp+1034,(vlSelf->main__DOT__i2ci__DOT__insn),12);
        bufp->chgCData(oldp+1035,(vlSelf->main__DOT__i2ci__DOT__half_insn),4);
        bufp->chgBit(oldp+1036,(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge));
        bufp->chgBit(oldp+1037,(vlSelf->main__DOT__i2ci__DOT__i2c_stretch));
        bufp->chgSData(oldp+1038,(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount),12);
        bufp->chgSData(oldp+1039,(vlSelf->main__DOT__i2ci__DOT__ckcount),12);
        bufp->chgIData(oldp+1040,(vlSelf->main__DOT__i2ci__DOT__abort_address),28);
        bufp->chgIData(oldp+1041,(vlSelf->main__DOT__i2ci__DOT__jump_target),28);
        bufp->chgBit(oldp+1042,(vlSelf->main__DOT__i2ci__DOT__r_wait));
        bufp->chgBit(oldp+1043,(vlSelf->main__DOT__i2ci__DOT__soft_halt_request));
        bufp->chgBit(oldp+1044,(vlSelf->main__DOT__i2ci__DOT__r_err));
        bufp->chgBit(oldp+1045,(vlSelf->main__DOT__i2ci__DOT__r_aborted));
        bufp->chgBit(oldp+1046,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual));
        bufp->chgBit(oldp+1047,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda));
        bufp->chgBit(oldp+1048,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl));
        bufp->chgBit(oldp+1049,(((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                                 | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
        bufp->chgBit(oldp+1050,(vlSelf->main__DOT__i2ci__DOT__w_sda));
        bufp->chgBit(oldp+1051,(vlSelf->main__DOT__i2ci__DOT__w_scl));
        bufp->chgBit(oldp+1052,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        >> 4U) & (~ 
                                                  ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                   >> 4U))))));
        bufp->chgBit(oldp+1053,(vlSelf->main__DOT__i2ci__DOT__bus_write));
        bufp->chgBit(oldp+1054,(vlSelf->main__DOT__i2ci__DOT__bus_override));
        bufp->chgBit(oldp+1055,(vlSelf->main__DOT__i2ci__DOT__bus_manual));
        bufp->chgBit(oldp+1056,(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
        bufp->chgBit(oldp+1057,(vlSelf->main__DOT__i2ci__DOT__bus_jump));
        bufp->chgBit(oldp+1058,(vlSelf->main__DOT__i2ci__DOT__s_tvalid));
        bufp->chgSData(oldp+1059,(vlSelf->main__DOT__i2ci__DOT__ovw_data),10);
        bufp->chgBit(oldp+1060,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl));
        bufp->chgBit(oldp+1061,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda));
        bufp->chgBit(oldp+1062,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt));
        bufp->chgCData(oldp+1063,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel),2);
        bufp->chgSData(oldp+1064,((0x7ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))),11);
        bufp->chgBit(oldp+1065,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte));
        bufp->chgBit(oldp+1066,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir));
        bufp->chgBit(oldp+1067,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack));
        bufp->chgCData(oldp+1068,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state),4);
        bufp->chgCData(oldp+1069,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits),3);
        bufp->chgCData(oldp+1070,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg),8);
        bufp->chgBit(oldp+1071,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl));
        bufp->chgBit(oldp+1072,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda));
        bufp->chgBit(oldp+1073,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl));
        bufp->chgBit(oldp+1074,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda));
        bufp->chgBit(oldp+1075,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl));
        bufp->chgBit(oldp+1076,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda));
        bufp->chgBit(oldp+1077,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit));
        bufp->chgBit(oldp+1078,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy));
        bufp->chgBit(oldp+1079,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb));
        bufp->chgBit(oldp+1080,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle));
        bufp->chgWData(oldp+1081,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word),512);
        bufp->chgBit(oldp+1097,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid));
        bufp->chgCData(oldp+1098,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight),2);
        bufp->chgBit(oldp+1099,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal));
        bufp->chgBit(oldp+1100,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid));
        bufp->chgWData(oldp+1101,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn),512);
        bufp->chgWData(oldp+1117,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted),512);
        bufp->chgCData(oldp+1133,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count),7);
        bufp->chgCData(oldp+1134,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift),6);
        bufp->chgBit(oldp+1135,((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])));
        bufp->chgBit(oldp+1136,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))));
        bufp->chgBit(oldp+1137,(vlSelf->main__DOT__i2cscopei__DOT__read_from_data));
        bufp->chgBit(oldp+1138,(vlSelf->main__DOT__i2cscopei__DOT__write_to_control));
        bufp->chgBit(oldp+1139,(vlSelf->main__DOT__i2cscopei__DOT__read_address));
        bufp->chgSData(oldp+1140,(vlSelf->main__DOT__i2cscopei__DOT__raddr),10);
        bufp->chgSData(oldp+1141,(vlSelf->main__DOT__i2cscopei__DOT__waddr),10);
        bufp->chgBit(oldp+1142,((1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1143,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                       >> 1U))));
        bufp->chgBit(oldp+1144,((1U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))));
        bufp->chgCData(oldp+1145,(vlSelf->main__DOT__i2cscopei__DOT__br_config),3);
        bufp->chgIData(oldp+1146,(vlSelf->main__DOT__i2cscopei__DOT__br_holdoff),20);
        bufp->chgIData(oldp+1147,(vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+1148,(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered));
        bufp->chgBit(oldp+1149,(vlSelf->main__DOT__i2cscopei__DOT__dr_primed));
        bufp->chgBit(oldp+1150,(vlSelf->main__DOT__i2cscopei__DOT__dw_trigger));
        bufp->chgBit(oldp+1151,(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped));
        bufp->chgCData(oldp+1152,(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+1153,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                       >> 4U))));
        bufp->chgIData(oldp+1154,(vlSelf->main__DOT__i2cscopei__DOT__ck_addr),31);
        bufp->chgIData(oldp+1155,(vlSelf->main__DOT__i2cscopei__DOT__qd_data),31);
        bufp->chgBit(oldp+1156,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write));
        bufp->chgBit(oldp+1157,(vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout));
        bufp->chgBit(oldp+1158,(vlSelf->main__DOT__i2cscopei__DOT__new_data));
        bufp->chgBit(oldp+1159,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+1160,(vlSelf->main__DOT__i2cscopei__DOT__imm_adr));
        bufp->chgBit(oldp+1161,(vlSelf->main__DOT__i2cscopei__DOT__lst_adr));
        bufp->chgIData(oldp+1162,(vlSelf->main__DOT__i2cscopei__DOT__lst_val),31);
        bufp->chgIData(oldp+1163,(vlSelf->main__DOT__i2cscopei__DOT__imm_val),31);
        bufp->chgBit(oldp+1164,(vlSelf->main__DOT__i2cscopei__DOT__record_ce));
        bufp->chgIData(oldp+1165,(vlSelf->main__DOT__i2cscopei__DOT__r_data),32);
        bufp->chgBit(oldp+1166,(vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+1167,(vlSelf->main__DOT__i2cscopei__DOT__this_addr),10);
        bufp->chgIData(oldp+1168,(vlSelf->main__DOT__i2cscopei__DOT__nxt_mem),32);
        bufp->chgBit(oldp+1169,(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt));
        bufp->chgCData(oldp+1170,(vlSelf->main__DOT__rcv__DOT__state),4);
        bufp->chgCData(oldp+1171,(vlSelf->main__DOT__rcv__DOT__baud_counter),7);
        bufp->chgBit(oldp+1172,(vlSelf->main__DOT__rcv__DOT__zero_baud_counter));
        bufp->chgBit(oldp+1173,(vlSelf->main__DOT__rcv__DOT__q_uart));
        bufp->chgBit(oldp+1174,(vlSelf->main__DOT__rcv__DOT__qq_uart));
        bufp->chgBit(oldp+1175,(vlSelf->main__DOT__rcv__DOT__ck_uart));
        bufp->chgCData(oldp+1176,(vlSelf->main__DOT__rcv__DOT__chg_counter),7);
        bufp->chgBit(oldp+1177,(vlSelf->main__DOT__rcv__DOT__half_baud_time));
        bufp->chgCData(oldp+1178,(vlSelf->main__DOT__rcv__DOT__data_reg),8);
        bufp->chgBit(oldp+1179,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1180,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                       >> 1U))));
        bufp->chgBit(oldp+1181,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data));
        bufp->chgBit(oldp+1182,(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control));
        bufp->chgBit(oldp+1183,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_address));
        bufp->chgSData(oldp+1184,(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr),10);
        bufp->chgSData(oldp+1185,(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr),10);
        bufp->chgBit(oldp+1186,((1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1187,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                       >> 1U))));
        bufp->chgBit(oldp+1188,((1U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))));
        bufp->chgCData(oldp+1189,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config),3);
        bufp->chgIData(oldp+1190,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff),20);
        bufp->chgIData(oldp+1191,(vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+1192,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered));
        bufp->chgBit(oldp+1193,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed));
        bufp->chgBit(oldp+1194,(vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger));
        bufp->chgBit(oldp+1195,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped));
        bufp->chgCData(oldp+1196,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+1197,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                       >> 4U))));
        bufp->chgIData(oldp+1198,(vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr),31);
        bufp->chgIData(oldp+1199,(vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data),31);
        bufp->chgBit(oldp+1200,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write));
        bufp->chgBit(oldp+1201,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout));
        bufp->chgBit(oldp+1202,(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data));
        bufp->chgBit(oldp+1203,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+1204,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr));
        bufp->chgBit(oldp+1205,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr));
        bufp->chgIData(oldp+1206,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val),31);
        bufp->chgIData(oldp+1207,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val),31);
        bufp->chgBit(oldp+1208,(vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce));
        bufp->chgIData(oldp+1209,(vlSelf->main__DOT__scope1_ddr3i__DOT__r_data),32);
        bufp->chgBit(oldp+1210,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+1211,(vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr),10);
        bufp->chgIData(oldp+1212,(vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem),32);
        bufp->chgBit(oldp+1213,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt));
        bufp->chgBit(oldp+1214,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1215,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                       >> 2U))));
        bufp->chgBit(oldp+1216,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data));
        bufp->chgBit(oldp+1217,(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control));
        bufp->chgBit(oldp+1218,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_address));
        bufp->chgSData(oldp+1219,(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr),10);
        bufp->chgSData(oldp+1220,(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr),10);
        bufp->chgBit(oldp+1221,((1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1222,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                       >> 1U))));
        bufp->chgBit(oldp+1223,((1U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))));
        bufp->chgCData(oldp+1224,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config),3);
        bufp->chgIData(oldp+1225,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff),20);
        bufp->chgIData(oldp+1226,(vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+1227,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered));
        bufp->chgBit(oldp+1228,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed));
        bufp->chgBit(oldp+1229,(vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger));
        bufp->chgBit(oldp+1230,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped));
        bufp->chgCData(oldp+1231,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+1232,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                       >> 4U))));
        bufp->chgIData(oldp+1233,(vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr),31);
        bufp->chgIData(oldp+1234,(vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data),31);
        bufp->chgBit(oldp+1235,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write));
        bufp->chgBit(oldp+1236,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout));
        bufp->chgBit(oldp+1237,(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data));
        bufp->chgBit(oldp+1238,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+1239,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr));
        bufp->chgBit(oldp+1240,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr));
        bufp->chgIData(oldp+1241,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val),31);
        bufp->chgIData(oldp+1242,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val),31);
        bufp->chgBit(oldp+1243,(vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce));
        bufp->chgIData(oldp+1244,(vlSelf->main__DOT__scope2_ddr3i__DOT__r_data),32);
        bufp->chgBit(oldp+1245,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+1246,(vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr),10);
        bufp->chgIData(oldp+1247,(vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem),32);
        bufp->chgBit(oldp+1248,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt));
        bufp->chgBit(oldp+1249,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1250,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                       >> 3U))));
        bufp->chgBit(oldp+1251,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data));
        bufp->chgBit(oldp+1252,(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control));
        bufp->chgBit(oldp+1253,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_address));
        bufp->chgSData(oldp+1254,(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr),10);
        bufp->chgSData(oldp+1255,(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr),10);
        bufp->chgBit(oldp+1256,((1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1257,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                       >> 1U))));
        bufp->chgBit(oldp+1258,((1U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))));
        bufp->chgCData(oldp+1259,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config),3);
        bufp->chgIData(oldp+1260,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff),20);
        bufp->chgIData(oldp+1261,(vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+1262,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered));
        bufp->chgBit(oldp+1263,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed));
        bufp->chgBit(oldp+1264,(vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger));
        bufp->chgBit(oldp+1265,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped));
        bufp->chgCData(oldp+1266,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+1267,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                       >> 4U))));
        bufp->chgIData(oldp+1268,(vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr),31);
        bufp->chgIData(oldp+1269,(vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data),31);
        bufp->chgBit(oldp+1270,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write));
        bufp->chgBit(oldp+1271,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout));
        bufp->chgBit(oldp+1272,(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data));
        bufp->chgBit(oldp+1273,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+1274,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr));
        bufp->chgBit(oldp+1275,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr));
        bufp->chgIData(oldp+1276,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val),31);
        bufp->chgIData(oldp+1277,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val),31);
        bufp->chgBit(oldp+1278,(vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce));
        bufp->chgIData(oldp+1279,(vlSelf->main__DOT__scope3_ddr3i__DOT__r_data),32);
        bufp->chgBit(oldp+1280,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+1281,(vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr),10);
        bufp->chgIData(oldp+1282,(vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem),32);
        bufp->chgBit(oldp+1283,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt));
        bufp->chgBit(oldp+1284,(vlSelf->main__DOT__spioi__DOT__led_demo));
        bufp->chgCData(oldp+1285,(vlSelf->main__DOT__spioi__DOT__r_led),8);
        bufp->chgCData(oldp+1286,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),8);
        bufp->chgCData(oldp+1287,(vlSelf->main__DOT__spioi__DOT__bounced),8);
        bufp->chgCData(oldp+1288,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw),8);
        bufp->chgBit(oldp+1289,(vlSelf->main__DOT__spioi__DOT__sw_int));
        bufp->chgBit(oldp+1290,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int));
        bufp->chgCData(oldp+1291,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn),5);
        bufp->chgCData(oldp+1292,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn),5);
        bufp->chgCData(oldp+1293,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),5);
        bufp->chgSData(oldp+1294,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe),10);
        bufp->chgBit(oldp+1295,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int));
        bufp->chgSData(oldp+1296,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe),16);
        bufp->chgCData(oldp+1297,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner),8);
        bufp->chgBit(oldp+1298,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir));
        bufp->chgIData(oldp+1299,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr),25);
        bufp->chgBit(oldp+1300,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk));
        bufp->chgCData(oldp+1301,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr),5);
        bufp->chgCData(oldp+1302,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness),5);
        bufp->chgCData(oldp+1303,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness),5);
        bufp->chgCData(oldp+1304,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness),5);
        bufp->chgCData(oldp+1305,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness),5);
        bufp->chgCData(oldp+1306,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness),5);
        bufp->chgCData(oldp+1307,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness),5);
        bufp->chgCData(oldp+1308,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness),5);
        bufp->chgCData(oldp+1309,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness),5);
        bufp->chgSData(oldp+1310,(vlSelf->main__DOT__swic__DOT__main_int_vector),15);
        bufp->chgSData(oldp+1311,(vlSelf->main__DOT__swic__DOT__alt_int_vector),15);
        bufp->chgBit(oldp+1312,(vlSelf->main__DOT__swic__DOT__ctri_int));
        bufp->chgBit(oldp+1313,(vlSelf->main__DOT__swic__DOT__tma_int));
        bufp->chgBit(oldp+1314,(vlSelf->main__DOT__swic__DOT__tmb_int));
        bufp->chgBit(oldp+1315,(vlSelf->main__DOT__swic__DOT__tmc_int));
        bufp->chgBit(oldp+1316,(vlSelf->main__DOT__swic__DOT__jif_int));
        bufp->chgBit(oldp+1317,(vlSelf->main__DOT__swic__DOT__dmac_int));
        bufp->chgBit(oldp+1318,(vlSelf->main__DOT__swic__DOT__mtc_int));
        bufp->chgBit(oldp+1319,(vlSelf->main__DOT__swic__DOT__moc_int));
        bufp->chgBit(oldp+1320,(vlSelf->main__DOT__swic__DOT__mpc_int));
        bufp->chgBit(oldp+1321,(vlSelf->main__DOT__swic__DOT__mic_int));
        bufp->chgBit(oldp+1322,(vlSelf->main__DOT__swic__DOT__utc_int));
        bufp->chgBit(oldp+1323,(vlSelf->main__DOT__swic__DOT__uoc_int));
        bufp->chgBit(oldp+1324,(vlSelf->main__DOT__swic__DOT__upc_int));
        bufp->chgBit(oldp+1325,(vlSelf->main__DOT__swic__DOT__uic_int));
        bufp->chgIData(oldp+1326,(((4U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
        bufp->chgBit(oldp+1327,(vlSelf->main__DOT__swic__DOT__actr_ack));
        bufp->chgBit(oldp+1328,(((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                                 | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_read) 
                                    | ((~ ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                           >> 6U)) 
                                       & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb))))));
        bufp->chgBit(oldp+1329,(vlSelf->main__DOT__swic__DOT__sys_cyc));
        bufp->chgBit(oldp+1330,(vlSelf->main__DOT__swic__DOT__sys_stb));
        bufp->chgBit(oldp+1331,(vlSelf->main__DOT__swic__DOT__sys_we));
        bufp->chgCData(oldp+1332,(vlSelf->main__DOT__swic__DOT__sys_addr),8);
        bufp->chgIData(oldp+1333,(vlSelf->main__DOT__swic__DOT__sys_data),32);
        bufp->chgIData(oldp+1334,(vlSelf->main__DOT__swic__DOT__cpu_addr),22);
        bufp->chgIData(oldp+1335,(vlSelf->main__DOT__swic__DOT__sys_idata),32);
        bufp->chgBit(oldp+1336,(vlSelf->main__DOT__swic__DOT__sys_ack));
        bufp->chgBit(oldp+1337,(vlSelf->main__DOT__swic__DOT__sel_timer));
        bufp->chgBit(oldp+1338,(vlSelf->main__DOT__swic__DOT__sel_pic));
        bufp->chgBit(oldp+1339,(vlSelf->main__DOT__swic__DOT__sel_apic));
        bufp->chgBit(oldp+1340,(vlSelf->main__DOT__swic__DOT__sel_watchdog));
        bufp->chgBit(oldp+1341,(vlSelf->main__DOT__swic__DOT__sel_bus_watchdog));
        bufp->chgBit(oldp+1342,(vlSelf->main__DOT__swic__DOT__sel_dmac));
        bufp->chgBit(oldp+1343,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                                    >> 7U))));
        bufp->chgBit(oldp+1344,(vlSelf->main__DOT__swic__DOT__dbg_cyc));
        bufp->chgBit(oldp+1345,(vlSelf->main__DOT__swic__DOT__dbg_stb));
        bufp->chgBit(oldp+1346,(vlSelf->main__DOT__swic__DOT__dbg_we));
        bufp->chgCData(oldp+1347,(vlSelf->main__DOT__swic__DOT__dbg_addr),7);
        bufp->chgIData(oldp+1348,(vlSelf->main__DOT__swic__DOT__dbg_idata),32);
        bufp->chgBit(oldp+1349,(vlSelf->main__DOT__swic__DOT__dbg_ack));
        bufp->chgBit(oldp+1350,(vlSelf->main__DOT__swic__DOT__dbg_stall));
        bufp->chgIData(oldp+1351,(vlSelf->main__DOT__swic__DOT__dbg_odata),32);
        bufp->chgCData(oldp+1352,(vlSelf->main__DOT__swic__DOT__dbg_sel),4);
        bufp->chgBit(oldp+1353,(vlSelf->main__DOT__swic__DOT__no_dbg_err));
        bufp->chgBit(oldp+1354,(vlSelf->main__DOT__swic__DOT__cpu_break));
        bufp->chgBit(oldp+1355,(vlSelf->main__DOT__swic__DOT__dbg_cmd_write));
        bufp->chgBit(oldp+1356,(vlSelf->main__DOT__swic__DOT__dbg_cpu_write));
        bufp->chgBit(oldp+1357,(vlSelf->main__DOT__swic__DOT__dbg_cpu_read));
        bufp->chgBit(oldp+1358,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold));
        bufp->chgBit(oldp+1359,(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch));
        bufp->chgBit(oldp+1360,(vlSelf->main__DOT__swic__DOT__reset_request));
        bufp->chgBit(oldp+1361,(((~ vlSelf->main__DOT__swic__DOT__dbg_idata) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0))));
        bufp->chgBit(oldp+1362,(vlSelf->main__DOT__swic__DOT__halt_request));
        bufp->chgBit(oldp+1363,(vlSelf->main__DOT__swic__DOT__step_request));
        bufp->chgBit(oldp+1364,(vlSelf->main__DOT__swic__DOT__clear_cache_request));
        bufp->chgBit(oldp+1365,(vlSelf->main__DOT__swic__DOT__cmd_reset));
        bufp->chgBit(oldp+1366,(vlSelf->main__DOT__swic__DOT__cmd_halt));
        bufp->chgBit(oldp+1367,(vlSelf->main__DOT__swic__DOT__cmd_step));
        bufp->chgBit(oldp+1368,(vlSelf->main__DOT__swic__DOT__cmd_clear_cache));
        bufp->chgBit(oldp+1369,(vlSelf->main__DOT__swic__DOT__cmd_write));
        bufp->chgBit(oldp+1370,(vlSelf->main__DOT__swic__DOT__cmd_read));
        bufp->chgCData(oldp+1371,(vlSelf->main__DOT__swic__DOT__cmd_waddr),5);
        bufp->chgIData(oldp+1372,(vlSelf->main__DOT__swic__DOT__cmd_wdata),32);
        bufp->chgCData(oldp+1373,(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc),3);
        bufp->chgBit(oldp+1374,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))));
        bufp->chgBit(oldp+1375,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall));
        bufp->chgIData(oldp+1376,(((((IData)(vlSelf->main__DOT__gpio_int) 
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
        bufp->chgBit(oldp+1377,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                       >> 1U))));
        bufp->chgBit(oldp+1378,(vlSelf->main__DOT__swic__DOT__wdt_ack));
        bufp->chgBit(oldp+1379,(vlSelf->main__DOT__swic__DOT__wdt_reset));
        bufp->chgIData(oldp+1380,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),32);
        bufp->chgBit(oldp+1381,(vlSelf->main__DOT__swic__DOT__wdbus_ack));
        bufp->chgIData(oldp+1382,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),22);
        bufp->chgIData(oldp+1383,(vlSelf->main__DOT__swic__DOT__pic_data),32);
        bufp->chgIData(oldp+1384,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),32);
        bufp->chgBit(oldp+1385,((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                                       | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                          | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                             >> 2U))))));
        bufp->chgBit(oldp+1386,(vlSelf->main__DOT__swic__DOT__wdbus_int));
        bufp->chgBit(oldp+1387,(vlSelf->main__DOT__swic__DOT__cpu_pf_stall));
        bufp->chgBit(oldp+1388,(vlSelf->main__DOT__swic__DOT__cpu_i_count));
        bufp->chgBit(oldp+1389,(vlSelf->main__DOT__swic__DOT__dmac_stb));
        bufp->chgBit(oldp+1390,(vlSelf->main__DOT__swic__DOT__dc_err));
        bufp->chgIData(oldp+1391,(vlSelf->main__DOT__swic__DOT__dmac_data),32);
        bufp->chgBit(oldp+1392,(vlSelf->main__DOT__swic__DOT__dmac_ack));
        bufp->chgBit(oldp+1393,(vlSelf->main__DOT__swic__DOT__dc_cyc));
        bufp->chgBit(oldp+1394,(vlSelf->main__DOT__swic__DOT__dc_stb));
        bufp->chgBit(oldp+1395,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)))));
        bufp->chgBit(oldp+1396,(vlSelf->main__DOT__swic__DOT__dc_stall));
        bufp->chgBit(oldp+1397,(vlSelf->main__DOT__swic__DOT__dc_ack));
        bufp->chgIData(oldp+1398,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr
                                    : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr)),22);
        bufp->chgWData(oldp+1399,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data),512);
        bufp->chgQData(oldp+1415,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                    : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)),64);
        bufp->chgBit(oldp+1417,(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc));
        bufp->chgIData(oldp+1418,((((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
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
        bufp->chgBit(oldp+1419,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__sel_apic))));
        bufp->chgIData(oldp+1420,(vlSelf->main__DOT__swic__DOT__ctri_data),32);
        bufp->chgBit(oldp+1421,(vlSelf->main__DOT__swic__DOT__tma_ack));
        bufp->chgBit(oldp+1422,(vlSelf->main__DOT__swic__DOT__tmb_ack));
        bufp->chgBit(oldp+1423,(vlSelf->main__DOT__swic__DOT__tmc_ack));
        bufp->chgBit(oldp+1424,(vlSelf->main__DOT__swic__DOT__jif_ack));
        bufp->chgIData(oldp+1425,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                    << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)),32);
        bufp->chgIData(oldp+1426,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                    << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)),32);
        bufp->chgIData(oldp+1427,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                    << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value)),32);
        bufp->chgIData(oldp+1428,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter),32);
        bufp->chgBit(oldp+1429,(((IData)(vlSelf->main__DOT__swic__DOT__sys_cyc) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                    & (IData)(vlSelf->main__DOT__swic__DOT__sel_pic)))));
        bufp->chgBit(oldp+1430,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                  ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                                  : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb))));
        bufp->chgBit(oldp+1431,(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc));
        bufp->chgBit(oldp+1432,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl))));
        bufp->chgBit(oldp+1433,(vlSelf->main__DOT__swic__DOT__cpu_we));
        bufp->chgWData(oldp+1434,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data),512);
        bufp->chgQData(oldp+1450,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                    : 0xffffffffffffffffULL)),64);
        bufp->chgWData(oldp+1452,(vlSelf->main__DOT__swic__DOT__cpu_idata),512);
        bufp->chgBit(oldp+1468,(vlSelf->main__DOT__swic__DOT__cpu_stall));
        bufp->chgBit(oldp+1469,(vlSelf->main__DOT__swic__DOT__pic_interrupt));
        bufp->chgBit(oldp+1470,(vlSelf->main__DOT__swic__DOT__cpu_ack));
        bufp->chgBit(oldp+1471,(vlSelf->main__DOT__swic__DOT__cpu_err));
        bufp->chgIData(oldp+1472,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg),32);
        bufp->chgBit(oldp+1473,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                       | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1474,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                  >> 2U) & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
        bufp->chgBit(oldp+1475,(((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
        bufp->chgBit(oldp+1476,(vlSelf->main__DOT__swic__DOT__r_mmus_ack));
        bufp->chgBit(oldp+1477,(vlSelf->main__DOT__swic__DOT__ext_err));
        bufp->chgIData(oldp+1478,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
        bufp->chgCData(oldp+1479,(vlSelf->main__DOT__swic__DOT__w_ack_idx),3);
        bufp->chgCData(oldp+1480,(vlSelf->main__DOT__swic__DOT__ack_idx),3);
        bufp->chgBit(oldp+1481,(vlSelf->main__DOT__swic__DOT__last_sys_stb));
        bufp->chgBit(oldp+1482,(vlSelf->main__DOT__swic__DOT__cmd_read_ack));
        bufp->chgBit(oldp+1483,(vlSelf->main__DOT__swic__DOT__dbg_pre_ack));
        bufp->chgCData(oldp+1484,(vlSelf->main__DOT__swic__DOT__dbg_pre_addr),2);
        bufp->chgIData(oldp+1485,(vlSelf->main__DOT__swic__DOT__dbg_cpu_status),32);
        bufp->chgBit(oldp+1486,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack));
        bufp->chgBit(oldp+1487,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack));
        bufp->chgBit(oldp+1488,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack));
        bufp->chgBit(oldp+1489,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack));
        bufp->chgBit(oldp+1490,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack));
        bufp->chgBit(oldp+1491,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack));
        bufp->chgBit(oldp+1492,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack));
        bufp->chgBit(oldp+1493,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack));
        bufp->chgIData(oldp+1494,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data),32);
        bufp->chgIData(oldp+1495,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data),32);
        bufp->chgIData(oldp+1496,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data),32);
        bufp->chgIData(oldp+1497,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data),32);
        bufp->chgIData(oldp+1498,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data),32);
        bufp->chgIData(oldp+1499,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data),32);
        bufp->chgIData(oldp+1500,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data),32);
        bufp->chgIData(oldp+1501,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data),32);
        bufp->chgBit(oldp+1502,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5));
        bufp->chgBit(oldp+1503,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1504,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1505,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))));
        bufp->chgBit(oldp+1506,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5));
        bufp->chgBit(oldp+1507,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_i_count) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                    >> 1U))));
        bufp->chgBit(oldp+1508,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5));
        bufp->chgBit(oldp+1509,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1510,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_pf_stall) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                    >> 1U))));
        bufp->chgBit(oldp+1511,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1512,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                                       & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1513,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5));
        bufp->chgBit(oldp+1514,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we));
        bufp->chgCData(oldp+1515,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr),7);
        bufp->chgIData(oldp+1516,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data),32);
        bufp->chgCData(oldp+1517,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel),4);
        bufp->chgCData(oldp+1518,((3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))),2);
        bufp->chgBit(oldp+1519,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request));
        bufp->chgBit(oldp+1520,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort));
        bufp->chgBit(oldp+1521,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy));
        bufp->chgBit(oldp+1522,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err));
        bufp->chgIData(oldp+1523,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src),28);
        bufp->chgIData(oldp+1524,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst),28);
        bufp->chgIData(oldp+1525,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                                   << 6U)),28);
        bufp->chgIData(oldp+1526,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                                   << 6U)),28);
        bufp->chgIData(oldp+1527,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length),28);
        bufp->chgIData(oldp+1528,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length),28);
        bufp->chgSData(oldp+1529,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen),11);
        bufp->chgBit(oldp+1530,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger));
        bufp->chgBit(oldp+1531,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request));
        bufp->chgBit(oldp+1532,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request));
        bufp->chgBit(oldp+1533,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy));
        bufp->chgBit(oldp+1534,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy));
        bufp->chgBit(oldp+1535,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err));
        bufp->chgBit(oldp+1536,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err));
        bufp->chgBit(oldp+1537,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc));
        bufp->chgBit(oldp+1538,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc));
        bufp->chgCData(oldp+1539,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size),2);
        bufp->chgCData(oldp+1540,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size),2);
        bufp->chgIData(oldp+1541,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr),28);
        bufp->chgIData(oldp+1542,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr),28);
        bufp->chgSData(oldp+1543,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen),11);
        bufp->chgBit(oldp+1544,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc));
        bufp->chgBit(oldp+1545,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb));
        bufp->chgBit(oldp+1546,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall));
        bufp->chgBit(oldp+1547,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack));
        bufp->chgBit(oldp+1548,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err));
        bufp->chgIData(oldp+1549,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr),22);
        bufp->chgQData(oldp+1550,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel),64);
        bufp->chgBit(oldp+1552,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid));
        bufp->chgBit(oldp+1553,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready));
        bufp->chgBit(oldp+1554,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last));
        bufp->chgWData(oldp+1555,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg),512);
        bufp->chgCData(oldp+1571,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes),7);
        bufp->chgBit(oldp+1572,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
        bufp->chgBit(oldp+1573,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))));
        bufp->chgBit(oldp+1574,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last));
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
        bufp->chgWData(oldp+1575,(__Vtemp_hd1e4c677__0),512);
        bufp->chgCData(oldp+1591,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes),7);
        bufp->chgBit(oldp+1592,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)))));
        bufp->chgBit(oldp+1593,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
        bufp->chgBit(oldp+1594,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
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
        bufp->chgWData(oldp+1595,(__Vtemp_h6ddae8d1__0),512);
        bufp->chgCData(oldp+1611,((0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])),7);
        bufp->chgBit(oldp+1612,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full));
        bufp->chgBit(oldp+1613,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty));
        bufp->chgCData(oldp+1614,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill),5);
        bufp->chgBit(oldp+1615,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid));
        bufp->chgBit(oldp+1616,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready));
        bufp->chgBit(oldp+1617,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last));
        bufp->chgWData(oldp+1618,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg),512);
        bufp->chgCData(oldp+1634,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes),7);
        bufp->chgBit(oldp+1635,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc));
        bufp->chgBit(oldp+1636,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb));
        bufp->chgBit(oldp+1637,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall));
        bufp->chgBit(oldp+1638,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack));
        bufp->chgBit(oldp+1639,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err));
        bufp->chgIData(oldp+1640,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr),22);
        bufp->chgQData(oldp+1641,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel),64);
        bufp->chgBit(oldp+1643,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
        bufp->chgBit(oldp+1644,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner));
        bufp->chgBit(oldp+1645,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger));
        bufp->chgBit(oldp+1646,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err));
        bufp->chgBit(oldp+1647,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len));
        bufp->chgBit(oldp+1648,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy));
        bufp->chgCData(oldp+1649,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel),5);
        bufp->chgIData(oldp+1650,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src),32);
        bufp->chgIData(oldp+1651,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst),32);
        bufp->chgIData(oldp+1652,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len),32);
        bufp->chgIData(oldp+1653,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen),32);
        bufp->chgIData(oldp+1654,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg),32);
        bufp->chgCData(oldp+1655,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state),2);
        bufp->chgBit(oldp+1656,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset));
        bufp->chgCData(oldp+1657,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size),7);
        bufp->chgCData(oldp+1658,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size),7);
        bufp->chgCData(oldp+1659,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size),7);
        bufp->chgCData(oldp+1660,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size),7);
        bufp->chgIData(oldp+1661,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr),28);
        bufp->chgIData(oldp+1662,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr),28);
        bufp->chgCData(oldp+1663,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr),6);
        bufp->chgCData(oldp+1664,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr),6);
        bufp->chgQData(oldp+1665,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel),64);
        bufp->chgQData(oldp+1667,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
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
        bufp->chgQData(oldp+1669,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel),64);
        bufp->chgQData(oldp+1671,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
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
        bufp->chgSData(oldp+1673,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding),11);
        bufp->chgCData(oldp+1674,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill),8);
        bufp->chgCData(oldp+1675,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill),8);
        bufp->chgSData(oldp+1676,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len),11);
        bufp->chgSData(oldp+1677,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len),11);
        bufp->chgCData(oldp+1678,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift),6);
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
        bufp->chgWData(oldp+1679,(__Vtemp_h6d0d1506__0),512);
        bufp->chgBit(oldp+1695,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc));
        bufp->chgCData(oldp+1696,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size),2);
        bufp->chgWData(oldp+1697,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg),1024);
        bufp->chgCData(oldp+1729,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill),8);
        bufp->chgCData(oldp+1730,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill),8);
        bufp->chgBit(oldp+1731,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last));
        bufp->chgBit(oldp+1732,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last));
        bufp->chgBit(oldp+1733,((0x40U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill))));
        bufp->chgCData(oldp+1734,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift),6);
        bufp->chgWData(oldp+1735,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data),512);
        bufp->chgBit(oldp+1751,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc));
        bufp->chgCData(oldp+1752,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size),2);
        bufp->chgIData(oldp+1753,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr),29);
        bufp->chgCData(oldp+1754,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr),6);
        bufp->chgWData(oldp+1755,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data),1024);
        bufp->chgWData(oldp+1787,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data),512);
        bufp->chgWData(oldp+1803,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel),128);
        bufp->chgWData(oldp+1807,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel),128);
        bufp->chgQData(oldp+1811,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel),64);
        bufp->chgBit(oldp+1813,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last));
        bufp->chgSData(oldp+1814,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding),10);
        bufp->chgBit(oldp+1815,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full));
        bufp->chgBit(oldp+1816,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
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
        bufp->chgWData(oldp+1817,(__Vtemp_h6b3f223d__0),520);
        bufp->chgWData(oldp+1834,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data),520);
        bufp->chgWData(oldp+1851,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[0]),520);
        bufp->chgWData(oldp+1868,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[1]),520);
        bufp->chgWData(oldp+1885,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[2]),520);
        bufp->chgWData(oldp+1902,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[3]),520);
        bufp->chgWData(oldp+1919,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[4]),520);
        bufp->chgWData(oldp+1936,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[5]),520);
        bufp->chgWData(oldp+1953,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[6]),520);
        bufp->chgWData(oldp+1970,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[7]),520);
        bufp->chgWData(oldp+1987,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[8]),520);
        bufp->chgWData(oldp+2004,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[9]),520);
        bufp->chgWData(oldp+2021,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[10]),520);
        bufp->chgWData(oldp+2038,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[11]),520);
        bufp->chgWData(oldp+2055,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[12]),520);
        bufp->chgWData(oldp+2072,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[13]),520);
        bufp->chgWData(oldp+2089,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[14]),520);
        bufp->chgWData(oldp+2106,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[15]),520);
        bufp->chgCData(oldp+2123,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr),5);
        bufp->chgCData(oldp+2124,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr),5);
        bufp->chgBit(oldp+2125,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr));
        bufp->chgBit(oldp+2126,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd));
        bufp->chgBit(oldp+2127,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last));
        bufp->chgBit(oldp+2128,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next));
        bufp->chgCData(oldp+2129,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill),7);
        bufp->chgCData(oldp+2130,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter),5);
        bufp->chgSData(oldp+2131,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state),15);
        bufp->chgSData(oldp+2132,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable),15);
        bufp->chgBit(oldp+2133,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie));
        bufp->chgBit(oldp+2134,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any));
        bufp->chgBit(oldp+2135,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write));
        bufp->chgBit(oldp+2136,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints));
        bufp->chgBit(oldp+2137,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints));
        bufp->chgSData(oldp+2138,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state),15);
        bufp->chgSData(oldp+2139,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable),15);
        bufp->chgBit(oldp+2140,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie));
        bufp->chgBit(oldp+2141,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any));
        bufp->chgBit(oldp+2142,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write));
        bufp->chgBit(oldp+2143,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints));
        bufp->chgBit(oldp+2144,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints));
        bufp->chgBit(oldp+2145,(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner));
        bufp->chgCData(oldp+2146,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))),5);
        bufp->chgBit(oldp+2147,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc));
        bufp->chgBit(oldp+2148,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
        bufp->chgIData(oldp+2149,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address),28);
        bufp->chgIData(oldp+2150,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]),32);
        bufp->chgIData(oldp+2151,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc),28);
        bufp->chgBit(oldp+2152,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
        bufp->chgBit(oldp+2153,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
        bufp->chgBit(oldp+2154,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
        bufp->chgBit(oldp+2155,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
        bufp->chgBit(oldp+2156,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
        bufp->chgBit(oldp+2157,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
        bufp->chgBit(oldp+2158,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err));
        bufp->chgIData(oldp+2159,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr),22);
        bufp->chgBit(oldp+2160,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache));
        bufp->chgBit(oldp+2161,((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
        bufp->chgCData(oldp+2162,((7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),3);
        bufp->chgIData(oldp+2163,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr),32);
        bufp->chgIData(oldp+2164,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc),28);
        bufp->chgIData(oldp+2165,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata),32);
        bufp->chgCData(oldp+2166,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R),5);
        bufp->chgBit(oldp+2167,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
        bufp->chgBit(oldp+2168,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy));
        bufp->chgBit(oldp+2169,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled));
        bufp->chgBit(oldp+2170,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
        bufp->chgBit(oldp+2171,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err));
        bufp->chgCData(oldp+2172,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
        bufp->chgIData(oldp+2173,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
        bufp->chgBit(oldp+2174,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
        bufp->chgBit(oldp+2175,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
        bufp->chgBit(oldp+2176,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
        bufp->chgBit(oldp+2177,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl));
        bufp->chgIData(oldp+2178,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr),22);
        bufp->chgBit(oldp+2179,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
        bufp->chgBit(oldp+2180,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
        bufp->chgBit(oldp+2181,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
        bufp->chgBit(oldp+2182,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err));
        bufp->chgQData(oldp+2183,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel),64);
        bufp->chgIData(oldp+2185,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__ik),32);
        bufp->chgBit(oldp+2186,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc));
        bufp->chgBit(oldp+2187,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb));
        bufp->chgBit(oldp+2188,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack));
        bufp->chgBit(oldp+2189,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line));
        bufp->chgBit(oldp+2190,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb));
        bufp->chgBit(oldp+2191,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
        bufp->chgBit(oldp+2192,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
        bufp->chgCData(oldp+2193,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending),5);
        bufp->chgCData(oldp+2194,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v),8);
        bufp->chgIData(oldp+2195,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[0]),19);
        bufp->chgIData(oldp+2196,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[1]),19);
        bufp->chgIData(oldp+2197,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[2]),19);
        bufp->chgIData(oldp+2198,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[3]),19);
        bufp->chgIData(oldp+2199,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[4]),19);
        bufp->chgIData(oldp+2200,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[5]),19);
        bufp->chgIData(oldp+2201,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[6]),19);
        bufp->chgIData(oldp+2202,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[7]),19);
        bufp->chgBit(oldp+2203,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag));
        bufp->chgCData(oldp+2204,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state),2);
        bufp->chgCData(oldp+2205,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr),6);
        bufp->chgWData(oldp+2206,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword),512);
        bufp->chgWData(oldp+2222,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword),512);
        bufp->chgBit(oldp+2238,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl));
        bufp->chgBit(oldp+2239,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl));
        bufp->chgBit(oldp+2240,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr));
        bufp->chgWData(oldp+2241,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata),512);
        bufp->chgQData(oldp+2257,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel),64);
        bufp->chgCData(oldp+2259,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr),6);
        bufp->chgIData(oldp+2260,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag),19);
        bufp->chgBit(oldp+2261,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid));
        bufp->chgCData(oldp+2262,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 9U))),3);
        bufp->chgCData(oldp+2263,((0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                            >> 6U))),6);
        bufp->chgBit(oldp+2264,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow));
        bufp->chgBit(oldp+2265,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable));
        bufp->chgBit(oldp+2266,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address));
        bufp->chgBit(oldp+2267,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable));
        bufp->chgBit(oldp+2268,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid));
        bufp->chgBit(oldp+2269,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid));
        bufp->chgBit(oldp+2270,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd));
        bufp->chgBit(oldp+2271,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss));
        bufp->chgBit(oldp+2272,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending));
        bufp->chgIData(oldp+2273,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr),22);
        bufp->chgCData(oldp+2274,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                         >> 3U))),3);
        bufp->chgCData(oldp+2275,((0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)),6);
        bufp->chgIData(oldp+2276,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                               >> 3U))),19);
        bufp->chgBit(oldp+2277,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb));
        bufp->chgBit(oldp+2278,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv));
        bufp->chgBit(oldp+2279,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache));
        bufp->chgIData(oldp+2280,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag),19);
        bufp->chgSData(oldp+2281,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data),13);
        bufp->chgBit(oldp+2282,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie));
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
        bufp->chgWData(oldp+2283,(__Vtemp_h01ff8f7b__0),512);
        bufp->chgWData(oldp+2299,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted),512);
        bufp->chgCData(oldp+2315,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel),4);
        bufp->chgQData(oldp+2316,(((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                              >> 0x18U))
                                    ? ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                       >> (3U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                                    : (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                        << 0x3cU) >> 
                                       (0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),64);
        bufp->chgIData(oldp+2318,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift),32);
        bufp->chgWData(oldp+2319,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift),512);
        bufp->chgWData(oldp+2335,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data),512);
        bufp->chgSData(oldp+2351,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[0]),12);
        bufp->chgSData(oldp+2352,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[1]),12);
        bufp->chgSData(oldp+2353,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[2]),12);
        bufp->chgSData(oldp+2354,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[3]),12);
        bufp->chgSData(oldp+2355,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[4]),12);
        bufp->chgSData(oldp+2356,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[5]),12);
        bufp->chgSData(oldp+2357,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[6]),12);
        bufp->chgSData(oldp+2358,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[7]),12);
        bufp->chgSData(oldp+2359,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[8]),12);
        bufp->chgSData(oldp+2360,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[9]),12);
        bufp->chgSData(oldp+2361,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[10]),12);
        bufp->chgSData(oldp+2362,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[11]),12);
        bufp->chgSData(oldp+2363,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[12]),12);
        bufp->chgSData(oldp+2364,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[13]),12);
        bufp->chgSData(oldp+2365,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[14]),12);
        bufp->chgSData(oldp+2366,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[15]),12);
        bufp->chgCData(oldp+2367,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr),5);
        bufp->chgCData(oldp+2368,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr),5);
        bufp->chgIData(oldp+2369,((0xfffffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)),28);
        bufp->chgBit(oldp+2370,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v));
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
        bufp->chgWData(oldp+2371,(__Vtemp_he3c3974d__0),512);
        bufp->chgSData(oldp+2387,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[0]),16);
        bufp->chgSData(oldp+2388,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[1]),16);
        bufp->chgSData(oldp+2389,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[2]),16);
        bufp->chgSData(oldp+2390,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[3]),16);
        bufp->chgSData(oldp+2391,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[4]),16);
        bufp->chgSData(oldp+2392,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[5]),16);
        bufp->chgSData(oldp+2393,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[6]),16);
        bufp->chgSData(oldp+2394,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[7]),16);
        bufp->chgCData(oldp+2395,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask),8);
        bufp->chgBit(oldp+2396,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc));
        bufp->chgBit(oldp+2397,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
        bufp->chgBit(oldp+2398,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc));
        bufp->chgBit(oldp+2399,((((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
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
        bufp->chgBit(oldp+2400,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last));
        bufp->chgIData(oldp+2401,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc),28);
        bufp->chgCData(oldp+2402,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr),6);
        bufp->chgIData(oldp+2403,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup),19);
        bufp->chgIData(oldp+2404,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup),19);
        bufp->chgIData(oldp+2405,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup),19);
        bufp->chgIData(oldp+2406,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                               >> 9U))),19);
        bufp->chgIData(oldp+2407,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                               >> 9U))),19);
        bufp->chgBit(oldp+2408,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid));
        bufp->chgIData(oldp+2409,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache),19);
        bufp->chgWData(oldp+2410,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache),512);
        bufp->chgWData(oldp+2426,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache),512);
        bufp->chgBit(oldp+2442,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc));
        bufp->chgCData(oldp+2443,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay),2);
        bufp->chgBit(oldp+2444,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask));
        bufp->chgBit(oldp+2445,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack));
        bufp->chgBit(oldp+2446,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload));
        bufp->chgBit(oldp+2447,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr));
        bufp->chgBit(oldp+2448,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort));
        bufp->chgCData(oldp+2449,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr),3);
        bufp->chgBit(oldp+2450,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result));
        bufp->chgCData(oldp+2451,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                         >> 9U))),3);
        bufp->chgCData(oldp+2452,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                         >> 9U))),3);
        bufp->chgWData(oldp+2453,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted),512);
        bufp->chgCData(oldp+2469,((0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                           >> 2U))),4);
        bufp->chgBit(oldp+2470,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
        bufp->chgIData(oldp+2471,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[0]),32);
        bufp->chgIData(oldp+2472,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[1]),32);
        bufp->chgIData(oldp+2473,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[2]),32);
        bufp->chgIData(oldp+2474,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[3]),32);
        bufp->chgIData(oldp+2475,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[4]),32);
        bufp->chgIData(oldp+2476,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[5]),32);
        bufp->chgIData(oldp+2477,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[6]),32);
        bufp->chgIData(oldp+2478,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[7]),32);
        bufp->chgIData(oldp+2479,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[8]),32);
        bufp->chgIData(oldp+2480,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[9]),32);
        bufp->chgIData(oldp+2481,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[10]),32);
        bufp->chgIData(oldp+2482,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[11]),32);
        bufp->chgIData(oldp+2483,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[12]),32);
        bufp->chgIData(oldp+2484,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[13]),32);
        bufp->chgIData(oldp+2485,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[14]),32);
        bufp->chgIData(oldp+2486,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[15]),32);
        bufp->chgIData(oldp+2487,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[16]),32);
        bufp->chgIData(oldp+2488,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[17]),32);
        bufp->chgIData(oldp+2489,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[18]),32);
        bufp->chgIData(oldp+2490,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[19]),32);
        bufp->chgIData(oldp+2491,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[20]),32);
        bufp->chgIData(oldp+2492,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[21]),32);
        bufp->chgIData(oldp+2493,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[22]),32);
        bufp->chgIData(oldp+2494,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[23]),32);
        bufp->chgIData(oldp+2495,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[24]),32);
        bufp->chgIData(oldp+2496,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[25]),32);
        bufp->chgIData(oldp+2497,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[26]),32);
        bufp->chgIData(oldp+2498,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[27]),32);
        bufp->chgIData(oldp+2499,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[28]),32);
        bufp->chgIData(oldp+2500,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[29]),32);
        bufp->chgIData(oldp+2501,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[30]),32);
        bufp->chgIData(oldp+2502,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[31]),32);
        bufp->chgCData(oldp+2503,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags),4);
        bufp->chgCData(oldp+2504,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags),4);
        bufp->chgSData(oldp+2505,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags),16);
        bufp->chgSData(oldp+2506,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags),16);
        bufp->chgBit(oldp+2507,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en));
        bufp->chgBit(oldp+2508,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
        bufp->chgBit(oldp+2509,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep));
        bufp->chgBit(oldp+2510,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted));
        bufp->chgBit(oldp+2511,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending));
        bufp->chgBit(oldp+2512,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
        bufp->chgBit(oldp+2513,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie));
        bufp->chgBit(oldp+2514,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
        bufp->chgBit(oldp+2515,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt));
        bufp->chgBit(oldp+2516,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped));
        bufp->chgBit(oldp+2517,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step));
        bufp->chgBit(oldp+2518,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
        bufp->chgBit(oldp+2519,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i));
        bufp->chgBit(oldp+2520,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag));
        bufp->chgBit(oldp+2521,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
        bufp->chgBit(oldp+2522,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag));
        bufp->chgBit(oldp+2523,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag));
        bufp->chgBit(oldp+2524,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
        bufp->chgBit(oldp+2525,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
        bufp->chgBit(oldp+2526,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce));
        bufp->chgIData(oldp+2527,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc),28);
        bufp->chgBit(oldp+2528,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
        bufp->chgCData(oldp+2529,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn),4);
        bufp->chgBit(oldp+2530,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
        bufp->chgCData(oldp+2531,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))),5);
        bufp->chgCData(oldp+2532,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))),5);
        bufp->chgCData(oldp+2533,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R))),5);
        bufp->chgCData(oldp+2534,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA),5);
        bufp->chgCData(oldp+2535,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB),5);
        bufp->chgBit(oldp+2536,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                       >> 6U))));
        bufp->chgBit(oldp+2537,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                       >> 6U))));
        bufp->chgBit(oldp+2538,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                       >> 5U))));
        bufp->chgBit(oldp+2539,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                       >> 5U))));
        bufp->chgBit(oldp+2540,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                       >> 6U))));
        bufp->chgBit(oldp+2541,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                       >> 5U))));
        bufp->chgCData(oldp+2542,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F),4);
        bufp->chgBit(oldp+2543,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR));
        bufp->chgBit(oldp+2544,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA));
        bufp->chgBit(oldp+2545,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB));
        bufp->chgBit(oldp+2546,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU));
        bufp->chgBit(oldp+2547,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M));
        bufp->chgBit(oldp+2548,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV));
        bufp->chgBit(oldp+2549,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP));
        bufp->chgBit(oldp+2550,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF));
        bufp->chgBit(oldp+2551,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break));
        bufp->chgBit(oldp+2552,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock));
        bufp->chgBit(oldp+2553,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe));
        bufp->chgBit(oldp+2554,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp));
        bufp->chgBit(oldp+2555,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid));
        bufp->chgIData(oldp+2556,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I),32);
        bufp->chgBit(oldp+2557,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI));
        bufp->chgBit(oldp+2558,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal));
        bufp->chgBit(oldp+2559,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch));
        bufp->chgBit(oldp+2560,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb));
        bufp->chgIData(oldp+2561,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc),28);
        bufp->chgBit(oldp+2562,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall));
        bufp->chgBit(oldp+2563,((1U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
        bufp->chgBit(oldp+2564,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd));
        bufp->chgBit(oldp+2565,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write));
        bufp->chgBit(oldp+2566,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem));
        bufp->chgBit(oldp+2567,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
        bufp->chgBit(oldp+2568,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div));
        bufp->chgBit(oldp+2569,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu));
        bufp->chgCData(oldp+2570,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn),4);
        bufp->chgBit(oldp+2571,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc));
        bufp->chgCData(oldp+2572,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid),5);
        bufp->chgCData(oldp+2573,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid),5);
        bufp->chgBit(oldp+2574,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA));
        bufp->chgBit(oldp+2575,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB));
        bufp->chgIData(oldp+2576,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av),32);
        bufp->chgIData(oldp+2577,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv),32);
        bufp->chgIData(oldp+2578,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),28);
        bufp->chgIData(oldp+2579,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av),32);
        bufp->chgIData(oldp+2580,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv),32);
        bufp->chgIData(oldp+2581,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
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
        bufp->chgBit(oldp+2582,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR));
        bufp->chgBit(oldp+2583,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
        bufp->chgCData(oldp+2584,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                                    ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0)
                                    : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))),4);
        bufp->chgCData(oldp+2585,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F),7);
        bufp->chgCData(oldp+2586,(((0x80U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F) 
                                             << 4U)) 
                                   | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F))),8);
        bufp->chgBit(oldp+2587,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
        bufp->chgBit(oldp+2588,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe));
        bufp->chgBit(oldp+2589,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break));
        bufp->chgBit(oldp+2590,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
        bufp->chgBit(oldp+2591,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal));
        bufp->chgBit(oldp+2592,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock));
        bufp->chgIData(oldp+2593,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc),28);
        bufp->chgCData(oldp+2594,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg),5);
        bufp->chgBit(oldp+2595,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
        bufp->chgBit(oldp+2596,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid));
        bufp->chgBit(oldp+2597,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
        bufp->chgBit(oldp+2598,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
        bufp->chgIData(oldp+2599,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result),32);
        bufp->chgCData(oldp+2600,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
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
        bufp->chgBit(oldp+2601,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid));
        bufp->chgBit(oldp+2602,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy));
        bufp->chgBit(oldp+2603,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond));
        bufp->chgBit(oldp+2604,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR));
        bufp->chgBit(oldp+2605,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF));
        bufp->chgBit(oldp+2606,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal));
        bufp->chgBit(oldp+2607,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error));
        bufp->chgBit(oldp+2608,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy));
        bufp->chgBit(oldp+2609,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid));
        bufp->chgIData(oldp+2610,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result),32);
        bufp->chgCData(oldp+2611,(((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                          >> 0x1dU)) 
                                   | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
                                       << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z)))),4);
        bufp->chgBit(oldp+2612,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv));
        bufp->chgBit(oldp+2613,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe));
        bufp->chgIData(oldp+2614,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val),32);
        bufp->chgIData(oldp+2615,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc),32);
        bufp->chgBit(oldp+2616,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall));
        bufp->chgBit(oldp+2617,((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
        bufp->chgBit(oldp+2618,((0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
        bufp->chgBit(oldp+2619,((0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
        bufp->chgBit(oldp+2620,((0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
        bufp->chgBit(oldp+2621,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce));
        bufp->chgBit(oldp+2622,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce));
        bufp->chgCData(oldp+2623,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags),4);
        bufp->chgCData(oldp+2624,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index),3);
        bufp->chgCData(oldp+2625,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id),5);
        bufp->chgIData(oldp+2626,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl),32);
        bufp->chgIData(oldp+2627,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl),32);
        bufp->chgBit(oldp+2628,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt));
        bufp->chgBit(oldp+2629,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt));
        bufp->chgIData(oldp+2630,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc),28);
        bufp->chgIData(oldp+2631,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc),28);
        bufp->chgBit(oldp+2632,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc));
        bufp->chgBit(oldp+2633,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc))));
        bufp->chgCData(oldp+2634,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R),7);
        bufp->chgCData(oldp+2635,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A),7);
        bufp->chgCData(oldp+2636,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B),7);
        bufp->chgCData(oldp+2637,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc),2);
        bufp->chgBit(oldp+2638,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim));
        bufp->chgIData(oldp+2639,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv),23);
        bufp->chgCData(oldp+2640,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid),5);
        bufp->chgCData(oldp+2641,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock),2);
        bufp->chgBit(oldp+2642,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset));
        bufp->chgBit(oldp+2643,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
        bufp->chgBit(oldp+2644,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
        bufp->chgIData(oldp+2645,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
        bufp->chgQData(oldp+2646,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
        bufp->chgQData(oldp+2648,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
        bufp->chgBit(oldp+2650,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
        bufp->chgBit(oldp+2651,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
        bufp->chgBit(oldp+2652,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
        bufp->chgBit(oldp+2653,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
        bufp->chgBit(oldp+2654,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
        bufp->chgCData(oldp+2655,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
        bufp->chgBit(oldp+2656,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
        bufp->chgBit(oldp+2657,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2658,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
        bufp->chgBit(oldp+2659,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb));
        bufp->chgIData(oldp+2660,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr),28);
        bufp->chgIData(oldp+2661,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks),32);
        bufp->chgBit(oldp+2662,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim));
        bufp->chgIData(oldp+2663,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv),23);
        bufp->chgIData(oldp+2664,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                                  [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))]),32);
        bufp->chgIData(oldp+2665,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result),32);
        bufp->chgBit(oldp+2666,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)));
        bufp->chgBit(oldp+2667,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2668,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
        bufp->chgBit(oldp+2669,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
        bufp->chgBit(oldp+2670,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c));
        bufp->chgBit(oldp+2671,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign));
        bufp->chgBit(oldp+2672,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl));
        bufp->chgBit(oldp+2673,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl));
        bufp->chgQData(oldp+2674,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result),33);
        bufp->chgQData(oldp+2676,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result),33);
        bufp->chgQData(oldp+2678,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result),33);
        bufp->chgQData(oldp+2680,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result),64);
        bufp->chgBit(oldp+2682,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi));
        bufp->chgBit(oldp+2683,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe))));
        bufp->chgBit(oldp+2684,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                                       >> 1U))));
        bufp->chgQData(oldp+2685,(((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                   << 1U)),33);
        bufp->chgQData(oldp+2687,((0x1ffffffffULL & 
                                   VL_SHIFTRS_QQI(33,33,5, 
                                                  ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                   << 1U), 
                                                  (0x1fU 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),33);
        bufp->chgCData(oldp+2689,((3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),2);
        bufp->chgQData(oldp+2690,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result),64);
        bufp->chgQData(oldp+2692,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result),64);
        bufp->chgIData(oldp+2694,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input),32);
        bufp->chgIData(oldp+2695,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input),32);
        bufp->chgCData(oldp+2696,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe),2);
        bufp->chgCData(oldp+2697,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn),2);
        bufp->chgQData(oldp+2698,((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input)))),64);
        bufp->chgQData(oldp+2700,((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input)))),64);
        bufp->chgQData(oldp+2702,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input))),64);
        bufp->chgQData(oldp+2704,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input))),64);
        bufp->chgBit(oldp+2706,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset));
        bufp->chgCData(oldp+2707,((0x1fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                            >> 0x16U))),5);
        bufp->chgBit(oldp+2708,((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                  >> 1U)))));
        bufp->chgBit(oldp+2709,((0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2710,((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                >> 1U)))));
        bufp->chgBit(oldp+2711,((9U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2712,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU));
        bufp->chgBit(oldp+2713,((8U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2714,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
        bufp->chgBit(oldp+2715,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock));
        bufp->chgBit(oldp+2716,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 & (0x7800000U == (0x7c00000U 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
        bufp->chgBit(oldp+2717,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 & (0x7000000U == (0x7c00000U 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
        bufp->chgBit(oldp+2718,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special));
        bufp->chgBit(oldp+2719,((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2720,(((5U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U))) 
                                 | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))));
        bufp->chgBit(oldp+2721,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc));
        bufp->chgBit(oldp+2722,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc));
        bufp->chgBit(oldp+2723,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                                 & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
        bufp->chgBit(oldp+2724,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                                 & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
        bufp->chgCData(oldp+2725,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0)
                                    ? 8U : (((0U == 
                                              (7U & 
                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))) 
                                             << 3U) 
                                            | (7U & 
                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))))),4);
        bufp->chgBit(oldp+2726,(((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
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
        bufp->chgBit(oldp+2727,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem));
        bufp->chgBit(oldp+2728,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto));
        bufp->chgBit(oldp+2729,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div));
        bufp->chgBit(oldp+2730,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu));
        bufp->chgBit(oldp+2731,((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                          | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                             | (8U 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                    >> 1U)))))))));
        bufp->chgBit(oldp+2732,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                                 | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                     & ((8U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                        & (0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                                    | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                       | (8U == (0xfU 
                                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                    >> 1U))))))));
        bufp->chgBit(oldp+2733,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB));
        bufp->chgBit(oldp+2734,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                    | (8U == (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U)))))));
        bufp->chgBit(oldp+2735,((0x7c87c000U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
        bufp->chgBit(oldp+2736,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp));
        bufp->chgIData(oldp+2737,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword),32);
        bufp->chgBit(oldp+2738,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid));
        bufp->chgSData(oldp+2739,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half),15);
        bufp->chgCData(oldp+2740,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op),5);
        bufp->chgIData(oldp+2741,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I),23);
        bufp->chgIData(oldp+2742,((0x7fffffU & ((2U 
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
        bufp->chgIData(oldp+2743,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I),23);
        bufp->chgBit(oldp+2744,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I)));
        bufp->chgCData(oldp+2745,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc),2);
        bufp->chgBit(oldp+2746,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable));
        bufp->chgCData(oldp+2747,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
        bufp->chgCData(oldp+2748,((0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                            >> 0x10U))),8);
        bufp->chgBit(oldp+2749,(((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                                 & (IData)((0x78800000U 
                                            == (0xfffc0000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]))))));
        bufp->chgBit(oldp+2750,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb));
        bufp->chgBit(oldp+2751,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set));
        bufp->chgBit(oldp+2752,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set));
        bufp->chgBit(oldp+2753,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now));
        bufp->chgIData(oldp+2754,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when),32);
        bufp->chgIData(oldp+2755,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when),32);
        bufp->chgIData(oldp+2756,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb),32);
        bufp->chgIData(oldp+2757,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when),32);
        bufp->chgBit(oldp+2758,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb));
        bufp->chgBit(oldp+2759,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running));
        bufp->chgBit(oldp+2760,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero));
        bufp->chgIData(oldp+2761,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value),31);
        bufp->chgBit(oldp+2762,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write));
        bufp->chgBit(oldp+2763,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload));
        bufp->chgIData(oldp+2764,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count),31);
        bufp->chgBit(oldp+2765,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb));
        bufp->chgBit(oldp+2766,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running));
        bufp->chgBit(oldp+2767,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero));
        bufp->chgIData(oldp+2768,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value),31);
        bufp->chgBit(oldp+2769,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write));
        bufp->chgBit(oldp+2770,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload));
        bufp->chgIData(oldp+2771,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count),31);
        bufp->chgBit(oldp+2772,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb));
        bufp->chgBit(oldp+2773,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running));
        bufp->chgBit(oldp+2774,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero));
        bufp->chgIData(oldp+2775,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value),31);
        bufp->chgBit(oldp+2776,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write));
        bufp->chgBit(oldp+2777,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload));
        bufp->chgIData(oldp+2778,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count),31);
        bufp->chgBit(oldp+2779,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2));
        bufp->chgSData(oldp+2780,(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value),14);
        bufp->chgBit(oldp+2781,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb));
        bufp->chgBit(oldp+2782,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running));
        bufp->chgBit(oldp+2783,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero));
        bufp->chgIData(oldp+2784,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),31);
        bufp->chgBit(oldp+2785,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write));
        bufp->chgCData(oldp+2786,(vlSelf->main__DOT__txv__DOT__baud_counter),7);
        bufp->chgCData(oldp+2787,(vlSelf->main__DOT__txv__DOT__state),4);
        bufp->chgCData(oldp+2788,(vlSelf->main__DOT__txv__DOT__lcl_data),8);
        bufp->chgBit(oldp+2789,(vlSelf->main__DOT__txv__DOT__zero_baud_counter));
        bufp->chgCData(oldp+2790,((7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                         >> 0xfU))),3);
        bufp->chgSData(oldp+2791,(vlSelf->main__DOT__u_fan__DOT__pwm_counter),13);
        bufp->chgSData(oldp+2792,(vlSelf->main__DOT__u_fan__DOT__ctl_fpga),13);
        bufp->chgSData(oldp+2793,(vlSelf->main__DOT__u_fan__DOT__ctl_sys),13);
        bufp->chgBit(oldp+2794,(vlSelf->main__DOT__u_fan__DOT__ck_tach));
        bufp->chgBit(oldp+2795,(vlSelf->main__DOT__u_fan__DOT__last_tach));
        bufp->chgCData(oldp+2796,(vlSelf->main__DOT__u_fan__DOT__pipe_tach),2);
        bufp->chgBit(oldp+2797,(vlSelf->main__DOT__u_fan__DOT__tach_reset));
        bufp->chgIData(oldp+2798,(vlSelf->main__DOT__u_fan__DOT__tach_count),27);
        bufp->chgIData(oldp+2799,(vlSelf->main__DOT__u_fan__DOT__tach_counter),27);
        bufp->chgIData(oldp+2800,(vlSelf->main__DOT__u_fan__DOT__tach_timer),27);
        bufp->chgBit(oldp+2801,(vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack));
        bufp->chgIData(oldp+2802,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data),32);
        bufp->chgBit(oldp+2803,(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc));
        bufp->chgBit(oldp+2804,(vlSelf->main__DOT__u_fan__DOT__mem_stb));
        bufp->chgCData(oldp+2805,(vlSelf->main__DOT__u_fan__DOT__mem_addr),5);
        bufp->chgCData(oldp+2806,(vlSelf->main__DOT__u_fan__DOT__mem_data),8);
        bufp->chgBit(oldp+2807,(vlSelf->main__DOT__u_fan__DOT__mem_ack));
        bufp->chgBit(oldp+2808,(vlSelf->main__DOT__u_fan__DOT__i2cd_valid));
        bufp->chgBit(oldp+2809,(vlSelf->main__DOT__u_fan__DOT__i2cd_last));
        bufp->chgCData(oldp+2810,(vlSelf->main__DOT__u_fan__DOT__i2cd_data),8);
        bufp->chgBit(oldp+2811,(vlSelf->main__DOT__u_fan__DOT__pp_ms));
        bufp->chgIData(oldp+2812,(vlSelf->main__DOT__u_fan__DOT__trigger_counter),17);
        bufp->chgIData(oldp+2813,(vlSelf->main__DOT__u_fan__DOT__temp_tmp),24);
        bufp->chgIData(oldp+2814,(vlSelf->main__DOT__u_fan__DOT__temp_data),32);
        bufp->chgBit(oldp+2815,(vlSelf->main__DOT__u_fan__DOT__pre_ack));
        bufp->chgIData(oldp+2816,(vlSelf->main__DOT__u_fan__DOT__pre_data),32);
        bufp->chgBit(oldp+2817,(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
        bufp->chgCData(oldp+2818,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                         >> 0xfU))),2);
        bufp->chgBit(oldp+2819,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
        bufp->chgBit(oldp+2820,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc));
        bufp->chgCData(oldp+2821,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr),5);
        bufp->chgBit(oldp+2822,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid));
        bufp->chgBit(oldp+2823,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
        bufp->chgCData(oldp+2824,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn),8);
        bufp->chgCData(oldp+2825,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr),5);
        bufp->chgBit(oldp+2826,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal));
        bufp->chgBit(oldp+2827,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid));
        bufp->chgBit(oldp+2828,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle));
        bufp->chgBit(oldp+2829,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid));
        bufp->chgCData(oldp+2830,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn),8);
        bufp->chgBit(oldp+2831,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready));
        bufp->chgBit(oldp+2832,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready));
        bufp->chgBit(oldp+2833,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort));
        bufp->chgBit(oldp+2834,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid));
        bufp->chgSData(oldp+2835,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn),12);
        bufp->chgCData(oldp+2836,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn),4);
        bufp->chgBit(oldp+2837,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge));
        bufp->chgBit(oldp+2838,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch));
        bufp->chgSData(oldp+2839,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount),12);
        bufp->chgSData(oldp+2840,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount),12);
        bufp->chgCData(oldp+2841,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address),5);
        bufp->chgCData(oldp+2842,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target),5);
        bufp->chgBit(oldp+2843,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait));
        bufp->chgBit(oldp+2844,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request));
        bufp->chgBit(oldp+2845,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err));
        bufp->chgBit(oldp+2846,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted));
        bufp->chgBit(oldp+2847,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual));
        bufp->chgBit(oldp+2848,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda));
        bufp->chgBit(oldp+2849,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl));
        bufp->chgBit(oldp+2850,(((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
                                 | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
        bufp->chgBit(oldp+2851,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda));
        bufp->chgBit(oldp+2852,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl));
        bufp->chgBit(oldp+2853,(((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
                                 & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 7U)))));
        bufp->chgBit(oldp+2854,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write));
        bufp->chgBit(oldp+2855,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override));
        bufp->chgBit(oldp+2856,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual));
        bufp->chgBit(oldp+2857,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
        bufp->chgBit(oldp+2858,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump));
        bufp->chgBit(oldp+2859,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid));
        bufp->chgSData(oldp+2860,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data),10);
        bufp->chgBit(oldp+2861,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl));
        bufp->chgBit(oldp+2862,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda));
        bufp->chgSData(oldp+2863,((0x7ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))),11);
        bufp->chgBit(oldp+2864,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte));
        bufp->chgBit(oldp+2865,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir));
        bufp->chgBit(oldp+2866,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack));
        bufp->chgCData(oldp+2867,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state),4);
        bufp->chgCData(oldp+2868,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits),3);
        bufp->chgCData(oldp+2869,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg),8);
        bufp->chgBit(oldp+2870,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl));
        bufp->chgBit(oldp+2871,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda));
        bufp->chgBit(oldp+2872,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl));
        bufp->chgBit(oldp+2873,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda));
        bufp->chgBit(oldp+2874,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl));
        bufp->chgBit(oldp+2875,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda));
        bufp->chgBit(oldp+2876,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit));
        bufp->chgBit(oldp+2877,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy));
        bufp->chgBit(oldp+2878,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb));
        bufp->chgBit(oldp+2879,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle));
        bufp->chgCData(oldp+2880,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word),8);
        bufp->chgBit(oldp+2881,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid));
        bufp->chgCData(oldp+2882,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight),2);
        bufp->chgBit(oldp+2883,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal));
        bufp->chgCData(oldp+2884,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                         >> 0x1dU))),2);
        bufp->chgBit(oldp+2885,(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID));
        bufp->chgIData(oldp+2886,(vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr),28);
        bufp->chgIData(oldp+2887,(vlSelf->main__DOT__u_i2cdma__DOT__r_memlen),28);
        bufp->chgCData(oldp+2888,(vlSelf->main__DOT__u_i2cdma__DOT__subaddr),6);
        bufp->chgIData(oldp+2889,(vlSelf->main__DOT__u_i2cdma__DOT__current_addr),28);
        bufp->chgIData(oldp+2890,(vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr),32);
        bufp->chgIData(oldp+2891,(vlSelf->main__DOT__u_i2cdma__DOT__next_memlen),32);
        bufp->chgBit(oldp+2892,(vlSelf->main__DOT__u_i2cdma__DOT__wb_last));
        bufp->chgBit(oldp+2893,(vlSelf->main__DOT__u_i2cdma__DOT__bus_err));
        bufp->chgBit(oldp+2894,(vlSelf->main__DOT__u_i2cdma__DOT__r_reset));
        bufp->chgBit(oldp+2895,(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow));
        bufp->chgBit(oldp+2896,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
        bufp->chgBit(oldp+2897,(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready));
        bufp->chgBit(oldp+2898,((1U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                       >> 8U))));
        bufp->chgCData(oldp+2899,((0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data))),8);
        bufp->chgSData(oldp+2900,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data),9);
        bufp->chgSData(oldp+2901,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data),9);
        bufp->chgSData(oldp+2902,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data),9);
        bufp->chgBit(oldp+2903,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid));
        bufp->chgIData(oldp+2904,((0x1fffffU & (IData)(
                                                       (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr 
                                                        >> 0x16U)))),21);
        bufp->chgBit(oldp+2905,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
        bufp->chgBit(oldp+2906,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first));
        bufp->chgBit(oldp+2907,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null));
        bufp->chgBit(oldp+2908,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last));
        bufp->chgWData(oldp+2909,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data),512);
        bufp->chgWData(oldp+2925,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data),512);
        bufp->chgQData(oldp+2941,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel),64);
        bufp->chgQData(oldp+2943,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel),64);
        bufp->chgCData(oldp+2945,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift),4);
        bufp->chgCData(oldp+2946,((0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data))),4);
        bufp->chgCData(oldp+2947,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr),4);
        bufp->chgBit(oldp+2948,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full));
        bufp->chgBit(oldp+2949,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty));
        bufp->chgBit(oldp+2950,((1U & ((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                                       >> 4U))));
        bufp->chgCData(oldp+2951,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill),6);
        bufp->chgIData(oldp+2952,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm),32);
        bufp->chgBit(oldp+2953,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
        bufp->chgCData(oldp+2954,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data),5);
        bufp->chgCData(oldp+2955,(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data),5);
        bufp->chgBit(oldp+2956,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
        bufp->chgBit(oldp+2957,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
        bufp->chgCData(oldp+2958,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[0]),5);
        bufp->chgCData(oldp+2959,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[1]),5);
        bufp->chgCData(oldp+2960,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[2]),5);
        bufp->chgCData(oldp+2961,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[3]),5);
        bufp->chgCData(oldp+2962,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[4]),5);
        bufp->chgCData(oldp+2963,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[5]),5);
        bufp->chgCData(oldp+2964,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[6]),5);
        bufp->chgCData(oldp+2965,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[7]),5);
        bufp->chgCData(oldp+2966,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[8]),5);
        bufp->chgCData(oldp+2967,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[9]),5);
        bufp->chgCData(oldp+2968,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[10]),5);
        bufp->chgCData(oldp+2969,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[11]),5);
        bufp->chgCData(oldp+2970,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[12]),5);
        bufp->chgCData(oldp+2971,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[13]),5);
        bufp->chgCData(oldp+2972,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[14]),5);
        bufp->chgCData(oldp+2973,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[15]),5);
        bufp->chgCData(oldp+2974,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[16]),5);
        bufp->chgCData(oldp+2975,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[17]),5);
        bufp->chgCData(oldp+2976,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[18]),5);
        bufp->chgCData(oldp+2977,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[19]),5);
        bufp->chgCData(oldp+2978,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[20]),5);
        bufp->chgCData(oldp+2979,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[21]),5);
        bufp->chgCData(oldp+2980,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[22]),5);
        bufp->chgCData(oldp+2981,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[23]),5);
        bufp->chgCData(oldp+2982,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[24]),5);
        bufp->chgCData(oldp+2983,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[25]),5);
        bufp->chgCData(oldp+2984,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[26]),5);
        bufp->chgCData(oldp+2985,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[27]),5);
        bufp->chgCData(oldp+2986,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[28]),5);
        bufp->chgCData(oldp+2987,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[29]),5);
        bufp->chgCData(oldp+2988,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[30]),5);
        bufp->chgCData(oldp+2989,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[31]),5);
        bufp->chgCData(oldp+2990,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+2991,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr),6);
        bufp->chgBit(oldp+2992,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr));
        bufp->chgBit(oldp+2993,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd));
        bufp->chgSData(oldp+2994,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc),12);
        bufp->chgSData(oldp+2995,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb),12);
        bufp->chgSData(oldp+2996,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe),12);
        bufp->chgWData(oldp+2997,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr),300);
        bufp->chgWData(oldp+3007,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata),384);
        bufp->chgQData(oldp+3019,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel),48);
        bufp->chgSData(oldp+3021,((((IData)(vlSelf->main__DOT__wb32_ddr3_controller_stall) 
                                    << 0xbU) | ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                                << 0xaU))),12);
        bufp->chgSData(oldp+3022,((((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                     [0U] & (0x10U 
                                             == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
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
        __Vtemp_ha8cd40b0__0[0U] = vlSelf->main__DOT__i2cscopei__DOT__o_bus_data;
        __Vtemp_ha8cd40b0__0[1U] = vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data;
        __Vtemp_ha8cd40b0__0[2U] = vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data;
        __Vtemp_ha8cd40b0__0[3U] = vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data;
        __Vtemp_ha8cd40b0__0[4U] = vlSelf->main__DOT__i2ci__DOT__bus_read_data;
        __Vtemp_ha8cd40b0__0[5U] = vlSelf->main__DOT__wb32_i2cdma_idata;
        __Vtemp_ha8cd40b0__0[6U] = vlSelf->main__DOT__wb32_uart_idata;
        __Vtemp_ha8cd40b0__0[7U] = vlSelf->main__DOT__wb32_fan_idata;
        __Vtemp_ha8cd40b0__0[8U] = vlSelf->main__DOT__r_wb32_sio_data;
        __Vtemp_ha8cd40b0__0[9U] = 0U;
        __Vtemp_ha8cd40b0__0[0xaU] = (IData)((((QData)((IData)(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->main__DOT__wb32_ddr3_phy_idata))));
        __Vtemp_ha8cd40b0__0[0xbU] = (IData)(((((QData)((IData)(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->main__DOT__wb32_ddr3_phy_idata))) 
                                              >> 0x20U));
        bufp->chgWData(oldp+3023,(__Vtemp_ha8cd40b0__0),384);
        bufp->chgSData(oldp+3035,(vlSelf->main__DOT__wb32_xbar__DOT__request[0]),13);
        bufp->chgSData(oldp+3036,(vlSelf->main__DOT__wb32_xbar__DOT__grant[0]),13);
        bufp->chgBit(oldp+3037,(vlSelf->main__DOT__wb32_xbar__DOT__mgrant));
        bufp->chgSData(oldp+3038,(vlSelf->main__DOT__wb32_xbar__DOT__sgrant),12);
        bufp->chgCData(oldp+3039,(vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0]),6);
        bufp->chgBit(oldp+3040,(vlSelf->main__DOT__wb32_xbar__DOT__mfull));
        bufp->chgBit(oldp+3041,(vlSelf->main__DOT__wb32_xbar__DOT__mnearfull));
        bufp->chgBit(oldp+3042,(vlSelf->main__DOT__wb32_xbar__DOT__mempty));
        bufp->chgBit(oldp+3043,(vlSelf->main__DOT__wb32_xbar__DOT__m_stb));
        bufp->chgBit(oldp+3044,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                               >> 0x24U)))));
        bufp->chgIData(oldp+3045,(vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0]),25);
        bufp->chgIData(oldp+3046,(vlSelf->main__DOT__wb32_xbar__DOT__m_data[0]),32);
        bufp->chgCData(oldp+3047,(vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0]),4);
        bufp->chgSData(oldp+3048,(vlSelf->main__DOT__wb32_xbar__DOT__s_stall),16);
        bufp->chgIData(oldp+3049,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[0]),32);
        bufp->chgIData(oldp+3050,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[1]),32);
        bufp->chgIData(oldp+3051,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[2]),32);
        bufp->chgIData(oldp+3052,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[3]),32);
        bufp->chgIData(oldp+3053,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[4]),32);
        bufp->chgIData(oldp+3054,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[5]),32);
        bufp->chgIData(oldp+3055,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[6]),32);
        bufp->chgIData(oldp+3056,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[7]),32);
        bufp->chgIData(oldp+3057,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[8]),32);
        bufp->chgIData(oldp+3058,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[9]),32);
        bufp->chgIData(oldp+3059,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[10]),32);
        bufp->chgIData(oldp+3060,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[11]),32);
        bufp->chgIData(oldp+3061,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[12]),32);
        bufp->chgIData(oldp+3062,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[13]),32);
        bufp->chgIData(oldp+3063,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[14]),32);
        bufp->chgIData(oldp+3064,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[15]),32);
        bufp->chgSData(oldp+3065,(((0xfffff800U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                   & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                                       [0U] 
                                                       & (0x10U 
                                                          == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                                                      << 0xbU))) 
                                   | ((0xfffffc00U 
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
                                                                    & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack)))))))))))))),16);
        bufp->chgBit(oldp+3066,(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
        bufp->chgIData(oldp+3067,(vlSelf->main__DOT__wb32_xbar__DOT__iN),32);
        bufp->chgBit(oldp+3068,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+3069,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+3070,(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
        bufp->chgBit(oldp+3071,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                               >> 0x3dU)))));
        bufp->chgIData(oldp+3072,((0x1ffffffU & (IData)(
                                                        (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                         >> 0x24U)))),25);
        bufp->chgIData(oldp+3073,((IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                           >> 4U))),32);
        bufp->chgCData(oldp+3074,((0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
        bufp->chgSData(oldp+3075,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),13);
        bufp->chgBit(oldp+3076,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgQData(oldp+3077,((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                                >> 0x3dU))))) 
                                    << 0x24U) | (0xfffffffffULL 
                                                 & vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
        bufp->chgIData(oldp+3079,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),25);
        bufp->chgQData(oldp+3080,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
        bufp->chgSData(oldp+3082,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),12);
        bufp->chgQData(oldp+3083,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),62);
        bufp->chgQData(oldp+3085,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),62);
        bufp->chgQData(oldp+3087,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),62);
        bufp->chgIData(oldp+3089,((0x3ffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),26);
        bufp->chgBit(oldp+3090,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
        bufp->chgWData(oldp+3091,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data),512);
        bufp->chgCData(oldp+3107,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift),4);
        bufp->chgBit(oldp+3108,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full));
        bufp->chgBit(oldp+3109,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty));
        bufp->chgCData(oldp+3110,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill),6);
        bufp->chgCData(oldp+3111,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),4);
        bufp->chgCData(oldp+3112,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem
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
        bufp->chgWData(oldp+3113,(__Vtemp_hcfafa750__0),512);
        bufp->chgQData(oldp+3129,(((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)))) 
                                   << 0x3cU)),64);
        bufp->chgBit(oldp+3131,(((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                                 & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb))));
        bufp->chgCData(oldp+3132,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[0]),4);
        bufp->chgCData(oldp+3133,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[1]),4);
        bufp->chgCData(oldp+3134,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[2]),4);
        bufp->chgCData(oldp+3135,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[3]),4);
        bufp->chgCData(oldp+3136,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[4]),4);
        bufp->chgCData(oldp+3137,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[5]),4);
        bufp->chgCData(oldp+3138,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[6]),4);
        bufp->chgCData(oldp+3139,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[7]),4);
        bufp->chgCData(oldp+3140,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[8]),4);
        bufp->chgCData(oldp+3141,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[9]),4);
        bufp->chgCData(oldp+3142,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[10]),4);
        bufp->chgCData(oldp+3143,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[11]),4);
        bufp->chgCData(oldp+3144,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[12]),4);
        bufp->chgCData(oldp+3145,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[13]),4);
        bufp->chgCData(oldp+3146,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[14]),4);
        bufp->chgCData(oldp+3147,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[15]),4);
        bufp->chgCData(oldp+3148,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[16]),4);
        bufp->chgCData(oldp+3149,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[17]),4);
        bufp->chgCData(oldp+3150,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[18]),4);
        bufp->chgCData(oldp+3151,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[19]),4);
        bufp->chgCData(oldp+3152,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[20]),4);
        bufp->chgCData(oldp+3153,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[21]),4);
        bufp->chgCData(oldp+3154,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[22]),4);
        bufp->chgCData(oldp+3155,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[23]),4);
        bufp->chgCData(oldp+3156,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[24]),4);
        bufp->chgCData(oldp+3157,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[25]),4);
        bufp->chgCData(oldp+3158,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[26]),4);
        bufp->chgCData(oldp+3159,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[27]),4);
        bufp->chgCData(oldp+3160,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[28]),4);
        bufp->chgCData(oldp+3161,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[29]),4);
        bufp->chgCData(oldp+3162,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[30]),4);
        bufp->chgCData(oldp+3163,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[31]),4);
        bufp->chgCData(oldp+3164,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+3165,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr),6);
        bufp->chgBit(oldp+3166,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr));
        bufp->chgBit(oldp+3167,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd));
        bufp->chgCData(oldp+3168,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc),2);
        bufp->chgCData(oldp+3169,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb),2);
        bufp->chgCData(oldp+3170,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe),2);
        bufp->chgQData(oldp+3171,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr),54);
        bufp->chgQData(oldp+3173,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata),64);
        bufp->chgCData(oldp+3175,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel),8);
        bufp->chgQData(oldp+3176,((((QData)((IData)(vlSelf->main__DOT__wbu_zip_idata)) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU])))),64);
        bufp->chgCData(oldp+3178,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err),2);
        bufp->chgCData(oldp+3179,(vlSelf->main__DOT__wbu_xbar__DOT__request[0]),3);
        bufp->chgCData(oldp+3180,(vlSelf->main__DOT__wbu_xbar__DOT__grant[0]),3);
        bufp->chgBit(oldp+3181,(vlSelf->main__DOT__wbu_xbar__DOT__mgrant));
        bufp->chgCData(oldp+3182,(vlSelf->main__DOT__wbu_xbar__DOT__sgrant),2);
        bufp->chgCData(oldp+3183,(vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0]),6);
        bufp->chgBit(oldp+3184,(vlSelf->main__DOT__wbu_xbar__DOT__mfull));
        bufp->chgBit(oldp+3185,(vlSelf->main__DOT__wbu_xbar__DOT__mnearfull));
        bufp->chgBit(oldp+3186,(vlSelf->main__DOT__wbu_xbar__DOT__mempty));
        bufp->chgBit(oldp+3187,(vlSelf->main__DOT__wbu_xbar__DOT__m_stb));
        bufp->chgBit(oldp+3188,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                               >> 0x24U)))));
        bufp->chgIData(oldp+3189,(vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0]),27);
        bufp->chgIData(oldp+3190,(vlSelf->main__DOT__wbu_xbar__DOT__m_data[0]),32);
        bufp->chgCData(oldp+3191,(vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0]),4);
        bufp->chgIData(oldp+3192,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[0]),32);
        bufp->chgIData(oldp+3193,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[1]),32);
        bufp->chgIData(oldp+3194,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[2]),32);
        bufp->chgIData(oldp+3195,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[3]),32);
        bufp->chgCData(oldp+3196,(vlSelf->main__DOT__wbu_xbar__DOT__s_err),4);
        bufp->chgBit(oldp+3197,(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
        bufp->chgIData(oldp+3198,(vlSelf->main__DOT__wbu_xbar__DOT__iN),32);
        bufp->chgBit(oldp+3199,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+3200,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+3201,(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
        bufp->chgBit(oldp+3202,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                               >> 0x3fU)))));
        bufp->chgIData(oldp+3203,((0x7ffffffU & (IData)(
                                                        (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                         >> 0x24U)))),27);
        bufp->chgIData(oldp+3204,((IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                           >> 4U))),32);
        bufp->chgCData(oldp+3205,((0xfU & (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
        bufp->chgCData(oldp+3206,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
        bufp->chgBit(oldp+3207,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgQData(oldp+3208,((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                                >> 0x3fU))))) 
                                    << 0x24U) | (0xfffffffffULL 
                                                 & vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
        bufp->chgIData(oldp+3210,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),27);
        bufp->chgQData(oldp+3211,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
        bufp->chgCData(oldp+3213,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
        bufp->chgQData(oldp+3214,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),64);
        bufp->chgQData(oldp+3216,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),64);
        bufp->chgQData(oldp+3218,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),64);
        bufp->chgCData(oldp+3220,(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc),4);
        bufp->chgCData(oldp+3221,((((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb) 
                                    << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                               << 2U) 
                                              | (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb))))),4);
        bufp->chgCData(oldp+3222,((1U | (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we) 
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
        bufp->chgWData(oldp+3223,(__Vtemp_h708d16f1__0),88);
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
        bufp->chgWData(oldp+3226,(__Vtemp_h95b27ed2__0),2048);
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
        bufp->chgWData(oldp+3290,(__Vtemp_h7cab7483__0),256);
        bufp->chgCData(oldp+3298,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
                                    << 3U) | (IData)(vlSelf->__VdfgTmp_h503d14d1__0))),4);
        bufp->chgCData(oldp+3299,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack),4);
        bufp->chgWData(oldp+3300,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata),2048);
        bufp->chgCData(oldp+3364,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr),4);
        bufp->chgCData(oldp+3365,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc),2);
        bufp->chgCData(oldp+3366,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb),2);
        bufp->chgCData(oldp+3367,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe),2);
        bufp->chgQData(oldp+3368,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr),44);
        bufp->chgWData(oldp+3370,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata),1024);
        bufp->chgWData(oldp+3402,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel),128);
        bufp->chgCData(oldp+3406,(((IData)(vlSelf->main__DOT__wbwide_wbdown_stall) 
                                   << 1U)),2);
        bufp->chgCData(oldp+3407,((((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack) 
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
        bufp->chgWData(oldp+3408,(__Vtemp_h7899650d__0),1024);
        bufp->chgCData(oldp+3440,(((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err) 
                                   << 1U)),2);
        bufp->chgCData(oldp+3441,(vlSelf->main__DOT__wbwide_xbar__DOT__request[0]),3);
        bufp->chgCData(oldp+3442,(vlSelf->main__DOT__wbwide_xbar__DOT__request[1]),3);
        bufp->chgCData(oldp+3443,(vlSelf->main__DOT__wbwide_xbar__DOT__request[2]),3);
        bufp->chgCData(oldp+3444,(vlSelf->main__DOT__wbwide_xbar__DOT__request[3]),3);
        bufp->chgCData(oldp+3445,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[0]),2);
        bufp->chgCData(oldp+3446,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[1]),2);
        bufp->chgCData(oldp+3447,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[2]),2);
        bufp->chgCData(oldp+3448,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[3]),2);
        bufp->chgCData(oldp+3449,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[0]),3);
        bufp->chgCData(oldp+3450,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[1]),3);
        bufp->chgCData(oldp+3451,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[2]),3);
        bufp->chgCData(oldp+3452,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[3]),3);
        bufp->chgCData(oldp+3453,(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant),4);
        bufp->chgCData(oldp+3454,(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant),2);
        bufp->chgCData(oldp+3455,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0]),6);
        bufp->chgCData(oldp+3456,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1]),6);
        bufp->chgCData(oldp+3457,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2]),6);
        bufp->chgCData(oldp+3458,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3]),6);
        bufp->chgCData(oldp+3459,(vlSelf->main__DOT__wbwide_xbar__DOT__mfull),4);
        bufp->chgCData(oldp+3460,(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull),4);
        bufp->chgCData(oldp+3461,(vlSelf->main__DOT__wbwide_xbar__DOT__mempty),4);
        bufp->chgCData(oldp+3462,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0]),2);
        bufp->chgCData(oldp+3463,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1]),2);
        bufp->chgCData(oldp+3464,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2]),2);
        bufp->chgCData(oldp+3465,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[3]),2);
        bufp->chgCData(oldp+3466,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb),4);
        bufp->chgCData(oldp+3467,(vlSelf->main__DOT__wbwide_xbar__DOT__m_we),4);
        bufp->chgIData(oldp+3468,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0]),22);
        bufp->chgIData(oldp+3469,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1]),22);
        bufp->chgIData(oldp+3470,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2]),22);
        bufp->chgIData(oldp+3471,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3]),22);
        bufp->chgWData(oldp+3472,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0]),512);
        bufp->chgWData(oldp+3488,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1]),512);
        bufp->chgWData(oldp+3504,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2]),512);
        bufp->chgWData(oldp+3520,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3]),512);
        bufp->chgQData(oldp+3536,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[0]),64);
        bufp->chgQData(oldp+3538,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[1]),64);
        bufp->chgQData(oldp+3540,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[2]),64);
        bufp->chgQData(oldp+3542,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[3]),64);
        bufp->chgCData(oldp+3544,(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall),4);
        bufp->chgWData(oldp+3545,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0]),512);
        bufp->chgWData(oldp+3561,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1]),512);
        bufp->chgWData(oldp+3577,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2]),512);
        bufp->chgWData(oldp+3593,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3]),512);
        bufp->chgCData(oldp+3609,(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack),4);
        bufp->chgCData(oldp+3610,(vlSelf->main__DOT__wbwide_xbar__DOT__s_err),4);
        bufp->chgCData(oldp+3611,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid) 
                                    << 3U) | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid) 
                                               << 2U) 
                                              | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))))),4);
        bufp->chgIData(oldp+3612,(vlSelf->main__DOT__wbwide_xbar__DOT__iN),32);
        bufp->chgBit(oldp+3613,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+3614,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
        bufp->chgBit(oldp+3615,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+3616,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available));
        bufp->chgBit(oldp+3617,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+3618,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available));
        bufp->chgBit(oldp+3619,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+3620,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+3621,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
        bufp->chgCData(oldp+3622,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending),6);
        bufp->chgCData(oldp+3623,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending),6);
        bufp->chgCData(oldp+3624,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending),6);
        bufp->chgBit(oldp+3625,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+3626,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])),22);
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
        bufp->chgWData(oldp+3627,(__Vtemp_h53a5df10__0),512);
        bufp->chgQData(oldp+3643,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+3645,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
        bufp->chgBit(oldp+3646,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
        bufp->chgWData(oldp+3647,(__Vtemp_hb52cb2db__0),577);
        bufp->chgBit(oldp+3666,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+3667,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),22);
        bufp->chgWData(oldp+3668,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+3687,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
        bufp->chgWData(oldp+3688,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),599);
        bufp->chgWData(oldp+3707,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),599);
        bufp->chgWData(oldp+3726,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
        bufp->chgBit(oldp+3745,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+3746,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+3747,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])),22);
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
        bufp->chgWData(oldp+3748,(__Vtemp_hebded4b4__0),512);
        bufp->chgQData(oldp+3764,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+3766,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded),3);
        bufp->chgBit(oldp+3767,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
        bufp->chgWData(oldp+3768,(__Vtemp_h0a2cdfa5__0),577);
        bufp->chgBit(oldp+3787,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+3788,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr),22);
        bufp->chgWData(oldp+3789,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+3808,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest),2);
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
        bufp->chgWData(oldp+3809,(__Vtemp_he57bd368__0),599);
        bufp->chgWData(oldp+3828,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data),599);
        bufp->chgWData(oldp+3847,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
        bufp->chgBit(oldp+3866,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+3867,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+3868,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])),22);
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
        bufp->chgWData(oldp+3869,(__Vtemp_h0964a254__0),512);
        bufp->chgQData(oldp+3885,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+3887,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded),3);
        bufp->chgBit(oldp+3888,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
        bufp->chgWData(oldp+3889,(__Vtemp_h925b4b87__0),577);
        bufp->chgBit(oldp+3908,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+3909,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr),22);
        bufp->chgWData(oldp+3910,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+3929,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest),2);
        bufp->chgWData(oldp+3930,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data),599);
        bufp->chgWData(oldp+3949,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data),599);
        bufp->chgWData(oldp+3968,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
        bufp->chgBit(oldp+3987,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+3988,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+3989,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])),22);
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
        bufp->chgWData(oldp+3990,(__Vtemp_h5b5f8605__0),512);
        bufp->chgQData(oldp+4006,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+4008,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded),3);
        bufp->chgBit(oldp+4009,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
        bufp->chgWData(oldp+4010,(__Vtemp_hfe9179b2__0),577);
        bufp->chgBit(oldp+4029,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+4030,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr),22);
        bufp->chgWData(oldp+4031,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+4050,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest),2);
        bufp->chgWData(oldp+4051,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data),599);
        bufp->chgWData(oldp+4070,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data),599);
        bufp->chgWData(oldp+4089,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
        bufp->chgCData(oldp+4108,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
        bufp->chgCData(oldp+4109,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
        bufp->chgCData(oldp+4110,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
        bufp->chgCData(oldp+4111,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
        bufp->chgCData(oldp+4112,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
        bufp->chgCData(oldp+4113,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+4114,(vlSelf->main__DOT__wb32_xbar__DOT__mindex[0]),4);
        bufp->chgBit(oldp+4115,(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
        bufp->chgSData(oldp+4116,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),13);
        bufp->chgCData(oldp+4117,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),4);
        bufp->chgBit(oldp+4118,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4119,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4120,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
        bufp->chgCData(oldp+4121,(vlSelf->main__DOT__wbu_xbar__DOT__mindex[0]),2);
        bufp->chgCData(oldp+4122,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
        bufp->chgCData(oldp+4123,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4124,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0]),2);
        bufp->chgCData(oldp+4125,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1]),2);
        bufp->chgCData(oldp+4126,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2]),2);
        bufp->chgCData(oldp+4127,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3]),2);
        bufp->chgCData(oldp+4128,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall),4);
        bufp->chgCData(oldp+4129,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
        bufp->chgCData(oldp+4130,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4131,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
        bufp->chgCData(oldp+4132,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4133,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
        bufp->chgCData(oldp+4134,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4135,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
        bufp->chgCData(oldp+4136,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgBit(oldp+4137,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4138,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4139,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
        bufp->chgBit(oldp+4140,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4141,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4142,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))));
        bufp->chgBit(oldp+4143,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4144,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4145,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))));
        bufp->chgBit(oldp+4146,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4147,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4148,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))));
    }
    bufp->chgBit(oldp+4149,(vlSelf->i_clk));
    bufp->chgBit(oldp+4150,(vlSelf->i_reset));
    bufp->chgQData(oldp+4151,(vlSelf->i_ddr3_controller_iserdes_data),64);
    bufp->chgCData(oldp+4153,(vlSelf->i_ddr3_controller_iserdes_dqs),8);
    bufp->chgCData(oldp+4154,(vlSelf->i_ddr3_controller_iserdes_bitslip_reference),8);
    bufp->chgBit(oldp+4155,(vlSelf->i_ddr3_controller_idelayctrl_rdy));
    bufp->chgWData(oldp+4156,(vlSelf->o_ddr3_controller_cmd),96);
    bufp->chgBit(oldp+4159,(vlSelf->o_ddr3_controller_dqs_tri_control));
    bufp->chgBit(oldp+4160,(vlSelf->o_ddr3_controller_dq_tri_control));
    bufp->chgBit(oldp+4161,(vlSelf->o_ddr3_controller_toggle_dqs));
    bufp->chgQData(oldp+4162,(vlSelf->o_ddr3_controller_data),64);
    bufp->chgCData(oldp+4164,(vlSelf->o_ddr3_controller_dm),8);
    bufp->chgCData(oldp+4165,(vlSelf->o_ddr3_controller_odelay_data_cntvaluein),5);
    bufp->chgCData(oldp+4166,(vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein),5);
    bufp->chgCData(oldp+4167,(vlSelf->o_ddr3_controller_idelay_data_cntvaluein),5);
    bufp->chgCData(oldp+4168,(vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein),5);
    bufp->chgBit(oldp+4169,(vlSelf->o_ddr3_controller_odelay_data_ld));
    bufp->chgBit(oldp+4170,(vlSelf->o_ddr3_controller_odelay_dqs_ld));
    bufp->chgBit(oldp+4171,(vlSelf->o_ddr3_controller_idelay_data_ld));
    bufp->chgBit(oldp+4172,(vlSelf->o_ddr3_controller_idelay_dqs_ld));
    bufp->chgBit(oldp+4173,(vlSelf->o_ddr3_controller_bitslip));
    bufp->chgBit(oldp+4174,(vlSelf->o_ddr3_controller_leveling_calib));
    bufp->chgCData(oldp+4175,(vlSelf->o_sirefclk_word),8);
    bufp->chgBit(oldp+4176,(vlSelf->o_sirefclk_ce));
    bufp->chgBit(oldp+4177,(vlSelf->i_fan_sda));
    bufp->chgBit(oldp+4178,(vlSelf->i_fan_scl));
    bufp->chgBit(oldp+4179,(vlSelf->o_fan_sda));
    bufp->chgBit(oldp+4180,(vlSelf->o_fan_scl));
    bufp->chgBit(oldp+4181,(vlSelf->o_fpga_pwm));
    bufp->chgBit(oldp+4182,(vlSelf->o_sys_pwm));
    bufp->chgBit(oldp+4183,(vlSelf->i_fan_tach));
    bufp->chgBit(oldp+4184,(vlSelf->i_i2c_sda));
    bufp->chgBit(oldp+4185,(vlSelf->i_i2c_scl));
    bufp->chgBit(oldp+4186,(vlSelf->o_i2c_sda));
    bufp->chgBit(oldp+4187,(vlSelf->o_i2c_scl));
    bufp->chgBit(oldp+4188,(vlSelf->cpu_sim_cyc));
    bufp->chgBit(oldp+4189,(vlSelf->cpu_sim_stb));
    bufp->chgBit(oldp+4190,(vlSelf->cpu_sim_we));
    bufp->chgCData(oldp+4191,(vlSelf->cpu_sim_addr),7);
    bufp->chgIData(oldp+4192,(vlSelf->cpu_sim_data),32);
    bufp->chgBit(oldp+4193,(vlSelf->cpu_sim_stall));
    bufp->chgBit(oldp+4194,(vlSelf->cpu_sim_ack));
    bufp->chgIData(oldp+4195,(vlSelf->cpu_sim_idata),32);
    bufp->chgBit(oldp+4196,(vlSelf->cpu_prof_stb));
    bufp->chgIData(oldp+4197,(vlSelf->cpu_prof_addr),28);
    bufp->chgIData(oldp+4198,(vlSelf->cpu_prof_ticks),32);
    bufp->chgBit(oldp+4199,(vlSelf->i_cpu_reset));
    bufp->chgBit(oldp+4200,(vlSelf->i_wbu_uart_rx));
    bufp->chgBit(oldp+4201,(vlSelf->o_wbu_uart_tx));
    bufp->chgBit(oldp+4202,(vlSelf->o_wbu_uart_cts_n));
    bufp->chgSData(oldp+4203,(vlSelf->i_gpio),16);
    bufp->chgCData(oldp+4204,(vlSelf->o_gpio),8);
    bufp->chgCData(oldp+4205,(vlSelf->i_sw),8);
    bufp->chgCData(oldp+4206,(vlSelf->i_btn),5);
    bufp->chgCData(oldp+4207,(vlSelf->o_led),8);
    bufp->chgBit(oldp+4208,(vlSelf->i_clk200));
    bufp->chgIData(oldp+4209,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                [0U] << 0x1fU) | (0x7fffffffU 
                                                  & (IData)(
                                                            (vlSelf->i_ddr3_controller_iserdes_data 
                                                             >> 0x20U))))),32);
    bufp->chgIData(oldp+4210,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                [0U] << 0x1fU) | (0x7fffffffU 
                                                  & (IData)(vlSelf->i_ddr3_controller_iserdes_data)))),32);
    bufp->chgIData(oldp+4211,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
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
    bufp->chgIData(oldp+4212,((((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                << 0x10U) | (IData)(vlSelf->o_gpio))),32);
    bufp->chgBit(oldp+4213,(((IData)(vlSelf->cpu_sim_cyc) 
                             | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb))));
    bufp->chgBit(oldp+4214,(((~ (IData)(vlSelf->cpu_sim_cyc)) 
                             & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack))));
    bufp->chgBit(oldp+4215,((1U & (~ (IData)(vlSelf->i_reset)))));
    bufp->chgBit(oldp+4216,((0ULL == vlSelf->i_ddr3_controller_iserdes_data)));
    bufp->chgSData(oldp+4217,(vlSelf->o_gpio),16);
    bufp->chgIData(oldp+4218,((0x7fffffffU & (IData)(
                                                     (vlSelf->i_ddr3_controller_iserdes_data 
                                                      >> 0x20U)))),31);
    bufp->chgIData(oldp+4219,((0x7fffffffU & (IData)(vlSelf->i_ddr3_controller_iserdes_data))),31);
    bufp->chgBit(oldp+4220,(vlSelf->main__DOT____Vcellinp__swic__i_reset));
    bufp->chgCData(oldp+4221,(((IData)(vlSelf->cpu_sim_cyc)
                                ? 0xfU : (0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                                  >> 4U)))),4);
    bufp->chgIData(oldp+4222,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc),28);
    bufp->chgBit(oldp+4223,((((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
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
    bufp->chgBit(oldp+4224,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim));
    bufp->chgIData(oldp+4225,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv),23);
    bufp->chgBit(oldp+4226,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid));
    bufp->chgBit(oldp+4227,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim));
    bufp->chgIData(oldp+4228,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv),23);
    bufp->chgBit(oldp+4229,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim));
    bufp->chgIData(oldp+4230,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv),23);
    bufp->chgBit(oldp+4231,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce));
    bufp->chgIData(oldp+4232,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
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
    bufp->chgIData(oldp+4233,(vlSelf->main__DOT__wb32_xbar__DOT__iM),32);
    bufp->chgCData(oldp+4234,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),4);
    bufp->chgCData(oldp+4235,(((((IData)(vlSelf->cpu_sim_cyc) 
                                 | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                << 1U) | (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))),2);
    bufp->chgCData(oldp+4236,(((((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                 & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack))),2);
    bufp->chgBit(oldp+4237,(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
    bufp->chgCData(oldp+4238,(((0xfffffffeU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                               & (((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                                   & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                                  << 1U))) 
                               | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                  & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack)))),4);
    bufp->chgIData(oldp+4239,(vlSelf->main__DOT__wbu_xbar__DOT__iM),32);
    bufp->chgCData(oldp+4240,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgBit(oldp+4241,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->chgBit(oldp+4242,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->chgBit(oldp+4243,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->chgIData(oldp+4244,(vlSelf->main__DOT__wbwide_xbar__DOT__iM),32);
    bufp->chgCData(oldp+4245,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgCData(oldp+4246,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgCData(oldp+4247,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgCData(oldp+4248,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
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
}
