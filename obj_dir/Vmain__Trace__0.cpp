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
    VlWide<16>/*511:0*/ __Vtemp_hd1e4c677__0;
    VlWide<16>/*511:0*/ __Vtemp_h6ddae8d1__0;
    VlWide<16>/*511:0*/ __Vtemp_hc1d82fb0__1;
    VlWide<16>/*511:0*/ __Vtemp_h6d0d1506__0;
    VlWide<17>/*543:0*/ __Vtemp_h6b3f223d__0;
    VlWide<16>/*511:0*/ __Vtemp_h01ff8f7b__0;
    VlWide<16>/*511:0*/ __Vtemp_he3c3974d__0;
    VlWide<16>/*511:0*/ __Vtemp_hcfafa750__0;
    VlWide<4>/*127:0*/ __Vtemp_h2146f57f__0;
    VlWide<64>/*2047:0*/ __Vtemp_h95b27ed2__0;
    VlWide<8>/*255:0*/ __Vtemp_h7cab7483__0;
    VlWide<16>/*511:0*/ __Vtemp_h0fd98bf7__0;
    VlWide<19>/*607:0*/ __Vtemp_h3b245e0e__0;
    VlWide<16>/*511:0*/ __Vtemp_hcb138391__0;
    VlWide<19>/*607:0*/ __Vtemp_hf41d9735__0;
    VlWide<19>/*607:0*/ __Vtemp_h6283f4ea__0;
    VlWide<16>/*511:0*/ __Vtemp_hb4195529__0;
    VlWide<19>/*607:0*/ __Vtemp_hb863f640__0;
    VlWide<16>/*511:0*/ __Vtemp_h61e633ab__0;
    VlWide<19>/*607:0*/ __Vtemp_h43fd6509__0;
    VlWide<11>/*351:0*/ __Vtemp_h33b103d1__0;
    VlWide<48>/*1535:0*/ __Vtemp_h8a06d21b__0;
    VlWide<16>/*511:0*/ __Vtemp_hc035b709__1;
    VlWide<16>/*511:0*/ __Vtemp_hf82de6ac__0;
    VlWide<16>/*511:0*/ __Vtemp_hf74e670c__0;
    VlWide<16>/*511:0*/ __Vtemp_h21e563ec__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k),32);
        bufp->chgCData(oldp+1,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv),7);
        bufp->chgIData(oldp+2,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__k),32);
        bufp->chgCData(oldp+3,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__newv),7);
        bufp->chgIData(oldp+4,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k),32);
        bufp->chgIData(oldp+5,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__ik),32);
        bufp->chgSData(oldp+6,(vlSelf->main__DOT__wb32_xbar__DOT__requested[0]),11);
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
                                  << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
        bufp->chgCData(oldp+88,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
        bufp->chgBit(oldp+89,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+90,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+91,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+92,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb));
        bufp->chgBit(oldp+93,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+94,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                  << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
        bufp->chgCData(oldp+95,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
        bufp->chgBit(oldp+96,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+97,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+98,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+99,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb));
        bufp->chgBit(oldp+100,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+101,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                   << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
        bufp->chgCData(oldp+102,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
        bufp->chgBit(oldp+103,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+104,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+105,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+106,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb));
        bufp->chgBit(oldp+107,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid));
        bufp->chgCData(oldp+108,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                   << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
        bufp->chgCData(oldp+109,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
        bufp->chgBit(oldp+110,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+111,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+112,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+113,((((7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                                   << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4)),32);
        bufp->chgIData(oldp+114,((((7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                                   << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope2_ddr3i____pinNumber4)),32);
        bufp->chgIData(oldp+115,((((7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                                   << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope3_ddr3i____pinNumber4)),32);
        bufp->chgIData(oldp+116,(vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4),31);
        bufp->chgIData(oldp+117,(vlSelf->main__DOT____Vcellinp__scope2_ddr3i____pinNumber4),31);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+118,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset));
        bufp->chgBit(oldp+119,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
        bufp->chgBit(oldp+120,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
        bufp->chgSData(oldp+121,((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                   << 0xbU) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),12);
        bufp->chgSData(oldp+122,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),11);
        bufp->chgBit(oldp+123,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
        bufp->chgBit(oldp+124,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
        bufp->chgBit(oldp+125,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
        bufp->chgBit(oldp+126,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+127,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+128,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+129,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+130,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+131,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+132,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+133,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+134,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+135,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+136,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+137,(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
        bufp->chgBit(oldp+138,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
        bufp->chgBit(oldp+139,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+140,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
        bufp->chgBit(oldp+141,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+142,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
        bufp->chgBit(oldp+143,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+144,(vlSelf->main__DOT__scope1_ddr3_int));
        bufp->chgBit(oldp+145,(vlSelf->main__DOT__scope2_ddr3_int));
        bufp->chgBit(oldp+146,((1U & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                      >> 5U))));
        bufp->chgBit(oldp+147,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)))));
        bufp->chgBit(oldp+148,((1U & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                      >> 5U))));
        bufp->chgBit(oldp+149,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)))));
        bufp->chgBit(oldp+150,(vlSelf->main__DOT__i2cscope_int));
        bufp->chgBit(oldp+151,(vlSelf->main__DOT__scope3_ddr3_int));
        bufp->chgBit(oldp+152,(vlSelf->main__DOT__gpio_int));
        bufp->chgBit(oldp+153,(vlSelf->main__DOT__spio_int));
        bufp->chgBit(oldp+154,(vlSelf->main__DOT__r_sirefclk_en));
        bufp->chgIData(oldp+155,(vlSelf->main__DOT__r_sirefclk_data),30);
        bufp->chgBit(oldp+156,(vlSelf->main__DOT__w_sirefclk_unused_stb));
        bufp->chgBit(oldp+157,(vlSelf->main__DOT__r_sirefclk_ack));
        bufp->chgBit(oldp+158,((1U & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgBit(oldp+159,(vlSelf->main__DOT__i2c_valid));
        bufp->chgBit(oldp+160,(vlSelf->main__DOT__i2c_ready));
        bufp->chgBit(oldp+161,(vlSelf->main__DOT__i2c_last));
        bufp->chgCData(oldp+162,(vlSelf->main__DOT__i2c_data),8);
        bufp->chgCData(oldp+163,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid),2);
        bufp->chgBit(oldp+164,(vlSelf->main__DOT__w_console_rx_stb));
        bufp->chgBit(oldp+165,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)))));
        bufp->chgBit(oldp+166,(vlSelf->main__DOT__w_console_busy));
        bufp->chgCData(oldp+167,(vlSelf->main__DOT__w_console_rx_data),7);
        bufp->chgCData(oldp+168,(vlSelf->main__DOT__w_console_tx_data),7);
        bufp->chgIData(oldp+169,(vlSelf->main__DOT__uart_debug),32);
        bufp->chgBit(oldp+170,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb));
        bufp->chgBit(oldp+171,(vlSelf->main__DOT__raw_cpu_dbg_ack));
        bufp->chgSData(oldp+172,((((IData)(vlSelf->main__DOT__gpio_int) 
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
        bufp->chgBit(oldp+173,(vlSelf->main__DOT__zip_cpu_int));
        bufp->chgCData(oldp+174,(vlSelf->main__DOT__wbu_rx_data),8);
        bufp->chgCData(oldp+175,(vlSelf->main__DOT__genbus__DOT__ps_data),8);
        bufp->chgBit(oldp+176,(vlSelf->main__DOT__wbu_rx_stb));
        bufp->chgBit(oldp+177,(vlSelf->main__DOT__genbus__DOT__ps_full));
        bufp->chgBit(oldp+178,(vlSelf->main__DOT__txv__DOT__r_busy));
        bufp->chgBit(oldp+179,(vlSelf->main__DOT__genbus__DOT__r_wdt_reset));
        bufp->chgCData(oldp+180,(vlSelf->main__DOT__w_led),8);
        bufp->chgSData(oldp+181,((((IData)(vlSelf->main__DOT__spio_int) 
                                   << 8U) | ((0x80U 
                                              & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                                 << 2U)) 
                                             | (0x40U 
                                                & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                                   << 1U))))),15);
        bufp->chgSData(oldp+182,((((IData)(vlSelf->main__DOT__gpio_int) 
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
        bufp->chgBit(oldp+183,(vlSelf->main__DOT__wbwide_i2cdma_cyc));
        bufp->chgBit(oldp+184,(vlSelf->main__DOT__wbwide_i2cdma_stb));
        bufp->chgIData(oldp+185,(vlSelf->main__DOT__wbwide_i2cdma_addr),25);
        bufp->chgWData(oldp+186,(vlSelf->main__DOT__wbwide_i2cdma_data),512);
        bufp->chgQData(oldp+202,(vlSelf->main__DOT__wbwide_i2cdma_sel),64);
        bufp->chgBit(oldp+204,((1U & (IData)(vlSelf->__VdfgTmp_h503d14d1__0))));
        bufp->chgBit(oldp+205,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))));
        bufp->chgBit(oldp+206,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))));
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
        bufp->chgWData(oldp+207,(__Vtemp_h053daff0__0),512);
        bufp->chgBit(oldp+223,(vlSelf->main__DOT__wbwide_i2cm_cyc));
        bufp->chgBit(oldp+224,(vlSelf->main__DOT__wbwide_i2cm_stb));
        bufp->chgIData(oldp+225,(vlSelf->main__DOT__wbwide_i2cm_addr),25);
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+227,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                      >> 1U))));
        bufp->chgBit(oldp+228,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
        bufp->chgWData(oldp+229,(__Vtemp_h3711b190__0),512);
        bufp->chgBit(oldp+245,(vlSelf->main__DOT__wbwide_zip_cyc));
        bufp->chgBit(oldp+246,(vlSelf->main__DOT__wbwide_zip_stb));
        bufp->chgBit(oldp+247,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                       ? (IData)(vlSelf->main__DOT__swic__DOT__cpu_we)
                                       : (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))))));
        bufp->chgIData(oldp+248,(vlSelf->main__DOT__wbwide_zip_addr),25);
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
        bufp->chgWData(oldp+249,(__Vtemp_h58eb921b__0),512);
        bufp->chgQData(oldp+265,(((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                   ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                       ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                       : 0xffffffffffffffffULL)
                                   : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                       ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                       : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel))),64);
        bufp->chgBit(oldp+267,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+268,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                      >> 2U))));
        bufp->chgBit(oldp+269,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
        bufp->chgWData(oldp+270,(__Vtemp_hc1d82fb0__0),512);
        bufp->chgBit(oldp+286,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc));
        bufp->chgBit(oldp+287,(vlSelf->main__DOT__wbwide_wbu_arbiter_stb));
        bufp->chgBit(oldp+288,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we));
        bufp->chgIData(oldp+289,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr),25);
        bufp->chgWData(oldp+290,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data),512);
        bufp->chgQData(oldp+306,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel),64);
        bufp->chgBit(oldp+308,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+309,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                      >> 3U))));
        bufp->chgBit(oldp+310,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
        bufp->chgWData(oldp+311,(__Vtemp_hc1851150__0),512);
        bufp->chgBit(oldp+327,(vlSelf->main__DOT__wbwide_wbdown_stall));
        bufp->chgBit(oldp+328,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack));
        bufp->chgWData(oldp+329,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data),512);
        bufp->chgBit(oldp+345,(vlSelf->main__DOT__wbwide_bkram_ack));
        bufp->chgWData(oldp+346,(vlSelf->main__DOT__wbwide_bkram_idata),512);
        bufp->chgBit(oldp+362,(vlSelf->main__DOT__wb32_wbdown_stb));
        bufp->chgBit(oldp+363,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we));
        bufp->chgCData(oldp+364,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr),8);
        bufp->chgIData(oldp+365,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU]),32);
        bufp->chgCData(oldp+366,((0xfU & (IData)((vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                                  >> 0x3cU)))),4);
        bufp->chgBit(oldp+367,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+368,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
        bufp->chgIData(oldp+369,(vlSelf->main__DOT__wb32_wbdown_idata),32);
        bufp->chgIData(oldp+370,((((~ (IData)(vlSelf->main__DOT__r_sirefclk_en)) 
                                   << 0x1fU) | vlSelf->main__DOT__r_sirefclk_data)),32);
        bufp->chgBit(oldp+371,(vlSelf->main__DOT__wb32_spio_ack));
        bufp->chgIData(oldp+372,((((IData)(vlSelf->main__DOT__spioi__DOT__led_demo) 
                                   << 0x18U) | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->main__DOT__spioi__DOT__r_led))))),32);
        bufp->chgBit(oldp+373,(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack));
        bufp->chgIData(oldp+374,(vlSelf->main__DOT__i2cscopei__DOT__o_bus_data),32);
        bufp->chgBit(oldp+375,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack));
        bufp->chgIData(oldp+376,(vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data),32);
        bufp->chgBit(oldp+377,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack));
        bufp->chgIData(oldp+378,(vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data),32);
        bufp->chgBit(oldp+379,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack));
        bufp->chgIData(oldp+380,(vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data),32);
        bufp->chgBit(oldp+381,(vlSelf->main__DOT__wb32_i2cs_ack));
        bufp->chgIData(oldp+382,(vlSelf->main__DOT__i2ci__DOT__bus_read_data),32);
        bufp->chgBit(oldp+383,(vlSelf->main__DOT__wb32_i2cdma_ack));
        bufp->chgIData(oldp+384,(vlSelf->main__DOT__wb32_i2cdma_idata),32);
        bufp->chgBit(oldp+385,(vlSelf->main__DOT__wb32_uart_ack));
        bufp->chgIData(oldp+386,(vlSelf->main__DOT__wb32_uart_idata),32);
        bufp->chgBit(oldp+387,(vlSelf->main__DOT__wb32_fan_ack));
        bufp->chgIData(oldp+388,(vlSelf->main__DOT__wb32_fan_idata),32);
        bufp->chgBit(oldp+389,(vlSelf->main__DOT__r_wb32_sio_ack));
        bufp->chgIData(oldp+390,(vlSelf->main__DOT__r_wb32_sio_data),32);
        bufp->chgBit(oldp+391,(vlSelf->main__DOT__r_cfg_ack));
        bufp->chgBit(oldp+392,(vlSelf->main__DOT__wbu_cyc));
        bufp->chgBit(oldp+393,(vlSelf->main__DOT__wbu_stb));
        bufp->chgBit(oldp+394,(vlSelf->main__DOT__wbu_we));
        bufp->chgIData(oldp+395,((0x3fffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),30);
        bufp->chgIData(oldp+396,(vlSelf->main__DOT__wbu_data),32);
        bufp->chgBit(oldp+397,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+398,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
        bufp->chgBit(oldp+399,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
        bufp->chgIData(oldp+400,(vlSelf->main__DOT__wbu_idata),32);
        bufp->chgBit(oldp+401,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))));
        bufp->chgBit(oldp+402,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb))));
        bufp->chgBit(oldp+403,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe))));
        bufp->chgIData(oldp+404,((0x3fffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),30);
        bufp->chgIData(oldp+405,((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata)),32);
        bufp->chgCData(oldp+406,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel))),4);
        bufp->chgBit(oldp+407,(vlSelf->main__DOT__wbu_wbu_arbiter_stall));
        bufp->chgBit(oldp+408,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack));
        bufp->chgBit(oldp+409,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err));
        bufp->chgIData(oldp+410,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU]),32);
        bufp->chgBit(oldp+411,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                      >> 1U))));
        bufp->chgBit(oldp+412,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                      >> 1U))));
        bufp->chgBit(oldp+413,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                                      >> 1U))));
        bufp->chgIData(oldp+414,((0x3fffffffU & (IData)(
                                                        (vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                                         >> 0x1eU)))),30);
        bufp->chgIData(oldp+415,((IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                                          >> 0x20U))),32);
        bufp->chgCData(oldp+416,((0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                          >> 4U))),4);
        bufp->chgIData(oldp+417,(vlSelf->main__DOT__wbu_zip_idata),32);
        bufp->chgBit(oldp+418,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb));
        bufp->chgBit(oldp+419,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb));
        bufp->chgWData(oldp+420,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data),512);
        bufp->chgSData(oldp+436,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr),14);
        bufp->chgQData(oldp+437,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel),64);
        bufp->chgIData(oldp+439,(vlSelf->main__DOT__bkrami__DOT__WRITE_TO_MEMORY__DOT__ik),32);
        bufp->chgIData(oldp+440,(vlSelf->main__DOT__r_sirefclk_data),32);
        bufp->chgIData(oldp+441,(vlSelf->main__DOT__clock_generator__DOT__counter[0]),32);
        bufp->chgIData(oldp+442,(vlSelf->main__DOT__clock_generator__DOT__counter[1]),32);
        bufp->chgIData(oldp+443,(vlSelf->main__DOT__clock_generator__DOT__counter[2]),32);
        bufp->chgIData(oldp+444,(vlSelf->main__DOT__clock_generator__DOT__counter[3]),32);
        bufp->chgIData(oldp+445,(vlSelf->main__DOT__clock_generator__DOT__counter[4]),32);
        bufp->chgIData(oldp+446,(vlSelf->main__DOT__clock_generator__DOT__counter[5]),32);
        bufp->chgIData(oldp+447,(vlSelf->main__DOT__clock_generator__DOT__counter[6]),32);
        bufp->chgIData(oldp+448,(vlSelf->main__DOT__clock_generator__DOT__counter[7]),32);
        bufp->chgIData(oldp+449,(vlSelf->main__DOT__clock_generator__DOT__r_delay),32);
        bufp->chgIData(oldp+450,(vlSelf->main__DOT__clock_generator__DOT__times_three),32);
        bufp->chgIData(oldp+451,(vlSelf->main__DOT__clock_generator__DOT__times_five),32);
        bufp->chgIData(oldp+452,(vlSelf->main__DOT__clock_generator__DOT__times_seven),32);
        bufp->chgBit(oldp+453,(vlSelf->main__DOT__console__DOT__rx_uart_reset));
        bufp->chgBit(oldp+454,(((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                & (IData)(vlSelf->main__DOT__w_console_rx_stb))));
        bufp->chgCData(oldp+455,(vlSelf->main__DOT__console__DOT__rxf_wb_data),7);
        bufp->chgSData(oldp+456,(vlSelf->main__DOT__console__DOT__rxf_status),16);
        bufp->chgBit(oldp+457,(vlSelf->main__DOT__console__DOT__rxf_wb_read));
        bufp->chgIData(oldp+458,(((((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                    & (IData)(vlSelf->main__DOT__w_console_rx_stb)) 
                                   << 0xcU) | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                                                << 8U) 
                                               | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_data)))),32);
        bufp->chgBit(oldp+459,(((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write)) 
                                & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write))));
        bufp->chgSData(oldp+460,(vlSelf->main__DOT__console__DOT__txf_status),16);
        bufp->chgBit(oldp+461,(vlSelf->main__DOT__console__DOT__txf_wb_write));
        bufp->chgBit(oldp+462,(vlSelf->main__DOT__console__DOT__tx_uart_reset));
        bufp->chgCData(oldp+463,(vlSelf->main__DOT__console__DOT__txf_wb_data),7);
        bufp->chgIData(oldp+464,((((IData)(vlSelf->__VdfgTmp_ha46ae6a3__0) 
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
        bufp->chgIData(oldp+465,((((IData)(vlSelf->main__DOT__console__DOT__txf_status) 
                                   << 0x10U) | (IData)(vlSelf->main__DOT__console__DOT__rxf_status))),32);
        bufp->chgCData(oldp+466,(vlSelf->main__DOT__console__DOT__r_wb_addr),2);
        bufp->chgBit(oldp+467,(vlSelf->main__DOT__console__DOT__r_wb_ack));
        bufp->chgCData(oldp+468,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data),7);
        bufp->chgCData(oldp+469,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write),7);
        bufp->chgCData(oldp+470,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+471,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr),6);
        bufp->chgCData(oldp+472,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next),6);
        bufp->chgBit(oldp+473,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow));
        bufp->chgBit(oldp+474,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow));
        bufp->chgBit(oldp+475,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc));
        bufp->chgCData(oldp+476,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
        bufp->chgCData(oldp+477,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
        bufp->chgBit(oldp+478,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write));
        bufp->chgBit(oldp+479,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read));
        bufp->chgCData(oldp+480,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill),6);
        bufp->chgSData(oldp+481,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill),10);
        bufp->chgBit(oldp+482,(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6));
        bufp->chgCData(oldp+483,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data),7);
        bufp->chgCData(oldp+484,(vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write),7);
        bufp->chgCData(oldp+485,(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+486,(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr),6);
        bufp->chgCData(oldp+487,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next),6);
        bufp->chgBit(oldp+488,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow));
        bufp->chgBit(oldp+489,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow));
        bufp->chgBit(oldp+490,(vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc));
        bufp->chgCData(oldp+491,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
        bufp->chgCData(oldp+492,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
        bufp->chgBit(oldp+493,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write));
        bufp->chgBit(oldp+494,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read));
        bufp->chgCData(oldp+495,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill),6);
        bufp->chgSData(oldp+496,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill),10);
        bufp->chgBit(oldp+497,(vlSelf->main__DOT__genbus__DOT__soft_reset));
        bufp->chgBit(oldp+498,(vlSelf->main__DOT__genbus__DOT__rx_valid));
        bufp->chgCData(oldp+499,((0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))),8);
        bufp->chgBit(oldp+500,(vlSelf->main__DOT__genbus__DOT__in_stb));
        bufp->chgBit(oldp+501,(((IData)(vlSelf->main__DOT__genbus__DOT__rx_valid) 
                                | ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                     | (IData)(vlSelf->main__DOT__genbus__DOT__in_stb)) 
                                    | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
                                   | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))))));
        bufp->chgQData(oldp+502,(vlSelf->main__DOT__genbus__DOT__in_word),36);
        bufp->chgBit(oldp+504,(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
        bufp->chgCData(oldp+505,(vlSelf->main__DOT__genbus__DOT__wbu_tx_data),8);
        bufp->chgBit(oldp+506,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n));
        bufp->chgQData(oldp+507,(vlSelf->main__DOT__genbus__DOT__ififo_codword),36);
        bufp->chgBit(oldp+509,(vlSelf->main__DOT__genbus__DOT__exec_stb));
        bufp->chgQData(oldp+510,(vlSelf->main__DOT__genbus__DOT__exec_word),36);
        bufp->chgBit(oldp+512,(vlSelf->main__DOT__genbus__DOT__ofifo_rd));
        bufp->chgQData(oldp+513,(vlSelf->main__DOT__genbus__DOT__ofifo_codword),36);
        bufp->chgBit(oldp+515,((((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
                                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)) 
                                    & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow))) 
                                | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))));
        bufp->chgBit(oldp+516,(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
        bufp->chgBit(oldp+517,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy));
        bufp->chgIData(oldp+518,(vlSelf->main__DOT__genbus__DOT__r_wdt_timer),19);
        bufp->chgBit(oldp+519,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb))));
        bufp->chgBit(oldp+520,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb));
        bufp->chgBit(oldp+521,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active))));
        bufp->chgSData(oldp+522,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr),11);
        bufp->chgSData(oldp+523,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr),11);
        bufp->chgSData(oldp+524,((0x7ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)))),11);
        bufp->chgSData(oldp+525,((0x7ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr)))),11);
        bufp->chgBit(oldp+526,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow));
        bufp->chgBit(oldp+527,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow));
        bufp->chgBit(oldp+528,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))));
        bufp->chgBit(oldp+529,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write));
        bufp->chgBit(oldp+530,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read));
        bufp->chgBit(oldp+531,((((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)) 
                                    & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow))) 
                                | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)))));
        bufp->chgBit(oldp+532,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd));
        bufp->chgCData(oldp+533,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr),7);
        bufp->chgCData(oldp+534,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr),7);
        bufp->chgCData(oldp+535,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)))),7);
        bufp->chgCData(oldp+536,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr)))),7);
        bufp->chgBit(oldp+537,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow));
        bufp->chgBit(oldp+538,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow));
        bufp->chgBit(oldp+539,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)))));
        bufp->chgBit(oldp+540,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write));
        bufp->chgBit(oldp+541,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read));
        bufp->chgBit(oldp+542,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb));
        bufp->chgBit(oldp+543,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid));
        bufp->chgCData(oldp+544,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits),6);
        bufp->chgBit(oldp+545,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb));
        bufp->chgBit(oldp+546,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy));
        bufp->chgBit(oldp+547,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)))));
        bufp->chgQData(oldp+548,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word),36);
        bufp->chgBit(oldp+550,((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))));
        bufp->chgBit(oldp+551,(((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                                | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))));
        bufp->chgCData(oldp+552,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr),8);
        bufp->chgQData(oldp+553,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word),36);
        bufp->chgCData(oldp+555,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr),8);
        bufp->chgIData(oldp+556,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr),25);
        bufp->chgIData(oldp+557,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr),32);
        bufp->chgSData(oldp+558,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len),10);
        bufp->chgIData(oldp+559,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword),32);
        bufp->chgCData(oldp+560,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb),3);
        bufp->chgBit(oldp+561,((3U == (7U & (IData)(
                                                    (vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                     >> 0x21U))))));
        bufp->chgCData(oldp+562,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len),3);
        bufp->chgCData(oldp+563,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len),3);
        bufp->chgCData(oldp+564,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw),2);
        bufp->chgBit(oldp+565,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb));
        bufp->chgQData(oldp+566,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg),36);
        bufp->chgIData(oldp+568,((((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                            >> 0x1fU)) 
                                   << 0x1eU) | (0x3fffffffU 
                                                & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)))),32);
        bufp->chgCData(oldp+569,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state),2);
        bufp->chgSData(oldp+570,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed),10);
        bufp->chgSData(oldp+571,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len),10);
        bufp->chgBit(oldp+572,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc));
        bufp->chgBit(oldp+573,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr));
        bufp->chgBit(oldp+574,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request));
        bufp->chgBit(oldp+575,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack));
        bufp->chgBit(oldp+576,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks));
        bufp->chgIData(oldp+577,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr),32);
        bufp->chgBit(oldp+578,(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy));
        bufp->chgBit(oldp+579,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
        bufp->chgBit(oldp+580,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb));
        bufp->chgBit(oldp+581,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
        bufp->chgBit(oldp+582,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy));
        bufp->chgBit(oldp+583,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy));
        bufp->chgBit(oldp+584,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy));
        bufp->chgBit(oldp+585,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
                                   | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)))));
        bufp->chgBit(oldp+586,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))));
        bufp->chgBit(oldp+587,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
                                | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy) 
                                   & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl)) 
                                      & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl))))));
        bufp->chgQData(oldp+588,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword),36);
        bufp->chgQData(oldp+590,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword),36);
        bufp->chgCData(oldp+592,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits),7);
        bufp->chgCData(oldp+593,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits),7);
        bufp->chgBit(oldp+594,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active));
        bufp->chgBit(oldp+595,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid));
        bufp->chgQData(oldp+596,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword),36);
        bufp->chgIData(oldp+598,((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)),32);
        bufp->chgCData(oldp+599,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck),4);
        bufp->chgBit(oldp+600,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
        bufp->chgBit(oldp+601,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))));
        bufp->chgQData(oldp+602,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word),36);
        bufp->chgSData(oldp+604,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr),10);
        bufp->chgBit(oldp+605,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled));
        bufp->chgSData(oldp+606,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr),10);
        bufp->chgBit(oldp+607,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch));
        bufp->chgBit(oldp+608,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch));
        bufp->chgBit(oldp+609,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr));
        bufp->chgIData(oldp+610,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword),32);
        bufp->chgSData(oldp+611,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr),10);
        bufp->chgBit(oldp+612,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched));
        bufp->chgBit(oldp+613,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch));
        bufp->chgBit(oldp+614,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch));
        bufp->chgSData(oldp+615,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld),10);
        bufp->chgCData(oldp+616,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd),3);
        bufp->chgSData(oldp+617,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr),10);
        bufp->chgBit(oldp+618,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table));
        bufp->chgBit(oldp+619,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table));
        bufp->chgBit(oldp+620,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match));
        bufp->chgBit(oldp+621,((1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld) 
                                      >> 9U))));
        bufp->chgBit(oldp+622,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy));
        bufp->chgBit(oldp+623,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request));
        bufp->chgBit(oldp+624,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent));
        bufp->chgBit(oldp+625,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state)) 
                                & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                                   >> 0x15U))));
        bufp->chgBit(oldp+626,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state));
        bufp->chgIData(oldp+627,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter),22);
        bufp->chgCData(oldp+628,(((0U == (7U & (IData)(
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
        bufp->chgCData(oldp+629,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len),3);
        bufp->chgIData(oldp+630,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word),30);
        bufp->chgBit(oldp+631,(((IData)(vlSelf->main__DOT__wbu_cyc) 
                                | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                   | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy)))));
        bufp->chgBit(oldp+632,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl));
        bufp->chgBit(oldp+633,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl));
        bufp->chgBit(oldp+634,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line));
        bufp->chgBit(oldp+635,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy));
        bufp->chgCData(oldp+636,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen),7);
        bufp->chgSData(oldp+637,(vlSelf->main__DOT__gpioi__DOT__r_gpio),16);
        bufp->chgSData(oldp+638,(vlSelf->main__DOT__gpioi__DOT__x_gpio),16);
        bufp->chgSData(oldp+639,(vlSelf->main__DOT__gpioi__DOT__q_gpio),16);
        bufp->chgBit(oldp+640,(vlSelf->main__DOT__i2ci__DOT__r_halted));
        bufp->chgBit(oldp+641,(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc));
        bufp->chgIData(oldp+642,(vlSelf->main__DOT__i2ci__DOT__pf_jump_addr),31);
        bufp->chgBit(oldp+643,(vlSelf->main__DOT__i2ci__DOT__pf_valid));
        bufp->chgBit(oldp+644,(vlSelf->main__DOT__i2ci__DOT__pf_ready));
        bufp->chgCData(oldp+645,(vlSelf->main__DOT__i2ci__DOT__pf_insn),8);
        bufp->chgIData(oldp+646,(vlSelf->main__DOT__i2ci__DOT__pf_insn_addr),31);
        bufp->chgBit(oldp+647,(vlSelf->main__DOT__i2ci__DOT__pf_illegal));
        bufp->chgBit(oldp+648,(vlSelf->main__DOT__i2ci__DOT__half_valid));
        bufp->chgBit(oldp+649,(vlSelf->main__DOT__i2ci__DOT__imm_cycle));
        bufp->chgBit(oldp+650,(vlSelf->main__DOT__i2ci__DOT__insn_ready));
        bufp->chgBit(oldp+651,(vlSelf->main__DOT__i2ci__DOT__half_ready));
        bufp->chgBit(oldp+652,(vlSelf->main__DOT__i2ci__DOT__i2c_abort));
        bufp->chgBit(oldp+653,(vlSelf->main__DOT__i2ci__DOT__insn_valid));
        bufp->chgSData(oldp+654,(vlSelf->main__DOT__i2ci__DOT__insn),12);
        bufp->chgCData(oldp+655,(vlSelf->main__DOT__i2ci__DOT__half_insn),4);
        bufp->chgBit(oldp+656,(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge));
        bufp->chgBit(oldp+657,(vlSelf->main__DOT__i2ci__DOT__i2c_stretch));
        bufp->chgSData(oldp+658,(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount),12);
        bufp->chgSData(oldp+659,(vlSelf->main__DOT__i2ci__DOT__ckcount),12);
        bufp->chgIData(oldp+660,(vlSelf->main__DOT__i2ci__DOT__abort_address),31);
        bufp->chgIData(oldp+661,(vlSelf->main__DOT__i2ci__DOT__jump_target),31);
        bufp->chgBit(oldp+662,(vlSelf->main__DOT__i2ci__DOT__r_wait));
        bufp->chgBit(oldp+663,(vlSelf->main__DOT__i2ci__DOT__soft_halt_request));
        bufp->chgBit(oldp+664,(vlSelf->main__DOT__i2ci__DOT__r_err));
        bufp->chgBit(oldp+665,(vlSelf->main__DOT__i2ci__DOT__r_aborted));
        bufp->chgBit(oldp+666,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual));
        bufp->chgBit(oldp+667,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda));
        bufp->chgBit(oldp+668,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl));
        bufp->chgBit(oldp+669,(((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                                | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
        bufp->chgBit(oldp+670,(vlSelf->main__DOT__i2ci__DOT__w_sda));
        bufp->chgBit(oldp+671,(vlSelf->main__DOT__i2ci__DOT__w_scl));
        bufp->chgBit(oldp+672,(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
        bufp->chgBit(oldp+673,(vlSelf->main__DOT__i2ci__DOT__s_tvalid));
        bufp->chgSData(oldp+674,(vlSelf->main__DOT__i2ci__DOT__ovw_data),10);
        bufp->chgBit(oldp+675,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl));
        bufp->chgBit(oldp+676,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda));
        bufp->chgBit(oldp+677,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt));
        bufp->chgCData(oldp+678,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel),2);
        bufp->chgSData(oldp+679,((0x7ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))),11);
        bufp->chgBit(oldp+680,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte));
        bufp->chgBit(oldp+681,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir));
        bufp->chgBit(oldp+682,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack));
        bufp->chgCData(oldp+683,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state),4);
        bufp->chgCData(oldp+684,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits),3);
        bufp->chgCData(oldp+685,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg),8);
        bufp->chgBit(oldp+686,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl));
        bufp->chgBit(oldp+687,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda));
        bufp->chgBit(oldp+688,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl));
        bufp->chgBit(oldp+689,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda));
        bufp->chgBit(oldp+690,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl));
        bufp->chgBit(oldp+691,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda));
        bufp->chgBit(oldp+692,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit));
        bufp->chgBit(oldp+693,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy));
        bufp->chgBit(oldp+694,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb));
        bufp->chgBit(oldp+695,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle));
        bufp->chgWData(oldp+696,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word),512);
        bufp->chgBit(oldp+712,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid));
        bufp->chgCData(oldp+713,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight),2);
        bufp->chgBit(oldp+714,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal));
        bufp->chgBit(oldp+715,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid));
        bufp->chgWData(oldp+716,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn),512);
        bufp->chgWData(oldp+732,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted),512);
        bufp->chgCData(oldp+748,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count),7);
        bufp->chgCData(oldp+749,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift),6);
        bufp->chgBit(oldp+750,(vlSelf->main__DOT__i2cscopei__DOT__read_address));
        bufp->chgSData(oldp+751,(vlSelf->main__DOT__i2cscopei__DOT__raddr),10);
        bufp->chgSData(oldp+752,(vlSelf->main__DOT__i2cscopei__DOT__waddr),10);
        bufp->chgBit(oldp+753,((1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                         >> 2U)))));
        bufp->chgBit(oldp+754,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                      >> 1U))));
        bufp->chgBit(oldp+755,((1U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))));
        bufp->chgCData(oldp+756,(vlSelf->main__DOT__i2cscopei__DOT__br_config),3);
        bufp->chgIData(oldp+757,(vlSelf->main__DOT__i2cscopei__DOT__br_holdoff),20);
        bufp->chgIData(oldp+758,(vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+759,(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered));
        bufp->chgBit(oldp+760,(vlSelf->main__DOT__i2cscopei__DOT__dr_primed));
        bufp->chgBit(oldp+761,(vlSelf->main__DOT__i2cscopei__DOT__dw_trigger));
        bufp->chgBit(oldp+762,(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped));
        bufp->chgCData(oldp+763,(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+764,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                      >> 4U))));
        bufp->chgIData(oldp+765,(vlSelf->main__DOT__i2cscopei__DOT__ck_addr),31);
        bufp->chgIData(oldp+766,(vlSelf->main__DOT__i2cscopei__DOT__qd_data),31);
        bufp->chgBit(oldp+767,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write));
        bufp->chgBit(oldp+768,(vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout));
        bufp->chgBit(oldp+769,(vlSelf->main__DOT__i2cscopei__DOT__new_data));
        bufp->chgBit(oldp+770,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+771,(vlSelf->main__DOT__i2cscopei__DOT__imm_adr));
        bufp->chgBit(oldp+772,(vlSelf->main__DOT__i2cscopei__DOT__lst_adr));
        bufp->chgIData(oldp+773,(vlSelf->main__DOT__i2cscopei__DOT__lst_val),31);
        bufp->chgIData(oldp+774,(vlSelf->main__DOT__i2cscopei__DOT__imm_val),31);
        bufp->chgBit(oldp+775,(vlSelf->main__DOT__i2cscopei__DOT__record_ce));
        bufp->chgIData(oldp+776,(vlSelf->main__DOT__i2cscopei__DOT__r_data),32);
        bufp->chgBit(oldp+777,(vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+778,(vlSelf->main__DOT__i2cscopei__DOT__this_addr),10);
        bufp->chgIData(oldp+779,(vlSelf->main__DOT__i2cscopei__DOT__nxt_mem),32);
        bufp->chgBit(oldp+780,(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt));
        bufp->chgCData(oldp+781,(vlSelf->main__DOT__rcv__DOT__state),4);
        bufp->chgCData(oldp+782,(vlSelf->main__DOT__rcv__DOT__baud_counter),7);
        bufp->chgBit(oldp+783,(vlSelf->main__DOT__rcv__DOT__zero_baud_counter));
        bufp->chgBit(oldp+784,(vlSelf->main__DOT__rcv__DOT__q_uart));
        bufp->chgBit(oldp+785,(vlSelf->main__DOT__rcv__DOT__qq_uart));
        bufp->chgBit(oldp+786,(vlSelf->main__DOT__rcv__DOT__ck_uart));
        bufp->chgCData(oldp+787,(vlSelf->main__DOT__rcv__DOT__chg_counter),7);
        bufp->chgBit(oldp+788,(vlSelf->main__DOT__rcv__DOT__half_baud_time));
        bufp->chgCData(oldp+789,(vlSelf->main__DOT__rcv__DOT__data_reg),8);
        bufp->chgBit(oldp+790,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_address));
        bufp->chgSData(oldp+791,(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr),10);
        bufp->chgSData(oldp+792,(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr),10);
        bufp->chgBit(oldp+793,((1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                         >> 2U)))));
        bufp->chgBit(oldp+794,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                      >> 1U))));
        bufp->chgBit(oldp+795,((1U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))));
        bufp->chgCData(oldp+796,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config),3);
        bufp->chgIData(oldp+797,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff),20);
        bufp->chgIData(oldp+798,(vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+799,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered));
        bufp->chgBit(oldp+800,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed));
        bufp->chgBit(oldp+801,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped));
        bufp->chgCData(oldp+802,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+803,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                      >> 4U))));
        bufp->chgIData(oldp+804,(vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr),31);
        bufp->chgIData(oldp+805,(vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data),31);
        bufp->chgBit(oldp+806,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write));
        bufp->chgBit(oldp+807,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout));
        bufp->chgBit(oldp+808,(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data));
        bufp->chgBit(oldp+809,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+810,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr));
        bufp->chgBit(oldp+811,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr));
        bufp->chgIData(oldp+812,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val),31);
        bufp->chgIData(oldp+813,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val),31);
        bufp->chgBit(oldp+814,(vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce));
        bufp->chgIData(oldp+815,(vlSelf->main__DOT__scope1_ddr3i__DOT__r_data),32);
        bufp->chgBit(oldp+816,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+817,(vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr),10);
        bufp->chgIData(oldp+818,(vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem),32);
        bufp->chgBit(oldp+819,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt));
        bufp->chgBit(oldp+820,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_address));
        bufp->chgSData(oldp+821,(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr),10);
        bufp->chgSData(oldp+822,(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr),10);
        bufp->chgBit(oldp+823,((1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                         >> 2U)))));
        bufp->chgBit(oldp+824,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                      >> 1U))));
        bufp->chgBit(oldp+825,((1U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))));
        bufp->chgCData(oldp+826,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config),3);
        bufp->chgIData(oldp+827,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff),20);
        bufp->chgIData(oldp+828,(vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+829,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered));
        bufp->chgBit(oldp+830,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed));
        bufp->chgBit(oldp+831,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped));
        bufp->chgCData(oldp+832,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+833,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                      >> 4U))));
        bufp->chgIData(oldp+834,(vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr),31);
        bufp->chgIData(oldp+835,(vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data),31);
        bufp->chgBit(oldp+836,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write));
        bufp->chgBit(oldp+837,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout));
        bufp->chgBit(oldp+838,(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data));
        bufp->chgBit(oldp+839,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+840,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr));
        bufp->chgBit(oldp+841,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr));
        bufp->chgIData(oldp+842,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val),31);
        bufp->chgIData(oldp+843,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val),31);
        bufp->chgBit(oldp+844,(vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce));
        bufp->chgIData(oldp+845,(vlSelf->main__DOT__scope2_ddr3i__DOT__r_data),32);
        bufp->chgBit(oldp+846,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+847,(vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr),10);
        bufp->chgIData(oldp+848,(vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem),32);
        bufp->chgBit(oldp+849,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt));
        bufp->chgBit(oldp+850,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_address));
        bufp->chgSData(oldp+851,(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr),10);
        bufp->chgSData(oldp+852,(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr),10);
        bufp->chgBit(oldp+853,((1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                         >> 2U)))));
        bufp->chgBit(oldp+854,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                      >> 1U))));
        bufp->chgBit(oldp+855,((1U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))));
        bufp->chgCData(oldp+856,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config),3);
        bufp->chgIData(oldp+857,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff),20);
        bufp->chgIData(oldp+858,(vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter),20);
        bufp->chgBit(oldp+859,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered));
        bufp->chgBit(oldp+860,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed));
        bufp->chgBit(oldp+861,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped));
        bufp->chgCData(oldp+862,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe),5);
        bufp->chgBit(oldp+863,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                      >> 4U))));
        bufp->chgIData(oldp+864,(vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr),31);
        bufp->chgIData(oldp+865,(vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data),31);
        bufp->chgBit(oldp+866,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write));
        bufp->chgBit(oldp+867,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout));
        bufp->chgBit(oldp+868,(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data));
        bufp->chgBit(oldp+869,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit));
        bufp->chgBit(oldp+870,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr));
        bufp->chgBit(oldp+871,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr));
        bufp->chgIData(oldp+872,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val),31);
        bufp->chgIData(oldp+873,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val),31);
        bufp->chgBit(oldp+874,(vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce));
        bufp->chgIData(oldp+875,(vlSelf->main__DOT__scope3_ddr3i__DOT__r_data),32);
        bufp->chgBit(oldp+876,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack));
        bufp->chgSData(oldp+877,(vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr),10);
        bufp->chgIData(oldp+878,(vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem),32);
        bufp->chgBit(oldp+879,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt));
        bufp->chgBit(oldp+880,(vlSelf->main__DOT__spioi__DOT__led_demo));
        bufp->chgCData(oldp+881,(vlSelf->main__DOT__spioi__DOT__r_led),8);
        bufp->chgCData(oldp+882,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),8);
        bufp->chgCData(oldp+883,(vlSelf->main__DOT__spioi__DOT__bounced),8);
        bufp->chgCData(oldp+884,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw),8);
        bufp->chgBit(oldp+885,(vlSelf->main__DOT__spioi__DOT__sw_int));
        bufp->chgBit(oldp+886,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int));
        bufp->chgCData(oldp+887,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn),5);
        bufp->chgCData(oldp+888,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),5);
        bufp->chgSData(oldp+889,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe),10);
        bufp->chgSData(oldp+890,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe),16);
        bufp->chgCData(oldp+891,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner),8);
        bufp->chgBit(oldp+892,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir));
        bufp->chgIData(oldp+893,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr),25);
        bufp->chgBit(oldp+894,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk));
        bufp->chgCData(oldp+895,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr),5);
        bufp->chgCData(oldp+896,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness),5);
        bufp->chgCData(oldp+897,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness),5);
        bufp->chgCData(oldp+898,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness),5);
        bufp->chgCData(oldp+899,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness),5);
        bufp->chgCData(oldp+900,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness),5);
        bufp->chgCData(oldp+901,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness),5);
        bufp->chgCData(oldp+902,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness),5);
        bufp->chgCData(oldp+903,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness),5);
        bufp->chgSData(oldp+904,(vlSelf->main__DOT__swic__DOT__main_int_vector),15);
        bufp->chgSData(oldp+905,(vlSelf->main__DOT__swic__DOT__alt_int_vector),15);
        bufp->chgBit(oldp+906,(vlSelf->main__DOT__swic__DOT__ctri_int));
        bufp->chgBit(oldp+907,(vlSelf->main__DOT__swic__DOT__tma_int));
        bufp->chgBit(oldp+908,(vlSelf->main__DOT__swic__DOT__tmb_int));
        bufp->chgBit(oldp+909,(vlSelf->main__DOT__swic__DOT__tmc_int));
        bufp->chgBit(oldp+910,(vlSelf->main__DOT__swic__DOT__jif_int));
        bufp->chgBit(oldp+911,(vlSelf->main__DOT__swic__DOT__dmac_int));
        bufp->chgBit(oldp+912,(vlSelf->main__DOT__swic__DOT__mtc_int));
        bufp->chgBit(oldp+913,(vlSelf->main__DOT__swic__DOT__moc_int));
        bufp->chgBit(oldp+914,(vlSelf->main__DOT__swic__DOT__mpc_int));
        bufp->chgBit(oldp+915,(vlSelf->main__DOT__swic__DOT__mic_int));
        bufp->chgBit(oldp+916,(vlSelf->main__DOT__swic__DOT__utc_int));
        bufp->chgBit(oldp+917,(vlSelf->main__DOT__swic__DOT__uoc_int));
        bufp->chgBit(oldp+918,(vlSelf->main__DOT__swic__DOT__upc_int));
        bufp->chgBit(oldp+919,(vlSelf->main__DOT__swic__DOT__uic_int));
        bufp->chgIData(oldp+920,(((4U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
        bufp->chgBit(oldp+921,(vlSelf->main__DOT__swic__DOT__actr_ack));
        bufp->chgBit(oldp+922,(((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                                | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_read) 
                                   | ((~ ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                          >> 6U)) & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb))))));
        bufp->chgBit(oldp+923,(vlSelf->main__DOT__swic__DOT__sys_cyc));
        bufp->chgBit(oldp+924,(vlSelf->main__DOT__swic__DOT__sys_stb));
        bufp->chgBit(oldp+925,(vlSelf->main__DOT__swic__DOT__sys_we));
        bufp->chgCData(oldp+926,(vlSelf->main__DOT__swic__DOT__sys_addr),8);
        bufp->chgIData(oldp+927,(vlSelf->main__DOT__swic__DOT__sys_data),32);
        bufp->chgIData(oldp+928,(vlSelf->main__DOT__swic__DOT__cpu_addr),25);
        bufp->chgIData(oldp+929,(vlSelf->main__DOT__swic__DOT__sys_idata),32);
        bufp->chgBit(oldp+930,(vlSelf->main__DOT__swic__DOT__sys_ack));
        bufp->chgBit(oldp+931,(vlSelf->main__DOT__swic__DOT__sel_timer));
        bufp->chgBit(oldp+932,(vlSelf->main__DOT__swic__DOT__sel_pic));
        bufp->chgBit(oldp+933,(vlSelf->main__DOT__swic__DOT__sel_apic));
        bufp->chgBit(oldp+934,(vlSelf->main__DOT__swic__DOT__sel_watchdog));
        bufp->chgBit(oldp+935,(vlSelf->main__DOT__swic__DOT__sel_bus_watchdog));
        bufp->chgBit(oldp+936,(vlSelf->main__DOT__swic__DOT__sel_dmac));
        bufp->chgBit(oldp+937,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                & ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                                   >> 7U))));
        bufp->chgBit(oldp+938,(vlSelf->main__DOT__swic__DOT__dbg_cyc));
        bufp->chgBit(oldp+939,(vlSelf->main__DOT__swic__DOT__dbg_stb));
        bufp->chgBit(oldp+940,(vlSelf->main__DOT__swic__DOT__dbg_we));
        bufp->chgCData(oldp+941,(vlSelf->main__DOT__swic__DOT__dbg_addr),7);
        bufp->chgIData(oldp+942,(vlSelf->main__DOT__swic__DOT__dbg_idata),32);
        bufp->chgBit(oldp+943,(vlSelf->main__DOT__swic__DOT__dbg_ack));
        bufp->chgBit(oldp+944,(vlSelf->main__DOT__swic__DOT__dbg_stall));
        bufp->chgIData(oldp+945,(vlSelf->main__DOT__swic__DOT__dbg_odata),32);
        bufp->chgCData(oldp+946,(vlSelf->main__DOT__swic__DOT__dbg_sel),4);
        bufp->chgBit(oldp+947,(vlSelf->main__DOT__swic__DOT__no_dbg_err));
        bufp->chgBit(oldp+948,(vlSelf->main__DOT__swic__DOT__cpu_break));
        bufp->chgBit(oldp+949,(vlSelf->main__DOT__swic__DOT__dbg_cmd_write));
        bufp->chgBit(oldp+950,(vlSelf->main__DOT__swic__DOT__dbg_cpu_write));
        bufp->chgBit(oldp+951,(vlSelf->main__DOT__swic__DOT__dbg_cpu_read));
        bufp->chgBit(oldp+952,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold));
        bufp->chgBit(oldp+953,(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch));
        bufp->chgBit(oldp+954,(vlSelf->main__DOT__swic__DOT__reset_request));
        bufp->chgBit(oldp+955,(((~ vlSelf->main__DOT__swic__DOT__dbg_idata) 
                                & (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0))));
        bufp->chgBit(oldp+956,(vlSelf->main__DOT__swic__DOT__halt_request));
        bufp->chgBit(oldp+957,(vlSelf->main__DOT__swic__DOT__step_request));
        bufp->chgBit(oldp+958,(vlSelf->main__DOT__swic__DOT__clear_cache_request));
        bufp->chgBit(oldp+959,(vlSelf->main__DOT__swic__DOT__cmd_reset));
        bufp->chgBit(oldp+960,(vlSelf->main__DOT__swic__DOT__cmd_halt));
        bufp->chgBit(oldp+961,(vlSelf->main__DOT__swic__DOT__cmd_step));
        bufp->chgBit(oldp+962,(vlSelf->main__DOT__swic__DOT__cmd_clear_cache));
        bufp->chgBit(oldp+963,(vlSelf->main__DOT__swic__DOT__cmd_write));
        bufp->chgBit(oldp+964,(vlSelf->main__DOT__swic__DOT__cmd_read));
        bufp->chgCData(oldp+965,(vlSelf->main__DOT__swic__DOT__cmd_waddr),5);
        bufp->chgIData(oldp+966,(vlSelf->main__DOT__swic__DOT__cmd_wdata),32);
        bufp->chgCData(oldp+967,(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc),3);
        bufp->chgBit(oldp+968,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))));
        bufp->chgBit(oldp+969,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall));
        bufp->chgIData(oldp+970,(((((IData)(vlSelf->main__DOT__gpio_int) 
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
                                      << 0xbU) | (((IData)(vlSelf->main__DOT__swic__DOT__pic_interrupt) 
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
        bufp->chgBit(oldp+971,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                      >> 1U))));
        bufp->chgBit(oldp+972,(vlSelf->main__DOT__swic__DOT__wdt_ack));
        bufp->chgBit(oldp+973,(vlSelf->main__DOT__swic__DOT__wdt_reset));
        bufp->chgIData(oldp+974,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),32);
        bufp->chgBit(oldp+975,(vlSelf->main__DOT__swic__DOT__wdbus_ack));
        bufp->chgIData(oldp+976,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),25);
        bufp->chgIData(oldp+977,(vlSelf->main__DOT__swic__DOT__pic_data),32);
        bufp->chgIData(oldp+978,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),32);
        bufp->chgBit(oldp+979,((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                                      | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                         | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                            >> 2U))))));
        bufp->chgBit(oldp+980,(vlSelf->main__DOT__swic__DOT__wdbus_int));
        bufp->chgBit(oldp+981,(vlSelf->main__DOT__swic__DOT__cpu_pf_stall));
        bufp->chgBit(oldp+982,(vlSelf->main__DOT__swic__DOT__cpu_i_count));
        bufp->chgBit(oldp+983,(vlSelf->main__DOT__swic__DOT__dmac_stb));
        bufp->chgBit(oldp+984,(vlSelf->main__DOT__swic__DOT__dc_err));
        bufp->chgIData(oldp+985,(vlSelf->main__DOT__swic__DOT__dmac_data),32);
        bufp->chgBit(oldp+986,(vlSelf->main__DOT__swic__DOT__dmac_ack));
        bufp->chgBit(oldp+987,(vlSelf->main__DOT__swic__DOT__dc_cyc));
        bufp->chgBit(oldp+988,(vlSelf->main__DOT__swic__DOT__dc_stb));
        bufp->chgBit(oldp+989,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)))));
        bufp->chgBit(oldp+990,(vlSelf->main__DOT__swic__DOT__dc_stall));
        bufp->chgBit(oldp+991,(vlSelf->main__DOT__swic__DOT__dc_ack));
        bufp->chgIData(oldp+992,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                   ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr
                                   : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr)),25);
        bufp->chgWData(oldp+993,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data),512);
        bufp->chgQData(oldp+1009,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                    : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)),64);
        bufp->chgBit(oldp+1011,(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc));
        bufp->chgIData(oldp+1012,((((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
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
        bufp->chgBit(oldp+1013,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__sel_apic))));
        bufp->chgIData(oldp+1014,(vlSelf->main__DOT__swic__DOT__ctri_data),32);
        bufp->chgBit(oldp+1015,(vlSelf->main__DOT__swic__DOT__tma_ack));
        bufp->chgBit(oldp+1016,(vlSelf->main__DOT__swic__DOT__tmb_ack));
        bufp->chgBit(oldp+1017,(vlSelf->main__DOT__swic__DOT__tmc_ack));
        bufp->chgBit(oldp+1018,(vlSelf->main__DOT__swic__DOT__jif_ack));
        bufp->chgIData(oldp+1019,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                    << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)),32);
        bufp->chgIData(oldp+1020,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                    << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)),32);
        bufp->chgIData(oldp+1021,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                    << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value)),32);
        bufp->chgIData(oldp+1022,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter),32);
        bufp->chgBit(oldp+1023,(((IData)(vlSelf->main__DOT__swic__DOT__sys_cyc) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                    & (IData)(vlSelf->main__DOT__swic__DOT__sel_pic)))));
        bufp->chgBit(oldp+1024,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                  ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                                  : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb))));
        bufp->chgBit(oldp+1025,(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc));
        bufp->chgBit(oldp+1026,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl))));
        bufp->chgBit(oldp+1027,(vlSelf->main__DOT__swic__DOT__cpu_we));
        bufp->chgWData(oldp+1028,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data),512);
        bufp->chgQData(oldp+1044,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                    : 0xffffffffffffffffULL)),64);
        bufp->chgWData(oldp+1046,(vlSelf->main__DOT__swic__DOT__cpu_idata),512);
        bufp->chgBit(oldp+1062,(vlSelf->main__DOT__swic__DOT__cpu_stall));
        bufp->chgBit(oldp+1063,(vlSelf->main__DOT__swic__DOT__pic_interrupt));
        bufp->chgBit(oldp+1064,(vlSelf->main__DOT__swic__DOT__cpu_ack));
        bufp->chgBit(oldp+1065,(vlSelf->main__DOT__swic__DOT__cpu_err));
        bufp->chgIData(oldp+1066,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg),32);
        bufp->chgBit(oldp+1067,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                       | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1068,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                  >> 2U) & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
        bufp->chgBit(oldp+1069,(((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
        bufp->chgBit(oldp+1070,(vlSelf->main__DOT__swic__DOT__r_mmus_ack));
        bufp->chgBit(oldp+1071,(vlSelf->main__DOT__swic__DOT__ext_err));
        bufp->chgIData(oldp+1072,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
        bufp->chgCData(oldp+1073,(vlSelf->main__DOT__swic__DOT__w_ack_idx),3);
        bufp->chgCData(oldp+1074,(vlSelf->main__DOT__swic__DOT__ack_idx),3);
        bufp->chgBit(oldp+1075,(vlSelf->main__DOT__swic__DOT__last_sys_stb));
        bufp->chgBit(oldp+1076,(vlSelf->main__DOT__swic__DOT__cmd_read_ack));
        bufp->chgBit(oldp+1077,(vlSelf->main__DOT__swic__DOT__dbg_pre_ack));
        bufp->chgCData(oldp+1078,(vlSelf->main__DOT__swic__DOT__dbg_pre_addr),2);
        bufp->chgIData(oldp+1079,(vlSelf->main__DOT__swic__DOT__dbg_cpu_status),32);
        bufp->chgBit(oldp+1080,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack));
        bufp->chgBit(oldp+1081,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack));
        bufp->chgBit(oldp+1082,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack));
        bufp->chgBit(oldp+1083,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack));
        bufp->chgBit(oldp+1084,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack));
        bufp->chgBit(oldp+1085,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack));
        bufp->chgBit(oldp+1086,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack));
        bufp->chgBit(oldp+1087,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack));
        bufp->chgIData(oldp+1088,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data),32);
        bufp->chgIData(oldp+1089,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data),32);
        bufp->chgIData(oldp+1090,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data),32);
        bufp->chgIData(oldp+1091,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data),32);
        bufp->chgIData(oldp+1092,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data),32);
        bufp->chgIData(oldp+1093,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data),32);
        bufp->chgIData(oldp+1094,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data),32);
        bufp->chgIData(oldp+1095,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data),32);
        bufp->chgBit(oldp+1096,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5));
        bufp->chgBit(oldp+1097,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1098,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1099,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))));
        bufp->chgBit(oldp+1100,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5));
        bufp->chgBit(oldp+1101,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_i_count) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                    >> 1U))));
        bufp->chgBit(oldp+1102,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5));
        bufp->chgBit(oldp+1103,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1104,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_pf_stall) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                    >> 1U))));
        bufp->chgBit(oldp+1105,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5));
        bufp->chgBit(oldp+1106,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                                       & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1107,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5));
        bufp->chgBit(oldp+1108,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we));
        bufp->chgCData(oldp+1109,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr),7);
        bufp->chgIData(oldp+1110,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data),32);
        bufp->chgCData(oldp+1111,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel),4);
        bufp->chgCData(oldp+1112,((3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))),2);
        bufp->chgBit(oldp+1113,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request));
        bufp->chgBit(oldp+1114,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort));
        bufp->chgBit(oldp+1115,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy));
        bufp->chgBit(oldp+1116,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err));
        bufp->chgIData(oldp+1117,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src),31);
        bufp->chgIData(oldp+1118,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst),31);
        bufp->chgIData(oldp+1119,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                                   << 6U)),31);
        bufp->chgIData(oldp+1120,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                                   << 6U)),31);
        bufp->chgIData(oldp+1121,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length),31);
        bufp->chgIData(oldp+1122,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length),31);
        bufp->chgSData(oldp+1123,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen),11);
        bufp->chgBit(oldp+1124,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger));
        bufp->chgBit(oldp+1125,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request));
        bufp->chgBit(oldp+1126,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request));
        bufp->chgBit(oldp+1127,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy));
        bufp->chgBit(oldp+1128,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy));
        bufp->chgBit(oldp+1129,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err));
        bufp->chgBit(oldp+1130,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err));
        bufp->chgBit(oldp+1131,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc));
        bufp->chgBit(oldp+1132,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc));
        bufp->chgCData(oldp+1133,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size),2);
        bufp->chgCData(oldp+1134,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size),2);
        bufp->chgIData(oldp+1135,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr),31);
        bufp->chgIData(oldp+1136,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr),31);
        bufp->chgSData(oldp+1137,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen),11);
        bufp->chgBit(oldp+1138,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc));
        bufp->chgBit(oldp+1139,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb));
        bufp->chgBit(oldp+1140,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall));
        bufp->chgBit(oldp+1141,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack));
        bufp->chgBit(oldp+1142,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err));
        bufp->chgIData(oldp+1143,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr),25);
        bufp->chgQData(oldp+1144,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel),64);
        bufp->chgBit(oldp+1146,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid));
        bufp->chgBit(oldp+1147,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready));
        bufp->chgBit(oldp+1148,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last));
        bufp->chgWData(oldp+1149,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg),512);
        bufp->chgCData(oldp+1165,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes),7);
        bufp->chgBit(oldp+1166,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
        bufp->chgBit(oldp+1167,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))));
        bufp->chgBit(oldp+1168,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last));
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
        bufp->chgWData(oldp+1169,(__Vtemp_hd1e4c677__0),512);
        bufp->chgCData(oldp+1185,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes),7);
        bufp->chgBit(oldp+1186,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)))));
        bufp->chgBit(oldp+1187,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
        bufp->chgBit(oldp+1188,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
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
        bufp->chgWData(oldp+1189,(__Vtemp_h6ddae8d1__0),512);
        bufp->chgCData(oldp+1205,((0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])),7);
        bufp->chgBit(oldp+1206,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full));
        bufp->chgBit(oldp+1207,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty));
        bufp->chgCData(oldp+1208,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill),5);
        bufp->chgBit(oldp+1209,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid));
        bufp->chgBit(oldp+1210,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready));
        bufp->chgBit(oldp+1211,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last));
        bufp->chgWData(oldp+1212,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg),512);
        bufp->chgCData(oldp+1228,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes),7);
        bufp->chgBit(oldp+1229,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc));
        bufp->chgBit(oldp+1230,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb));
        bufp->chgBit(oldp+1231,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall));
        bufp->chgBit(oldp+1232,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack));
        bufp->chgBit(oldp+1233,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err));
        bufp->chgIData(oldp+1234,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr),25);
        bufp->chgQData(oldp+1235,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel),64);
        bufp->chgBit(oldp+1237,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
        bufp->chgBit(oldp+1238,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner));
        bufp->chgBit(oldp+1239,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger));
        bufp->chgBit(oldp+1240,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err));
        bufp->chgBit(oldp+1241,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len));
        bufp->chgBit(oldp+1242,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy));
        bufp->chgCData(oldp+1243,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel),5);
        bufp->chgIData(oldp+1244,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src),32);
        bufp->chgIData(oldp+1245,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst),32);
        bufp->chgIData(oldp+1246,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len),32);
        bufp->chgIData(oldp+1247,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen),32);
        bufp->chgIData(oldp+1248,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg),32);
        bufp->chgCData(oldp+1249,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state),2);
        bufp->chgBit(oldp+1250,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset));
        bufp->chgCData(oldp+1251,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size),7);
        bufp->chgCData(oldp+1252,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size),7);
        bufp->chgCData(oldp+1253,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size),7);
        bufp->chgCData(oldp+1254,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size),7);
        bufp->chgIData(oldp+1255,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr),31);
        bufp->chgIData(oldp+1256,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr),31);
        bufp->chgCData(oldp+1257,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr),6);
        bufp->chgCData(oldp+1258,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr),6);
        bufp->chgQData(oldp+1259,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel),64);
        bufp->chgQData(oldp+1261,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
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
        bufp->chgQData(oldp+1263,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel),64);
        bufp->chgQData(oldp+1265,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
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
        bufp->chgSData(oldp+1267,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding),11);
        bufp->chgCData(oldp+1268,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill),8);
        bufp->chgCData(oldp+1269,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill),8);
        bufp->chgSData(oldp+1270,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len),11);
        bufp->chgSData(oldp+1271,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len),11);
        bufp->chgCData(oldp+1272,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift),6);
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
        bufp->chgWData(oldp+1273,(__Vtemp_h6d0d1506__0),512);
        bufp->chgBit(oldp+1289,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc));
        bufp->chgCData(oldp+1290,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size),2);
        bufp->chgWData(oldp+1291,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg),1024);
        bufp->chgCData(oldp+1323,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill),8);
        bufp->chgCData(oldp+1324,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill),8);
        bufp->chgBit(oldp+1325,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last));
        bufp->chgBit(oldp+1326,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last));
        bufp->chgBit(oldp+1327,((0x40U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill))));
        bufp->chgCData(oldp+1328,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift),6);
        bufp->chgWData(oldp+1329,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data),512);
        bufp->chgBit(oldp+1345,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc));
        bufp->chgCData(oldp+1346,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size),2);
        bufp->chgIData(oldp+1347,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr),32);
        bufp->chgCData(oldp+1348,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr),6);
        bufp->chgWData(oldp+1349,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data),1024);
        bufp->chgWData(oldp+1381,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data),512);
        bufp->chgWData(oldp+1397,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel),128);
        bufp->chgWData(oldp+1401,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel),128);
        bufp->chgQData(oldp+1405,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel),64);
        bufp->chgBit(oldp+1407,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last));
        bufp->chgSData(oldp+1408,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding),10);
        bufp->chgBit(oldp+1409,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full));
        bufp->chgBit(oldp+1410,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
                                 >> 0x1fU)));
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
        bufp->chgWData(oldp+1411,(__Vtemp_h6b3f223d__0),520);
        bufp->chgWData(oldp+1428,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data),520);
        bufp->chgWData(oldp+1445,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[0]),520);
        bufp->chgWData(oldp+1462,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[1]),520);
        bufp->chgWData(oldp+1479,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[2]),520);
        bufp->chgWData(oldp+1496,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[3]),520);
        bufp->chgWData(oldp+1513,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[4]),520);
        bufp->chgWData(oldp+1530,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[5]),520);
        bufp->chgWData(oldp+1547,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[6]),520);
        bufp->chgWData(oldp+1564,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[7]),520);
        bufp->chgWData(oldp+1581,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[8]),520);
        bufp->chgWData(oldp+1598,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[9]),520);
        bufp->chgWData(oldp+1615,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[10]),520);
        bufp->chgWData(oldp+1632,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[11]),520);
        bufp->chgWData(oldp+1649,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[12]),520);
        bufp->chgWData(oldp+1666,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[13]),520);
        bufp->chgWData(oldp+1683,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[14]),520);
        bufp->chgWData(oldp+1700,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[15]),520);
        bufp->chgCData(oldp+1717,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr),5);
        bufp->chgCData(oldp+1718,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr),5);
        bufp->chgBit(oldp+1719,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr));
        bufp->chgBit(oldp+1720,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd));
        bufp->chgBit(oldp+1721,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last));
        bufp->chgBit(oldp+1722,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next));
        bufp->chgCData(oldp+1723,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill),7);
        bufp->chgCData(oldp+1724,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter),5);
        bufp->chgSData(oldp+1725,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state),15);
        bufp->chgSData(oldp+1726,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable),15);
        bufp->chgBit(oldp+1727,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie));
        bufp->chgBit(oldp+1728,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any));
        bufp->chgBit(oldp+1729,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write));
        bufp->chgBit(oldp+1730,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints));
        bufp->chgBit(oldp+1731,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints));
        bufp->chgSData(oldp+1732,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state),15);
        bufp->chgSData(oldp+1733,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable),15);
        bufp->chgBit(oldp+1734,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie));
        bufp->chgBit(oldp+1735,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any));
        bufp->chgBit(oldp+1736,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write));
        bufp->chgBit(oldp+1737,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints));
        bufp->chgBit(oldp+1738,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints));
        bufp->chgBit(oldp+1739,(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner));
        bufp->chgCData(oldp+1740,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))),5);
        bufp->chgBit(oldp+1741,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc));
        bufp->chgBit(oldp+1742,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
        bufp->chgIData(oldp+1743,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address),31);
        bufp->chgIData(oldp+1744,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]),32);
        bufp->chgIData(oldp+1745,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc),31);
        bufp->chgBit(oldp+1746,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
        bufp->chgBit(oldp+1747,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
        bufp->chgBit(oldp+1748,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
        bufp->chgBit(oldp+1749,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
        bufp->chgBit(oldp+1750,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
        bufp->chgBit(oldp+1751,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
        bufp->chgBit(oldp+1752,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err));
        bufp->chgIData(oldp+1753,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr),25);
        bufp->chgBit(oldp+1754,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache));
        bufp->chgBit(oldp+1755,((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
        bufp->chgCData(oldp+1756,((7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),3);
        bufp->chgIData(oldp+1757,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr),32);
        bufp->chgIData(oldp+1758,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc),31);
        bufp->chgIData(oldp+1759,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata),32);
        bufp->chgCData(oldp+1760,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R),5);
        bufp->chgBit(oldp+1761,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
        bufp->chgBit(oldp+1762,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy));
        bufp->chgBit(oldp+1763,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled));
        bufp->chgBit(oldp+1764,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
        bufp->chgBit(oldp+1765,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err));
        bufp->chgCData(oldp+1766,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
        bufp->chgIData(oldp+1767,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
        bufp->chgBit(oldp+1768,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
        bufp->chgBit(oldp+1769,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
        bufp->chgBit(oldp+1770,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
        bufp->chgBit(oldp+1771,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl));
        bufp->chgIData(oldp+1772,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr),25);
        bufp->chgBit(oldp+1773,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
        bufp->chgBit(oldp+1774,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
        bufp->chgBit(oldp+1775,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
        bufp->chgBit(oldp+1776,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err));
        bufp->chgQData(oldp+1777,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel),64);
        bufp->chgIData(oldp+1779,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__ik),32);
        bufp->chgBit(oldp+1780,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc));
        bufp->chgBit(oldp+1781,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb));
        bufp->chgBit(oldp+1782,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack));
        bufp->chgBit(oldp+1783,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line));
        bufp->chgBit(oldp+1784,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb));
        bufp->chgBit(oldp+1785,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
        bufp->chgBit(oldp+1786,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
        bufp->chgCData(oldp+1787,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending),5);
        bufp->chgCData(oldp+1788,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v),8);
        bufp->chgIData(oldp+1789,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[0]),22);
        bufp->chgIData(oldp+1790,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[1]),22);
        bufp->chgIData(oldp+1791,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[2]),22);
        bufp->chgIData(oldp+1792,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[3]),22);
        bufp->chgIData(oldp+1793,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[4]),22);
        bufp->chgIData(oldp+1794,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[5]),22);
        bufp->chgIData(oldp+1795,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[6]),22);
        bufp->chgIData(oldp+1796,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[7]),22);
        bufp->chgBit(oldp+1797,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag));
        bufp->chgCData(oldp+1798,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state),2);
        bufp->chgCData(oldp+1799,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr),6);
        bufp->chgWData(oldp+1800,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword),512);
        bufp->chgWData(oldp+1816,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword),512);
        bufp->chgBit(oldp+1832,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl));
        bufp->chgBit(oldp+1833,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl));
        bufp->chgBit(oldp+1834,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr));
        bufp->chgWData(oldp+1835,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata),512);
        bufp->chgQData(oldp+1851,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel),64);
        bufp->chgCData(oldp+1853,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr),6);
        bufp->chgIData(oldp+1854,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag),22);
        bufp->chgBit(oldp+1855,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid));
        bufp->chgCData(oldp+1856,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 9U))),3);
        bufp->chgCData(oldp+1857,((0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                            >> 6U))),6);
        bufp->chgBit(oldp+1858,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow));
        bufp->chgBit(oldp+1859,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable));
        bufp->chgBit(oldp+1860,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address));
        bufp->chgBit(oldp+1861,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable));
        bufp->chgBit(oldp+1862,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid));
        bufp->chgBit(oldp+1863,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid));
        bufp->chgBit(oldp+1864,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd));
        bufp->chgBit(oldp+1865,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss));
        bufp->chgBit(oldp+1866,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending));
        bufp->chgIData(oldp+1867,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr),25);
        bufp->chgCData(oldp+1868,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                         >> 3U))),3);
        bufp->chgCData(oldp+1869,((0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)),6);
        bufp->chgIData(oldp+1870,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                                >> 3U))),22);
        bufp->chgBit(oldp+1871,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb));
        bufp->chgBit(oldp+1872,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv));
        bufp->chgBit(oldp+1873,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache));
        bufp->chgIData(oldp+1874,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag),22);
        bufp->chgSData(oldp+1875,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data),13);
        bufp->chgBit(oldp+1876,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie));
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
        bufp->chgWData(oldp+1877,(__Vtemp_h01ff8f7b__0),512);
        bufp->chgWData(oldp+1893,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted),512);
        bufp->chgCData(oldp+1909,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel),4);
        bufp->chgQData(oldp+1910,(((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                              >> 0x18U))
                                    ? ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                       >> (3U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                                    : (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                        << 0x3cU) >> 
                                       (0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),64);
        bufp->chgIData(oldp+1912,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift),32);
        bufp->chgWData(oldp+1913,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift),512);
        bufp->chgWData(oldp+1929,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data),512);
        bufp->chgSData(oldp+1945,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[0]),12);
        bufp->chgSData(oldp+1946,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[1]),12);
        bufp->chgSData(oldp+1947,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[2]),12);
        bufp->chgSData(oldp+1948,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[3]),12);
        bufp->chgSData(oldp+1949,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[4]),12);
        bufp->chgSData(oldp+1950,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[5]),12);
        bufp->chgSData(oldp+1951,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[6]),12);
        bufp->chgSData(oldp+1952,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[7]),12);
        bufp->chgSData(oldp+1953,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[8]),12);
        bufp->chgSData(oldp+1954,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[9]),12);
        bufp->chgSData(oldp+1955,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[10]),12);
        bufp->chgSData(oldp+1956,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[11]),12);
        bufp->chgSData(oldp+1957,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[12]),12);
        bufp->chgSData(oldp+1958,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[13]),12);
        bufp->chgSData(oldp+1959,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[14]),12);
        bufp->chgSData(oldp+1960,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[15]),12);
        bufp->chgCData(oldp+1961,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr),5);
        bufp->chgCData(oldp+1962,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr),5);
        bufp->chgIData(oldp+1963,((0x7fffffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)),31);
        bufp->chgBit(oldp+1964,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v));
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
        bufp->chgWData(oldp+1965,(__Vtemp_he3c3974d__0),512);
        bufp->chgIData(oldp+1981,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[0]),19);
        bufp->chgIData(oldp+1982,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[1]),19);
        bufp->chgIData(oldp+1983,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[2]),19);
        bufp->chgIData(oldp+1984,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[3]),19);
        bufp->chgIData(oldp+1985,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[4]),19);
        bufp->chgIData(oldp+1986,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[5]),19);
        bufp->chgIData(oldp+1987,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[6]),19);
        bufp->chgIData(oldp+1988,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[7]),19);
        bufp->chgCData(oldp+1989,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask),8);
        bufp->chgBit(oldp+1990,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc));
        bufp->chgBit(oldp+1991,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
        bufp->chgBit(oldp+1992,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc));
        bufp->chgBit(oldp+1993,((((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                >> 9U)) 
                                  == (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                                   >> 9U))) 
                                 & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
                                     == (0x3fffffU 
                                         & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                            >> 9U))) 
                                    & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                       >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                 >> 9U)))))));
        bufp->chgBit(oldp+1994,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last));
        bufp->chgIData(oldp+1995,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc),31);
        bufp->chgCData(oldp+1996,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr),6);
        bufp->chgIData(oldp+1997,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup),22);
        bufp->chgIData(oldp+1998,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup),22);
        bufp->chgIData(oldp+1999,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup),22);
        bufp->chgIData(oldp+2000,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                >> 9U))),22);
        bufp->chgIData(oldp+2001,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                                >> 9U))),22);
        bufp->chgBit(oldp+2002,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid));
        bufp->chgIData(oldp+2003,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache),22);
        bufp->chgWData(oldp+2004,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache),512);
        bufp->chgWData(oldp+2020,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache),512);
        bufp->chgBit(oldp+2036,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc));
        bufp->chgCData(oldp+2037,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay),2);
        bufp->chgBit(oldp+2038,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask));
        bufp->chgBit(oldp+2039,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack));
        bufp->chgBit(oldp+2040,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload));
        bufp->chgBit(oldp+2041,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr));
        bufp->chgBit(oldp+2042,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort));
        bufp->chgCData(oldp+2043,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr),3);
        bufp->chgBit(oldp+2044,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result));
        bufp->chgCData(oldp+2045,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                         >> 9U))),3);
        bufp->chgCData(oldp+2046,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                         >> 9U))),3);
        bufp->chgWData(oldp+2047,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted),512);
        bufp->chgCData(oldp+2063,((0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                           >> 2U))),4);
        bufp->chgBit(oldp+2064,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
        bufp->chgIData(oldp+2065,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[0]),32);
        bufp->chgIData(oldp+2066,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[1]),32);
        bufp->chgIData(oldp+2067,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[2]),32);
        bufp->chgIData(oldp+2068,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[3]),32);
        bufp->chgIData(oldp+2069,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[4]),32);
        bufp->chgIData(oldp+2070,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[5]),32);
        bufp->chgIData(oldp+2071,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[6]),32);
        bufp->chgIData(oldp+2072,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[7]),32);
        bufp->chgIData(oldp+2073,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[8]),32);
        bufp->chgIData(oldp+2074,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[9]),32);
        bufp->chgIData(oldp+2075,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[10]),32);
        bufp->chgIData(oldp+2076,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[11]),32);
        bufp->chgIData(oldp+2077,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[12]),32);
        bufp->chgIData(oldp+2078,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[13]),32);
        bufp->chgIData(oldp+2079,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[14]),32);
        bufp->chgIData(oldp+2080,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[15]),32);
        bufp->chgIData(oldp+2081,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[16]),32);
        bufp->chgIData(oldp+2082,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[17]),32);
        bufp->chgIData(oldp+2083,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[18]),32);
        bufp->chgIData(oldp+2084,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[19]),32);
        bufp->chgIData(oldp+2085,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[20]),32);
        bufp->chgIData(oldp+2086,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[21]),32);
        bufp->chgIData(oldp+2087,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[22]),32);
        bufp->chgIData(oldp+2088,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[23]),32);
        bufp->chgIData(oldp+2089,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[24]),32);
        bufp->chgIData(oldp+2090,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[25]),32);
        bufp->chgIData(oldp+2091,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[26]),32);
        bufp->chgIData(oldp+2092,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[27]),32);
        bufp->chgIData(oldp+2093,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[28]),32);
        bufp->chgIData(oldp+2094,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[29]),32);
        bufp->chgIData(oldp+2095,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[30]),32);
        bufp->chgIData(oldp+2096,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[31]),32);
        bufp->chgCData(oldp+2097,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags),4);
        bufp->chgCData(oldp+2098,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags),4);
        bufp->chgSData(oldp+2099,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags),16);
        bufp->chgSData(oldp+2100,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags),16);
        bufp->chgBit(oldp+2101,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en));
        bufp->chgBit(oldp+2102,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
        bufp->chgBit(oldp+2103,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep));
        bufp->chgBit(oldp+2104,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted));
        bufp->chgBit(oldp+2105,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending));
        bufp->chgBit(oldp+2106,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
        bufp->chgBit(oldp+2107,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie));
        bufp->chgBit(oldp+2108,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
        bufp->chgBit(oldp+2109,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt));
        bufp->chgBit(oldp+2110,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped));
        bufp->chgBit(oldp+2111,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step));
        bufp->chgBit(oldp+2112,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
        bufp->chgBit(oldp+2113,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i));
        bufp->chgBit(oldp+2114,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag));
        bufp->chgBit(oldp+2115,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
        bufp->chgBit(oldp+2116,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag));
        bufp->chgBit(oldp+2117,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag));
        bufp->chgBit(oldp+2118,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
        bufp->chgBit(oldp+2119,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
        bufp->chgBit(oldp+2120,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce));
        bufp->chgIData(oldp+2121,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc),31);
        bufp->chgBit(oldp+2122,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
        bufp->chgCData(oldp+2123,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn),4);
        bufp->chgBit(oldp+2124,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
        bufp->chgCData(oldp+2125,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))),5);
        bufp->chgCData(oldp+2126,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))),5);
        bufp->chgCData(oldp+2127,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R))),5);
        bufp->chgCData(oldp+2128,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA),5);
        bufp->chgCData(oldp+2129,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB),5);
        bufp->chgBit(oldp+2130,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                       >> 6U))));
        bufp->chgBit(oldp+2131,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                       >> 6U))));
        bufp->chgBit(oldp+2132,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                       >> 5U))));
        bufp->chgBit(oldp+2133,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                       >> 5U))));
        bufp->chgBit(oldp+2134,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                       >> 6U))));
        bufp->chgBit(oldp+2135,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                       >> 5U))));
        bufp->chgCData(oldp+2136,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F),4);
        bufp->chgBit(oldp+2137,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR));
        bufp->chgBit(oldp+2138,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA));
        bufp->chgBit(oldp+2139,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB));
        bufp->chgBit(oldp+2140,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU));
        bufp->chgBit(oldp+2141,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M));
        bufp->chgBit(oldp+2142,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV));
        bufp->chgBit(oldp+2143,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP));
        bufp->chgBit(oldp+2144,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF));
        bufp->chgBit(oldp+2145,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break));
        bufp->chgBit(oldp+2146,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock));
        bufp->chgBit(oldp+2147,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe));
        bufp->chgBit(oldp+2148,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp));
        bufp->chgBit(oldp+2149,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid));
        bufp->chgIData(oldp+2150,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I),32);
        bufp->chgBit(oldp+2151,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI));
        bufp->chgBit(oldp+2152,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal));
        bufp->chgBit(oldp+2153,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch));
        bufp->chgBit(oldp+2154,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb));
        bufp->chgIData(oldp+2155,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc),31);
        bufp->chgBit(oldp+2156,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall));
        bufp->chgBit(oldp+2157,((1U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
        bufp->chgBit(oldp+2158,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd));
        bufp->chgBit(oldp+2159,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write));
        bufp->chgBit(oldp+2160,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem));
        bufp->chgBit(oldp+2161,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
        bufp->chgBit(oldp+2162,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div));
        bufp->chgBit(oldp+2163,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu));
        bufp->chgCData(oldp+2164,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn),4);
        bufp->chgBit(oldp+2165,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc));
        bufp->chgCData(oldp+2166,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid),5);
        bufp->chgCData(oldp+2167,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid),5);
        bufp->chgBit(oldp+2168,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA));
        bufp->chgBit(oldp+2169,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB));
        bufp->chgIData(oldp+2170,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av),32);
        bufp->chgIData(oldp+2171,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv),32);
        bufp->chgIData(oldp+2172,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),31);
        bufp->chgIData(oldp+2173,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av),32);
        bufp->chgIData(oldp+2174,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv),32);
        bufp->chgIData(oldp+2175,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
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
        bufp->chgBit(oldp+2176,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR));
        bufp->chgBit(oldp+2177,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
        bufp->chgCData(oldp+2178,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                                    ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0)
                                    : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))),4);
        bufp->chgCData(oldp+2179,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F),7);
        bufp->chgCData(oldp+2180,(((0x80U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F) 
                                             << 4U)) 
                                   | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F))),8);
        bufp->chgBit(oldp+2181,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
        bufp->chgBit(oldp+2182,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe));
        bufp->chgBit(oldp+2183,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break));
        bufp->chgBit(oldp+2184,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
        bufp->chgBit(oldp+2185,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal));
        bufp->chgBit(oldp+2186,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock));
        bufp->chgIData(oldp+2187,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc),31);
        bufp->chgCData(oldp+2188,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg),5);
        bufp->chgBit(oldp+2189,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
        bufp->chgBit(oldp+2190,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid));
        bufp->chgBit(oldp+2191,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
        bufp->chgBit(oldp+2192,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
        bufp->chgIData(oldp+2193,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result),32);
        bufp->chgCData(oldp+2194,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
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
        bufp->chgBit(oldp+2195,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid));
        bufp->chgBit(oldp+2196,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy));
        bufp->chgBit(oldp+2197,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond));
        bufp->chgBit(oldp+2198,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR));
        bufp->chgBit(oldp+2199,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF));
        bufp->chgBit(oldp+2200,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal));
        bufp->chgBit(oldp+2201,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error));
        bufp->chgBit(oldp+2202,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy));
        bufp->chgBit(oldp+2203,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid));
        bufp->chgIData(oldp+2204,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result),32);
        bufp->chgCData(oldp+2205,(((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                          >> 0x1dU)) 
                                   | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
                                       << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z)))),4);
        bufp->chgBit(oldp+2206,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv));
        bufp->chgBit(oldp+2207,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe));
        bufp->chgIData(oldp+2208,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val),32);
        bufp->chgIData(oldp+2209,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc),32);
        bufp->chgBit(oldp+2210,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall));
        bufp->chgBit(oldp+2211,((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
        bufp->chgBit(oldp+2212,((0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
        bufp->chgBit(oldp+2213,((0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
        bufp->chgBit(oldp+2214,((0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
        bufp->chgBit(oldp+2215,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce));
        bufp->chgBit(oldp+2216,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce));
        bufp->chgCData(oldp+2217,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags),4);
        bufp->chgCData(oldp+2218,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index),3);
        bufp->chgCData(oldp+2219,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id),5);
        bufp->chgIData(oldp+2220,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl),32);
        bufp->chgIData(oldp+2221,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl),32);
        bufp->chgBit(oldp+2222,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt));
        bufp->chgBit(oldp+2223,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt));
        bufp->chgIData(oldp+2224,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc),31);
        bufp->chgIData(oldp+2225,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc),31);
        bufp->chgBit(oldp+2226,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc));
        bufp->chgBit(oldp+2227,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc))));
        bufp->chgCData(oldp+2228,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R),7);
        bufp->chgCData(oldp+2229,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A),7);
        bufp->chgCData(oldp+2230,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B),7);
        bufp->chgCData(oldp+2231,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc),2);
        bufp->chgBit(oldp+2232,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim));
        bufp->chgIData(oldp+2233,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv),23);
        bufp->chgCData(oldp+2234,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid),5);
        bufp->chgCData(oldp+2235,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock),2);
        bufp->chgBit(oldp+2236,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset));
        bufp->chgBit(oldp+2237,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
        bufp->chgBit(oldp+2238,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
        bufp->chgIData(oldp+2239,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
        bufp->chgQData(oldp+2240,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
        bufp->chgQData(oldp+2242,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
        bufp->chgBit(oldp+2244,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
        bufp->chgBit(oldp+2245,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
        bufp->chgBit(oldp+2246,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
        bufp->chgBit(oldp+2247,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
        bufp->chgBit(oldp+2248,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
        bufp->chgCData(oldp+2249,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
        bufp->chgBit(oldp+2250,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
        bufp->chgBit(oldp+2251,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2252,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
        bufp->chgBit(oldp+2253,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb));
        bufp->chgIData(oldp+2254,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr),31);
        bufp->chgIData(oldp+2255,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks),32);
        bufp->chgBit(oldp+2256,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim));
        bufp->chgIData(oldp+2257,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv),23);
        bufp->chgIData(oldp+2258,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                                  [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))]),32);
        bufp->chgIData(oldp+2259,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result),32);
        bufp->chgBit(oldp+2260,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)));
        bufp->chgBit(oldp+2261,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2262,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
        bufp->chgBit(oldp+2263,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
        bufp->chgBit(oldp+2264,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c));
        bufp->chgBit(oldp+2265,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign));
        bufp->chgBit(oldp+2266,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl));
        bufp->chgBit(oldp+2267,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl));
        bufp->chgQData(oldp+2268,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result),33);
        bufp->chgQData(oldp+2270,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result),33);
        bufp->chgQData(oldp+2272,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result),33);
        bufp->chgQData(oldp+2274,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result),64);
        bufp->chgBit(oldp+2276,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi));
        bufp->chgBit(oldp+2277,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe))));
        bufp->chgBit(oldp+2278,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                                       >> 1U))));
        bufp->chgQData(oldp+2279,(((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                   << 1U)),33);
        bufp->chgQData(oldp+2281,((0x1ffffffffULL & 
                                   VL_SHIFTRS_QQI(33,33,5, 
                                                  ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                   << 1U), 
                                                  (0x1fU 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),33);
        bufp->chgCData(oldp+2283,((3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),2);
        bufp->chgQData(oldp+2284,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result),64);
        bufp->chgQData(oldp+2286,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result),64);
        bufp->chgIData(oldp+2288,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input),32);
        bufp->chgIData(oldp+2289,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input),32);
        bufp->chgCData(oldp+2290,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe),2);
        bufp->chgCData(oldp+2291,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn),2);
        bufp->chgQData(oldp+2292,((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input)))),64);
        bufp->chgQData(oldp+2294,((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input)))),64);
        bufp->chgQData(oldp+2296,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input))),64);
        bufp->chgQData(oldp+2298,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input))),64);
        bufp->chgBit(oldp+2300,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset));
        bufp->chgCData(oldp+2301,((0x1fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                            >> 0x16U))),5);
        bufp->chgBit(oldp+2302,((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                  >> 1U)))));
        bufp->chgBit(oldp+2303,((0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2304,((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                >> 1U)))));
        bufp->chgBit(oldp+2305,((9U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2306,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU));
        bufp->chgBit(oldp+2307,((8U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2308,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
        bufp->chgBit(oldp+2309,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock));
        bufp->chgBit(oldp+2310,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 & (0x7800000U == (0x7c00000U 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
        bufp->chgBit(oldp+2311,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 & (0x7000000U == (0x7c00000U 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
        bufp->chgBit(oldp+2312,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special));
        bufp->chgBit(oldp+2313,((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
        bufp->chgBit(oldp+2314,(((5U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U))) 
                                 | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))));
        bufp->chgBit(oldp+2315,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc));
        bufp->chgBit(oldp+2316,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc));
        bufp->chgBit(oldp+2317,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                                 & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
        bufp->chgBit(oldp+2318,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                                 & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
        bufp->chgCData(oldp+2319,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0)
                                    ? 8U : (((0U == 
                                              (7U & 
                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))) 
                                             << 3U) 
                                            | (7U & 
                                               (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))))),4);
        bufp->chgBit(oldp+2320,(((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
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
        bufp->chgBit(oldp+2321,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem));
        bufp->chgBit(oldp+2322,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto));
        bufp->chgBit(oldp+2323,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div));
        bufp->chgBit(oldp+2324,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu));
        bufp->chgBit(oldp+2325,((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                          | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                             | (8U 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                    >> 1U)))))))));
        bufp->chgBit(oldp+2326,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                                 | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                     & ((8U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                        & (0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                                    | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                       | (8U == (0xfU 
                                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                    >> 1U))))))));
        bufp->chgBit(oldp+2327,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB));
        bufp->chgBit(oldp+2328,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                    | (8U == (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U)))))));
        bufp->chgBit(oldp+2329,((0x7c87c000U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
        bufp->chgBit(oldp+2330,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp));
        bufp->chgIData(oldp+2331,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword),32);
        bufp->chgBit(oldp+2332,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid));
        bufp->chgSData(oldp+2333,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half),15);
        bufp->chgCData(oldp+2334,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op),5);
        bufp->chgIData(oldp+2335,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I),23);
        bufp->chgIData(oldp+2336,((0x7fffffU & ((2U 
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
        bufp->chgIData(oldp+2337,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I),23);
        bufp->chgBit(oldp+2338,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I)));
        bufp->chgCData(oldp+2339,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc),2);
        bufp->chgBit(oldp+2340,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable));
        bufp->chgCData(oldp+2341,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
        bufp->chgCData(oldp+2342,((0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                            >> 0x10U))),8);
        bufp->chgBit(oldp+2343,(((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                                 & (IData)((0x78800000U 
                                            == (0xfffc0000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]))))));
        bufp->chgBit(oldp+2344,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb));
        bufp->chgBit(oldp+2345,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set));
        bufp->chgBit(oldp+2346,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set));
        bufp->chgBit(oldp+2347,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now));
        bufp->chgIData(oldp+2348,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when),32);
        bufp->chgIData(oldp+2349,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when),32);
        bufp->chgIData(oldp+2350,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb),32);
        bufp->chgIData(oldp+2351,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when),32);
        bufp->chgBit(oldp+2352,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb));
        bufp->chgBit(oldp+2353,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running));
        bufp->chgBit(oldp+2354,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero));
        bufp->chgIData(oldp+2355,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value),31);
        bufp->chgBit(oldp+2356,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write));
        bufp->chgBit(oldp+2357,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload));
        bufp->chgIData(oldp+2358,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count),31);
        bufp->chgBit(oldp+2359,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb));
        bufp->chgBit(oldp+2360,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running));
        bufp->chgBit(oldp+2361,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero));
        bufp->chgIData(oldp+2362,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value),31);
        bufp->chgBit(oldp+2363,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write));
        bufp->chgBit(oldp+2364,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload));
        bufp->chgIData(oldp+2365,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count),31);
        bufp->chgBit(oldp+2366,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb));
        bufp->chgBit(oldp+2367,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running));
        bufp->chgBit(oldp+2368,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero));
        bufp->chgIData(oldp+2369,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value),31);
        bufp->chgBit(oldp+2370,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write));
        bufp->chgBit(oldp+2371,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload));
        bufp->chgIData(oldp+2372,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count),31);
        bufp->chgBit(oldp+2373,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2));
        bufp->chgSData(oldp+2374,(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value),14);
        bufp->chgBit(oldp+2375,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb));
        bufp->chgBit(oldp+2376,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running));
        bufp->chgBit(oldp+2377,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero));
        bufp->chgIData(oldp+2378,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),31);
        bufp->chgBit(oldp+2379,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write));
        bufp->chgCData(oldp+2380,(vlSelf->main__DOT__txv__DOT__baud_counter),7);
        bufp->chgCData(oldp+2381,(vlSelf->main__DOT__txv__DOT__state),4);
        bufp->chgCData(oldp+2382,(vlSelf->main__DOT__txv__DOT__lcl_data),8);
        bufp->chgBit(oldp+2383,(vlSelf->main__DOT__txv__DOT__zero_baud_counter));
        bufp->chgSData(oldp+2384,(vlSelf->main__DOT__u_fan__DOT__pwm_counter),13);
        bufp->chgSData(oldp+2385,(vlSelf->main__DOT__u_fan__DOT__ctl_fpga),13);
        bufp->chgSData(oldp+2386,(vlSelf->main__DOT__u_fan__DOT__ctl_sys),13);
        bufp->chgBit(oldp+2387,(vlSelf->main__DOT__u_fan__DOT__ck_tach));
        bufp->chgBit(oldp+2388,(vlSelf->main__DOT__u_fan__DOT__last_tach));
        bufp->chgCData(oldp+2389,(vlSelf->main__DOT__u_fan__DOT__pipe_tach),2);
        bufp->chgBit(oldp+2390,(vlSelf->main__DOT__u_fan__DOT__tach_reset));
        bufp->chgIData(oldp+2391,(vlSelf->main__DOT__u_fan__DOT__tach_count),27);
        bufp->chgIData(oldp+2392,(vlSelf->main__DOT__u_fan__DOT__tach_counter),27);
        bufp->chgIData(oldp+2393,(vlSelf->main__DOT__u_fan__DOT__tach_timer),27);
        bufp->chgBit(oldp+2394,(vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack));
        bufp->chgIData(oldp+2395,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data),32);
        bufp->chgBit(oldp+2396,(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc));
        bufp->chgBit(oldp+2397,(vlSelf->main__DOT__u_fan__DOT__mem_stb));
        bufp->chgCData(oldp+2398,(vlSelf->main__DOT__u_fan__DOT__mem_addr),5);
        bufp->chgCData(oldp+2399,(vlSelf->main__DOT__u_fan__DOT__mem_data),8);
        bufp->chgBit(oldp+2400,(vlSelf->main__DOT__u_fan__DOT__mem_ack));
        bufp->chgBit(oldp+2401,(vlSelf->main__DOT__u_fan__DOT__i2cd_valid));
        bufp->chgBit(oldp+2402,(vlSelf->main__DOT__u_fan__DOT__i2cd_last));
        bufp->chgCData(oldp+2403,(vlSelf->main__DOT__u_fan__DOT__i2cd_data),8);
        bufp->chgBit(oldp+2404,(vlSelf->main__DOT__u_fan__DOT__pp_ms));
        bufp->chgIData(oldp+2405,(vlSelf->main__DOT__u_fan__DOT__trigger_counter),17);
        bufp->chgIData(oldp+2406,(vlSelf->main__DOT__u_fan__DOT__temp_tmp),24);
        bufp->chgIData(oldp+2407,(vlSelf->main__DOT__u_fan__DOT__temp_data),32);
        bufp->chgBit(oldp+2408,(vlSelf->main__DOT__u_fan__DOT__pre_ack));
        bufp->chgIData(oldp+2409,(vlSelf->main__DOT__u_fan__DOT__pre_data),32);
        bufp->chgBit(oldp+2410,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
        bufp->chgBit(oldp+2411,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc));
        bufp->chgCData(oldp+2412,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr),5);
        bufp->chgBit(oldp+2413,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid));
        bufp->chgBit(oldp+2414,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
        bufp->chgCData(oldp+2415,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn),8);
        bufp->chgCData(oldp+2416,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr),5);
        bufp->chgBit(oldp+2417,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal));
        bufp->chgBit(oldp+2418,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid));
        bufp->chgBit(oldp+2419,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle));
        bufp->chgBit(oldp+2420,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready));
        bufp->chgBit(oldp+2421,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready));
        bufp->chgBit(oldp+2422,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort));
        bufp->chgBit(oldp+2423,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid));
        bufp->chgSData(oldp+2424,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn),12);
        bufp->chgCData(oldp+2425,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn),4);
        bufp->chgBit(oldp+2426,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge));
        bufp->chgBit(oldp+2427,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch));
        bufp->chgSData(oldp+2428,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount),12);
        bufp->chgSData(oldp+2429,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount),12);
        bufp->chgCData(oldp+2430,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address),5);
        bufp->chgCData(oldp+2431,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target),5);
        bufp->chgBit(oldp+2432,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait));
        bufp->chgBit(oldp+2433,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request));
        bufp->chgBit(oldp+2434,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err));
        bufp->chgBit(oldp+2435,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted));
        bufp->chgBit(oldp+2436,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual));
        bufp->chgBit(oldp+2437,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda));
        bufp->chgBit(oldp+2438,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl));
        bufp->chgBit(oldp+2439,(((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
                                 | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
        bufp->chgBit(oldp+2440,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda));
        bufp->chgBit(oldp+2441,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl));
        bufp->chgBit(oldp+2442,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
        bufp->chgBit(oldp+2443,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid));
        bufp->chgSData(oldp+2444,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data),10);
        bufp->chgBit(oldp+2445,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl));
        bufp->chgBit(oldp+2446,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda));
        bufp->chgSData(oldp+2447,((0x7ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))),11);
        bufp->chgBit(oldp+2448,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte));
        bufp->chgBit(oldp+2449,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir));
        bufp->chgBit(oldp+2450,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack));
        bufp->chgCData(oldp+2451,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state),4);
        bufp->chgCData(oldp+2452,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits),3);
        bufp->chgCData(oldp+2453,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg),8);
        bufp->chgBit(oldp+2454,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl));
        bufp->chgBit(oldp+2455,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda));
        bufp->chgBit(oldp+2456,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl));
        bufp->chgBit(oldp+2457,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda));
        bufp->chgBit(oldp+2458,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl));
        bufp->chgBit(oldp+2459,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda));
        bufp->chgBit(oldp+2460,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit));
        bufp->chgBit(oldp+2461,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy));
        bufp->chgBit(oldp+2462,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb));
        bufp->chgBit(oldp+2463,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle));
        bufp->chgCData(oldp+2464,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word),8);
        bufp->chgBit(oldp+2465,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid));
        bufp->chgCData(oldp+2466,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight),2);
        bufp->chgBit(oldp+2467,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal));
        bufp->chgBit(oldp+2468,(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID));
        bufp->chgIData(oldp+2469,(vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr),31);
        bufp->chgIData(oldp+2470,(vlSelf->main__DOT__u_i2cdma__DOT__r_memlen),31);
        bufp->chgCData(oldp+2471,(vlSelf->main__DOT__u_i2cdma__DOT__subaddr),6);
        bufp->chgIData(oldp+2472,(vlSelf->main__DOT__u_i2cdma__DOT__current_addr),31);
        bufp->chgBit(oldp+2473,(vlSelf->main__DOT__u_i2cdma__DOT__wb_last));
        bufp->chgBit(oldp+2474,(vlSelf->main__DOT__u_i2cdma__DOT__bus_err));
        bufp->chgBit(oldp+2475,(vlSelf->main__DOT__u_i2cdma__DOT__r_reset));
        bufp->chgBit(oldp+2476,(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow));
        bufp->chgBit(oldp+2477,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
        bufp->chgBit(oldp+2478,(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready));
        bufp->chgBit(oldp+2479,((1U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                       >> 8U))));
        bufp->chgCData(oldp+2480,((0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data))),8);
        bufp->chgSData(oldp+2481,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data),9);
        bufp->chgSData(oldp+2482,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data),9);
        bufp->chgSData(oldp+2483,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data),9);
        bufp->chgBit(oldp+2484,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+2485,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
        bufp->chgBit(oldp+2486,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first));
        bufp->chgBit(oldp+2487,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null));
        bufp->chgBit(oldp+2488,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last));
        bufp->chgWData(oldp+2489,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data),512);
        bufp->chgWData(oldp+2505,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data),512);
        bufp->chgQData(oldp+2521,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel),64);
        bufp->chgQData(oldp+2523,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel),64);
        bufp->chgCData(oldp+2525,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift),4);
        bufp->chgCData(oldp+2526,((0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data))),4);
        bufp->chgBit(oldp+2527,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full));
        bufp->chgBit(oldp+2528,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty));
        bufp->chgBit(oldp+2529,((1U & ((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                                       >> 4U))));
        bufp->chgCData(oldp+2530,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill),6);
        bufp->chgBit(oldp+2531,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
        bufp->chgCData(oldp+2532,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data),5);
        bufp->chgCData(oldp+2533,(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data),5);
        bufp->chgBit(oldp+2534,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
        bufp->chgBit(oldp+2535,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
        bufp->chgCData(oldp+2536,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[0]),5);
        bufp->chgCData(oldp+2537,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[1]),5);
        bufp->chgCData(oldp+2538,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[2]),5);
        bufp->chgCData(oldp+2539,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[3]),5);
        bufp->chgCData(oldp+2540,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[4]),5);
        bufp->chgCData(oldp+2541,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[5]),5);
        bufp->chgCData(oldp+2542,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[6]),5);
        bufp->chgCData(oldp+2543,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[7]),5);
        bufp->chgCData(oldp+2544,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[8]),5);
        bufp->chgCData(oldp+2545,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[9]),5);
        bufp->chgCData(oldp+2546,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[10]),5);
        bufp->chgCData(oldp+2547,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[11]),5);
        bufp->chgCData(oldp+2548,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[12]),5);
        bufp->chgCData(oldp+2549,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[13]),5);
        bufp->chgCData(oldp+2550,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[14]),5);
        bufp->chgCData(oldp+2551,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[15]),5);
        bufp->chgCData(oldp+2552,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[16]),5);
        bufp->chgCData(oldp+2553,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[17]),5);
        bufp->chgCData(oldp+2554,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[18]),5);
        bufp->chgCData(oldp+2555,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[19]),5);
        bufp->chgCData(oldp+2556,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[20]),5);
        bufp->chgCData(oldp+2557,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[21]),5);
        bufp->chgCData(oldp+2558,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[22]),5);
        bufp->chgCData(oldp+2559,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[23]),5);
        bufp->chgCData(oldp+2560,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[24]),5);
        bufp->chgCData(oldp+2561,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[25]),5);
        bufp->chgCData(oldp+2562,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[26]),5);
        bufp->chgCData(oldp+2563,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[27]),5);
        bufp->chgCData(oldp+2564,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[28]),5);
        bufp->chgCData(oldp+2565,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[29]),5);
        bufp->chgCData(oldp+2566,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[30]),5);
        bufp->chgCData(oldp+2567,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[31]),5);
        bufp->chgCData(oldp+2568,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+2569,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr),6);
        bufp->chgBit(oldp+2570,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr));
        bufp->chgBit(oldp+2571,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd));
        bufp->chgSData(oldp+2572,(vlSelf->main__DOT__wb32_xbar__DOT__grant[0]),12);
        bufp->chgBit(oldp+2573,(vlSelf->main__DOT__wb32_xbar__DOT__mgrant));
        bufp->chgCData(oldp+2574,(vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0]),6);
        bufp->chgBit(oldp+2575,(vlSelf->main__DOT__wb32_xbar__DOT__mfull));
        bufp->chgBit(oldp+2576,(vlSelf->main__DOT__wb32_xbar__DOT__mnearfull));
        bufp->chgBit(oldp+2577,(vlSelf->main__DOT__wb32_xbar__DOT__mempty));
        bufp->chgIData(oldp+2578,(vlSelf->main__DOT__wb32_xbar__DOT__iN),32);
        bufp->chgCData(oldp+2579,(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
        bufp->chgSData(oldp+2580,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),12);
        bufp->chgBit(oldp+2581,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgCData(oldp+2582,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),8);
        bufp->chgQData(oldp+2583,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),45);
        bufp->chgQData(oldp+2585,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),45);
        bufp->chgIData(oldp+2587,((0x1fffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),29);
        bufp->chgBit(oldp+2588,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
        bufp->chgWData(oldp+2589,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data),512);
        bufp->chgCData(oldp+2605,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift),4);
        bufp->chgBit(oldp+2606,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full));
        bufp->chgBit(oldp+2607,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty));
        bufp->chgCData(oldp+2608,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill),6);
        bufp->chgCData(oldp+2609,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),4);
        bufp->chgCData(oldp+2610,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem
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
        bufp->chgWData(oldp+2611,(__Vtemp_hcfafa750__0),512);
        bufp->chgQData(oldp+2627,(((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)))) 
                                   << 0x3cU)),64);
        bufp->chgBit(oldp+2629,(((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                                 & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb))));
        bufp->chgCData(oldp+2630,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[0]),4);
        bufp->chgCData(oldp+2631,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[1]),4);
        bufp->chgCData(oldp+2632,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[2]),4);
        bufp->chgCData(oldp+2633,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[3]),4);
        bufp->chgCData(oldp+2634,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[4]),4);
        bufp->chgCData(oldp+2635,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[5]),4);
        bufp->chgCData(oldp+2636,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[6]),4);
        bufp->chgCData(oldp+2637,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[7]),4);
        bufp->chgCData(oldp+2638,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[8]),4);
        bufp->chgCData(oldp+2639,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[9]),4);
        bufp->chgCData(oldp+2640,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[10]),4);
        bufp->chgCData(oldp+2641,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[11]),4);
        bufp->chgCData(oldp+2642,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[12]),4);
        bufp->chgCData(oldp+2643,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[13]),4);
        bufp->chgCData(oldp+2644,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[14]),4);
        bufp->chgCData(oldp+2645,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[15]),4);
        bufp->chgCData(oldp+2646,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[16]),4);
        bufp->chgCData(oldp+2647,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[17]),4);
        bufp->chgCData(oldp+2648,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[18]),4);
        bufp->chgCData(oldp+2649,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[19]),4);
        bufp->chgCData(oldp+2650,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[20]),4);
        bufp->chgCData(oldp+2651,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[21]),4);
        bufp->chgCData(oldp+2652,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[22]),4);
        bufp->chgCData(oldp+2653,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[23]),4);
        bufp->chgCData(oldp+2654,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[24]),4);
        bufp->chgCData(oldp+2655,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[25]),4);
        bufp->chgCData(oldp+2656,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[26]),4);
        bufp->chgCData(oldp+2657,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[27]),4);
        bufp->chgCData(oldp+2658,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[28]),4);
        bufp->chgCData(oldp+2659,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[29]),4);
        bufp->chgCData(oldp+2660,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[30]),4);
        bufp->chgCData(oldp+2661,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[31]),4);
        bufp->chgCData(oldp+2662,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr),6);
        bufp->chgCData(oldp+2663,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr),6);
        bufp->chgBit(oldp+2664,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr));
        bufp->chgBit(oldp+2665,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd));
        bufp->chgCData(oldp+2666,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc),2);
        bufp->chgCData(oldp+2667,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb),2);
        bufp->chgCData(oldp+2668,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe),2);
        bufp->chgQData(oldp+2669,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr),60);
        bufp->chgQData(oldp+2671,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata),64);
        bufp->chgCData(oldp+2673,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel),8);
        bufp->chgQData(oldp+2674,((((QData)((IData)(vlSelf->main__DOT__wbu_zip_idata)) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU])))),64);
        bufp->chgCData(oldp+2676,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err),2);
        bufp->chgCData(oldp+2677,(vlSelf->main__DOT__wbu_xbar__DOT__request[0]),3);
        bufp->chgCData(oldp+2678,(vlSelf->main__DOT__wbu_xbar__DOT__grant[0]),3);
        bufp->chgBit(oldp+2679,(vlSelf->main__DOT__wbu_xbar__DOT__mgrant));
        bufp->chgCData(oldp+2680,(vlSelf->main__DOT__wbu_xbar__DOT__sgrant),2);
        bufp->chgCData(oldp+2681,(vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0]),6);
        bufp->chgBit(oldp+2682,(vlSelf->main__DOT__wbu_xbar__DOT__mfull));
        bufp->chgBit(oldp+2683,(vlSelf->main__DOT__wbu_xbar__DOT__mnearfull));
        bufp->chgBit(oldp+2684,(vlSelf->main__DOT__wbu_xbar__DOT__mempty));
        bufp->chgBit(oldp+2685,(vlSelf->main__DOT__wbu_xbar__DOT__m_stb));
        bufp->chgBit(oldp+2686,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                               >> 0x24U)))));
        bufp->chgIData(oldp+2687,(vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0]),30);
        bufp->chgIData(oldp+2688,(vlSelf->main__DOT__wbu_xbar__DOT__m_data[0]),32);
        bufp->chgCData(oldp+2689,(vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0]),4);
        bufp->chgIData(oldp+2690,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[0]),32);
        bufp->chgIData(oldp+2691,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[1]),32);
        bufp->chgIData(oldp+2692,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[2]),32);
        bufp->chgIData(oldp+2693,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[3]),32);
        bufp->chgCData(oldp+2694,(vlSelf->main__DOT__wbu_xbar__DOT__s_err),4);
        bufp->chgBit(oldp+2695,(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
        bufp->chgIData(oldp+2696,(vlSelf->main__DOT__wbu_xbar__DOT__iN),32);
        bufp->chgBit(oldp+2697,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+2698,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+2699,(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
        bufp->chgBit(oldp+2700,((1U & (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                       >> 2U))));
        bufp->chgIData(oldp+2701,((0x3fffffffU & ((
                                                   vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                                     >> 4U)))),30);
        bufp->chgIData(oldp+2702,(((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                    << 0x1cU) | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U] 
                                                 >> 4U))),32);
        bufp->chgCData(oldp+2703,((0xfU & vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])),4);
        bufp->chgCData(oldp+2704,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
        bufp->chgBit(oldp+2705,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        bufp->chgQData(oldp+2706,((((QData)((IData)(
                                                    (1U 
                                                     & (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                                        >> 2U)))) 
                                    << 0x24U) | (0xfffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))))),37);
        bufp->chgIData(oldp+2708,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),30);
        bufp->chgQData(oldp+2709,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
        bufp->chgCData(oldp+2711,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
        bufp->chgWData(oldp+2712,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),67);
        bufp->chgWData(oldp+2715,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),67);
        bufp->chgWData(oldp+2718,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),67);
        bufp->chgCData(oldp+2721,((((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb) 
                                    << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                               << 2U) 
                                              | (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb))))),4);
        bufp->chgCData(oldp+2722,((1U | (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we) 
                                          << 3U) | 
                                         (4U & (((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                                  ? (IData)(vlSelf->main__DOT__swic__DOT__cpu_we)
                                                  : 
                                                 (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))) 
                                                << 2U))))),4);
        __Vtemp_h2146f57f__0[0U] = (IData)((((QData)((IData)(vlSelf->main__DOT__wbwide_i2cm_addr)) 
                                             << 0x19U) 
                                            | (QData)((IData)(vlSelf->main__DOT__wbwide_i2cdma_addr))));
        __Vtemp_h2146f57f__0[1U] = ((vlSelf->main__DOT__wbwide_zip_addr 
                                     << 0x12U) | (IData)(
                                                         ((((QData)((IData)(vlSelf->main__DOT__wbwide_i2cm_addr)) 
                                                            << 0x19U) 
                                                           | (QData)((IData)(vlSelf->main__DOT__wbwide_i2cdma_addr))) 
                                                          >> 0x20U)));
        __Vtemp_h2146f57f__0[2U] = ((vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr 
                                     << 0xbU) | (vlSelf->main__DOT__wbwide_zip_addr 
                                                 >> 0xeU));
        __Vtemp_h2146f57f__0[3U] = (vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr 
                                    >> 0x15U);
        bufp->chgWData(oldp+2723,(__Vtemp_h2146f57f__0),100);
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
        bufp->chgWData(oldp+2727,(__Vtemp_h95b27ed2__0),2048);
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
        bufp->chgWData(oldp+2791,(__Vtemp_h7cab7483__0),256);
        bufp->chgCData(oldp+2799,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
                                    << 3U) | (IData)(vlSelf->__VdfgTmp_h503d14d1__0))),4);
        bufp->chgCData(oldp+2800,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack),4);
        bufp->chgWData(oldp+2801,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata),2048);
        bufp->chgCData(oldp+2865,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr),4);
        bufp->chgCData(oldp+2866,(vlSelf->main__DOT__wbwide_xbar__DOT__request[0]),4);
        bufp->chgCData(oldp+2867,(vlSelf->main__DOT__wbwide_xbar__DOT__request[1]),4);
        bufp->chgCData(oldp+2868,(vlSelf->main__DOT__wbwide_xbar__DOT__request[2]),4);
        bufp->chgCData(oldp+2869,(vlSelf->main__DOT__wbwide_xbar__DOT__request[3]),4);
        bufp->chgCData(oldp+2870,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[0]),3);
        bufp->chgCData(oldp+2871,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[1]),3);
        bufp->chgCData(oldp+2872,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[2]),3);
        bufp->chgCData(oldp+2873,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[3]),3);
        bufp->chgCData(oldp+2874,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[0]),4);
        bufp->chgCData(oldp+2875,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[1]),4);
        bufp->chgCData(oldp+2876,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[2]),4);
        bufp->chgCData(oldp+2877,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[3]),4);
        bufp->chgCData(oldp+2878,(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant),4);
        bufp->chgCData(oldp+2879,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0]),6);
        bufp->chgCData(oldp+2880,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1]),6);
        bufp->chgCData(oldp+2881,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2]),6);
        bufp->chgCData(oldp+2882,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3]),6);
        bufp->chgCData(oldp+2883,(vlSelf->main__DOT__wbwide_xbar__DOT__mfull),4);
        bufp->chgCData(oldp+2884,(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull),4);
        bufp->chgCData(oldp+2885,(vlSelf->main__DOT__wbwide_xbar__DOT__mempty),4);
        bufp->chgCData(oldp+2886,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb),4);
        bufp->chgCData(oldp+2887,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid) 
                                    << 3U) | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid) 
                                               << 2U) 
                                              | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))))),4);
        bufp->chgBit(oldp+2888,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+2889,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+2890,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+2891,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel));
        bufp->chgCData(oldp+2892,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
        bufp->chgCData(oldp+2893,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending),6);
        bufp->chgCData(oldp+2894,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending),6);
        bufp->chgCData(oldp+2895,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending),6);
        bufp->chgBit(oldp+2896,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x19U))));
        bufp->chgIData(oldp+2897,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])),25);
        __Vtemp_h0fd98bf7__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U];
        __Vtemp_h0fd98bf7__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[3U];
        __Vtemp_h0fd98bf7__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[4U];
        __Vtemp_h0fd98bf7__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[5U];
        __Vtemp_h0fd98bf7__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[6U];
        __Vtemp_h0fd98bf7__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[7U];
        __Vtemp_h0fd98bf7__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[8U];
        __Vtemp_h0fd98bf7__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[9U];
        __Vtemp_h0fd98bf7__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_h0fd98bf7__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_h0fd98bf7__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_h0fd98bf7__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_h0fd98bf7__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_h0fd98bf7__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_h0fd98bf7__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_h0fd98bf7__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x11U];
        bufp->chgWData(oldp+2898,(__Vtemp_h0fd98bf7__0),512);
        bufp->chgQData(oldp+2914,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+2916,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),4);
        bufp->chgBit(oldp+2917,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        __Vtemp_h3b245e0e__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U];
        __Vtemp_h3b245e0e__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U];
        __Vtemp_h3b245e0e__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U];
        __Vtemp_h3b245e0e__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[3U];
        __Vtemp_h3b245e0e__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[4U];
        __Vtemp_h3b245e0e__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[5U];
        __Vtemp_h3b245e0e__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[6U];
        __Vtemp_h3b245e0e__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[7U];
        __Vtemp_h3b245e0e__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[8U];
        __Vtemp_h3b245e0e__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[9U];
        __Vtemp_h3b245e0e__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_h3b245e0e__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_h3b245e0e__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_h3b245e0e__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_h3b245e0e__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_h3b245e0e__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_h3b245e0e__0[0x10U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_h3b245e0e__0[0x11U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x11U];
        __Vtemp_h3b245e0e__0[0x12U] = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                             >> 0x19U));
        bufp->chgWData(oldp+2918,(__Vtemp_h3b245e0e__0),577);
        bufp->chgBit(oldp+2937,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+2938,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),25);
        bufp->chgWData(oldp+2939,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+2958,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),3);
        bufp->chgWData(oldp+2959,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),602);
        bufp->chgWData(oldp+2978,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),602);
        bufp->chgWData(oldp+2997,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
        bufp->chgBit(oldp+3016,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+3017,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x19U))));
        bufp->chgIData(oldp+3018,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])),25);
        __Vtemp_hcb138391__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[2U];
        __Vtemp_hcb138391__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[3U];
        __Vtemp_hcb138391__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[4U];
        __Vtemp_hcb138391__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[5U];
        __Vtemp_hcb138391__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[6U];
        __Vtemp_hcb138391__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[7U];
        __Vtemp_hcb138391__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[8U];
        __Vtemp_hcb138391__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[9U];
        __Vtemp_hcb138391__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_hcb138391__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_hcb138391__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_hcb138391__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_hcb138391__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_hcb138391__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_hcb138391__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_hcb138391__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x11U];
        bufp->chgWData(oldp+3019,(__Vtemp_hcb138391__0),512);
        bufp->chgQData(oldp+3035,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+3037,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded),4);
        bufp->chgBit(oldp+3038,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        __Vtemp_hf41d9735__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U];
        __Vtemp_hf41d9735__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U];
        __Vtemp_hf41d9735__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[2U];
        __Vtemp_hf41d9735__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[3U];
        __Vtemp_hf41d9735__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[4U];
        __Vtemp_hf41d9735__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[5U];
        __Vtemp_hf41d9735__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[6U];
        __Vtemp_hf41d9735__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[7U];
        __Vtemp_hf41d9735__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[8U];
        __Vtemp_hf41d9735__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[9U];
        __Vtemp_hf41d9735__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_hf41d9735__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_hf41d9735__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_hf41d9735__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_hf41d9735__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_hf41d9735__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_hf41d9735__0[0x10U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_hf41d9735__0[0x11U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x11U];
        __Vtemp_hf41d9735__0[0x12U] = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                             >> 0x19U));
        bufp->chgWData(oldp+3039,(__Vtemp_hf41d9735__0),577);
        bufp->chgBit(oldp+3058,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+3059,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr),25);
        bufp->chgWData(oldp+3060,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+3079,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest),3);
        __Vtemp_h6283f4ea__0[0U] = Vmain__ConstPool__CONST_hb679b2e5_0[0U];
        __Vtemp_h6283f4ea__0[1U] = Vmain__ConstPool__CONST_hb679b2e5_0[1U];
        __Vtemp_h6283f4ea__0[2U] = Vmain__ConstPool__CONST_hb679b2e5_0[2U];
        __Vtemp_h6283f4ea__0[3U] = Vmain__ConstPool__CONST_hb679b2e5_0[3U];
        __Vtemp_h6283f4ea__0[4U] = Vmain__ConstPool__CONST_hb679b2e5_0[4U];
        __Vtemp_h6283f4ea__0[5U] = Vmain__ConstPool__CONST_hb679b2e5_0[5U];
        __Vtemp_h6283f4ea__0[6U] = Vmain__ConstPool__CONST_hb679b2e5_0[6U];
        __Vtemp_h6283f4ea__0[7U] = Vmain__ConstPool__CONST_hb679b2e5_0[7U];
        __Vtemp_h6283f4ea__0[8U] = Vmain__ConstPool__CONST_hb679b2e5_0[8U];
        __Vtemp_h6283f4ea__0[9U] = Vmain__ConstPool__CONST_hb679b2e5_0[9U];
        __Vtemp_h6283f4ea__0[0xaU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xaU];
        __Vtemp_h6283f4ea__0[0xbU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xbU];
        __Vtemp_h6283f4ea__0[0xcU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xcU];
        __Vtemp_h6283f4ea__0[0xdU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xdU];
        __Vtemp_h6283f4ea__0[0xeU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xeU];
        __Vtemp_h6283f4ea__0[0xfU] = Vmain__ConstPool__CONST_hb679b2e5_0[0xfU];
        __Vtemp_h6283f4ea__0[0x10U] = Vmain__ConstPool__CONST_hb679b2e5_0[0x10U];
        __Vtemp_h6283f4ea__0[0x11U] = Vmain__ConstPool__CONST_hb679b2e5_0[0x11U];
        __Vtemp_h6283f4ea__0[0x12U] = vlSelf->main__DOT__wbwide_i2cm_addr;
        bufp->chgWData(oldp+3080,(__Vtemp_h6283f4ea__0),602);
        bufp->chgWData(oldp+3099,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data),602);
        bufp->chgWData(oldp+3118,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
        bufp->chgBit(oldp+3137,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+3138,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x19U))));
        bufp->chgIData(oldp+3139,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])),25);
        __Vtemp_hb4195529__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[2U];
        __Vtemp_hb4195529__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[3U];
        __Vtemp_hb4195529__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[4U];
        __Vtemp_hb4195529__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[5U];
        __Vtemp_hb4195529__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[6U];
        __Vtemp_hb4195529__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[7U];
        __Vtemp_hb4195529__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[8U];
        __Vtemp_hb4195529__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[9U];
        __Vtemp_hb4195529__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_hb4195529__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_hb4195529__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_hb4195529__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_hb4195529__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_hb4195529__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_hb4195529__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_hb4195529__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x11U];
        bufp->chgWData(oldp+3140,(__Vtemp_hb4195529__0),512);
        bufp->chgQData(oldp+3156,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+3158,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded),4);
        bufp->chgBit(oldp+3159,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        __Vtemp_hb863f640__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U];
        __Vtemp_hb863f640__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U];
        __Vtemp_hb863f640__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[2U];
        __Vtemp_hb863f640__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[3U];
        __Vtemp_hb863f640__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[4U];
        __Vtemp_hb863f640__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[5U];
        __Vtemp_hb863f640__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[6U];
        __Vtemp_hb863f640__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[7U];
        __Vtemp_hb863f640__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[8U];
        __Vtemp_hb863f640__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[9U];
        __Vtemp_hb863f640__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_hb863f640__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_hb863f640__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_hb863f640__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_hb863f640__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_hb863f640__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_hb863f640__0[0x10U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_hb863f640__0[0x11U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x11U];
        __Vtemp_hb863f640__0[0x12U] = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                             >> 0x19U));
        bufp->chgWData(oldp+3160,(__Vtemp_hb863f640__0),577);
        bufp->chgBit(oldp+3179,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+3180,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr),25);
        bufp->chgWData(oldp+3181,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+3200,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest),3);
        bufp->chgWData(oldp+3201,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data),602);
        bufp->chgWData(oldp+3220,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data),602);
        bufp->chgWData(oldp+3239,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
        bufp->chgBit(oldp+3258,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
        bufp->chgBit(oldp+3259,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                       >> 0x19U))));
        bufp->chgIData(oldp+3260,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])),25);
        __Vtemp_h61e633ab__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[2U];
        __Vtemp_h61e633ab__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[3U];
        __Vtemp_h61e633ab__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[4U];
        __Vtemp_h61e633ab__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[5U];
        __Vtemp_h61e633ab__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[6U];
        __Vtemp_h61e633ab__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[7U];
        __Vtemp_h61e633ab__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[8U];
        __Vtemp_h61e633ab__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[9U];
        __Vtemp_h61e633ab__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_h61e633ab__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_h61e633ab__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_h61e633ab__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_h61e633ab__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_h61e633ab__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_h61e633ab__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_h61e633ab__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x11U];
        bufp->chgWData(oldp+3261,(__Vtemp_h61e633ab__0),512);
        bufp->chgQData(oldp+3277,((((QData)((IData)(
                                                    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U])))),64);
        bufp->chgCData(oldp+3279,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded),4);
        bufp->chgBit(oldp+3280,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
        __Vtemp_h43fd6509__0[0U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U];
        __Vtemp_h43fd6509__0[1U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U];
        __Vtemp_h43fd6509__0[2U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[2U];
        __Vtemp_h43fd6509__0[3U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[3U];
        __Vtemp_h43fd6509__0[4U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[4U];
        __Vtemp_h43fd6509__0[5U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[5U];
        __Vtemp_h43fd6509__0[6U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[6U];
        __Vtemp_h43fd6509__0[7U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[7U];
        __Vtemp_h43fd6509__0[8U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[8U];
        __Vtemp_h43fd6509__0[9U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[9U];
        __Vtemp_h43fd6509__0[0xaU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xaU];
        __Vtemp_h43fd6509__0[0xbU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xbU];
        __Vtemp_h43fd6509__0[0xcU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xcU];
        __Vtemp_h43fd6509__0[0xdU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xdU];
        __Vtemp_h43fd6509__0[0xeU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xeU];
        __Vtemp_h43fd6509__0[0xfU] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0xfU];
        __Vtemp_h43fd6509__0[0x10U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x10U];
        __Vtemp_h43fd6509__0[0x11U] = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x11U];
        __Vtemp_h43fd6509__0[0x12U] = (1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                             >> 0x19U));
        bufp->chgWData(oldp+3281,(__Vtemp_h43fd6509__0),577);
        bufp->chgBit(oldp+3300,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid));
        bufp->chgIData(oldp+3301,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr),25);
        bufp->chgWData(oldp+3302,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data),577);
        bufp->chgCData(oldp+3321,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest),3);
        bufp->chgWData(oldp+3322,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data),602);
        bufp->chgWData(oldp+3341,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data),602);
        bufp->chgWData(oldp+3360,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
        bufp->chgCData(oldp+3379,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
        bufp->chgCData(oldp+3380,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
        bufp->chgCData(oldp+3381,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+3382,((((IData)(vlSelf->main__DOT__wb32_ddr3_phy_ack) 
                                    << 0xaU) | (((IData)(vlSelf->main__DOT__r_cfg_ack) 
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
                                                                        | (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack)))))))))))),11);
        __Vtemp_h33b103d1__0[0U] = vlSelf->main__DOT__i2cscopei__DOT__o_bus_data;
        __Vtemp_h33b103d1__0[1U] = vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data;
        __Vtemp_h33b103d1__0[2U] = vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data;
        __Vtemp_h33b103d1__0[3U] = vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data;
        __Vtemp_h33b103d1__0[4U] = vlSelf->main__DOT__i2ci__DOT__bus_read_data;
        __Vtemp_h33b103d1__0[5U] = vlSelf->main__DOT__wb32_i2cdma_idata;
        __Vtemp_h33b103d1__0[6U] = vlSelf->main__DOT__wb32_uart_idata;
        __Vtemp_h33b103d1__0[7U] = vlSelf->main__DOT__wb32_fan_idata;
        __Vtemp_h33b103d1__0[8U] = vlSelf->main__DOT__r_wb32_sio_data;
        __Vtemp_h33b103d1__0[9U] = (IData)(((QData)((IData)(vlSelf->main__DOT__wb32_ddr3_phy_idata)) 
                                            << 0x20U));
        __Vtemp_h33b103d1__0[0xaU] = (IData)((((QData)((IData)(vlSelf->main__DOT__wb32_ddr3_phy_idata)) 
                                               << 0x20U) 
                                              >> 0x20U));
        bufp->chgWData(oldp+3383,(__Vtemp_h33b103d1__0),352);
        bufp->chgIData(oldp+3394,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[0]),32);
        bufp->chgIData(oldp+3395,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[1]),32);
        bufp->chgIData(oldp+3396,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[2]),32);
        bufp->chgIData(oldp+3397,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[3]),32);
        bufp->chgIData(oldp+3398,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[4]),32);
        bufp->chgIData(oldp+3399,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[5]),32);
        bufp->chgIData(oldp+3400,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[6]),32);
        bufp->chgIData(oldp+3401,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[7]),32);
        bufp->chgIData(oldp+3402,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[8]),32);
        bufp->chgIData(oldp+3403,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[9]),32);
        bufp->chgIData(oldp+3404,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[10]),32);
        bufp->chgIData(oldp+3405,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[11]),32);
        bufp->chgIData(oldp+3406,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[12]),32);
        bufp->chgIData(oldp+3407,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[13]),32);
        bufp->chgIData(oldp+3408,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[14]),32);
        bufp->chgIData(oldp+3409,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[15]),32);
        bufp->chgCData(oldp+3410,((((IData)(vlSelf->main__DOT__wbwide_ddr3_controller_stall) 
                                    << 2U) | (IData)(vlSelf->main__DOT__wbwide_wbdown_stall))),3);
        bufp->chgCData(oldp+3411,((((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                     [0U] & (0xeU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                                    << 2U) | (((IData)(vlSelf->main__DOT__wbwide_bkram_ack) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack)))),3);
        __Vtemp_h8a06d21b__0[0U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0U];
        __Vtemp_h8a06d21b__0[1U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[1U];
        __Vtemp_h8a06d21b__0[2U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[2U];
        __Vtemp_h8a06d21b__0[3U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[3U];
        __Vtemp_h8a06d21b__0[4U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[4U];
        __Vtemp_h8a06d21b__0[5U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[5U];
        __Vtemp_h8a06d21b__0[6U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[6U];
        __Vtemp_h8a06d21b__0[7U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[7U];
        __Vtemp_h8a06d21b__0[8U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[8U];
        __Vtemp_h8a06d21b__0[9U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[9U];
        __Vtemp_h8a06d21b__0[0xaU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xaU];
        __Vtemp_h8a06d21b__0[0xbU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xbU];
        __Vtemp_h8a06d21b__0[0xcU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xcU];
        __Vtemp_h8a06d21b__0[0xdU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xdU];
        __Vtemp_h8a06d21b__0[0xeU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xeU];
        __Vtemp_h8a06d21b__0[0xfU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xfU];
        __Vtemp_h8a06d21b__0[0x10U] = vlSelf->main__DOT__wbwide_bkram_idata[0U];
        __Vtemp_h8a06d21b__0[0x11U] = vlSelf->main__DOT__wbwide_bkram_idata[1U];
        __Vtemp_h8a06d21b__0[0x12U] = vlSelf->main__DOT__wbwide_bkram_idata[2U];
        __Vtemp_h8a06d21b__0[0x13U] = vlSelf->main__DOT__wbwide_bkram_idata[3U];
        __Vtemp_h8a06d21b__0[0x14U] = vlSelf->main__DOT__wbwide_bkram_idata[4U];
        __Vtemp_h8a06d21b__0[0x15U] = vlSelf->main__DOT__wbwide_bkram_idata[5U];
        __Vtemp_h8a06d21b__0[0x16U] = vlSelf->main__DOT__wbwide_bkram_idata[6U];
        __Vtemp_h8a06d21b__0[0x17U] = vlSelf->main__DOT__wbwide_bkram_idata[7U];
        __Vtemp_h8a06d21b__0[0x18U] = vlSelf->main__DOT__wbwide_bkram_idata[8U];
        __Vtemp_h8a06d21b__0[0x19U] = vlSelf->main__DOT__wbwide_bkram_idata[9U];
        __Vtemp_h8a06d21b__0[0x1aU] = vlSelf->main__DOT__wbwide_bkram_idata[0xaU];
        __Vtemp_h8a06d21b__0[0x1bU] = vlSelf->main__DOT__wbwide_bkram_idata[0xbU];
        __Vtemp_h8a06d21b__0[0x1cU] = vlSelf->main__DOT__wbwide_bkram_idata[0xcU];
        __Vtemp_h8a06d21b__0[0x1dU] = vlSelf->main__DOT__wbwide_bkram_idata[0xdU];
        __Vtemp_h8a06d21b__0[0x1eU] = vlSelf->main__DOT__wbwide_bkram_idata[0xeU];
        __Vtemp_h8a06d21b__0[0x1fU] = vlSelf->main__DOT__wbwide_bkram_idata[0xfU];
        __Vtemp_h8a06d21b__0[0x20U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0U];
        __Vtemp_h8a06d21b__0[0x21U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][1U];
        __Vtemp_h8a06d21b__0[0x22U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][2U];
        __Vtemp_h8a06d21b__0[0x23U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][3U];
        __Vtemp_h8a06d21b__0[0x24U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][4U];
        __Vtemp_h8a06d21b__0[0x25U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][5U];
        __Vtemp_h8a06d21b__0[0x26U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][6U];
        __Vtemp_h8a06d21b__0[0x27U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][7U];
        __Vtemp_h8a06d21b__0[0x28U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][8U];
        __Vtemp_h8a06d21b__0[0x29U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][9U];
        __Vtemp_h8a06d21b__0[0x2aU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xaU];
        __Vtemp_h8a06d21b__0[0x2bU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xbU];
        __Vtemp_h8a06d21b__0[0x2cU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xcU];
        __Vtemp_h8a06d21b__0[0x2dU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xdU];
        __Vtemp_h8a06d21b__0[0x2eU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xeU];
        __Vtemp_h8a06d21b__0[0x2fU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xfU];
        bufp->chgWData(oldp+3412,(__Vtemp_h8a06d21b__0),1536);
        bufp->chgWData(oldp+3460,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0]),512);
        bufp->chgWData(oldp+3476,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1]),512);
        bufp->chgWData(oldp+3492,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2]),512);
        bufp->chgWData(oldp+3508,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3]),512);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+3524,((1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                       [0U] >> 1U))));
        bufp->chgBit(oldp+3525,(vlSelf->main__DOT__wbwide_ddr3_controller_stall));
        bufp->chgBit(oldp+3526,((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] & (0xeU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))));
        __Vtemp_hc035b709__1[0U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0U];
        __Vtemp_hc035b709__1[1U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][1U];
        __Vtemp_hc035b709__1[2U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][2U];
        __Vtemp_hc035b709__1[3U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][3U];
        __Vtemp_hc035b709__1[4U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][4U];
        __Vtemp_hc035b709__1[5U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][5U];
        __Vtemp_hc035b709__1[6U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][6U];
        __Vtemp_hc035b709__1[7U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][7U];
        __Vtemp_hc035b709__1[8U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][8U];
        __Vtemp_hc035b709__1[9U] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][9U];
        __Vtemp_hc035b709__1[0xaU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xaU];
        __Vtemp_hc035b709__1[0xbU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xbU];
        __Vtemp_hc035b709__1[0xcU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xcU];
        __Vtemp_hc035b709__1[0xdU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xdU];
        __Vtemp_hc035b709__1[0xeU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xeU];
        __Vtemp_hc035b709__1[0xfU] = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
            [vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data][0xfU];
        bufp->chgWData(oldp+3527,(__Vtemp_hc035b709__1),512);
        bufp->chgBit(oldp+3543,(vlSelf->main__DOT__wb32_ddr3_phy_stall));
        bufp->chgBit(oldp+3544,(vlSelf->main__DOT__wb32_ddr3_phy_ack));
        bufp->chgIData(oldp+3545,(vlSelf->main__DOT__wb32_ddr3_phy_idata),32);
        bufp->chgIData(oldp+3546,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index),32);
        bufp->chgCData(oldp+3547,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address),5);
        bufp->chgIData(oldp+3548,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction),28);
        bufp->chgIData(oldp+3549,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter),18);
        bufp->chgBit(oldp+3550,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero));
        bufp->chgBit(oldp+3551,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done));
        bufp->chgBit(oldp+3552,(vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter));
        bufp->chgBit(oldp+3553,(((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                                 & (0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data)))));
        bufp->chgBit(oldp+3554,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update));
        bufp->chgCData(oldp+3555,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q),8);
        bufp->chgSData(oldp+3556,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0]),14);
        bufp->chgSData(oldp+3557,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1]),14);
        bufp->chgSData(oldp+3558,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2]),14);
        bufp->chgSData(oldp+3559,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3]),14);
        bufp->chgSData(oldp+3560,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4]),14);
        bufp->chgSData(oldp+3561,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5]),14);
        bufp->chgSData(oldp+3562,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6]),14);
        bufp->chgSData(oldp+3563,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7]),14);
        bufp->chgBit(oldp+3564,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending));
        bufp->chgBit(oldp+3565,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux));
        bufp->chgBit(oldp+3566,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we));
        bufp->chgWData(oldp+3567,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data),512);
        bufp->chgQData(oldp+3583,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm),64);
        bufp->chgSData(oldp+3585,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col),10);
        bufp->chgCData(oldp+3586,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank),3);
        bufp->chgSData(oldp+3587,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row),14);
        bufp->chgCData(oldp+3588,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank),3);
        bufp->chgSData(oldp+3589,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row),14);
        bufp->chgBit(oldp+3590,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending));
        bufp->chgBit(oldp+3591,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux));
        bufp->chgBit(oldp+3592,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we));
        bufp->chgQData(oldp+3593,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned),64);
        bufp->chgQData(oldp+3595,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp),64);
        bufp->chgQData(oldp+3597,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0]),64);
        bufp->chgQData(oldp+3599,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1]),64);
        bufp->chgWData(oldp+3601,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned),512);
        bufp->chgWData(oldp+3617,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp),512);
        bufp->chgWData(oldp+3633,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0]),512);
        bufp->chgWData(oldp+3649,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1]),512);
        bufp->chgQData(oldp+3665,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0]),64);
        bufp->chgQData(oldp+3667,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[1]),64);
        bufp->chgQData(oldp+3669,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[2]),64);
        bufp->chgQData(oldp+3671,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[3]),64);
        bufp->chgQData(oldp+3673,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[4]),64);
        bufp->chgQData(oldp+3675,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[5]),64);
        bufp->chgQData(oldp+3677,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[6]),64);
        bufp->chgQData(oldp+3679,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[7]),64);
        bufp->chgCData(oldp+3681,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0]),8);
        bufp->chgCData(oldp+3682,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[1]),8);
        bufp->chgCData(oldp+3683,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[2]),8);
        bufp->chgCData(oldp+3684,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[3]),8);
        bufp->chgCData(oldp+3685,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[4]),8);
        bufp->chgCData(oldp+3686,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[5]),8);
        bufp->chgCData(oldp+3687,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[6]),8);
        bufp->chgCData(oldp+3688,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[7]),8);
        bufp->chgSData(oldp+3689,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col),10);
        bufp->chgCData(oldp+3690,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank),3);
        bufp->chgSData(oldp+3691,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row),14);
        bufp->chgCData(oldp+3692,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0]),4);
        bufp->chgCData(oldp+3693,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1]),4);
        bufp->chgCData(oldp+3694,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2]),4);
        bufp->chgCData(oldp+3695,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3]),4);
        bufp->chgCData(oldp+3696,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4]),4);
        bufp->chgCData(oldp+3697,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5]),4);
        bufp->chgCData(oldp+3698,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6]),4);
        bufp->chgCData(oldp+3699,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7]),4);
        bufp->chgCData(oldp+3700,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0]),4);
        bufp->chgCData(oldp+3701,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1]),4);
        bufp->chgCData(oldp+3702,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2]),4);
        bufp->chgCData(oldp+3703,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3]),4);
        bufp->chgCData(oldp+3704,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4]),4);
        bufp->chgCData(oldp+3705,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5]),4);
        bufp->chgCData(oldp+3706,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6]),4);
        bufp->chgCData(oldp+3707,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7]),4);
        bufp->chgCData(oldp+3708,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0]),4);
        bufp->chgCData(oldp+3709,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1]),4);
        bufp->chgCData(oldp+3710,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2]),4);
        bufp->chgCData(oldp+3711,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3]),4);
        bufp->chgCData(oldp+3712,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4]),4);
        bufp->chgCData(oldp+3713,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5]),4);
        bufp->chgCData(oldp+3714,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6]),4);
        bufp->chgCData(oldp+3715,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7]),4);
        bufp->chgCData(oldp+3716,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0]),4);
        bufp->chgCData(oldp+3717,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1]),4);
        bufp->chgCData(oldp+3718,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2]),4);
        bufp->chgCData(oldp+3719,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3]),4);
        bufp->chgCData(oldp+3720,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4]),4);
        bufp->chgCData(oldp+3721,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5]),4);
        bufp->chgCData(oldp+3722,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6]),4);
        bufp->chgCData(oldp+3723,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7]),4);
        bufp->chgBit(oldp+3724,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q));
        bufp->chgBit(oldp+3725,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q));
        bufp->chgCData(oldp+3726,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q),2);
        bufp->chgBit(oldp+3727,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d));
        bufp->chgCData(oldp+3728,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs),3);
        bufp->chgCData(oldp+3729,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val),3);
        bufp->chgBit(oldp+3730,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q));
        bufp->chgBit(oldp+3731,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
        bufp->chgCData(oldp+3732,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq),4);
        bufp->chgCData(oldp+3733,(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate),5);
        bufp->chgQData(oldp+3734,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store),40);
        bufp->chgCData(oldp+3736,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat),4);
        bufp->chgCData(oldp+3737,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index),6);
        bufp->chgCData(oldp+3738,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored),6);
        bufp->chgCData(oldp+3739,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index),6);
        bufp->chgCData(oldp+3740,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig),6);
        bufp->chgCData(oldp+3741,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index),6);
        bufp->chgCData(oldp+3742,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value),6);
        bufp->chgCData(oldp+3743,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat),3);
        bufp->chgCData(oldp+3744,(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay),2);
        bufp->chgCData(oldp+3745,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data),4);
        bufp->chgCData(oldp+3746,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback),5);
        bufp->chgBit(oldp+3747,(vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs));
        bufp->chgCData(oldp+3748,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane),3);
        bufp->chgCData(oldp+3749,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8),6);
        bufp->chgSData(oldp+3750,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement),16);
        bufp->chgCData(oldp+3751,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max),4);
        bufp->chgCData(oldp+3752,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0]),4);
        bufp->chgCData(oldp+3753,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[1]),4);
        bufp->chgCData(oldp+3754,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[2]),4);
        bufp->chgCData(oldp+3755,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[3]),4);
        bufp->chgCData(oldp+3756,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[4]),4);
        bufp->chgCData(oldp+3757,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[5]),4);
        bufp->chgCData(oldp+3758,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[6]),4);
        bufp->chgCData(oldp+3759,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[7]),4);
        bufp->chgCData(oldp+3760,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0]),2);
        bufp->chgCData(oldp+3761,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1]),2);
        bufp->chgCData(oldp+3762,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2]),2);
        bufp->chgCData(oldp+3763,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3]),2);
        bufp->chgCData(oldp+3764,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4]),2);
        bufp->chgCData(oldp+3765,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0]),2);
        bufp->chgCData(oldp+3766,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1]),2);
        bufp->chgCData(oldp+3767,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2]),2);
        bufp->chgCData(oldp+3768,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3]),2);
        bufp->chgCData(oldp+3769,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4]),2);
        bufp->chgBit(oldp+3770,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe));
        bufp->chgBit(oldp+3771,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data));
        bufp->chgSData(oldp+3772,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0]),16);
        bufp->chgSData(oldp+3773,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1]),16);
        bufp->chgWData(oldp+3774,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0]),512);
        bufp->chgWData(oldp+3790,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1]),512);
        bufp->chgCData(oldp+3806,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0]),2);
        bufp->chgCData(oldp+3807,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1]),2);
        bufp->chgCData(oldp+3808,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2]),2);
        bufp->chgCData(oldp+3809,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3]),2);
        bufp->chgCData(oldp+3810,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4]),2);
        bufp->chgCData(oldp+3811,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5]),2);
        bufp->chgCData(oldp+3812,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6]),2);
        bufp->chgCData(oldp+3813,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7]),2);
        bufp->chgCData(oldp+3814,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8]),2);
        bufp->chgCData(oldp+3815,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9]),2);
        bufp->chgCData(oldp+3816,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[10]),2);
        bufp->chgCData(oldp+3817,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[11]),2);
        bufp->chgCData(oldp+3818,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[12]),2);
        bufp->chgCData(oldp+3819,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[13]),2);
        bufp->chgCData(oldp+3820,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[14]),2);
        bufp->chgCData(oldp+3821,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[15]),2);
        bufp->chgBit(oldp+3822,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb));
        bufp->chgBit(oldp+3823,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux));
        bufp->chgBit(oldp+3824,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we));
        bufp->chgSData(oldp+3825,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col),10);
        bufp->chgWData(oldp+3826,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data),512);
        bufp->chgBit(oldp+3842,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt));
        bufp->chgBit(oldp+3843,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs));
        bufp->chgBit(oldp+3844,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq));
        bufp->chgBit(oldp+3845,(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback));
        bufp->chgWData(oldp+3846,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store),512);
        bufp->chgWData(oldp+3862,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern),128);
        bufp->chgCData(oldp+3866,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0]),7);
        bufp->chgCData(oldp+3867,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[1]),7);
        bufp->chgCData(oldp+3868,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[2]),7);
        bufp->chgCData(oldp+3869,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[3]),7);
        bufp->chgCData(oldp+3870,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[4]),7);
        bufp->chgCData(oldp+3871,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[5]),7);
        bufp->chgCData(oldp+3872,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[6]),7);
        bufp->chgCData(oldp+3873,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[7]),7);
        bufp->chgCData(oldp+3874,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0]),5);
        bufp->chgCData(oldp+3875,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[1]),5);
        bufp->chgCData(oldp+3876,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[2]),5);
        bufp->chgCData(oldp+3877,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[3]),5);
        bufp->chgCData(oldp+3878,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[4]),5);
        bufp->chgCData(oldp+3879,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[5]),5);
        bufp->chgCData(oldp+3880,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[6]),5);
        bufp->chgCData(oldp+3881,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[7]),5);
        bufp->chgCData(oldp+3882,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0]),5);
        bufp->chgCData(oldp+3883,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[1]),5);
        bufp->chgCData(oldp+3884,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[2]),5);
        bufp->chgCData(oldp+3885,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[3]),5);
        bufp->chgCData(oldp+3886,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[4]),5);
        bufp->chgCData(oldp+3887,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[5]),5);
        bufp->chgCData(oldp+3888,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[6]),5);
        bufp->chgCData(oldp+3889,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[7]),5);
        bufp->chgCData(oldp+3890,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0]),5);
        bufp->chgCData(oldp+3891,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[1]),5);
        bufp->chgCData(oldp+3892,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[2]),5);
        bufp->chgCData(oldp+3893,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[3]),5);
        bufp->chgCData(oldp+3894,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[4]),5);
        bufp->chgCData(oldp+3895,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[5]),5);
        bufp->chgCData(oldp+3896,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[6]),5);
        bufp->chgCData(oldp+3897,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[7]),5);
        bufp->chgCData(oldp+3898,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev),5);
        bufp->chgCData(oldp+3899,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0]),5);
        bufp->chgCData(oldp+3900,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[1]),5);
        bufp->chgCData(oldp+3901,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[2]),5);
        bufp->chgCData(oldp+3902,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[3]),5);
        bufp->chgCData(oldp+3903,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[4]),5);
        bufp->chgCData(oldp+3904,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[5]),5);
        bufp->chgCData(oldp+3905,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[6]),5);
        bufp->chgCData(oldp+3906,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[7]),5);
        bufp->chgBit(oldp+3907,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb));
        bufp->chgBit(oldp+3908,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update));
        bufp->chgBit(oldp+3909,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we));
        bufp->chgCData(oldp+3910,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr),7);
        bufp->chgIData(oldp+3911,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data),32);
        bufp->chgCData(oldp+3912,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel),4);
        bufp->chgCData(oldp+3913,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein),5);
        bufp->chgCData(oldp+3914,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein),5);
        bufp->chgCData(oldp+3915,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein),5);
        bufp->chgCData(oldp+3916,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein),5);
        bufp->chgCData(oldp+3917,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld),8);
        bufp->chgCData(oldp+3918,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld),8);
        bufp->chgCData(oldp+3919,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld),8);
        bufp->chgCData(oldp+3920,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld),8);
        bufp->chgCData(oldp+3921,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane),3);
        bufp->chgBit(oldp+3922,((7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))));
        bufp->chgSData(oldp+3923,(((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                   << 0xaU)),11);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+3924,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))));
        bufp->chgBit(oldp+3925,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb))));
        bufp->chgBit(oldp+3926,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe))));
        bufp->chgIData(oldp+3927,((0x1ffffffU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U])),25);
        __Vtemp_hf82de6ac__0[0U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0U];
        __Vtemp_hf82de6ac__0[1U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[1U];
        __Vtemp_hf82de6ac__0[2U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[2U];
        __Vtemp_hf82de6ac__0[3U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[3U];
        __Vtemp_hf82de6ac__0[4U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[4U];
        __Vtemp_hf82de6ac__0[5U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[5U];
        __Vtemp_hf82de6ac__0[6U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[6U];
        __Vtemp_hf82de6ac__0[7U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[7U];
        __Vtemp_hf82de6ac__0[8U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[8U];
        __Vtemp_hf82de6ac__0[9U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[9U];
        __Vtemp_hf82de6ac__0[0xaU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xaU];
        __Vtemp_hf82de6ac__0[0xbU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xbU];
        __Vtemp_hf82de6ac__0[0xcU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xcU];
        __Vtemp_hf82de6ac__0[0xdU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xdU];
        __Vtemp_hf82de6ac__0[0xeU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xeU];
        __Vtemp_hf82de6ac__0[0xfU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0xfU];
        bufp->chgWData(oldp+3928,(__Vtemp_hf82de6ac__0),512);
        bufp->chgQData(oldp+3944,((((QData)((IData)(
                                                    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))),64);
        bufp->chgBit(oldp+3946,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err));
        bufp->chgBit(oldp+3947,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                       >> 1U))));
        bufp->chgBit(oldp+3948,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                       >> 1U))));
        bufp->chgBit(oldp+3949,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                                       >> 1U))));
        bufp->chgIData(oldp+3950,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                                  << 7U) 
                                                 | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
                                                    >> 0x19U)))),25);
        __Vtemp_hf74e670c__0[0U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x10U];
        __Vtemp_hf74e670c__0[1U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x11U];
        __Vtemp_hf74e670c__0[2U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x12U];
        __Vtemp_hf74e670c__0[3U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x13U];
        __Vtemp_hf74e670c__0[4U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x14U];
        __Vtemp_hf74e670c__0[5U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x15U];
        __Vtemp_hf74e670c__0[6U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x16U];
        __Vtemp_hf74e670c__0[7U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x17U];
        __Vtemp_hf74e670c__0[8U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x18U];
        __Vtemp_hf74e670c__0[9U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x19U];
        __Vtemp_hf74e670c__0[0xaU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1aU];
        __Vtemp_hf74e670c__0[0xbU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1bU];
        __Vtemp_hf74e670c__0[0xcU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1cU];
        __Vtemp_hf74e670c__0[0xdU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1dU];
        __Vtemp_hf74e670c__0[0xeU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1eU];
        __Vtemp_hf74e670c__0[0xfU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1fU];
        bufp->chgWData(oldp+3951,(__Vtemp_hf74e670c__0),512);
        bufp->chgQData(oldp+3967,((((QData)((IData)(
                                                    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])))),64);
        bufp->chgBit(oldp+3969,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                       >> 2U))));
        bufp->chgBit(oldp+3970,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                       >> 2U))));
        bufp->chgBit(oldp+3971,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                                       >> 2U))));
        bufp->chgIData(oldp+3972,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                                                  << 0xeU) 
                                                 | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                                    >> 0x12U)))),25);
        __Vtemp_h21e563ec__0[0U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x20U];
        __Vtemp_h21e563ec__0[1U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x21U];
        __Vtemp_h21e563ec__0[2U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x22U];
        __Vtemp_h21e563ec__0[3U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x23U];
        __Vtemp_h21e563ec__0[4U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x24U];
        __Vtemp_h21e563ec__0[5U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x25U];
        __Vtemp_h21e563ec__0[6U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x26U];
        __Vtemp_h21e563ec__0[7U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x27U];
        __Vtemp_h21e563ec__0[8U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x28U];
        __Vtemp_h21e563ec__0[9U] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x29U];
        __Vtemp_h21e563ec__0[0xaU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2aU];
        __Vtemp_h21e563ec__0[0xbU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2bU];
        __Vtemp_h21e563ec__0[0xcU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2cU];
        __Vtemp_h21e563ec__0[0xdU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2dU];
        __Vtemp_h21e563ec__0[0xeU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2eU];
        __Vtemp_h21e563ec__0[0xfU] = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2fU];
        bufp->chgWData(oldp+3973,(__Vtemp_h21e563ec__0),512);
        bufp->chgQData(oldp+3989,((((QData)((IData)(
                                                    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[5U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[4U])))),64);
        bufp->chgBit(oldp+3991,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
        bufp->chgBit(oldp+3992,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
        bufp->chgBit(oldp+3993,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 8U))));
        bufp->chgBit(oldp+3994,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                  >> 8U) & (0U == (7U 
                                                   & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
        bufp->chgBit(oldp+3995,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 8U))));
        bufp->chgIData(oldp+3996,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]),32);
        bufp->chgCData(oldp+3997,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x20U)))),4);
        bufp->chgBit(oldp+3998,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                  >> 8U) & (1U == (7U 
                                                   & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
        bufp->chgBit(oldp+3999,(vlSelf->main__DOT__wb32_sirefclk_stb));
        bufp->chgBit(oldp+4000,(vlSelf->main__DOT__wb32_spio_stb));
        bufp->chgBit(oldp+4001,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                  >> 8U) & (4U == (7U 
                                                   & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
        bufp->chgBit(oldp+4002,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc))));
        bufp->chgBit(oldp+4003,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb))));
        bufp->chgBit(oldp+4004,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe))));
        bufp->chgCData(oldp+4005,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])),8);
        bufp->chgIData(oldp+4006,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U]),32);
        bufp->chgCData(oldp+4007,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))),4);
        bufp->chgBit(oldp+4008,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 1U))));
        bufp->chgBit(oldp+4009,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 1U))));
        bufp->chgBit(oldp+4010,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 1U))));
        bufp->chgCData(oldp+4011,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                            >> 8U))),8);
        bufp->chgIData(oldp+4012,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U]),32);
        bufp->chgCData(oldp+4013,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 4U)))),4);
        bufp->chgBit(oldp+4014,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 2U))));
        bufp->chgBit(oldp+4015,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 2U))));
        bufp->chgBit(oldp+4016,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 2U))));
        bufp->chgCData(oldp+4017,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                            >> 0x10U))),8);
        bufp->chgIData(oldp+4018,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U]),32);
        bufp->chgCData(oldp+4019,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 8U)))),4);
        bufp->chgBit(oldp+4020,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 3U))));
        bufp->chgBit(oldp+4021,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 3U))));
        bufp->chgBit(oldp+4022,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 3U))));
        bufp->chgCData(oldp+4023,((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+4024,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U]),32);
        bufp->chgCData(oldp+4025,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0xcU)))),4);
        bufp->chgBit(oldp+4026,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 4U))));
        bufp->chgBit(oldp+4027,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 4U))));
        bufp->chgBit(oldp+4028,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 4U))));
        bufp->chgCData(oldp+4029,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])),8);
        bufp->chgIData(oldp+4030,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]),32);
        bufp->chgCData(oldp+4031,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x10U)))),4);
        bufp->chgBit(oldp+4032,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 5U))));
        bufp->chgBit(oldp+4033,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 5U))));
        bufp->chgBit(oldp+4034,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 5U))));
        bufp->chgCData(oldp+4035,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                            >> 8U))),8);
        bufp->chgIData(oldp+4036,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U]),32);
        bufp->chgCData(oldp+4037,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x14U)))),4);
        bufp->chgBit(oldp+4038,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 6U))));
        bufp->chgBit(oldp+4039,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 6U))));
        bufp->chgBit(oldp+4040,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 6U))));
        bufp->chgCData(oldp+4041,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                            >> 0x10U))),8);
        bufp->chgIData(oldp+4042,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]),32);
        bufp->chgCData(oldp+4043,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x18U)))),4);
        bufp->chgBit(oldp+4044,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 7U))));
        bufp->chgBit(oldp+4045,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 7U))));
        bufp->chgBit(oldp+4046,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 7U))));
        bufp->chgCData(oldp+4047,((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+4048,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]),32);
        bufp->chgCData(oldp+4049,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x1cU)))),4);
        bufp->chgBit(oldp+4050,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 8U))));
        bufp->chgCData(oldp+4051,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])),8);
        bufp->chgBit(oldp+4052,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 9U))));
        bufp->chgBit(oldp+4053,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 9U))));
        bufp->chgBit(oldp+4054,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 9U))));
        bufp->chgCData(oldp+4055,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                            >> 8U))),8);
        bufp->chgIData(oldp+4056,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[9U]),32);
        bufp->chgCData(oldp+4057,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x24U)))),4);
        bufp->chgBit(oldp+4058,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+4059,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+4060,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 0xaU))));
        bufp->chgCData(oldp+4061,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                            >> 0x10U))),8);
        bufp->chgIData(oldp+4062,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU]),32);
        bufp->chgCData(oldp+4063,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                   >> 0x28U)))),4);
        bufp->chgSData(oldp+4064,((0x3fffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                               << 7U) 
                                              | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
                                                 >> 0x19U)))),14);
        bufp->chgCData(oldp+4065,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                         >> 0x10U))),2);
        bufp->chgIData(oldp+4066,((0xffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                                                 << 0xeU) 
                                                | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                                   >> 0x12U)))),24);
        bufp->chgCData(oldp+4067,((0x7fU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                            >> 0x10U))),7);
        bufp->chgIData(oldp+4068,((0xffffffU & ((IData)(5U) 
                                                + (
                                                   (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                                                    << 0xeU) 
                                                   | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                                      >> 0x12U))))),24);
        bufp->chgCData(oldp+4069,((3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])),2);
        bufp->chgBit(oldp+4070,(vlSelf->main__DOT__i2ci__DOT__next_valid));
        bufp->chgCData(oldp+4071,(vlSelf->main__DOT__i2ci__DOT__next_insn),8);
        bufp->chgBit(oldp+4072,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        >> 4U) & (~ 
                                                  ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                   >> 4U))))));
        bufp->chgBit(oldp+4073,(vlSelf->main__DOT__i2ci__DOT__bus_write));
        bufp->chgBit(oldp+4074,(vlSelf->main__DOT__i2ci__DOT__bus_override));
        bufp->chgBit(oldp+4075,(vlSelf->main__DOT__i2ci__DOT__bus_manual));
        bufp->chgBit(oldp+4076,(vlSelf->main__DOT__i2ci__DOT__bus_jump));
        bufp->chgBit(oldp+4077,((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])));
        bufp->chgBit(oldp+4078,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))));
        bufp->chgBit(oldp+4079,(vlSelf->main__DOT__i2cscopei__DOT__read_from_data));
        bufp->chgBit(oldp+4080,(vlSelf->main__DOT__i2cscopei__DOT__write_to_control));
        bufp->chgBit(oldp+4081,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                       >> 8U))));
        bufp->chgBit(oldp+4082,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                       >> 1U))));
        bufp->chgBit(oldp+4083,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data));
        bufp->chgBit(oldp+4084,(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control));
        bufp->chgBit(oldp+4085,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+4086,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                       >> 2U))));
        bufp->chgBit(oldp+4087,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data));
        bufp->chgBit(oldp+4088,(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control));
        bufp->chgBit(oldp+4089,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+4090,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                        & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                       >> 3U))));
        bufp->chgBit(oldp+4091,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data));
        bufp->chgBit(oldp+4092,(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control));
        bufp->chgCData(oldp+4093,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn),5);
        bufp->chgBit(oldp+4094,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int));
        bufp->chgCData(oldp+4095,((7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                         >> 0x18U))),3);
        bufp->chgBit(oldp+4096,(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
        bufp->chgCData(oldp+4097,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                         >> 0x18U))),2);
        bufp->chgBit(oldp+4098,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid));
        bufp->chgCData(oldp+4099,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn),8);
        bufp->chgBit(oldp+4100,(((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
                                 & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                       >> 7U)))));
        bufp->chgBit(oldp+4101,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write));
        bufp->chgBit(oldp+4102,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override));
        bufp->chgBit(oldp+4103,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual));
        bufp->chgBit(oldp+4104,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump));
        bufp->chgCData(oldp+4105,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                         >> 8U))),2);
        bufp->chgIData(oldp+4106,(vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr),32);
        bufp->chgIData(oldp+4107,(vlSelf->main__DOT__u_i2cdma__DOT__next_memlen),32);
        bufp->chgCData(oldp+4108,((0xfU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U])),4);
        bufp->chgCData(oldp+4109,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr),4);
        bufp->chgIData(oldp+4110,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm),32);
        bufp->chgSData(oldp+4111,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc),11);
        bufp->chgSData(oldp+4112,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb),11);
        bufp->chgSData(oldp+4113,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe),11);
        bufp->chgWData(oldp+4114,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr),88);
        bufp->chgWData(oldp+4117,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata),352);
        bufp->chgQData(oldp+4128,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel),44);
        bufp->chgSData(oldp+4130,(vlSelf->main__DOT__wb32_xbar__DOT__request[0]),12);
        bufp->chgSData(oldp+4131,(vlSelf->main__DOT__wb32_xbar__DOT__sgrant),11);
        bufp->chgCData(oldp+4132,(vlSelf->main__DOT__wb32_xbar__DOT__mindex[0]),4);
        bufp->chgBit(oldp+4133,(vlSelf->main__DOT__wb32_xbar__DOT__m_stb));
        bufp->chgBit(oldp+4134,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                               >> 0x24U)))));
        bufp->chgCData(oldp+4135,(vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0]),8);
        bufp->chgIData(oldp+4136,(vlSelf->main__DOT__wb32_xbar__DOT__m_data[0]),32);
        bufp->chgCData(oldp+4137,(vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0]),4);
        bufp->chgBit(oldp+4138,(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
        bufp->chgSData(oldp+4139,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),12);
        bufp->chgBit(oldp+4140,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
        bufp->chgBit(oldp+4141,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+4142,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),4);
        bufp->chgBit(oldp+4143,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                               >> 0x2cU)))));
        bufp->chgCData(oldp+4144,((0xffU & (IData)(
                                                   (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                    >> 0x24U)))),8);
        bufp->chgIData(oldp+4145,((IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                           >> 4U))),32);
        bufp->chgCData(oldp+4146,((0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
        bufp->chgQData(oldp+4147,((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                                >> 0x2cU))))) 
                                    << 0x24U) | (0xfffffffffULL 
                                                 & vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
        bufp->chgQData(oldp+4149,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
        bufp->chgSData(oldp+4151,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),11);
        bufp->chgQData(oldp+4152,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),45);
        bufp->chgCData(oldp+4154,(vlSelf->main__DOT__wbu_xbar__DOT__mindex[0]),2);
        bufp->chgCData(oldp+4155,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
        bufp->chgCData(oldp+4156,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4157,(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc),4);
        bufp->chgCData(oldp+4158,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc),3);
        bufp->chgCData(oldp+4159,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb),3);
        bufp->chgCData(oldp+4160,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe),3);
        bufp->chgWData(oldp+4161,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr),75);
        bufp->chgWData(oldp+4164,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata),1536);
        bufp->chgWData(oldp+4212,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel),192);
        bufp->chgCData(oldp+4218,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err),3);
        bufp->chgCData(oldp+4219,(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant),3);
        bufp->chgCData(oldp+4220,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0]),2);
        bufp->chgCData(oldp+4221,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1]),2);
        bufp->chgCData(oldp+4222,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2]),2);
        bufp->chgCData(oldp+4223,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3]),2);
        bufp->chgCData(oldp+4224,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0]),2);
        bufp->chgCData(oldp+4225,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1]),2);
        bufp->chgCData(oldp+4226,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2]),2);
        bufp->chgCData(oldp+4227,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[3]),2);
        bufp->chgCData(oldp+4228,(vlSelf->main__DOT__wbwide_xbar__DOT__m_we),4);
        bufp->chgIData(oldp+4229,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0]),25);
        bufp->chgIData(oldp+4230,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1]),25);
        bufp->chgIData(oldp+4231,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2]),25);
        bufp->chgIData(oldp+4232,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3]),25);
        bufp->chgWData(oldp+4233,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0]),512);
        bufp->chgWData(oldp+4249,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1]),512);
        bufp->chgWData(oldp+4265,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2]),512);
        bufp->chgWData(oldp+4281,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3]),512);
        bufp->chgQData(oldp+4297,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[0]),64);
        bufp->chgQData(oldp+4299,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[1]),64);
        bufp->chgQData(oldp+4301,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[2]),64);
        bufp->chgQData(oldp+4303,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[3]),64);
        bufp->chgCData(oldp+4305,(vlSelf->main__DOT__wbwide_xbar__DOT__s_err),4);
        bufp->chgCData(oldp+4306,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
        bufp->chgBit(oldp+4307,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+4308,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4309,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
        bufp->chgBit(oldp+4310,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+4311,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4312,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
        bufp->chgBit(oldp+4313,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+4314,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4315,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
        bufp->chgBit(oldp+4316,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available));
        bufp->chgCData(oldp+4317,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
        bufp->chgCData(oldp+4318,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
        bufp->chgCData(oldp+4319,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
        bufp->chgCData(oldp+4320,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
        bufp->chgCData(oldp+4321,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
        bufp->chgCData(oldp+4322,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
        bufp->chgCData(oldp+4323,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+4324,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall));
        bufp->chgBit(oldp+4325,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall));
        bufp->chgCData(oldp+4326,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d),8);
        bufp->chgSData(oldp+4327,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[0]),14);
        bufp->chgSData(oldp+4328,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[1]),14);
        bufp->chgSData(oldp+4329,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[2]),14);
        bufp->chgSData(oldp+4330,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[3]),14);
        bufp->chgSData(oldp+4331,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[4]),14);
        bufp->chgSData(oldp+4332,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[5]),14);
        bufp->chgSData(oldp+4333,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[6]),14);
        bufp->chgSData(oldp+4334,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[7]),14);
        bufp->chgCData(oldp+4335,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[0]),4);
        bufp->chgCData(oldp+4336,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[1]),4);
        bufp->chgCData(oldp+4337,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[2]),4);
        bufp->chgCData(oldp+4338,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[3]),4);
        bufp->chgCData(oldp+4339,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[4]),4);
        bufp->chgCData(oldp+4340,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[5]),4);
        bufp->chgCData(oldp+4341,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[6]),4);
        bufp->chgCData(oldp+4342,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[7]),4);
        bufp->chgCData(oldp+4343,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[0]),4);
        bufp->chgCData(oldp+4344,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[1]),4);
        bufp->chgCData(oldp+4345,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[2]),4);
        bufp->chgCData(oldp+4346,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[3]),4);
        bufp->chgCData(oldp+4347,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[4]),4);
        bufp->chgCData(oldp+4348,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[5]),4);
        bufp->chgCData(oldp+4349,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[6]),4);
        bufp->chgCData(oldp+4350,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[7]),4);
        bufp->chgCData(oldp+4351,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[0]),4);
        bufp->chgCData(oldp+4352,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[1]),4);
        bufp->chgCData(oldp+4353,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[2]),4);
        bufp->chgCData(oldp+4354,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[3]),4);
        bufp->chgCData(oldp+4355,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[4]),4);
        bufp->chgCData(oldp+4356,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[5]),4);
        bufp->chgCData(oldp+4357,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[6]),4);
        bufp->chgCData(oldp+4358,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[7]),4);
        bufp->chgCData(oldp+4359,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0]),4);
        bufp->chgCData(oldp+4360,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1]),4);
        bufp->chgCData(oldp+4361,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2]),4);
        bufp->chgCData(oldp+4362,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3]),4);
        bufp->chgCData(oldp+4363,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4]),4);
        bufp->chgCData(oldp+4364,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5]),4);
        bufp->chgCData(oldp+4365,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6]),4);
        bufp->chgCData(oldp+4366,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7]),4);
        bufp->chgIData(oldp+4367,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0]),24);
        bufp->chgIData(oldp+4368,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1]),24);
        bufp->chgIData(oldp+4369,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2]),24);
        bufp->chgIData(oldp+4370,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3]),24);
        bufp->chgBit(oldp+4371,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt));
        bufp->chgBit(oldp+4372,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en));
        bufp->chgBit(oldp+4373,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n));
        bufp->chgBit(oldp+4374,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d));
        bufp->chgBit(oldp+4375,(vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy));
        bufp->chgBit(oldp+4376,(vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy));
        bufp->chgBit(oldp+4377,(vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger));
        bufp->chgBit(oldp+4378,(vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger));
        bufp->chgBit(oldp+4379,(vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger));
        bufp->chgBit(oldp+4380,(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
        bufp->chgSData(oldp+4381,(vlSelf->main__DOT__wb32_xbar__DOT__s_stall),16);
        bufp->chgBit(oldp+4382,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4383,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4384,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
        bufp->chgCData(oldp+4385,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall),4);
        bufp->chgCData(oldp+4386,(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall),4);
        bufp->chgCData(oldp+4387,(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack),4);
        bufp->chgBit(oldp+4388,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4389,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4390,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
        bufp->chgBit(oldp+4391,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4392,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4393,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))));
        bufp->chgBit(oldp+4394,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4395,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4396,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))));
        bufp->chgBit(oldp+4397,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall));
        bufp->chgBit(oldp+4398,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall));
        bufp->chgBit(oldp+4399,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))));
    }
    bufp->chgBit(oldp+4400,(vlSelf->i_clk));
    bufp->chgBit(oldp+4401,(vlSelf->i_reset));
    bufp->chgWData(oldp+4402,(vlSelf->i_ddr3_controller_iserdes_data),512);
    bufp->chgQData(oldp+4418,(vlSelf->i_ddr3_controller_iserdes_dqs),64);
    bufp->chgQData(oldp+4420,(vlSelf->i_ddr3_controller_iserdes_bitslip_reference),64);
    bufp->chgBit(oldp+4422,(vlSelf->i_ddr3_controller_idelayctrl_rdy));
    bufp->chgWData(oldp+4423,(vlSelf->o_ddr3_controller_cmd),96);
    bufp->chgBit(oldp+4426,(vlSelf->o_ddr3_controller_dqs_tri_control));
    bufp->chgBit(oldp+4427,(vlSelf->o_ddr3_controller_dq_tri_control));
    bufp->chgBit(oldp+4428,(vlSelf->o_ddr3_controller_toggle_dqs));
    bufp->chgWData(oldp+4429,(vlSelf->o_ddr3_controller_data),512);
    bufp->chgQData(oldp+4445,(vlSelf->o_ddr3_controller_dm),64);
    bufp->chgCData(oldp+4447,(vlSelf->o_ddr3_controller_odelay_data_cntvaluein),5);
    bufp->chgCData(oldp+4448,(vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein),5);
    bufp->chgCData(oldp+4449,(vlSelf->o_ddr3_controller_idelay_data_cntvaluein),5);
    bufp->chgCData(oldp+4450,(vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein),5);
    bufp->chgCData(oldp+4451,(vlSelf->o_ddr3_controller_odelay_data_ld),8);
    bufp->chgCData(oldp+4452,(vlSelf->o_ddr3_controller_odelay_dqs_ld),8);
    bufp->chgCData(oldp+4453,(vlSelf->o_ddr3_controller_idelay_data_ld),8);
    bufp->chgCData(oldp+4454,(vlSelf->o_ddr3_controller_idelay_dqs_ld),8);
    bufp->chgCData(oldp+4455,(vlSelf->o_ddr3_controller_bitslip),8);
    bufp->chgCData(oldp+4456,(vlSelf->o_sirefclk_word),8);
    bufp->chgBit(oldp+4457,(vlSelf->o_sirefclk_ce));
    bufp->chgBit(oldp+4458,(vlSelf->i_fan_sda));
    bufp->chgBit(oldp+4459,(vlSelf->i_fan_scl));
    bufp->chgBit(oldp+4460,(vlSelf->o_fan_sda));
    bufp->chgBit(oldp+4461,(vlSelf->o_fan_scl));
    bufp->chgBit(oldp+4462,(vlSelf->o_fpga_pwm));
    bufp->chgBit(oldp+4463,(vlSelf->o_sys_pwm));
    bufp->chgBit(oldp+4464,(vlSelf->i_fan_tach));
    bufp->chgBit(oldp+4465,(vlSelf->i_i2c_sda));
    bufp->chgBit(oldp+4466,(vlSelf->i_i2c_scl));
    bufp->chgBit(oldp+4467,(vlSelf->o_i2c_sda));
    bufp->chgBit(oldp+4468,(vlSelf->o_i2c_scl));
    bufp->chgBit(oldp+4469,(vlSelf->cpu_sim_cyc));
    bufp->chgBit(oldp+4470,(vlSelf->cpu_sim_stb));
    bufp->chgBit(oldp+4471,(vlSelf->cpu_sim_we));
    bufp->chgCData(oldp+4472,(vlSelf->cpu_sim_addr),7);
    bufp->chgIData(oldp+4473,(vlSelf->cpu_sim_data),32);
    bufp->chgBit(oldp+4474,(vlSelf->cpu_sim_stall));
    bufp->chgBit(oldp+4475,(vlSelf->cpu_sim_ack));
    bufp->chgIData(oldp+4476,(vlSelf->cpu_sim_idata),32);
    bufp->chgBit(oldp+4477,(vlSelf->cpu_prof_stb));
    bufp->chgIData(oldp+4478,(vlSelf->cpu_prof_addr),31);
    bufp->chgIData(oldp+4479,(vlSelf->cpu_prof_ticks),32);
    bufp->chgBit(oldp+4480,(vlSelf->i_cpu_reset));
    bufp->chgBit(oldp+4481,(vlSelf->i_wbu_uart_rx));
    bufp->chgBit(oldp+4482,(vlSelf->o_wbu_uart_tx));
    bufp->chgBit(oldp+4483,(vlSelf->o_wbu_uart_cts_n));
    bufp->chgSData(oldp+4484,(vlSelf->i_gpio),16);
    bufp->chgCData(oldp+4485,(vlSelf->o_gpio),8);
    bufp->chgCData(oldp+4486,(vlSelf->i_sw),8);
    bufp->chgCData(oldp+4487,(vlSelf->i_btn),5);
    bufp->chgCData(oldp+4488,(vlSelf->o_led),8);
    bufp->chgBit(oldp+4489,(vlSelf->i_clk200));
    bufp->chgIData(oldp+4490,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
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
    bufp->chgIData(oldp+4491,((((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                << 0x10U) | (IData)(vlSelf->o_gpio))),32);
    bufp->chgBit(oldp+4492,(((IData)(vlSelf->cpu_sim_cyc) 
                             | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb))));
    bufp->chgBit(oldp+4493,(((~ (IData)(vlSelf->cpu_sim_cyc)) 
                             & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack))));
    bufp->chgBit(oldp+4494,((0U == ((((((((((((((((
                                                   Vmain__ConstPool__CONST_h93e1b771_0[0U] 
                                                   ^ 
                                                   vlSelf->i_ddr3_controller_iserdes_data[0U]) 
                                                  | (Vmain__ConstPool__CONST_h93e1b771_0[1U] 
                                                     ^ 
                                                     vlSelf->i_ddr3_controller_iserdes_data[1U])) 
                                                 | (Vmain__ConstPool__CONST_h93e1b771_0[2U] 
                                                    ^ 
                                                    vlSelf->i_ddr3_controller_iserdes_data[2U])) 
                                                | (Vmain__ConstPool__CONST_h93e1b771_0[3U] 
                                                   ^ 
                                                   vlSelf->i_ddr3_controller_iserdes_data[3U])) 
                                               | (Vmain__ConstPool__CONST_h93e1b771_0[4U] 
                                                  ^ 
                                                  vlSelf->i_ddr3_controller_iserdes_data[4U])) 
                                              | (Vmain__ConstPool__CONST_h93e1b771_0[5U] 
                                                 ^ 
                                                 vlSelf->i_ddr3_controller_iserdes_data[5U])) 
                                             | (Vmain__ConstPool__CONST_h93e1b771_0[6U] 
                                                ^ vlSelf->i_ddr3_controller_iserdes_data[6U])) 
                                            | (Vmain__ConstPool__CONST_h93e1b771_0[7U] 
                                               ^ vlSelf->i_ddr3_controller_iserdes_data[7U])) 
                                           | (Vmain__ConstPool__CONST_h93e1b771_0[8U] 
                                              ^ vlSelf->i_ddr3_controller_iserdes_data[8U])) 
                                          | (Vmain__ConstPool__CONST_h93e1b771_0[9U] 
                                             ^ vlSelf->i_ddr3_controller_iserdes_data[9U])) 
                                         | (Vmain__ConstPool__CONST_h93e1b771_0[0xaU] 
                                            ^ vlSelf->i_ddr3_controller_iserdes_data[0xaU])) 
                                        | (Vmain__ConstPool__CONST_h93e1b771_0[0xbU] 
                                           ^ vlSelf->i_ddr3_controller_iserdes_data[0xbU])) 
                                       | (Vmain__ConstPool__CONST_h93e1b771_0[0xcU] 
                                          ^ vlSelf->i_ddr3_controller_iserdes_data[0xcU])) 
                                      | (Vmain__ConstPool__CONST_h93e1b771_0[0xdU] 
                                         ^ vlSelf->i_ddr3_controller_iserdes_data[0xdU])) 
                                     | (Vmain__ConstPool__CONST_h93e1b771_0[0xeU] 
                                        ^ vlSelf->i_ddr3_controller_iserdes_data[0xeU])) 
                                    | (Vmain__ConstPool__CONST_h93e1b771_0[0xfU] 
                                       ^ vlSelf->i_ddr3_controller_iserdes_data[0xfU])))));
    bufp->chgSData(oldp+4495,(vlSelf->o_gpio),16);
    bufp->chgCData(oldp+4496,(((IData)(vlSelf->cpu_sim_cyc)
                                ? 0xfU : (0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                                  >> 4U)))),4);
    bufp->chgIData(oldp+4497,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc),31);
    bufp->chgBit(oldp+4498,((((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
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
    bufp->chgBit(oldp+4499,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim));
    bufp->chgIData(oldp+4500,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv),23);
    bufp->chgBit(oldp+4501,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid));
    bufp->chgBit(oldp+4502,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim));
    bufp->chgIData(oldp+4503,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv),23);
    bufp->chgBit(oldp+4504,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim));
    bufp->chgIData(oldp+4505,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv),23);
    bufp->chgBit(oldp+4506,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce));
    bufp->chgIData(oldp+4507,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
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
    bufp->chgSData(oldp+4508,(((0xfffffc00U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                               & ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_ack) 
                                                  << 0xaU))) 
                               | ((0xfffffe00U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                  & ((IData)(vlSelf->main__DOT__r_cfg_ack) 
                                                     << 9U))) 
                                  | ((0xffffff00U & 
                                      ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
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
                                                             & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack))))))))))))),16);
    bufp->chgIData(oldp+4509,(vlSelf->main__DOT__wb32_xbar__DOT__iM),32);
    bufp->chgCData(oldp+4510,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),4);
    bufp->chgCData(oldp+4511,(((((IData)(vlSelf->cpu_sim_cyc) 
                                 | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                << 1U) | (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))),2);
    bufp->chgCData(oldp+4512,(((((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                 & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack))),2);
    bufp->chgCData(oldp+4513,(((0xfffffffeU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                               & (((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                                   & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                                  << 1U))) 
                               | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                  & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack)))),4);
    bufp->chgIData(oldp+4514,(vlSelf->main__DOT__wbu_xbar__DOT__iM),32);
    bufp->chgCData(oldp+4515,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgIData(oldp+4516,(vlSelf->main__DOT__wbwide_xbar__DOT__iN),32);
    bufp->chgIData(oldp+4517,(vlSelf->main__DOT__wbwide_xbar__DOT__iM),32);
    bufp->chgCData(oldp+4518,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgCData(oldp+4519,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgCData(oldp+4520,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->chgCData(oldp+4521,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
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
}
