// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmain__Syms.h"
#include "Vmain___024root.h"

extern const VlWide<15>/*479:0*/ Vmain__ConstPool__CONST_hbd99daea_0;
extern const VlWide<16>/*511:0*/ Vmain__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__2(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ main__DOT__u_fan__DOT__u_i2ccpu__DOT____VdfgTmp_hfc6f1b73__0;
    main__DOT__u_fan__DOT__u_i2ccpu__DOT____VdfgTmp_hfc6f1b73__0 = 0;
    CData/*0:0*/ main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0;
    main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0 = 0;
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
    VlWide<16>/*511:0*/ __Vtemp_h8c81192e__0;
    VlWide<16>/*511:0*/ __Vtemp_h5dad54bf__0;
    VlWide<16>/*511:0*/ __Vtemp_h01ff8f7b__0;
    VlWide<16>/*511:0*/ __Vtemp_hf1acda43__0;
    VlWide<16>/*511:0*/ __Vtemp_he3c3974d__0;
    VlWide<16>/*511:0*/ __Vtemp_h0ca773d0__0;
    VlWide<16>/*511:0*/ __Vtemp_hbc743227__0;
    VlWide<16>/*511:0*/ __Vtemp_h6409050d__0;
    VlWide<32>/*1023:0*/ __Vtemp_h7be7356a__0;
    VlWide<32>/*1023:0*/ __Vtemp_h448dc795__0;
    VlWide<32>/*1023:0*/ __Vtemp_h9b90904f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd96f9696__0;
    VlWide<4>/*127:0*/ __Vtemp_h6aa6ab78__0;
    // Body
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid = 0U;
    } else {
        if (((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready))) {
            if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))) {
                if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last 
                        = (1U < (0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U]));
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last 
                        = (1U == (0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U]));
                } else {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last 
                        = (2U < (0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U]));
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last 
                        = (2U >= (0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U]));
                }
            } else if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last 
                    = (4U < (0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U]));
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last 
                    = (4U >= (0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U]));
            } else {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last = 0U;
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last 
                    = (1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
                             >> 7U));
            }
            if ((1U & (~ (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
                          >> 7U)))) {
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last = 0U;
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last = 0U;
            }
        } else if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready))) {
            if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))) {
                if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))) {
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last 
                        = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last) 
                           & (2U >= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill)));
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last 
                        = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last) 
                           & (2U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill)));
                } else {
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last 
                        = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last) 
                           & (4U >= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill)));
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last 
                        = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last) 
                           & (4U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill)));
                }
            } else {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last 
                    = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size) 
                       & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last) 
                          & (8U >= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))));
                vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last 
                    = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size) 
                       & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last) 
                          & (8U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))));
            }
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_valid)) 
                   | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready)))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid 
                = (((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)) 
                    & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready)) 
                   | ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                       ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                           ? (1U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))
                           : (2U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill)))
                       : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size) 
                          & (4U < (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill)))));
        }
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB)
            ? (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
                   == (0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))))
                ? 1U : ((0x40U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))
                         ? 2U : 3U)) : 0U);
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h740acd49__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id) 
           == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid));
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid 
        = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
            << 4U) | (0xfU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv));
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
           & ((~ (IData)(vlSelf->main__DOT__swic__DOT__pic_interrupt)) 
              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce) 
                 & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                     >> 5U) & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit 
        = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN) 
           & ((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl) 
                & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl)) 
               & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda)) 
              & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda))));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid 
        = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid) 
           & ((~ ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn) 
                  >> 0xbU)) & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
    main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0 
        = ((0U == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state)) 
           | (2U == (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state)));
    vlSelf->main__DOT__u_i2cdma__DOT__skd_valid = vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid;
    vlSelf->main__DOT__i2cdma_ready = (1U & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__i2c_ready = (1U & ((~ (IData)(vlSelf->main__DOT__i2c_valid)) 
                                          | ((0U == (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid)) 
                                             | ((1U 
                                                 == (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid)) 
                                                | (((~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)) 
                                                    & (2U 
                                                       == (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid))) 
                                                   | (2U 
                                                      < (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid)))))));
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__getinput__DOT__hx_stb;
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
    if (vlSelf->__Vdlyvset__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__fifo__v0) {
        vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__fifo[vlSelf->__Vdlyvdim0__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__fifo__v0;
    }
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr;
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow;
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbu_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT__wbu_stb = vlSelf->__Vdly__main__DOT__wbu_stb;
    if (vlSelf->main__DOT__wbu_xbar__DOT____VdfgTmp_h4f7f05b5__0) {
        vlSelf->main__DOT__wbu_xbar__DOT__m_stb = (1U 
                                                   & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__mfull)));
        vlSelf->main__DOT__wbu_xbar__DOT__request[0U] 
            = vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded;
    } else {
        vlSelf->main__DOT__wbu_xbar__DOT__m_stb = 0U;
        vlSelf->main__DOT__wbu_xbar__DOT__request[0U] = 0U;
    }
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
    vlSelf->main__DOT__swic__DOT__cmd_clear_cache = vlSelf->__Vdly__main__DOT__swic__DOT__cmd_clear_cache;
    vlSelf->main__DOT__swic__DOT__cmd_write = vlSelf->__Vdly__main__DOT__swic__DOT__cmd_write;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall 
        = (1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted)) 
                 | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall)));
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
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v0) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v1) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[0U] 
            = vlSelf->__Vdlyvval__main__DOT__wbwide_xbar__DOT__grant__v1;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v2) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v3) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v4) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[1U] 
            = vlSelf->__Vdlyvval__main__DOT__wbwide_xbar__DOT__grant__v4;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v5) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v6) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v7) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[2U] 
            = vlSelf->__Vdlyvval__main__DOT__wbwide_xbar__DOT__grant__v7;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v8) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v9) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v10) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[3U] 
            = vlSelf->__Vdlyvval__main__DOT__wbwide_xbar__DOT__grant__v10;
    }
    if (vlSelf->__Vdlyvset__main__DOT__wbwide_xbar__DOT__grant__v11) {
        vlSelf->main__DOT__wbwide_xbar__DOT__grant[3U] = 0U;
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled 
        = (1U & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc) 
                  & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we)) 
                     | ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb)) 
                        | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall)))) 
                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending) 
                    | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending) 
                       >> 4U))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_haf314c36__0));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_illegal;
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
    VL_SHIFTL_WWI(512,512,32, __Vtemp_h0ca773d0__0, __Vtemp_he3c3974d__0, 
                  (0x1e0U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                             << 3U)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0U] 
        = __Vtemp_h0ca773d0__0[0U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[1U] 
        = __Vtemp_h0ca773d0__0[1U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[2U] 
        = __Vtemp_h0ca773d0__0[2U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[3U] 
        = __Vtemp_h0ca773d0__0[3U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[4U] 
        = __Vtemp_h0ca773d0__0[4U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[5U] 
        = __Vtemp_h0ca773d0__0[5U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[6U] 
        = __Vtemp_h0ca773d0__0[6U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[7U] 
        = __Vtemp_h0ca773d0__0[7U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[8U] 
        = __Vtemp_h0ca773d0__0[8U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[9U] 
        = __Vtemp_h0ca773d0__0[9U];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xaU] 
        = __Vtemp_h0ca773d0__0[0xaU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xbU] 
        = __Vtemp_h0ca773d0__0[0xbU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xcU] 
        = __Vtemp_h0ca773d0__0[0xcU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xdU] 
        = __Vtemp_h0ca773d0__0[0xdU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xeU] 
        = __Vtemp_h0ca773d0__0[0xeU];
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU] 
        = __Vtemp_h0ca773d0__0[0xfU];
    main__DOT__i2ci__DOT____VdfgTmp_hfc6f1b73__0 = 
        (1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid)) 
               | (IData)(vlSelf->main__DOT__i2ci__DOT__half_ready)));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack 
        = ((IData)(vlSelf->main__DOT__swic__DOT__dc_ack) 
           & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
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
    } else {
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
    }
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data[0x12U] 
        = ((0x400000U & (((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                           ? (IData)(vlSelf->main__DOT__swic__DOT__cpu_we)
                           : (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))) 
                         << 0x16U)) | vlSelf->main__DOT__wbwide_zip_addr);
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last;
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_haf314c36__0)
            ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc
            : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc);
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
                                              == (0x7ffffU 
                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                                     >> 9U)))))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address = 0U;
    if ((0x2000000U == (0xe000000U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address = 1U;
    }
    main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_h832f938f__0 
        = ((0U != (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                   >> 6U)) | ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                               >> 5U) & (0U != (0x1fU 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))));
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
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn = 0U;
    } else if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn 
            = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle)
                ? 0U : (0xfU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn)));
    } else if (((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle)) 
                & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready))) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn = 0U;
    }
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready 
        = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge) 
           & (IData)(main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0));
    vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb 
        = ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len) 
             == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)) 
            & (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len))) 
           | ((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy)) 
                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid)) 
                    & (1U == (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw))))));
    if ((((IData)(vlSelf->main__DOT__rcv__DOT__zero_baud_counter) 
          & (8U == (IData)(vlSelf->main__DOT__rcv__DOT__state))) 
         & (IData)(vlSelf->main__DOT__rcv__DOT__ck_uart))) {
        vlSelf->main__DOT__wbu_rx_data = vlSelf->main__DOT__rcv__DOT__data_reg;
    }
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read 
        = (1U & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)) 
                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                    | (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd))));
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskd_ready 
        = (1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)
            ? vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data
            : vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data);
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbu_stb) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)));
    vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel 
        = (0U != (vlSelf->main__DOT__wbu_xbar__DOT__request
                  [0U] & vlSelf->main__DOT__wbu_xbar__DOT__grant
                  [0U]));
    if (((IData)(vlSelf->main__DOT__wbu_xbar__DOT__mgrant) 
         & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__mempty)))) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel = 1U;
    }
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
        vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 1U;
    }
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_merr 
        = vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr;
    vlSelf->main__DOT__swic__DOT__ext_err = (1U & (
                                                   ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
                                                    >> 2U) 
                                                   | (IData)(vlSelf->main__DOT__swic__DOT__wdbus_int)));
    if ((1U & ((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
            = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available) {
            vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
                = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
        } else if ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
                = (0xeU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
        }
    }
    if ((1U & ((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                              >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
            = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available) {
            vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
                = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
        } else if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
                = (0xdU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
        }
    }
    if ((1U & ((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                              >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
            = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available) {
            vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
                = (4U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
        } else if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
                = (0xbU & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
        }
    }
    if ((1U & ((IData)(vlSelf->i_reset) | (~ ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                              >> 3U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel)))) {
        if (vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available) {
            vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
                = (8U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
        } else if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__mgrant 
                = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant));
        }
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc)) 
           & ((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch) 
                  | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp))) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_phase = 1U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
            = (0x80000000U | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half) 
                               << 0x10U) | (0xffffU 
                                            & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU])));
    } else {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_phase = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU];
    }
    vlSelf->main__DOT__i2ci__DOT__ovw_ready = ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__half_valid)) 
                                               & (IData)(main__DOT__i2ci__DOT____VdfgTmp_hfc6f1b73__0));
    vlSelf->main__DOT__i2ci__DOT__pf_ready = ((~ ((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                                                  | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))) 
                                              & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__half_valid)) 
                                                 & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc)) 
                                                    & (IData)(main__DOT__i2ci__DOT____VdfgTmp_hfc6f1b73__0))));
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda 
        = (1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)) 
                 | (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda)));
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl 
        = (1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)) 
                 | (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl)));
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
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr;
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr 
            = (0xfffffffU & ((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr 
                              + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen)) 
                             - (IData)(1U)));
    }
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
    if ((1U & (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset) 
                | (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc))) 
               | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding = 0U;
    } else if ((2U == ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb) 
                         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full 
            = (IData)(((0x3fcU == (0x3fcU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding))) 
                       & (0U != (3U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding)))));
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding)));
    } else if ((1U == ((((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb) 
                         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full 
            = (0x3ffU == (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding));
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding 
            = (0x3ffU & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding) 
                         - (IData)(1U)));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last 
        = ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
            == (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                            >> 9U))) & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                        >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                                  >> 9U))));
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
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda 
        = (1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)) 
                 | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl 
        = (1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)) 
                 | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready 
        = (1U & (((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait)) 
                  & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready) 
                     | ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn) 
                        >> 0xbU))) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual)));
    vlSelf->main__DOT__rcv__DOT__data_reg = vlSelf->__Vdly__main__DOT__rcv__DOT__data_reg;
    vlSelf->main__DOT__rcv__DOT__zero_baud_counter 
        = vlSelf->__Vdly__main__DOT__rcv__DOT__zero_baud_counter;
    vlSelf->main__DOT__rcv__DOT__state = vlSelf->__Vdly__main__DOT__rcv__DOT__state;
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((2U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | (0U == (0x4000000U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                           >> 0x24U)))));
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest 
        = ((1U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)) 
           | ((0U == (0x4000000U & (0x4000000U ^ (0x7ffffffU 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                             >> 0x24U)))))) 
              << 1U));
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbu_cyc));
    vlSelf->main__DOT__swic__DOT__dc_err = ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                            & (IData)(vlSelf->main__DOT__swic__DOT__ext_err));
    vlSelf->main__DOT__swic__DOT__cpu_err = ((IData)(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc) 
                                             & ((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                                                & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
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
    vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb 
        = ((~ (((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                >> 1U) & (IData)(vlSelf->main__DOT__wbwide_i2cm_stb))) 
           & (2U <= ((IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight) 
                     + (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb)
                          ? 1U : 0U) + ((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
                                        & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
                                           | (IData)(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid)))))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest 
        = ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)) 
           | (0U == (0x380000U & (0x80000U ^ (0x3fffffU 
                                              & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest 
        = ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)) 
           | ((0U == (0x200000U & (0x200000U ^ (0x3fffffU 
                                                & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])))) 
              << 1U));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__dc_ack));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall 
        = ((IData)(vlSelf->main__DOT__swic__DOT__dc_stall) 
           | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill;
    main__DOT__u_fan__DOT__u_i2ccpu__DOT____VdfgTmp_hfc6f1b73__0 
        = (1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid)) 
                 | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready)));
    vlSelf->main__DOT__genbus__DOT__rx_valid = ((IData)(vlSelf->main__DOT__wbu_rx_stb) 
                                                & ((IData)(vlSelf->main__DOT__wbu_rx_data) 
                                                   >> 7U));
    vlSelf->main__DOT__rcv__DOT__ck_uart = vlSelf->main__DOT__rcv__DOT__qq_uart;
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err 
        = ((IData)(vlSelf->main__DOT__swic__DOT__dc_err) 
           & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__dc_err));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__cpu_err));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err 
        = ((IData)(vlSelf->main__DOT__swic__DOT__cpu_err) 
           & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
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
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda 
        = (1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)) 
                 | (IData)(vlSelf->i_i2c_sda)));
    vlSelf->main__DOT__i2ci__DOT__i2c_stretch = (((~ (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl)) 
                                                  & (IData)(vlSelf->main__DOT__i2ci__DOT__w_scl)) 
                                                 | ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__s_tvalid)) 
                                                    & (IData)(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0)));
    vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl 
        = (1U & ((~ (IData)(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)) 
                 | (IData)(vlSelf->i_i2c_scl)));
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size = 0U;
    } else if (((((IData)(vlSelf->main__DOT__swic__DOT__dmac_stb) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__sys_we)) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request))) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__sys_addr)))) {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size 
                    = (3U & (vlSelf->main__DOT__swic__DOT__sys_data 
                             >> 0x10U));
            }
        }
    }
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
                        = (0x1fffffffU & ((IData)(1U) 
                                          + vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr));
                }
            } else {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
                    = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc)
                        ? (0x1fffffffU & ((IData)(2U) 
                                          + vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr))
                        : (0x1ffffffeU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr));
            }
        } else {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
                = ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size))
                    ? ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc)
                        ? (0x1fffffffU & ((IData)(4U) 
                                          + vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr))
                        : (0x1ffffffcU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr))
                    : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc)
                        ? (0x1fffffffU & ((IData)(0x40U) 
                                          + vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr))
                        : (0x1fffffc0U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr)));
        }
    }
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner) {
        vlSelf->main__DOT__swic__DOT__dc_stb = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb;
        vlSelf->main__DOT__swic__DOT__dc_cyc = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc;
    } else {
        vlSelf->main__DOT__swic__DOT__dc_stb = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb;
        vlSelf->main__DOT__swic__DOT__dc_cyc = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc;
    }
    if (vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner) {
        vlSelf->main__DOT__wbwide_zip_stb = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                              ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                                              : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
        vlSelf->main__DOT__wbwide_zip_cyc = vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc;
    } else {
        vlSelf->main__DOT__wbwide_zip_stb = vlSelf->main__DOT__swic__DOT__dc_stb;
        vlSelf->main__DOT__wbwide_zip_cyc = vlSelf->main__DOT__swic__DOT__dc_cyc;
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_valid 
        = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid;
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty = 1U;
    } else if ((1U == (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr) 
                        << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty 
            = (1U >= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill));
    } else if ((2U == (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr) 
                        << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty = 0U;
    }
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda 
        = (1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)) 
                 | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl 
        = (1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)) 
                 | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready 
        = ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid)) 
           & (IData)(main__DOT__u_fan__DOT__u_i2ccpu__DOT____VdfgTmp_hfc6f1b73__0));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready 
        = ((~ ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
               | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))) 
           & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid)) 
              & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc)) 
                 & (IData)(main__DOT__u_fan__DOT__u_i2ccpu__DOT____VdfgTmp_hfc6f1b73__0))));
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
    vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4 
        = ((0x40000000U & ((IData)(vlSelf->main__DOT__i2ci__DOT__ovw_data) 
                           << 0x15U)) | (((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_abort) 
                                          << 0x1dU) 
                                         | (((IData)(vlSelf->main__DOT__i2ci__DOT__i2c_stretch) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->main__DOT__i2ci__DOT__half_insn) 
                                                << 0x18U) 
                                               | vlSelf->main__DOT__i2ci__DOT____VdfgTmp_h373818eb__0))));
    vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN 
        = (1U & (~ ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual))));
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
        VL_SHIFTR_WWI(1024,1024,32, __Vtemp_h9b90904f__0, __Vtemp_h448dc795__0, 
                      (0x1f8U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
                                 << 3U)));
        __Vtemp_h7be7356a__0[1U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[1U] 
                                    | __Vtemp_h9b90904f__0[1U]);
        __Vtemp_h7be7356a__0[2U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[2U] 
                                    | __Vtemp_h9b90904f__0[2U]);
        __Vtemp_h7be7356a__0[3U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[3U] 
                                    | __Vtemp_h9b90904f__0[3U]);
        __Vtemp_h7be7356a__0[4U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[4U] 
                                    | __Vtemp_h9b90904f__0[4U]);
        __Vtemp_h7be7356a__0[5U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[5U] 
                                    | __Vtemp_h9b90904f__0[5U]);
        __Vtemp_h7be7356a__0[6U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[6U] 
                                    | __Vtemp_h9b90904f__0[6U]);
        __Vtemp_h7be7356a__0[7U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[7U] 
                                    | __Vtemp_h9b90904f__0[7U]);
        __Vtemp_h7be7356a__0[8U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[8U] 
                                    | __Vtemp_h9b90904f__0[8U]);
        __Vtemp_h7be7356a__0[9U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[9U] 
                                    | __Vtemp_h9b90904f__0[9U]);
        __Vtemp_h7be7356a__0[0xaU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xaU] 
                                      | __Vtemp_h9b90904f__0[0xaU]);
        __Vtemp_h7be7356a__0[0xbU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xbU] 
                                      | __Vtemp_h9b90904f__0[0xbU]);
        __Vtemp_h7be7356a__0[0xcU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xcU] 
                                      | __Vtemp_h9b90904f__0[0xcU]);
        __Vtemp_h7be7356a__0[0xdU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xdU] 
                                      | __Vtemp_h9b90904f__0[0xdU]);
        __Vtemp_h7be7356a__0[0xeU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xeU] 
                                      | __Vtemp_h9b90904f__0[0xeU]);
        __Vtemp_h7be7356a__0[0xfU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xfU] 
                                      | __Vtemp_h9b90904f__0[0xfU]);
        __Vtemp_h7be7356a__0[0x10U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U] 
                                       | __Vtemp_h9b90904f__0[0x10U]);
        __Vtemp_h7be7356a__0[0x11U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U] 
                                       | __Vtemp_h9b90904f__0[0x11U]);
        __Vtemp_h7be7356a__0[0x12U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U] 
                                       | __Vtemp_h9b90904f__0[0x12U]);
        __Vtemp_h7be7356a__0[0x13U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U] 
                                       | __Vtemp_h9b90904f__0[0x13U]);
        __Vtemp_h7be7356a__0[0x14U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U] 
                                       | __Vtemp_h9b90904f__0[0x14U]);
        __Vtemp_h7be7356a__0[0x15U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U] 
                                       | __Vtemp_h9b90904f__0[0x15U]);
        __Vtemp_h7be7356a__0[0x16U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U] 
                                       | __Vtemp_h9b90904f__0[0x16U]);
        __Vtemp_h7be7356a__0[0x17U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U] 
                                       | __Vtemp_h9b90904f__0[0x17U]);
        __Vtemp_h7be7356a__0[0x18U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U] 
                                       | __Vtemp_h9b90904f__0[0x18U]);
        __Vtemp_h7be7356a__0[0x19U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U] 
                                       | __Vtemp_h9b90904f__0[0x19U]);
        __Vtemp_h7be7356a__0[0x1aU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU] 
                                       | __Vtemp_h9b90904f__0[0x1aU]);
        __Vtemp_h7be7356a__0[0x1bU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU] 
                                       | __Vtemp_h9b90904f__0[0x1bU]);
        __Vtemp_h7be7356a__0[0x1cU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU] 
                                       | __Vtemp_h9b90904f__0[0x1cU]);
        __Vtemp_h7be7356a__0[0x1dU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU] 
                                       | __Vtemp_h9b90904f__0[0x1dU]);
        __Vtemp_h7be7356a__0[0x1eU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU] 
                                       | __Vtemp_h9b90904f__0[0x1eU]);
        __Vtemp_h7be7356a__0[0x1fU] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU] 
                                       | __Vtemp_h9b90904f__0[0x1fU]);
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0U] 
            = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0U] 
               | __Vtemp_h9b90904f__0[0U]);
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[1U] 
            = __Vtemp_h7be7356a__0[1U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[2U] 
            = __Vtemp_h7be7356a__0[2U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[3U] 
            = __Vtemp_h7be7356a__0[3U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[4U] 
            = __Vtemp_h7be7356a__0[4U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[5U] 
            = __Vtemp_h7be7356a__0[5U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[6U] 
            = __Vtemp_h7be7356a__0[6U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[7U] 
            = __Vtemp_h7be7356a__0[7U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[8U] 
            = __Vtemp_h7be7356a__0[8U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[9U] 
            = __Vtemp_h7be7356a__0[9U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xaU] 
            = __Vtemp_h7be7356a__0[0xaU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xbU] 
            = __Vtemp_h7be7356a__0[0xbU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xcU] 
            = __Vtemp_h7be7356a__0[0xcU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xdU] 
            = __Vtemp_h7be7356a__0[0xdU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xeU] 
            = __Vtemp_h7be7356a__0[0xeU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0xfU] 
            = __Vtemp_h7be7356a__0[0xfU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x10U] 
            = __Vtemp_h7be7356a__0[0x10U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x11U] 
            = __Vtemp_h7be7356a__0[0x11U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x12U] 
            = __Vtemp_h7be7356a__0[0x12U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x13U] 
            = __Vtemp_h7be7356a__0[0x13U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x14U] 
            = __Vtemp_h7be7356a__0[0x14U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x15U] 
            = __Vtemp_h7be7356a__0[0x15U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x16U] 
            = __Vtemp_h7be7356a__0[0x16U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x17U] 
            = __Vtemp_h7be7356a__0[0x17U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x18U] 
            = __Vtemp_h7be7356a__0[0x18U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x19U] 
            = __Vtemp_h7be7356a__0[0x19U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1aU] 
            = __Vtemp_h7be7356a__0[0x1aU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1bU] 
            = __Vtemp_h7be7356a__0[0x1bU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1cU] 
            = __Vtemp_h7be7356a__0[0x1cU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1dU] 
            = __Vtemp_h7be7356a__0[0x1dU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1eU] 
            = __Vtemp_h7be7356a__0[0x1eU];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data[0x1fU] 
            = __Vtemp_h7be7356a__0[0x1fU];
        VL_SHIFTR_WWI(128,128,6, __Vtemp_h6aa6ab78__0, vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel, 
                      (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr));
        __Vtemp_hd96f9696__0[1U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[1U] 
                                    | __Vtemp_h6aa6ab78__0[1U]);
        __Vtemp_hd96f9696__0[2U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[2U] 
                                    | __Vtemp_h6aa6ab78__0[2U]);
        __Vtemp_hd96f9696__0[3U] = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[3U] 
                                    | __Vtemp_h6aa6ab78__0[3U]);
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[0U] 
            = (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[0U] 
               | __Vtemp_h6aa6ab78__0[0U]);
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[1U] 
            = __Vtemp_hd96f9696__0[1U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[2U] 
            = __Vtemp_hd96f9696__0[2U];
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel[3U] 
            = __Vtemp_hd96f9696__0[3U];
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err = 0U;
        vlSelf->main__DOT__swic__DOT__dmac_int = 0U;
    } else {
        if (((((IData)(vlSelf->main__DOT__swic__DOT__dmac_stb) 
               & (IData)(vlSelf->main__DOT__swic__DOT__sys_we)) 
              & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request))) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)))) {
            if ((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__sys_addr)))) {
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size 
                        = (3U & (vlSelf->main__DOT__swic__DOT__sys_data 
                                 >> 0x14U));
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)))) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request = 0U;
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort = 0U;
        }
        if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err) {
            vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err = 1U;
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy) 
             & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)) 
                | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err)))) {
            vlSelf->main__DOT__swic__DOT__dmac_int = 1U;
        }
        if ((((IData)(vlSelf->main__DOT__swic__DOT__dmac_stb) 
              & (IData)(vlSelf->main__DOT__swic__DOT__sys_we)) 
             & (0U == (3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))))) {
            if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request) 
                 | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy))) {
                if ((0x41425254U == vlSelf->main__DOT__swic__DOT__sys_data)) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request = 0U;
                    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort = 1U;
                }
            } else {
                if ((IData)((0x40000000U != (0x60000000U 
                                             & vlSelf->main__DOT__swic__DOT__sys_data)))) {
                    vlSelf->main__DOT__swic__DOT__dmac_int = 0U;
                }
                if ((1U & ((~ (vlSelf->main__DOT__swic__DOT__sys_data 
                               >> 0x1fU)) & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err)) 
                                             | (vlSelf->main__DOT__swic__DOT__sys_data 
                                                >> 0x1eU))))) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request 
                        = (1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len)));
                }
                if ((0x40000000U & vlSelf->main__DOT__swic__DOT__sys_data)) {
                    vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err = 0U;
                }
            }
        }
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb 
        = (2U <= ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight) 
                  + (((IData)(vlSelf->main__DOT__u_fan__DOT__mem_stb)
                       ? 1U : 0U) + ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
                                     & (~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready))))));
    vlSelf->main__DOT__rcv__DOT__qq_uart = vlSelf->main__DOT__rcv__DOT__q_uart;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA) 
           == (0xeU | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                       << 4U)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA) 
           == (0xfU | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie) 
                       << 4U)));
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                 | (IData)(vlSelf->i_reset)));
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
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)) 
           & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
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
    if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy;
    }
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda 
        = (1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)) 
                 | (IData)(vlSelf->i_fan_sda)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch 
        = (((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl)) 
            & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl)) 
           | ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid)) 
              & (IData)(main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT____VdfgTmp_h17d9fffe__0)));
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl 
        = (1U & ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN)) 
                 | (IData)(vlSelf->i_fan_scl)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
              | (IData)(vlSelf->main__DOT__wbwide_zip_stb)));
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel 
        = (0U != (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [0U] & vlSelf->main__DOT__wbwide_xbar__DOT__grant
                  [0U]));
    if ((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
               & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel = 1U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel 
        = (0U != (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [1U] & vlSelf->main__DOT__wbwide_xbar__DOT__grant
                  [1U]));
    if ((1U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                >> 1U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                             >> 1U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel = 1U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel 
        = (0U != (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [2U] & vlSelf->main__DOT__wbwide_xbar__DOT__grant
                  [2U]));
    if ((1U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                >> 2U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                             >> 2U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel = 1U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel 
        = (0U != (vlSelf->main__DOT__wbwide_xbar__DOT__request
                  [3U] & vlSelf->main__DOT__wbwide_xbar__DOT__grant
                  [3U]));
    if ((IData)((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                  >> 3U) & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                               >> 3U))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel = 1U;
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[0U] 
        = (2U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[1U] 
        = ((2U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [1U]) | (1U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
                     [0U]));
    if ((1U & (vlSelf->main__DOT__wbwide_xbar__DOT__request
               [0U] & (vlSelf->main__DOT__wbwide_xbar__DOT__grant
                       [0U] | ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[1U] 
            = (1U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [1U]);
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[2U] 
        = ((2U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [2U]) | (1U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
                     [1U]));
    if ((1U & (vlSelf->main__DOT__wbwide_xbar__DOT__request
               [1U] & (vlSelf->main__DOT__wbwide_xbar__DOT__grant
                       [1U] | ((~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant) 
                                   >> 1U)) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty) 
                                              >> 1U)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[2U] 
            = (1U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [2U]);
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[3U] 
        = ((2U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [3U]) | (1U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
                     [2U]));
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
        = (1U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
           [0U]);
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[1U] 
        = ((1U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [1U]) | (2U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
                     [0U]));
    if ((1U & ((vlSelf->main__DOT__wbwide_xbar__DOT__request
                [0U] >> 1U) & ((vlSelf->main__DOT__wbwide_xbar__DOT__grant
                                [0U] >> 1U) | ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant)) 
                                               | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__mempty)))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__requested[1U] 
            = (2U | vlSelf->main__DOT__wbwide_xbar__DOT__requested
               [1U]);
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[2U] 
        = ((1U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [2U]) | (2U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
                     [1U]));
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
    vlSelf->main__DOT__wbwide_xbar__DOT__requested[3U] 
        = ((1U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
            [3U]) | (2U & vlSelf->main__DOT__wbwide_xbar__DOT__requested
                     [2U]));
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
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len = 1U;
    } else if (((((IData)(vlSelf->main__DOT__swic__DOT__dmac_stb) 
                  & (IData)(vlSelf->main__DOT__swic__DOT__sys_we)) 
                 & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request))) 
                & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy)))) {
        if ((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))) {
            if ((1U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))) {
                vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len 
                    = (0U == (0xfffffffU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len));
            }
        }
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN 
        = (1U & (~ ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual))));
    vlSelf->main__DOT__rcv__DOT__q_uart = vlSelf->i_wbu_uart_rx;
    vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__wbwide_zip_cyc));
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
    vlSelf->main__DOT__swic__DOT__cmd_reset = ((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
                                               | (((IData)(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold) 
                                                   | (IData)(vlSelf->main__DOT__swic__DOT__wdt_reset)) 
                                                  | (((IData)(vlSelf->main__DOT__swic__DOT__cpu_break) 
                                                      & (~ (IData)(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch))) 
                                                     | (IData)(vlSelf->main__DOT__swic__DOT__reset_request))));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel 
        = ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid) 
           & (0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)));
    vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS 
        = vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel;
    vlSelf->main__DOT__swic__DOT__wdt_reset = vlSelf->__Vdly__main__DOT__swic__DOT__wdt_reset;
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result 
        = ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset 
        = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort) 
           | (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset));
    vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2 
        = (1U & ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
                 | ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                    | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                       | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                          >> 2U)))));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset 
        = ((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
    vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold 
        = ((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
           | (1U < (IData)(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter)));
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce 
        = (1U & ((~ (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                      | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc)) 
                     | ((IData)(vlSelf->main__DOT__swic__DOT__cpu_break) 
                        | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep)))) 
                 & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                    | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase))));
    if (vlSelf->main__DOT____Vcellinp__swic__i_reset) {
        vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch = 1U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__dbg_cmd_write) 
                & (IData)(vlSelf->main__DOT__swic__DOT__dbg_sel))) {
        vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch 
            = (1U & (vlSelf->main__DOT__swic__DOT__dbg_idata 
                     >> 5U));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset 
        = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset) 
           | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
    vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter 
        = vlSelf->__Vdly__main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter;
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
    if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb)) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stall))))) {
        if (vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb) {
            vlSelf->main__DOT__swic__DOT__dbg_sel = vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel;
            vlSelf->main__DOT__swic__DOT__dbg_idata 
                = vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data;
        } else {
            vlSelf->main__DOT__swic__DOT__dbg_sel = 0xfU;
            vlSelf->main__DOT__swic__DOT__dbg_idata 
                = vlSelf->main__DOT____Vcellinp__swic__i_dbg_data;
        }
    }
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
    if (((IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)))) {
        vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel = 0xfU;
        vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data 
            = vlSelf->main__DOT____Vcellinp__swic__i_dbg_data;
    }
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
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src 
        = ((0xf0000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src) 
           | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src);
    if (vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc) {
        vlSelf->main__DOT__swic__DOT__sys_we = vlSelf->main__DOT__swic__DOT__cpu_we;
        vlSelf->main__DOT__swic__DOT__sys_addr = (0xffU 
                                                  & vlSelf->main__DOT__swic__DOT__cpu_addr);
        vlSelf->main__DOT__swic__DOT__sys_data = vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data[0U];
    } else {
        vlSelf->main__DOT__swic__DOT__sys_we = vlSelf->main__DOT__swic__DOT__dbg_we;
        vlSelf->main__DOT__swic__DOT__sys_addr = (0xffU 
                                                  & (0x1fU 
                                                     & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr)));
        vlSelf->main__DOT__swic__DOT__sys_data = vlSelf->main__DOT__swic__DOT__dbg_idata;
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src 
        = vlSelf->main__DOT__swic__DOT__sys_data;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst 
        = ((0xf0000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst) 
           | vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst);
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst 
        = vlSelf->main__DOT__swic__DOT__sys_data;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len = 0U;
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len 
        = ((0xf0000000U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len) 
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
    if ((1U & (((((IData)(vlSelf->main__DOT____Vcellinp__swic__i_reset) 
                  | (~ (IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc))) 
                 | (IData)(vlSelf->main__DOT__swic__DOT__no_dbg_err)) 
                | (~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stall))) 
               | (~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb))))) {
        vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb = 0U;
    } else if (((IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb) 
                & (~ (IData)(vlSelf->main__DOT__raw_cpu_dbg_stall)))) {
        vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb = 1U;
    }
    if (vlSelf->cpu_sim_cyc) {
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_data 
            = vlSelf->cpu_sim_data;
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb 
            = (1U & (IData)(vlSelf->cpu_sim_stb));
    } else {
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_data 
            = (IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                       >> 0x20U));
        vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb 
            = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                     >> 1U));
    }
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
    vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc 
        = (IData)((((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                    >> 1U) | (IData)(vlSelf->cpu_sim_cyc)));
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
    vlSelf->main__DOT__swic__DOT__dbg_stb = vlSelf->__Vdly__main__DOT__swic__DOT__dbg_stb;
    vlSelf->main__DOT__swic__DOT__sys_stb = ((IData)(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc)
                                              ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl))
                                              : ((IData)(vlSelf->main__DOT__swic__DOT__dbg_stb) 
                                                 & (0x40U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr)))));
    vlSelf->main__DOT__swic__DOT__no_dbg_err = 0U;
    vlSelf->main__DOT__raw_cpu_dbg_stall = vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb;
    vlSelf->cpu_sim_stall = (1U & ((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                   | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)));
    vlSelf->main__DOT__wbu_xbar__DOT__s_stall = (0xcU 
                                                 | ((0xfffffffeU 
                                                     & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                                        & (((IData)(vlSelf->cpu_sim_cyc) 
                                                            | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                                           << 1U))) 
                                                    | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                                       & (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))));
    main__DOT__swic__DOT____VdfgTmp_h9a48e2a3__0 = 
        ((~ (IData)(vlSelf->main__DOT__swic__DOT__dbg_stall)) 
         & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb));
    vlSelf->main__DOT__swic__DOT__dbg_cmd_write = ((IData)(vlSelf->main__DOT__swic__DOT__dbg_stb) 
                                                   & ((IData)(vlSelf->main__DOT__swic__DOT__dbg_we) 
                                                      & (0U 
                                                         == 
                                                         (0x60U 
                                                          & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr)))));
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
    vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0 
        = ((IData)(vlSelf->main__DOT__swic__DOT__dbg_cmd_write) 
           & (IData)(vlSelf->main__DOT__swic__DOT__dbg_sel));
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
    vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write 
        = ((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb) 
           & (IData)(vlSelf->main__DOT__swic__DOT__sys_we));
    vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write 
        = ((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb) 
           & (IData)(vlSelf->main__DOT__swic__DOT__sys_we));
    vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write 
        = ((IData)(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb) 
           & (IData)(vlSelf->main__DOT__swic__DOT__sys_we));
}

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__3(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*1:0*/ main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0;
    main__DOT__ddr3_controller_inst__DOT____Vlvbound_h60cbe704__0 = 0;
    IData/*27:0*/ __Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__Vfuncout;
    __Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address;
    __Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address = 0;
    SData/*15:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_counter;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_counter = 0;
    IData/*27:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction = 0;
    CData/*4:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction_address;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction_address = 0;
    CData/*0:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__reset_done;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__reset_done = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v0 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v1 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v2 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v3 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v4;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v4 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v5;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v5 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v6;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v6 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v7;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v7 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v8;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v8 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v0 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v1 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v2 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v3 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v4;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v4 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v5;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v5 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v6;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v6 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v7;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v7 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v8;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v8 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v0 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v1 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v2 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v3 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v4;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v4 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v5;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v5 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v6;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v6 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v7;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v7 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v8;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v8 = 0;
    SData/*13:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v0 = 0;
    SData/*13:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v1 = 0;
    SData/*13:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v2 = 0;
    SData/*13:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v3 = 0;
    SData/*13:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v4;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v4 = 0;
    SData/*13:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v5;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v5 = 0;
    SData/*13:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v6;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v6 = 0;
    SData/*13:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v7;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v7 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v8;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v8 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v0 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v1 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v2 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v3 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v4;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v4 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v5;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v5 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v6;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v6 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v7;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v7 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v8;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v8 = 0;
    CData/*0:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending = 0;
    CData/*0:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending = 0;
    QData/*63:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v0;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v1;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v1 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7 = 0;
    QData/*63:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v8;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v8 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__stage2_data__v9;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__stage2_data__v9 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0 = 0;
    CData/*2:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v0;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v0 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v0 = 0;
    CData/*2:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v1;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v1 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v1 = 0;
    CData/*2:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2 = 0;
    CData/*2:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3 = 0;
    CData/*2:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4 = 0;
    CData/*2:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5 = 0;
    CData/*2:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6 = 0;
    CData/*2:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9 = 0;
    CData/*1:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v0 = 0;
    CData/*1:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v1 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v1;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v1 = 0;
    CData/*1:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v2 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v2;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v2 = 0;
    CData/*1:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v3 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v3;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v3 = 0;
    CData/*1:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v4;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v4;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v5;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v5 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v10;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v10 = 0;
    CData/*2:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val = 0;
    CData/*1:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_q;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_q = 0;
    CData/*2:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs = 0;
    CData/*3:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq = 0;
    SData/*15:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v0 = 0;
    SData/*15:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v1 = 0;
    CData/*0:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__index_read_pipe;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__index_read_pipe = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v1;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v1 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15 = 0;
    CData/*0:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 0;
    CData/*1:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay = 0;
    CData/*3:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 0;
    CData/*4:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback = 0;
    CData/*0:0*/ __Vdly__o_ddr3_controller_odelay_data_ld;
    __Vdly__o_ddr3_controller_odelay_data_ld = 0;
    CData/*0:0*/ __Vdly__o_ddr3_controller_odelay_dqs_ld;
    __Vdly__o_ddr3_controller_odelay_dqs_ld = 0;
    CData/*0:0*/ __Vdly__o_ddr3_controller_idelay_data_ld;
    __Vdly__o_ddr3_controller_idelay_data_ld = 0;
    CData/*0:0*/ __Vdly__o_ddr3_controller_idelay_dqs_ld;
    __Vdly__o_ddr3_controller_idelay_dqs_ld = 0;
    CData/*4:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev = 0;
    CData/*4:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein_prev;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein_prev = 0;
    CData/*0:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__lane;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 = 0;
    CData/*4:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 = 0;
    CData/*5:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0 = 0;
    CData/*5:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0 = 0;
    CData/*5:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 = 0;
    CData/*5:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 = 0;
    CData/*4:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0;
    CData/*0:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat = 0;
    CData/*5:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored = 0;
    CData/*3:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat = 0;
    QData/*39:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_store;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_store = 0;
    CData/*5:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0 = 0;
    SData/*15:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement = 0;
    CData/*0:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback = 0;
    CData/*5:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat = 0;
    CData/*0:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback = 0;
    CData/*3:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max = 0;
    QData/*63:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0 = 0;
    VlWide<4>/*127:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern;
    VL_ZERO_W(128, __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern);
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 = 0;
    CData/*6:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 = 0;
    CData/*5:0*/ __Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 = 0;
    CData/*3:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2;
    __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 = 0;
    CData/*5:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3 = 0;
    CData/*0:0*/ __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2 = 0;
    VlWide<4>/*127:0*/ __Vtemp_ha92df1ef__0;
    VlWide<4>/*127:0*/ __Vtemp_h17627824__0;
    VlWide<4>/*127:0*/ __Vtemp_ha92df1ef__1;
    VlWide<4>/*127:0*/ __Vtemp_h1dc48362__0;
    VlWide<4>/*127:0*/ __Vtemp_ha92df1ef__2;
    VlWide<4>/*127:0*/ __Vtemp_ha4f23610__0;
    VlWide<4>/*127:0*/ __Vtemp_ha92df1ef__3;
    VlWide<4>/*127:0*/ __Vtemp_h2a35e013__0;
    VlWide<4>/*127:0*/ __Vtemp_ha92df1ef__4;
    VlWide<4>/*127:0*/ __Vtemp_h3cae3bfd__0;
    VlWide<4>/*127:0*/ __Vtemp_ha92df1ef__5;
    VlWide<4>/*127:0*/ __Vtemp_h5d38b657__0;
    VlWide<4>/*127:0*/ __Vtemp_ha92df1ef__6;
    VlWide<4>/*127:0*/ __Vtemp_haddb093a__0;
    VlWide<4>/*127:0*/ __Vtemp_ha92df1ef__7;
    VlWide<4>/*127:0*/ __Vtemp_h90021ffc__0;
    VlWide<4>/*127:0*/ __Vtemp_ha92df1ef__8;
    VlWide<4>/*127:0*/ __Vtemp_h056a6d0f__0;
    // Body
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_q 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v8 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v8 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v8 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v8 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v8 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v1 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v2 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v3 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v4 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v5 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v10 = 0U;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__index_read_pipe 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2 = 0U;
    vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v1 = 0U;
    vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v17 = 0U;
    vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v1 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8 = 0U;
    vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v3 = 0U;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[0U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[0U];
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[1U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[1U];
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[2U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[2U];
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[3U] 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[3U];
    __Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_store 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein_prev 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein_prev;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 = 0U;
    __Vdly__o_ddr3_controller_idelay_dqs_ld = vlSelf->o_ddr3_controller_idelay_dqs_ld;
    __Vdly__o_ddr3_controller_idelay_data_ld = vlSelf->o_ddr3_controller_idelay_data_ld;
    __Vdly__o_ddr3_controller_odelay_dqs_ld = vlSelf->o_ddr3_controller_odelay_dqs_ld;
    __Vdly__o_ddr3_controller_odelay_data_ld = vlSelf->o_ddr3_controller_odelay_data_ld;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2 = 0U;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__reset_done 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_counter 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction_address 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending;
    __Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__stage2_data__v9 = 0U;
    __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->main__DOT____Vcellinp__ddr3_controller_inst__i_rst_n)))) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 1U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp = 0ULL;
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq = 0U;
    if (vlSelf->main__DOT____Vcellinp__ddr3_controller_inst__i_rst_n) {
        vlSelf->main__DOT__wb32_ddr3_phy_ack = ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb) 
                                                & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                   >> 0xaU));
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 8U;
            if ((0x14U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 8U;
            }
            vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 1U;
        }
        vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 0x10U;
        if (((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                 >> 0xbU)) & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 5U;
            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v5 = 1U;
            vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v17 = 1U;
        }
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val 
            = ((6U & (IData)(__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val)) 
               | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d) 
                        | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q))));
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_q 
            = ((2U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q) 
                      << 1U)) | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d));
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs 
            = ((6U & (IData)(__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs)) 
               | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d) 
                  | (0U != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h133f9401__0 
            = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs));
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs 
            = ((5U & (IData)(__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs)) 
               | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h133f9401__0) 
                  << 1U));
        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hddcbe2f8__0 
            = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val));
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val 
            = ((5U & (IData)(__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val)) 
               | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hddcbe2f8__0) 
                  << 1U));
        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h133f9401__0 
            = (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs) 
                     >> 1U));
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs 
            = ((3U & (IData)(__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs)) 
               | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h133f9401__0) 
                  << 2U));
        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hddcbe2f8__0 
            = (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val) 
                     >> 1U));
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val 
            = ((3U & (IData)(__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val)) 
               | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hddcbe2f8__0) 
                  << 2U));
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq 
            = ((8U & (IData)(__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq)) 
               | ((4U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq) 
                         << 1U)) | ((2U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq) 
                                           << 1U)) 
                                    | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d) 
                                       | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q)))));
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq 
            = ((7U & (IData)(__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq)) 
               | (8U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq) 
                        << 1U)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha8bc7f27__1 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d
            [0U];
        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v0 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha8bc7f27__1;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v0 = 1U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha8bc7f27__1 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d
            [1U];
        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v1 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha8bc7f27__1;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v1 = 1U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha8bc7f27__1 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d
            [2U];
        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v2 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha8bc7f27__1;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v2 = 1U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha8bc7f27__1 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d
            [3U];
        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v3 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha8bc7f27__1;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v3 = 1U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha8bc7f27__1 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d
            [4U];
        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v4 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha8bc7f27__1;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v4 = 1U;
        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v0 
            = (0xffffU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe
                          [0U] >> 1U));
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v0 = 1U;
        if ((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
             [0U])) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data 
                = (1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data)));
        }
        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v1 
            = (0xffffU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe
                          [1U] >> 1U));
        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v1 = 1U;
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v0 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [1U];
        if ((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q
             [1U])) {
            __Vdly__main__DOT__ddr3_controller_inst__DOT__index_read_pipe 
                = (1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe)));
            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2 = 1U;
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max;
            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe;
        }
        if ((1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe
                   [0U] >> ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max) 
                            != vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                            [0U])))) {
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0 
                = (0xffU & (IData)(vlSelf->i_ddr3_controller_iserdes_data));
            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0 = 1U;
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0 = 0U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v1 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 8U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v1 = 8U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x10U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2 = 0x10U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x18U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3 = 0x18U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x20U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4 = 0x20U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x28U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5 = 0x28U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x30U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6 = 0x30U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x38U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7 = 0x38U;
        }
        if ((1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe
                   [1U] >> ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max) 
                            != vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                            [0U])))) {
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8 
                = (0xffU & (IData)(vlSelf->i_ddr3_controller_iserdes_data));
            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8 = 1U;
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8 = 0U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 8U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9 = 8U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x10U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10 = 0x10U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x18U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11 = 0x18U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x20U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12 = 0x20U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x28U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13 = 0x28U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x30U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14 = 0x30U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15 
                = (0xffU & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                    >> 0x38U)));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15 = 0x38U;
        }
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v1 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [2U];
        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v1 = 1U;
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v2 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [3U];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v3 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [4U];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v4 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [5U];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v5 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [6U];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v6 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [7U];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v7 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [8U];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v8 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [9U];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v9 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [0xaU];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v10 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [0xbU];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v11 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [0xcU];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v12 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [0xdU];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v13 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [0xeU];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v14 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
            [0xfU];
        vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v16 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q
            [0U];
        vlSelf->__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v16 
            = vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max;
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero) {
            __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_counter 
                = (0xffffU & vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction);
        } else if ((1U & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                           >> 0x1aU) & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter))))) {
            __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_counter 
                = (0xffffU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter) 
                              - (IData)(1U)));
        }
        if ((1U & ((1U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter)) 
                   | (~ (vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                         >> 0x1aU))))) {
            __Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address;
            __Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__Vfuncout 
                = ((0x10U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                    ? ((8U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                        ? 0x1b80000U : ((4U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                         ? ((2U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                             ? ((1U 
                                                 & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                                 ? 0x1b80000U
                                                 : 0x5b80005U)
                                             : ((1U 
                                                 & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                                 ? 0xdb8030cU
                                                 : 0x5880023U))
                                         : ((2U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                             ? ((1U 
                                                 & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                                 ? 0x7900002U
                                                 : 0x5b80003U)
                                             : ((1U 
                                                 & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                                 ? 0x1810044U
                                                 : 0x5b80002U))))
                    : ((8U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                        ? ((4U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                            ? ((2U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                ? ((1U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                    ? 0x5b8000aU : 0x18100c4U)
                                : ((1U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                    ? 0x1830000U : 0x5b80002U))
                            : ((2U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                ? ((1U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                    ? 0x5b80003U : 0x1830004U)
                                : ((1U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                    ? 0x7900002U : 0x7b00080U)))
                        : ((4U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                            ? ((2U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                ? ((1U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                    ? 0x5b80003U : 0x3800720U)
                                : ((1U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                    ? 0x1810044U : 0x1830000U))
                            : ((2U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                ? ((1U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                    ? 0x1820040U : 0x5b80024U)
                                : ((1U & (IData)(__Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__func_instruction_address))
                                    ? 0x4b8c350U : 0x4384e20U)))));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero = 1U;
            __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction 
                = __Vfunc_main__DOT__ddr3_controller_inst__DOT__read_rom_instruction__0__Vfuncout;
            __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction_address 
                = ((0x16U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))
                    ? 0x13U : (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))));
        } else {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero = 0U;
        }
        __Vdly__main__DOT__ddr3_controller_inst__DOT__reset_done 
            = (IData)(((vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                        >> 0x1bU) | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done)));
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 0U;
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done) {
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v0 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d
                [0U];
            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v0 = 1U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v1 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d
                [1U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v2 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d
                [2U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v3 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d
                [3U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v4 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d
                [4U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v5 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d
                [5U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v6 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d
                [6U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v7 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d
                [7U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v0 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d
                [0U];
            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v0 = 1U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v1 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d
                [1U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v2 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d
                [2U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v3 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d
                [3U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v4 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d
                [4U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v5 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d
                [5U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v6 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d
                [6U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v7 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d
                [7U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v0 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d
                [0U];
            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v0 = 1U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v1 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d
                [1U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v2 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d
                [2U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v3 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d
                [3U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v4 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d
                [4U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v5 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d
                [5U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v6 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d
                [6U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v7 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d
                [7U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v0 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d
                [0U];
            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v0 = 1U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v1 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d
                [1U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v2 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d
                [2U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v3 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d
                [3U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v4 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d
                [4U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v5 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d
                [5U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v6 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d
                [6U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v7 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d
                [7U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v0 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d
                [0U];
            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v0 = 1U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v1 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d
                [1U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v2 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d
                [2U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v3 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d
                [3U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v4 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d
                [4U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v5 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d
                [5U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v6 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d
                [6U];
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v7 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d
                [7U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h26ab86ee__0 
                = (0xffU & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U)))
                               ? ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned) 
                                  << (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                               [0U] 
                                               >> 3U)))
                               : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                             [0U]) >> 8U));
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h26ab86ee__0;
            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0 = 1U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v0 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 7U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v0 = 7U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v1 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 6U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v1 = 6U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 5U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2 = 5U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 4U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3 = 4U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 3U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4 = 3U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 2U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5 = 2U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 1U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6 = 1U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7 
                = (1U & (((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                             [0U] >> 3U)))
                           ? (0xffffU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned) 
                                         << (0x7fU 
                                             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                [0U] 
                                                >> 3U))))
                           : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                         [0U]));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7 = 0U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U];
            __Vtemp_ha92df1ef__0[0U] = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned);
            __Vtemp_ha92df1ef__0[1U] = (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned 
                                                >> 0x20U));
            __Vtemp_ha92df1ef__0[2U] = 0U;
            __Vtemp_ha92df1ef__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h17627824__0, __Vtemp_ha92df1ef__0, 
                          vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                          [0U]);
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h41e111b3__0 
                = (((QData)((IData)(__Vtemp_h17627824__0[3U])) 
                    << 0x20U) | (QData)((IData)(__Vtemp_h17627824__0[2U])));
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v0 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h41e111b3__0;
            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v0 = 1U;
            __Vtemp_ha92df1ef__1[0U] = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned);
            __Vtemp_ha92df1ef__1[1U] = (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned 
                                                >> 0x20U));
            __Vtemp_ha92df1ef__1[2U] = 0U;
            __Vtemp_ha92df1ef__1[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h1dc48362__0, __Vtemp_ha92df1ef__1, 
                          vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                          [0U]);
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v0 
                = ((__Vtemp_h1dc48362__0[1U] | (IData)(
                                                       (vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data
                                                        [0U] 
                                                        >> 0x20U))) 
                   >> 0x18U);
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v0 = 0x38U;
            __Vtemp_ha92df1ef__2[0U] = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned);
            __Vtemp_ha92df1ef__2[1U] = (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned 
                                                >> 0x20U));
            __Vtemp_ha92df1ef__2[2U] = 0U;
            __Vtemp_ha92df1ef__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_ha4f23610__0, __Vtemp_ha92df1ef__2, 
                          vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                          [0U]);
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v1 
                = (0xffU & ((__Vtemp_ha4f23610__0[1U] 
                             | (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data
                                        [0U] >> 0x20U))) 
                            >> 0x10U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v1 = 0x30U;
            __Vtemp_ha92df1ef__3[0U] = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned);
            __Vtemp_ha92df1ef__3[1U] = (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned 
                                                >> 0x20U));
            __Vtemp_ha92df1ef__3[2U] = 0U;
            __Vtemp_ha92df1ef__3[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h2a35e013__0, __Vtemp_ha92df1ef__3, 
                          vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                          [0U]);
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2 
                = (0xffU & ((__Vtemp_h2a35e013__0[1U] 
                             | (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data
                                        [0U] >> 0x20U))) 
                            >> 8U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2 = 0x28U;
            __Vtemp_ha92df1ef__4[0U] = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned);
            __Vtemp_ha92df1ef__4[1U] = (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned 
                                                >> 0x20U));
            __Vtemp_ha92df1ef__4[2U] = 0U;
            __Vtemp_ha92df1ef__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h3cae3bfd__0, __Vtemp_ha92df1ef__4, 
                          vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                          [0U]);
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3 
                = (0xffU & (__Vtemp_h3cae3bfd__0[1U] 
                            | (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data
                                       [0U] >> 0x20U))));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3 = 0x20U;
            __Vtemp_ha92df1ef__5[0U] = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned);
            __Vtemp_ha92df1ef__5[1U] = (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned 
                                                >> 0x20U));
            __Vtemp_ha92df1ef__5[2U] = 0U;
            __Vtemp_ha92df1ef__5[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h5d38b657__0, __Vtemp_ha92df1ef__5, 
                          vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                          [0U]);
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4 
                = ((__Vtemp_h5d38b657__0[0U] | (IData)(
                                                       vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data
                                                       [0U])) 
                   >> 0x18U);
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4 = 0x18U;
            __Vtemp_ha92df1ef__6[0U] = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned);
            __Vtemp_ha92df1ef__6[1U] = (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned 
                                                >> 0x20U));
            __Vtemp_ha92df1ef__6[2U] = 0U;
            __Vtemp_ha92df1ef__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_haddb093a__0, __Vtemp_ha92df1ef__6, 
                          vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                          [0U]);
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5 
                = (0xffU & ((__Vtemp_haddb093a__0[0U] 
                             | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data
                                       [0U])) >> 0x10U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5 = 0x10U;
            __Vtemp_ha92df1ef__7[0U] = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned);
            __Vtemp_ha92df1ef__7[1U] = (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned 
                                                >> 0x20U));
            __Vtemp_ha92df1ef__7[2U] = 0U;
            __Vtemp_ha92df1ef__7[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h90021ffc__0, __Vtemp_ha92df1ef__7, 
                          vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                          [0U]);
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6 
                = (0xffU & ((__Vtemp_h90021ffc__0[0U] 
                             | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data
                                       [0U])) >> 8U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6 = 8U;
            __Vtemp_ha92df1ef__8[0U] = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned);
            __Vtemp_ha92df1ef__8[1U] = (IData)((vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned 
                                                >> 0x20U));
            __Vtemp_ha92df1ef__8[2U] = 0U;
            __Vtemp_ha92df1ef__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h056a6d0f__0, __Vtemp_ha92df1ef__8, 
                          vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                          [0U]);
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7 
                = (0xffU & (__Vtemp_h056a6d0f__0[0U] 
                            | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data
                                      [0U])));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7 = 0U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v8 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d;
            if ((0x14U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q = 0U;
            }
        }
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
                if ((0U != (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U != (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                        if ((2U != (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                            if ((3U != (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                                if ((4U != (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                                    if ((5U == (0xfU 
                                                & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                                        if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                                            vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 1U;
                                        }
                                    } else if ((6U 
                                                != 
                                                (0xfU 
                                                 & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                                        if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                                            vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
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
            } else if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                vlSelf->main__DOT__wb32_ddr3_phy_idata = 0xaaaaaaaaU;
            }
        }
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done) {
            if (((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q)) 
                 & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update))) {
                __Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending 
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
                __Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending = 0U;
            }
            if ((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                          >> 0xbU) & (~ (IData)(vlSelf->main__DOT__wb32_ddr3_controller_stall))))) {
                __Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending 
                    = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                             >> 0xbU));
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we 
                    = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                             >> 0xbU));
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm 
                    = (0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                       >> 0x2cU)));
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col 
                    = (0x3f8U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                 >> 0x10U));
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank 
                    = (7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                             >> 0x1aU));
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row 
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
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data 
                    = ((0xffffffffULL & (QData)((IData)(
                                                        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU]))) 
                       | ((QData)((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU])) 
                          >> 0x20U));
            } else if ((0x10U != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                __Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm = 0xffU;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank = 0U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data;
            }
            if (((~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                     >> 0xbU)) & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))) {
                __Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending = 0U;
                __Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending = 0U;
            }
        }
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay 
            = ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))
                ? 0U : (3U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay) 
                              - (IData)(1U))));
        __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data 
            = ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data))
                ? 0U : (0xfU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data) 
                                - (IData)(1U))));
        __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback 
            = ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback))
                ? 0U : (0x1fU & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback) 
                                 - (IData)(1U))));
        vlSelf->o_ddr3_controller_bitslip = 0U;
        __Vdly__o_ddr3_controller_odelay_data_ld = 0U;
        __Vdly__o_ddr3_controller_odelay_dqs_ld = 0U;
        __Vdly__o_ddr3_controller_idelay_data_ld = 0U;
        __Vdly__o_ddr3_controller_idelay_dqs_ld = 0U;
        if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
            __Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane];
            __Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein_prev 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane];
        } else {
            __Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev = 0U;
            __Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein_prev = 0U;
        }
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
            __Vdly__o_ddr3_controller_odelay_data_ld 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld;
            __Vdly__o_ddr3_controller_odelay_dqs_ld 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld;
            __Vdly__o_ddr3_controller_idelay_data_ld 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld;
            __Vdly__o_ddr3_controller_idelay_dqs_ld 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld;
            __Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
            if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane))) {
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h6ae87c1f__0;
                __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h23068462__0;
                __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hf8f3b873__0;
                __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hb9125af6__0;
                __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0 
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
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha32579e4__0;
                __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h1b2f8325__0;
                __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h30c4ab1e__0;
                __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h80415d99__0;
                __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
            }
        }
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h02bca03b__0 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value;
            __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value;
            if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h02bca03b__0;
                __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
            }
            __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value;
        }
        if ((0U == ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                     ? vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
                    [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                     : 0U))) {
            __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index 
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
                __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 
                    = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h02bca03b__1;
                __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 = 1U;
                __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1 
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
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 1U;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0U;
                    __Vdly__o_ddr3_controller_odelay_data_ld = 1U;
                    __Vdly__o_ddr3_controller_odelay_dqs_ld = 1U;
                    __Vdly__o_ddr3_controller_idelay_data_ld = 1U;
                    __Vdly__o_ddr3_controller_idelay_dqs_ld = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 0U;
                } else if ((0xdU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 1U;
                }
            } else if ((1U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))) {
                    if ((0x78U == (0xffU & ((IData)(vlSelf->i_ddr3_controller_iserdes_bitslip_reference) 
                                            >> (7U 
                                                & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                   << 3U)))))) {
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 2U;
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs = 1U;
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat = 0U;
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored = 0U;
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
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay = 3U;
                    }
                }
            } else if ((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data))) {
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 3U;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 3U;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat = 0U;
                }
            } else if ((3U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data))) {
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat)));
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_store 
                        = (((QData)((IData)((0xffU 
                                             & ((IData)(vlSelf->i_ddr3_controller_iserdes_dqs) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                                    << 3U)))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store 
                                                         >> 8U))));
                    if ((4U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat))) {
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 4U;
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index;
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index = 0U;
                    }
                }
            } else if ((4U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((0x154U == ((0x27U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index))
                                 ? (0x3ffU & (IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store 
                                                      >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index))))
                                 : 0U))) {
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat 
                        = (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index) 
                            == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))
                            ? (1U & ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat)))
                            : 0U);
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs = 0U;
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat = 0U;
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 5U;
                    } else {
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 2U;
                    }
                } else if ((0x27U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha9e19381__0 = 1U;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 2U;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 0xaU;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha1e87f9f__0 = 1U;
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        __Vdly__o_ddr3_controller_idelay_data_ld 
                            = (((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                & (IData)(__Vdly__o_ddr3_controller_idelay_data_ld)) 
                               | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha9e19381__0) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                        __Vdly__o_ddr3_controller_idelay_dqs_ld 
                            = (((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                & (IData)(__Vdly__o_ddr3_controller_idelay_dqs_ld)) 
                               | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha1e87f9f__0) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                    }
                } else {
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index 
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
                        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hcbac20e2__0;
                        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    }
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 6U;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement 
                        = (0xffffU & (0x3c3cU >> ((0U 
                                                   >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                   ? 
                                                  (7U 
                                                   & vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                                   : 0U)));
                } else {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha9e19381__1 = 1U;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 2U;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 0xaU;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha1e87f9f__1 = 1U;
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        __Vdly__o_ddr3_controller_idelay_data_ld 
                            = (((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                & (IData)(__Vdly__o_ddr3_controller_idelay_data_ld)) 
                               | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_ha9e19381__1) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                        __Vdly__o_ddr3_controller_idelay_dqs_ld 
                            = (((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                & (IData)(__Vdly__o_ddr3_controller_idelay_dqs_ld)) 
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
                            __Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
                                = (1U & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                            __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 1U;
                        } else {
                            vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
                            __Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0U;
                            __Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback = 1U;
                            __Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat = 0U;
                            __Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback = 0U;
                            __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 7U;
                        }
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max 
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
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay = 3U;
                    }
                }
            } else if ((0x11U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 1U;
                __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback = 0xdU;
                __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 8U;
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
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat 
                        = (((1U & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                           >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8)))) 
                            == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback))
                            ? (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat)))
                            : 0U);
                    if ((0x14U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat))) {
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat = 0U;
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback;
                        if (((1U == (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback) 
                                      << 1U) | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback))) 
                             | ((0U == ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                         ? vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                                        [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                         : 0U)) & (0x1fU 
                                                   == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein_prev))))) {
                            if (vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) {
                                __Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
                                    = (1U & ((IData)(1U) 
                                             + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                                __Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback = 1U;
                                __Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat = 0U;
                                __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 7U;
                            } else {
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 0U;
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 0U;
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
                                __Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0U;
                                __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 9U;
                            }
                        } else {
                            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h157c436b__0 = 1U;
                            __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 7U;
                            vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hb2a29e0b__0 = 1U;
                            if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                                __Vdly__o_ddr3_controller_odelay_data_ld 
                                    = (((~ ((IData)(1U) 
                                            << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                        & (IData)(__Vdly__o_ddr3_controller_odelay_data_ld)) 
                                       | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h157c436b__0) 
                                                << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                                __Vdly__o_ddr3_controller_odelay_dqs_ld 
                                    = (((~ ((IData)(1U) 
                                            << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                        & (IData)(__Vdly__o_ddr3_controller_odelay_dqs_ld)) 
                                       | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hb2a29e0b__0) 
                                                << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                            }
                        }
                    }
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback 
                        = (1U & (IData)((vlSelf->i_ddr3_controller_iserdes_data 
                                         >> (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8))));
                }
            } else if ((9U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if (((0x16U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address)) 
                     & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q)))) {
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data = 0x9177298cd0ad51c1ULL;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xaU;
                }
            } else if ((0xaU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                __Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we = 1U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col = 8U;
                vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data = 0x80dbcfd275f12c3dULL;
                __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xbU;
            } else if ((0xbU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((1U & ((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q)) 
                           & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb))))) {
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 1U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux = 0U;
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we = 0U;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xcU;
                }
            } else if ((0xcU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
                if ((1U == vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                     [0U])) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h36bae610__0 = 0U;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store 
                        = vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xdU;
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h36bae610__0;
                        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    }
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[0U] = 0xd0ad51c1U;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[1U] = 0x9177298cU;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[2U] = 0x75f12c3dU;
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[3U] = 0x80dbcfd2U;
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
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__lane 
                            = (1U & ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hd9bf9093__0 = 0U;
                        if ((0U >= (1U & ((IData)(1U) 
                                          + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))))) {
                            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 
                                = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hd9bf9093__0;
                            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 = 1U;
                            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1 
                                = (1U & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane)));
                        }
                    } else {
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x10U;
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
                        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h36bae610__1;
                        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    }
                    if ((0x38U == ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                    ? vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                    : 0U))) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h36bae610__2 = 0U;
                        if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 
                                = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h36bae610__2;
                            __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 = 1U;
                            __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3 
                                = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                        }
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check = 0U;
                        __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xeU;
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
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xfU;
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_hcbac20e2__1;
                        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    }
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement 
                        = (0xffffU & (0x3c3cU >> ((0U 
                                                   >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                                   ? 
                                                  (7U 
                                                   & vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index
                                                   [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane])
                                                   : 0U)));
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0xfU;
                } else {
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check 
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
                        __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h02bca03b__2;
                        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 = 1U;
                        __Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__lane;
                    }
                }
            } else if ((0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay))) {
                if (((0xffU & ((IData)(vlSelf->i_ddr3_controller_iserdes_bitslip_reference) 
                               >> (7U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane) 
                                         << 3U)))) 
                     == (0xffU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement)))) {
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max 
                        = (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max) 
                            > ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                               [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                : 0U)) ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max)
                            : ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))
                                ? vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                               [vlSelf->main__DOT__ddr3_controller_inst__DOT__lane]
                                : 0U));
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 9U;
                } else {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h0aaecb26__2 = 1U;
                    if ((0U >= (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) {
                        vlSelf->o_ddr3_controller_bitslip 
                            = (((~ ((IData)(1U) << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))) 
                                & (IData)(vlSelf->o_ddr3_controller_bitslip)) 
                               | (1U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT____Vlvbound_h0aaecb26__2) 
                                        << (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))));
                    }
                    __Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay = 3U;
                }
            }
        } else if ((0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
            __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0x10U;
            if ((0x13U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address))) {
                vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 1U;
                if ((((~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending)) 
                      & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending))) 
                     & (IData)(vlSelf->main__DOT__wb32_ddr3_controller_stall))) {
                    vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
                }
            }
        }
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d;
            vlSelf->main__DOT__wb32_ddr3_controller_stall 
                = ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d) 
                   | (0x10U != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)));
            if ((1U & (~ (vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
                          >> 0x1bU)))) {
                vlSelf->main__DOT__wb32_ddr3_controller_stall = 1U;
            }
        }
        vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data 
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
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld = 0U;
        if (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb) 
             & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                >> 0xaU))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane 
                = (1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data 
                         >> 5U));
            if (((((((((0U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))) 
                       | (1U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                      | (2U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                     | (3U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                    | (4U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                   | (5U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                  | (6U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                 | (7U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))))) {
                if ((0U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update 
                            = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel));
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld 
                            = (1U & ((IData)(1U) << 
                                     (1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data 
                                            >> 5U))));
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein 
                            = (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data);
                    }
                } else if ((1U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update 
                            = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel));
                    }
                } else if ((2U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update 
                            = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel));
                    }
                } else if ((3U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update 
                            = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel));
                    }
                }
                if ((0U != (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld 
                                = (1U & ((IData)(1U) 
                                         << (1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data 
                                                   >> 5U))));
                            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein 
                                = (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data);
                        }
                    }
                    if ((1U != (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                        if ((2U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                            if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld 
                                    = (1U & ((IData)(1U) 
                                             << (1U 
                                                 & (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data 
                                                    >> 5U))));
                                vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein 
                                    = (0x1fU & vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data);
                            }
                        }
                        if ((2U != (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                            if ((3U == (0xfU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                                if (vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we) {
                                    vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld 
                                        = (1U & ((IData)(1U) 
                                                 << 
                                                 (1U 
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
        }
        if ((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                    >> 0xaU) & (~ (IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall))))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel 
                = (0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                   >> 0x28U)));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr 
                = (0x7fU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                             << 6U) | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                       >> 0x1aU)));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data 
                = vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we 
                = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                         >> 0xaU));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb 
                = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                         >> 0xaU));
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall)))) {
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel = 0U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr = 0U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data = 0U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we = 0U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb = 0U;
        }
    } else {
        vlSelf->main__DOT__wb32_ddr3_phy_ack = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 2U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 0x10U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_q = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq = 0U;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v8 = 1U;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v8 = 1U;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v8 = 1U;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v8 = 1U;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v8 = 1U;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v10 = 1U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__index_read_pipe = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data = 0U;
        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v3 = 1U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction_address = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction = 0x4380005U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_counter = 5U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__reset_done = 0U;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9 = 1U;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__stage2_data__v9 = 1U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q = 0U;
        vlSelf->main__DOT__wb32_ddr3_phy_idata = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data = 0ULL;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_store = 0ULL;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index = 0U;
        __Vdly__o_ddr3_controller_odelay_data_ld = 0U;
        __Vdly__o_ddr3_controller_odelay_dqs_ld = 0U;
        __Vdly__o_ddr3_controller_idelay_data_ld = 0U;
        __Vdly__o_ddr3_controller_idelay_dqs_ld = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback = 1U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb = 0U;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3 = 1U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig = 0U;
        vlSelf->o_ddr3_controller_bitslip = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein_prev = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs = 1U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__lane = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store = 0ULL;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[0U] = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[1U] = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[2U] = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[3U] = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback = 0U;
        __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data = 0ULL;
        __Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2 = 1U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q = 1U;
        vlSelf->main__DOT__wb32_ddr3_controller_stall = 1U;
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
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb = 0U;
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_q;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq;
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v0;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v1;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v2;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v3;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v4;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v5;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v6;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v7;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7U] = 0U;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v0;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v1;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v2;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v3;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v4;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v5;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v6;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v7;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7U] = 0U;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v0;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v1;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v2;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v3;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v4;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v5;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v6;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v7;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7U] = 0U;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v0;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v1;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v2;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v3;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v4;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v5;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v6;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v7;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__bank_active_row_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7U] = 0U;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v0;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v1;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v2;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v3;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v4;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v5;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v6;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v7;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7U] = 0U;
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__index_read_pipe;
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v0;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v1;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v2;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v3) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v3;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v4) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v4;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v5) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4U] = 0U;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q__v10) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4U] = 0U;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v0;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v1;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2] 
            = (vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe
               [__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2] 
               | (0xffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v2))));
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v0)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v1))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v1)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v1)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7)));
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                [1U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15)));
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v3) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U] = 0ULL;
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_counter;
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v0))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v0) 
                                  << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v0))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v1))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v1) 
                                  << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v1))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2) 
                                  << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3) 
                                  << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4) 
                                  << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5) 
                                  << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6) 
                                  << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | (0xffU & ((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7) 
                                  << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7))));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1U] = 0U;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v0;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v0))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v0)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v0)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v1))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v1)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v1)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v8;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__stage2_data__v9) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U] = 0ULL;
    }
    vlSelf->o_ddr3_controller_toggle_dqs = (1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val));
    vlSelf->o_ddr3_controller_dqs_tri_control = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs) 
                                                     >> 2U)));
    vlSelf->o_ddr3_controller_dq_tri_control = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq) 
                                                    >> 3U)));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q 
        = ((IData)(vlSelf->main__DOT____Vcellinp__ddr3_controller_inst__i_rst_n) 
           & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
    vlSelf->o_ddr3_controller_dm = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
        [1U];
    vlSelf->o_ddr3_controller_data = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
        [1U];
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0xaU] 
        = vlSelf->main__DOT__wb32_ddr3_phy_idata;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__train_delay;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein_prev 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein_prev;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_store;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__write_calib_stb;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[0U] 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[0U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[1U] 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[1U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[2U] 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[2U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern[3U] 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__write_pattern[3U];
    vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__read_data_store;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__start_index_check;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored;
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v0;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v1;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v2;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__dq_target_index__v3) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[0U] = 0U;
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback;
    vlSelf->o_ddr3_controller_odelay_data_ld = __Vdly__o_ddr3_controller_odelay_data_ld;
    vlSelf->o_ddr3_controller_odelay_dqs_ld = __Vdly__o_ddr3_controller_odelay_dqs_ld;
    vlSelf->o_ddr3_controller_idelay_data_ld = __Vdly__o_ddr3_controller_idelay_data_ld;
    vlSelf->o_ddr3_controller_idelay_dqs_ld = __Vdly__o_ddr3_controller_idelay_dqs_ld;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction_address;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__lane 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__lane;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__delay_before_read_data;
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v0;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v1;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v0;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein__v1;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v0;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein__v1;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v0;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein__v1;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v0;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein__v1;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v0;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v1;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v2;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[__Vdlyvdim0__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__data_start_index__v3;
    }
    if (__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__added_read_pipe__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0U] = 8U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0U] = 0U;
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value 
        = (0x3fU & ((1U & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))
                     ? ((IData)(2U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))
                     : ((IData)(1U) + (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored))));
    vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8 = 0U;
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
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d 
        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update = 1U;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__index = 5U;
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
                vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4U] 
                    = (1U | ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux) 
                             << 1U));
            }
        }
    }
    vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__reset_done;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__instruction;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate 
        = __Vdly__main__DOT__ddr3_controller_inst__DOT__state_calibrate;
    vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4 
        = (((IData)(vlSelf->i_ddr3_controller_iserdes_dqs) 
            << 0x17U) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate) 
                          << 0x12U) | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address) 
                                        << 0xdU) | 
                                       (((IData)(vlSelf->o_ddr3_controller_idelay_dqs_ld) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->o_ddr3_controller_idelay_data_ld) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->o_ddr3_controller_odelay_data_ld) 
                                             << 0xaU) 
                                            | (((IData)(vlSelf->o_ddr3_controller_odelay_dqs_ld) 
                                                << 9U) 
                                               | ((0x1c0U 
                                                   & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data) 
                                                      << 6U)) 
                                                  | (((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane))))))))));
    vlSelf->main__DOT__wb32_ddr3_phy_stall = (1U & 
                                              (~ (IData)(vlSelf->main__DOT____Vcellinp__ddr3_controller_inst__i_rst_n)));
}

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__4(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->main__DOT__wb32_xbar__DOT__iM = 0xdU;
    vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 0U;
    if ((2U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (1U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((4U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (2U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((8U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (3U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0x10U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (4U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0x20U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (5U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0x40U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (6U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0x80U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (7U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0x100U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (8U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0x200U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (9U | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0x400U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (0xaU | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0x800U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (0xbU | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0x1000U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (0xcU | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0U == (IData)(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    }
}

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__5(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->main__DOT__wbu_xbar__DOT__iM = 3U;
    vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 0U;
    if ((2U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (1U | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((4U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (2U | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0U == (IData)(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    }
}

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__6(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->main__DOT__wbwide_xbar__DOT__iM = 3U;
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 0U;
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    }
}

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__7(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->main__DOT__wbwide_xbar__DOT__iM = 3U;
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 0U;
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    }
}

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__8(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->main__DOT__wbwide_xbar__DOT__iM = 3U;
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 0U;
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    }
}
