// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmain__Syms.h"
#include "Vmain___024root.h"

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__4(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->main__DOT__wb32_xbar__DOT__iM = 0xcU;
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
    vlSelf->main__DOT__wbwide_xbar__DOT__iM = 4U;
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 0U;
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 3U;
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
    vlSelf->main__DOT__wbwide_xbar__DOT__iM = 4U;
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 0U;
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 3U;
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
    vlSelf->main__DOT__wbwide_xbar__DOT__iM = 4U;
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 0U;
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 3U;
    }
    if ((0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    }
}

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__9(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->main__DOT__wbwide_xbar__DOT__iM = 4U;
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 0U;
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (1U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((4U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = (2U | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex));
    }
    if ((8U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex = 3U;
    }
    if ((0U == (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant))) {
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex 
            = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    }
}

extern const VlWide<16>/*511:0*/ Vmain__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__10(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__10\n"); );
    // Init
    CData/*0:0*/ main__DOT__wb32_xbar__DOT____VdfgTmp_h4f7f05b5__0;
    main__DOT__wb32_xbar__DOT____VdfgTmp_h4f7f05b5__0 = 0;
    CData/*0:0*/ main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0;
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_h42aab469__0 = 0;
    CData/*0:0*/ main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0;
    main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT____Vlvbound_hc067af9a__0 = 0;
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
    // Body
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb 
        = vlSelf->__Vdly__main__DOT____Vcellout__wb32_xbar__o_sstb;
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
        vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
    }
    if ((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
         [0U])) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2 
            = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0U];
    }
    if ((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) {
        if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall)))) {
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
                = ((6U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe)) 
                   | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_we) 
                            >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                            [0U])));
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
                = ((0xfe000000U & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U]) 
                   | vlSelf->main__DOT__wbwide_xbar__DOT__m_addr
                   [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                   [0U]]);
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
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
            = (6U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe));
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
            = (0xfe000000U & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U]);
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
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U] = 0U;
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U] = 0U;
    }
    if ((2U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall) 
                      >> 1U)))) {
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
                = ((5U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe)) 
                   | (2U & (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__m_we) 
                             >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                             [1U]) << 1U)));
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
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe 
            = (5U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe));
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
            = (0x1ffffffU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U]);
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
            = (0xfffc0000U & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U]);
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
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                = ((0x3ffffU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U]) 
                   | (vlSelf->main__DOT__wbwide_xbar__DOT__m_addr
                      [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                      [2U]] << 0x12U));
            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                = (0x7ffU & (vlSelf->main__DOT__wbwide_xbar__DOT__m_addr
                             [vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                             [2U]] >> 0xeU));
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
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
            = (0x3ffffU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U]);
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] = 0U;
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
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[4U] = 0U;
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[5U] = 0U;
    }
    if ((1U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if ((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall)))) {
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                = ((0xffffffffff0ULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel) 
                   | (IData)((IData)(((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [0U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_sel
                                      [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                      [0U]] : 0U))));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                = ((0xffffff00U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U]) 
                   | ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [0U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_addr
                      [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                      [0U]] : 0U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U] 
                = (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [0U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                      >> ((IData)(0x24U) 
                                          + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                          [0U])))) ? 
                   ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [0U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_data
                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                    [0U]] : 0U) : 0U);
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
                = ((0x7feU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                   | ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [0U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                        >> ((IData)(0x24U) 
                                            + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                            [0U])))));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
            = (0xffffffffff0ULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
            = (0xffffff00U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U]);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U] = 0U;
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
            = (0x7feU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe));
    }
    if ((2U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                      >> 1U)))) {
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                = ((0xfffffffff0fULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [1U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_sel
                                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [1U]] : 0U))) 
                      << 4U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                = ((0xffff00ffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U]) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [1U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_addr
                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [1U]] : 0U) << 8U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U] 
                = (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [1U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                      >> ((IData)(0x24U) 
                                          + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                          [1U])))) ? 
                   ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [1U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_data
                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                    [1U]] : 0U) : 0U);
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
                = ((0x7fdU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [1U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                         >> ((IData)(0x24U) 
                                             + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [1U])))) 
                      << 1U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
            = (0xfffffffff0fULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
            = (0xffff00ffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U]);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U] = 0U;
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
            = (0x7fdU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe));
    }
    if ((4U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                      >> 2U)))) {
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                = ((0xffffffff0ffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [2U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_sel
                                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [2U]] : 0U))) 
                      << 8U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                = ((0xff00ffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U]) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [2U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_addr
                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [2U]] : 0U) << 0x10U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U] 
                = (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [2U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                      >> ((IData)(0x24U) 
                                          + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                          [2U])))) ? 
                   ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [2U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_data
                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                    [2U]] : 0U) : 0U);
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
                = ((0x7fbU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [2U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                         >> ((IData)(0x24U) 
                                             + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [2U])))) 
                      << 2U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
            = (0xffffffff0ffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
            = (0xff00ffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U]);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U] = 0U;
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
            = (0x7fbU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe));
    }
    if ((8U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                      >> 3U)))) {
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                = ((0xfffffff0fffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [3U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_sel
                                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [3U]] : 0U))) 
                      << 0xcU));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                = ((0xffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U]) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [3U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_addr
                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [3U]] : 0U) << 0x18U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U] 
                = (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [3U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                      >> ((IData)(0x24U) 
                                          + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                          [3U])))) ? 
                   ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [3U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_data
                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                    [3U]] : 0U) : 0U);
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
                = ((0x7f7U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [3U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                         >> ((IData)(0x24U) 
                                             + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [3U])))) 
                      << 3U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
            = (0xfffffff0fffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
            = (0xffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U]);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U] = 0U;
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
            = (0x7f7U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe));
    }
    if ((0x10U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                      >> 4U)))) {
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                = ((0xffffff0ffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [4U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_sel
                                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [4U]] : 0U))) 
                      << 0x10U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                = ((0xffffff00U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]) 
                   | ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [4U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_addr
                      [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                      [4U]] : 0U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U] 
                = (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [4U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                      >> ((IData)(0x24U) 
                                          + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                          [4U])))) ? 
                   ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [4U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_data
                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                    [4U]] : 0U) : 0U);
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
                = ((0x7efU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [4U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                         >> ((IData)(0x24U) 
                                             + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [4U])))) 
                      << 4U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
            = (0xffffff0ffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
            = (0xffffff00U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U] = 0U;
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
            = (0x7efU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe));
    }
    if ((0x20U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                      >> 5U)))) {
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                = ((0xfffff0fffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [5U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_sel
                                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [5U]] : 0U))) 
                      << 0x14U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                = ((0xffff00ffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [5U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_addr
                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [5U]] : 0U) << 8U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U] 
                = (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [5U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                      >> ((IData)(0x24U) 
                                          + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                          [5U])))) ? 
                   ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [5U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_data
                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                    [5U]] : 0U) : 0U);
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
                = ((0x7dfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [5U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                         >> ((IData)(0x24U) 
                                             + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [5U])))) 
                      << 5U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
            = (0xfffff0fffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
            = (0xffff00ffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U] = 0U;
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
            = (0x7dfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe));
    }
    if ((0x40U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                      >> 6U)))) {
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                = ((0xffff0ffffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [6U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_sel
                                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [6U]] : 0U))) 
                      << 0x18U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                = ((0xff00ffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [6U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_addr
                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [6U]] : 0U) << 0x10U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U] 
                = (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [6U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                      >> ((IData)(0x24U) 
                                          + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                          [6U])))) ? 
                   ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [6U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_data
                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                    [6U]] : 0U) : 0U);
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
                = ((0x7bfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [6U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                         >> ((IData)(0x24U) 
                                             + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [6U])))) 
                      << 6U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
            = (0xffff0ffffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
            = (0xff00ffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U] = 0U;
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
            = (0x7bfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe));
    }
    if ((0x80U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                      >> 7U)))) {
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                = ((0xfff0fffffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [7U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_sel
                                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [7U]] : 0U))) 
                      << 0x1cU));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                = ((0xffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [7U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_addr
                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [7U]] : 0U) << 0x18U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U] 
                = (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [7U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                      >> ((IData)(0x24U) 
                                          + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                          [7U])))) ? 
                   ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [7U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_data
                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                    [7U]] : 0U) : 0U);
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
                = ((0x77fU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [7U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                         >> ((IData)(0x24U) 
                                             + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [7U])))) 
                      << 7U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
            = (0xfff0fffffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
            = (0xffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U] = 0U;
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
            = (0x77fU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe));
    }
    if ((0x100U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                      >> 8U)))) {
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                = ((0xff0ffffffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [8U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_sel
                                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [8U]] : 0U))) 
                      << 0x20U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                = ((0xffff00U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U]) 
                   | ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [8U]) ? (0xffffffU & vlSelf->main__DOT__wb32_xbar__DOT__m_addr
                                [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                [8U]]) : 0U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] 
                = (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [8U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                      >> ((IData)(0x24U) 
                                          + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                          [8U])))) ? 
                   ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [8U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_data
                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                    [8U]] : 0U) : 0U);
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
                = ((0x6ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [8U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                         >> ((IData)(0x24U) 
                                             + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [8U])))) 
                      << 8U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
            = (0xff0ffffffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
            = (0xffff00U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U]);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U] = 0U;
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
            = (0x6ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe));
    }
    if ((0x200U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                      >> 9U)))) {
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                = ((0xf0fffffffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [9U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_sel
                                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [9U]] : 0U))) 
                      << 0x24U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                = ((0xff00ffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U]) 
                   | (0xffffffU & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                     [9U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_addr
                                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                    [9U]] : 0U) << 8U)));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[9U] 
                = (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [9U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                      >> ((IData)(0x24U) 
                                          + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                          [9U])))) ? 
                   ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [9U]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_data
                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                    [9U]] : 0U) : 0U);
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
                = ((0x5ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [9U]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                         >> ((IData)(0x24U) 
                                             + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [9U])))) 
                      << 9U));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
            = (0xf0fffffffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
            = (0xff00ffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U]);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[9U] = 0U;
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
            = (0x5ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe));
    }
    if ((0x400U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant))) {
        if ((1U & (~ ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__s_stall) 
                      >> 0xaU)))) {
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                = ((0xffffffffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel) 
                   | ((QData)((IData)(((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                        [0xaU]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_sel
                                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                       [0xaU]] : 0U))) 
                      << 0x28U));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                = ((0xffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U]) 
                   | (0xffffffU & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                     [0xaU]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_addr
                                    [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                    [0xaU]] : 0U) << 0x10U)));
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU] 
                = (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                     [0xaU]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                        >> ((IData)(0x24U) 
                                            + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                            [0xaU]))))
                    ? ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [0xaU]) ? vlSelf->main__DOT__wb32_xbar__DOT__m_data
                       [vlSelf->main__DOT__wb32_xbar__DOT__sindex
                       [0xaU]] : 0U) : 0U);
            vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
                = ((0x3ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                   | (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                        [0xaU]) & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                           >> ((IData)(0x24U) 
                                               + vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                               [0xaU])))) 
                      << 0xaU));
        }
    } else {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
            = (0xffffffffffULL & vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
            = (0xffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U]);
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU] = 0U;
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe 
            = (0x3ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe));
    }
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = ((0x7feU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc)) 
           | ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
              & ((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                  [0U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                           >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                           [0U]))));
    if (vlSelf->i_reset) {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
            = (0x7feU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = ((0x7fdU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc)) 
           | (0xfffffffeU & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                             & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [1U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                           >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [1U])) << 1U))));
    if (vlSelf->i_reset) {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
            = (0x7fdU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = ((0x7fbU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc)) 
           | (0xfffffffcU & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                             & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [2U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                           >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [2U])) << 2U))));
    if (vlSelf->i_reset) {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
            = (0x7fbU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = ((0x7f7U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc)) 
           | (0xfffffff8U & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                             & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [3U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                           >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [3U])) << 3U))));
    if (vlSelf->i_reset) {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
            = (0x7f7U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = ((0x7efU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc)) 
           | (0xfffffff0U & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                             & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [4U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                           >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [4U])) << 4U))));
    if (vlSelf->i_reset) {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
            = (0x7efU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = ((0x7dfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc)) 
           | (0xffffffe0U & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                             & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [5U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                           >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [5U])) << 5U))));
    if (vlSelf->i_reset) {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
            = (0x7dfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = ((0x7bfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc)) 
           | (0xffffffc0U & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                             & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [6U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                           >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [6U])) << 6U))));
    if (vlSelf->i_reset) {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
            = (0x7bfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = ((0x77fU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc)) 
           | (0xffffff80U & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                             & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [7U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                           >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [7U])) << 7U))));
    if (vlSelf->i_reset) {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
            = (0x77fU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = ((0x6ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc)) 
           | (0xffffff00U & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                             & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [8U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                           >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [8U])) << 8U))));
    if (vlSelf->i_reset) {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
            = (0x6ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = ((0x5ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc)) 
           | (0xfffffe00U & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                             & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [9U]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                           >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                           [9U])) << 9U))));
    if (vlSelf->i_reset) {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
            = (0x5ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
        = ((0x3ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc)) 
           | (0xfffffc00U & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant) 
                             & (((0U >= vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                  [0xaU]) & ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                                             >> vlSelf->main__DOT__wb32_xbar__DOT__sindex
                                             [0xaU])) 
                                << 0xaU))));
    vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex 
        = vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex;
    vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex 
        = vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr;
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
    vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0U] = vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr;
    vlSelf->main__DOT__wb32_xbar__DOT__sgrant = vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant;
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
    vlSelf->main__DOT__wb32_sirefclk_stb = (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                             >> 8U) 
                                            & (2U == 
                                               (7U 
                                                & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])));
    vlSelf->main__DOT__wb32_spio_stb = (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                         >> 8U) & (3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])));
    vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb 
        = (1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                  >> 7U) & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                            >> 0x1aU)));
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
    vlSelf->main__DOT__i2ci__DOT__bus_write = (1U & 
                                               (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                                 & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                                >> 4U));
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb)) 
               | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
            = (((QData)((IData)((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                               >> 0x2cU))))) 
                << 0x24U) | (0xfffffffffULL & vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data));
    }
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))) 
                | ((IData)(vlSelf->main__DOT__wb32_wbdown_cyc) 
                   & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))) 
               | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err)))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc = 0U;
    } else if ((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                      & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb)))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc = 1U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__mindex[0U] = vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    vlSelf->main__DOT__wbu_xbar__DOT__mindex[0U] = vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex;
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
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write 
        = ((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
           & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
              >> 7U));
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
    if (vlSelf->main__DOT__i2ci__DOT__r_halted) {
        vlSelf->main__DOT__i2ci__DOT__bus_override 
            = ((~ (IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted)) 
               & ((IData)(vlSelf->main__DOT__i2ci__DOT__bus_write) 
                  & ((1U == (3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                     & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                >> 0x10U)))));
        vlSelf->main__DOT__i2ci__DOT__next_valid = 
            ((IData)(vlSelf->main__DOT__i2ci__DOT__bus_override) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
        if (vlSelf->main__DOT__i2ci__DOT__bus_manual) {
            vlSelf->main__DOT__i2ci__DOT__next_valid = 0U;
        }
    } else {
        vlSelf->main__DOT__i2ci__DOT__bus_override = 0U;
        vlSelf->main__DOT__i2ci__DOT__next_valid = 
            ((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready));
        if (((IData)(vlSelf->main__DOT__i2ci__DOT__insn_valid) 
             & (0x900U == (0xf00U & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))))) {
            vlSelf->main__DOT__i2ci__DOT__next_valid = 0U;
        }
    }
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)
            ? vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data
            : vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data);
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err 
        = vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err;
    vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr 
        = vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr;
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb 
        = vlSelf->__Vdly__main__DOT____Vcellout__wbwide_xbar__o_sstb;
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
    if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override 
            = ((~ (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted)) 
               & ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write) 
                  & (IData)(((0x1000000U == (0x3000000U 
                                             & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                             & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                >> 0x1cU)))));
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid 
            = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override) 
               & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
        if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid = 0U;
        }
    } else {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid 
            = ((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid) 
               & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
        if (((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid) 
             & (0x900U == (0xf00U & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))))) {
            vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid = 0U;
        }
    }
    if (vlSelf->main__DOT__i2ci__DOT__bus_jump) {
        vlSelf->main__DOT__i2ci__DOT__next_valid = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__m_data[0U] = (IData)(
                                                            (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                                             >> 4U));
    vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0U] = 
        (0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data));
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
    vlSelf->main__DOT__wb32_wbdown_err = vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr;
    vlSelf->main__DOT__wb32_wbdown_cyc = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc;
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc)) 
                 | (IData)(vlSelf->i_reset)));
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc 
        = ((6U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc)) 
           | (1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                    & ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                       >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                       [0U]))));
    if ((1U & ((IData)(vlSelf->i_reset) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_err)))) {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc 
            = (6U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc 
        = ((5U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc)) 
           | (2U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                    & (((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                        >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                        [1U]) << 1U))));
    if ((1U & ((IData)(vlSelf->i_reset) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_err) 
                                           >> 1U)))) {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc 
            = (5U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc));
    }
    vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc 
        = ((3U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc)) 
           | ((IData)((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant) 
                        >> 2U) & ((IData)(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc) 
                                  >> vlSelf->main__DOT__wbwide_xbar__DOT__sindex
                                  [2U]))) << 2U));
    if ((1U & ((IData)(vlSelf->i_reset) | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__s_err) 
                                           >> 2U)))) {
        vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc 
            = (3U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc));
    }
    vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall 
        = ((IData)(vlSelf->main__DOT__wbu_cyc) & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
    if (vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump) {
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid = 0U;
    }
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb 
        = ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset)) 
           & ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
              | (IData)(vlSelf->main__DOT__wb32_wbdown_stb)));
    vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc 
        = (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc) 
            << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_cyc) 
                       << 2U) | (((IData)(vlSelf->main__DOT__wbwide_i2cm_cyc) 
                                  << 1U) | (IData)(vlSelf->main__DOT__wbwide_i2cdma_cyc))));
    vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2U] 
        = vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex;
    vlSelf->main__DOT__wbwide_xbar__DOT__sgrant = vlSelf->__Vdly__main__DOT__wbwide_xbar__DOT__sgrant;
    vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall 
        = ((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall) 
           & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
    if (vlSelf->i_reset) {
        vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc 
            = (0x3ffU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc));
        vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))) {
        vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb 
            = vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid;
    }
    main__DOT__wb32_xbar__DOT____VdfgTmp_h4f7f05b5__0 
        = ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
           & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
    vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb) 
           & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
    vlSelf->main__DOT__wbwide_xbar__DOT__s_err = (8U 
                                                  | ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                                     & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err)));
    vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset 
        = (1U & ((~ (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc)) 
                 | (IData)(vlSelf->i_reset)));
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
        vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
        vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant 
            = (7U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant));
    }
    if (main__DOT__wb32_xbar__DOT____VdfgTmp_h4f7f05b5__0) {
        vlSelf->main__DOT__wb32_xbar__DOT__m_stb = 
            (1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mfull)));
        vlSelf->main__DOT__wb32_xbar__DOT__request[0U] 
            = vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded;
    } else {
        vlSelf->main__DOT__wb32_xbar__DOT__m_stb = 0U;
        vlSelf->main__DOT__wb32_xbar__DOT__request[0U] = 0U;
    }
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
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant = 1U;
        vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant = 1U;
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
    }
}

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__11(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__11\n"); );
    // Body
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
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__delay_read_pipe__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v0;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v1) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v1;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v2) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v2;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v3) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v3;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v4) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v4;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v5) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v5;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v6) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v6;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v7) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v7;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v8;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v9) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v9;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v10) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xaU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v10;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v11) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xbU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v11;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v12) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xcU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v12;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v13) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xdU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v13;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v14) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0xeU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v14;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q__v15) {
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
}

VL_INLINE_OPT void Vmain___024root___nba_comb__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->main__DOT__wb32_xbar__DOT__s_stall = (0xf800U 
                                                  | (0xfffffc00U 
                                                     & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                                        & ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                                           << 0xaU))));
    vlSelf->main__DOT__wbwide_xbar__DOT__s_stall = 
        (8U | ((0xfffffffcU & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                               & ((IData)(vlSelf->main__DOT__wbwide_ddr3_controller_stall) 
                                  << 2U))) | ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                              & (IData)(vlSelf->main__DOT__wbwide_wbdown_stall))));
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
            : (((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                >> 2U) & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending)
                           ? (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall)
                           : (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall))));
    if ((1U & (~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                  >> 2U)))) {
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
    vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall 
        = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall) 
           & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
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
}

void Vmain___024root___nba_sequent__TOP__0(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__1(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__2(Vmain___024root* vlSelf);
void Vmain___024root___nba_sequent__TOP__3(Vmain___024root* vlSelf);

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
