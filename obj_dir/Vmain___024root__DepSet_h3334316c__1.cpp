// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmain__Syms.h"
#include "Vmain___024root.h"

extern const VlUnpacked<CData/*0:0*/, 32> Vmain__ConstPool__TABLE_h4c25b041_0;
extern const VlUnpacked<CData/*6:0*/, 32> Vmain__ConstPool__TABLE_h7fc47693_0;
extern const VlWide<18>/*575:0*/ Vmain__ConstPool__CONST_hb679b2e5_0;
extern const VlWide<16>/*511:0*/ Vmain__ConstPool__CONST_h93e1b771_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vmain__ConstPool__TABLE_h97873ec7_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vmain__ConstPool__TABLE_h179527bd_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vmain__ConstPool__TABLE_h164a10d3_0;
extern const VlWide<15>/*479:0*/ Vmain__ConstPool__CONST_hbd99daea_0;

VL_INLINE_OPT void Vmain___024root___nba_sequent__TOP__1(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v8;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v8 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v9;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v9 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v10;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v10 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v10;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v10 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v11;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v11 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v11;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v11 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v12;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v12 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v12;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v12 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v13;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v13 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v13;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v13 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v14;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v14 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v14;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v14 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v15;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v15 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v15;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v15 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v16;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v16 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v16;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v16 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v17;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v17 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v17;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v17 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v10;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v10 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v18;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v18 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v18;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v18 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v19;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v19 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v19;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v19 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v20;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v20 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v20;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v20 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v21;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v21 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v21;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v21 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v22;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v22 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v22;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v22 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v23;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v23 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v23;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v23 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v24;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v24 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v24;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v24 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v25;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v25 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v25;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v25 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v11;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v11 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v26;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v26 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v26;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v26 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v27;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v27 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v27;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v27 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v28;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v28 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v28;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v28 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v29;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v29 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v29;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v29 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v30;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v30 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v30;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v30 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v31;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v31 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v31;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v31 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v32;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v32 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v32;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v32 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v33;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v33 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v33;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v33 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v12;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v12 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v34;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v34 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v34;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v34 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v35;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v35 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v35;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v35 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v36;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v36 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v36;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v36 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v37;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v37 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v37;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v37 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v38;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v38 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v38;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v38 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v39;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v39 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v39;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v39 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v40;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v40 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v40;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v40 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v41;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v41 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v41;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v41 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v13;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v13 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v42;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v42 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v42;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v42 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v43;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v43 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v43;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v43 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v44;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v44 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v44;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v44 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v45;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v45 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v45;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v45 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v46;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v46 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v46;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v46 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v47;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v47 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v47;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v47 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v48;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v48 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v48;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v48 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v49;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v49 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v49;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v49 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v14;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v14 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v50;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v50 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v50;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v50 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v51;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v51 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v51;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v51 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v52;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v52 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v52;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v52 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v53;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v53 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v53;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v53 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v54;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v54 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v54;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v54 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v55;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v55 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v55;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v55 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v56;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v56 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v56;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v56 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v57;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v57 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v57;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v57 = 0;
    CData/*7:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v15;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v15 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v58;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v58 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v58;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v58 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v59;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v59 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v59;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v59 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v60;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v60 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v60;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v60 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v61;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v61 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v61;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v61 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v62;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v62 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v62;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v62 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v63;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v63 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v63;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v63 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v64;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v64 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v64;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v64 = 0;
    CData/*5:0*/ __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v65;
    __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v65 = 0;
    CData/*0:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v65;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v65 = 0;
    QData/*63:0*/ __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v66;
    __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v66 = 0;
    IData/*31:0*/ __Vdlyvval__main__DOT__clock_generator__DOT__counter__v7;
    __Vdlyvval__main__DOT__clock_generator__DOT__counter__v7 = 0;
    VlWide<16>/*511:0*/ __Vtemp_hc1d82fb0__0;
    VlWide<16>/*511:0*/ __Vtemp_hbcf58278__0;
    VlWide<16>/*511:0*/ __Vtemp_hcfafa750__0;
    VlWide<16>/*511:0*/ __Vtemp_h9e51d2f3__0;
    VlWide<16>/*511:0*/ __Vtemp_hc1851150__0;
    VlWide<16>/*511:0*/ __Vtemp_hfebc76e7__0;
    // Body
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x7feU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (1U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & (vlSelf->main__DOT__wb32_xbar__DOT__request
               [0U] & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                       | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (1U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x7feU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x7fdU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (2U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 1U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (2U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x7fdU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x7fbU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (4U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 2U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (4U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x7fbU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x7f7U & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (8U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 3U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (8U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x7f7U & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x7efU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x10U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 4U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x10U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x7efU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x7dfU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x20U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 5U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x20U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x7dfU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x7bfU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x40U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 6U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x40U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x7bfU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x77fU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x80U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 7U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x80U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x77fU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x6ffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x100U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 8U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x100U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x6ffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x5ffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x200U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 9U) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                               | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x200U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x5ffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
        = ((0x3ffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant)) 
           | (0x400U & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__sgrant)));
    if ((1U & ((vlSelf->main__DOT__wb32_xbar__DOT__request
                [0U] >> 0xaU) & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)) 
                                 | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__mempty))))) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x400U | (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
    }
    if (vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant) {
        vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant 
            = (0x3ffU & (IData)(vlSelf->__Vdly__main__DOT__wb32_xbar__DOT__sgrant));
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
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq = 0U;
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
    if (vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset) {
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty = 1U;
    } else if ((1U == (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr) 
                        << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd)))) {
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty 
            = (1U >= (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill));
    } else if ((2U == (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr) 
                        << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd)))) {
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty = 0U;
    }
    if (((IData)(vlSelf->main__DOT__genbus__DOT__ps_full) 
         & (~ (IData)(vlSelf->main__DOT__txv__DOT__r_busy)))) {
        vlSelf->o_wbu_uart_tx = 0U;
    } else if (vlSelf->main__DOT__txv__DOT__zero_baud_counter) {
        vlSelf->o_wbu_uart_tx = (1U & (IData)(vlSelf->main__DOT__txv__DOT__lcl_data));
    }
    if ((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
         [0U])) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2 
            = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0U];
    }
    vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex 
        = vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex;
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
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv;
    }
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full 
        = ((~ (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset)) 
           & ((1U != (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr) 
                       << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd))) 
              & ((2U == (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr) 
                          << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd)))
                  ? (0x1fU == (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill))
                  : (0x20U == (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill)))));
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
        vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[0U] 
            = vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[0U];
        vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[1U] 
            = vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[1U];
        vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data[2U] 
            = vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data[2U];
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
    if (vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty = 1U;
    } else if ((1U == (((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr) 
                        << 1U) | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd)))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty 
            = (1U >= (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill));
    } else if ((2U == (((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr) 
                        << 1U) | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd)))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty = 0U;
    }
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
            = (0x3fffffffU & ((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                               << 0x1cU) | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                            >> 4U)));
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
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie 
            = (1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R) 
                     >> 4U));
    }
    if (((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb) 
         & (~ (IData)((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))))) {
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
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb)) 
               | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr 
            = (0xffU & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val 
        = vlSelf->main__DOT__swic__DOT__cmd_wdata;
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid)) 
               | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr 
            = (0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U]);
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
                     >> 0x19U));
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid)) 
               | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr 
            = (0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U]);
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
                     >> 0x19U));
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid)) 
               | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr 
            = (0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U]);
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
                     >> 0x19U));
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid)) 
               | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr 
            = (0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U]);
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
                     >> 0x19U));
    }
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
    vlSelf->main__DOT__wbwide_bkram_ack = ((~ (IData)(vlSelf->i_reset)) 
                                           & ((IData)(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb) 
                                              & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                                 >> 1U)));
    if (vlSelf->main__DOT__swic__DOT__dc_cyc) {
        if ((((IData)(vlSelf->main__DOT__swic__DOT__dc_cyc) 
              & (IData)(vlSelf->main__DOT__swic__DOT__dc_stb)) 
             & (~ (IData)(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc)))) {
            vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner = 0U;
        }
    } else {
        vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner = 1U;
    }
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
    if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size;
    }
    vlSelf->main__DOT__wb32_wbdown_idata = ((IData)(vlSelf->main__DOT__wb32_xbar__DOT__mgrant)
                                             ? vlSelf->main__DOT__wb32_xbar__DOT__s_data
                                            [vlSelf->main__DOT__wb32_xbar__DOT__mindex
                                            [0U]] : 0U);
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
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))) 
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
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase = 0U;
    } else {
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
        if (((((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)) 
               | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv)) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce)) 
             & (0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))) {
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ubus_err_flag) 
                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                      >> 0xaU));
            vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u 
                = ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_u) 
                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl 
                      >> 8U));
        } else {
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
    __Vdlyvval__main__DOT__clock_generator__DOT__counter__v7 
        = (vlSelf->main__DOT__clock_generator__DOT__counter
           [0U] + (vlSelf->main__DOT__clock_generator__DOT__r_delay 
                   << 3U));
    vlSelf->main__DOT__w_led = ((IData)(vlSelf->main__DOT__spioi__DOT__led_demo)
                                 ? (IData)(vlSelf->main__DOT__spioi__DOT__bounced)
                                 : (IData)(vlSelf->main__DOT__spioi__DOT__r_led));
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
                                                              & (0x30000U 
                                                                 == 
                                                                 (0x30000U 
                                                                  & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])))) 
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
    if ((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid) 
          & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce)) 
         & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc 
            = (0x7fffffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc 
                              - (IData)(4U)));
    }
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
    vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda 
        = ((IData)(vlSelf->i_reset) | ((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual)
                                        ? (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda)
                                        : (IData)(vlSelf->main__DOT__i2ci__DOT__w_sda)));
    vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl 
        = ((IData)(vlSelf->i_reset) | ((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual)
                                        ? (IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl)
                                        : (IData)(vlSelf->main__DOT__i2ci__DOT__w_scl)));
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc 
        = (((((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                            >> 9U)) == (0x3fffffU & 
                                        (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                         >> 9U))) & 
             ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
               == (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                >> 9U))) & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                            >> (7U 
                                                & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                   >> 9U))))) 
            & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result))) 
           & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal)));
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr = 0x4000000U;
    } else if (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid) 
                | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid))) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc;
    }
    if (((IData)(vlSelf->main__DOT__w_console_rx_stb) 
         & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
            | ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read) 
               & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next) 
                  == (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))))) {
        vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write 
            = vlSelf->main__DOT__w_console_rx_data;
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
    vlSelf->main__DOT__r_wb32_sio_data = ((4U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])
                                           ? 0x20230907U
                                           : ((2U & 
                                               vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])
                                               ? ((1U 
                                                   & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])
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
                                               : ((1U 
                                                   & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])
                                                   ? 
                                                  (((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->o_gpio))
                                                   : 0x191825U)));
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
    if (((IData)(vlSelf->main__DOT__console__DOT__txf_wb_write) 
         & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow) 
            | ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read) 
               & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next) 
                  == (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))))) {
        vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write 
            = vlSelf->main__DOT__console__DOT__txf_wb_data;
    }
    if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled)) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending))))) {
        vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
            = (0x1ffffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
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
    if ((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                >> 4U) & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                             >> 4U))))) {
        vlSelf->main__DOT__i2ci__DOT__bus_read_data = 0U;
        if ((2U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) {
            vlSelf->main__DOT__i2ci__DOT__bus_read_data 
                = ((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])
                    ? ((0xfffff000U & vlSelf->main__DOT__i2ci__DOT__bus_read_data) 
                       | (IData)(vlSelf->main__DOT__i2ci__DOT__ckcount))
                    : ((0x80000000U & vlSelf->main__DOT__i2ci__DOT__bus_read_data) 
                       | vlSelf->main__DOT__i2ci__DOT__pf_insn_addr));
        } else if ((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) {
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
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn = 0U;
        vlSelf->__Vdly__main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe = 0U;
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
        vlSelf->__Vdly__main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe 
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
                    << 0xbU) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request));
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
                    << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid)) 
                   | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall))))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded 
                = (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                    << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid)) 
                   | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall))))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded 
                = (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                    << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request));
        }
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid)) 
                   | (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall))))) {
            vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded 
                = (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                    << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request));
        }
        if ((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
              & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
             & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_illegal))) {
            vlSelf->main__DOT__i2ci__DOT__r_err = 1U;
        }
        if (vlSelf->main__DOT__i2ci__DOT__bus_write) {
            if ((((0U == (3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])) 
                  & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U] 
                     >> 0x14U)) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
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
    if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy) {
        if (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes 
                = ((0U != (3U & ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill) 
                                 >> 6U))) ? 0x40U : 
                   (0x3fU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill)));
        } else if ((0U == (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes 
                = (0x7fU & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill));
        }
        if (((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc) 
             & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack))) {
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
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))) 
                | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err)) 
               | ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                  & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we = 0U;
    } else if ((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                      & (~ (IData)(vlSelf->main__DOT__wbwide_wbdown_stall))))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we 
            = (1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe));
    }
    if (vlSelf->main__DOT__swic__DOT__cmd_reset) {
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
            = (0x1ffffffU & (IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
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
        VL_SHIFTR_WWI(512,512,32, __Vtemp_h9e51d2f3__0, __Vtemp_hcfafa750__0, 
                      (0x1e0U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr) 
                                 << 5U)));
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0U] 
            = __Vtemp_h9e51d2f3__0[0U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[1U] 
            = __Vtemp_h9e51d2f3__0[1U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[2U] 
            = __Vtemp_h9e51d2f3__0[2U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[3U] 
            = __Vtemp_h9e51d2f3__0[3U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[4U] 
            = __Vtemp_h9e51d2f3__0[4U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[5U] 
            = __Vtemp_h9e51d2f3__0[5U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[6U] 
            = __Vtemp_h9e51d2f3__0[6U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[7U] 
            = __Vtemp_h9e51d2f3__0[7U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[8U] 
            = __Vtemp_h9e51d2f3__0[8U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[9U] 
            = __Vtemp_h9e51d2f3__0[9U];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xaU] 
            = __Vtemp_h9e51d2f3__0[0xaU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xbU] 
            = __Vtemp_h9e51d2f3__0[0xbU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xcU] 
            = __Vtemp_h9e51d2f3__0[0xcU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xdU] 
            = __Vtemp_h9e51d2f3__0[0xdU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xeU] 
            = __Vtemp_h9e51d2f3__0[0xeU];
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data[0xfU] 
            = __Vtemp_h9e51d2f3__0[0xfU];
    } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))) {
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb = 0U;
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next = 1U;
    } else {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill;
        if (((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)) 
             & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready))) {
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
        } else if ((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid)) 
                          | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready)))) {
            vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes 
                = (0x7fU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                             ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                                 ? 1U : ((4U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))
                                          ? 2U : ((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill)))
                                                   ? 1U
                                                   : 0U)))
                             : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size))
                                 ? ((8U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))
                                     ? 4U : ((4U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))
                                              ? (3U 
                                                 & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill))
                                              : 0U))
                                 : 0U)));
        }
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
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write = 0U;
    } else {
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
    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst) {
        vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0 = 1U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp = 0ULL;
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
        vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q = 0U;
        vlSelf->main__DOT__wb32_ddr3_phy_idata = 0U;
    } else {
        if (vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done) {
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v8 
                = (0xffU & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U)))
                               ? (((0x80U & ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x38U)) 
                                             << 7U)) 
                                   | ((0x40U & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x30U)) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x28U)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x20U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x18U)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                               >> 0x10U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                  >> 8U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned))))))))) 
                                  << (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                               [0U] 
                                               >> 3U)))
                               : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                             [0U]) >> 8U));
            vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v8 = 1U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x38U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x30U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x28U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x20U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x18U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x10U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 8U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 7U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2 = 0x38U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x38U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x30U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x28U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x20U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x18U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x10U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 8U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 6U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3 = 0x30U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x38U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x30U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x28U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x20U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x18U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x10U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 8U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 5U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4 = 0x28U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x38U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x30U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x28U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x20U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x18U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x10U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 8U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 4U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5 = 0x20U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x38U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x30U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x28U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x20U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x18U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x10U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 8U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 3U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6 = 0x18U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x38U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x30U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x28U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x20U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x18U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x10U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 8U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 2U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7 = 0x10U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [0U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x38U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x30U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x28U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x20U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x18U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x10U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 8U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [0U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [0U]) >> 1U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8 = 8U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9 
                = (1U & (((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                             [0U] >> 3U)))
                           ? (0xffffU & (((0x80U & 
                                           ((IData)(
                                                    (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                     >> 0x38U)) 
                                            << 7U)) 
                                          | ((0x40U 
                                              & ((IData)(
                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                          >> 0x30U)) 
                                                 << 6U)) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                             >> 0x28U)) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                >> 0x20U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 0x18U)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((IData)(
                                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                      >> 0x10U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                         >> 8U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned))))))))) 
                                         << (0x7fU 
                                             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                [0U] 
                                                >> 3U))))
                           : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                         [0U]));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9 = 0U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v9 
                = (0xffU & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [1U] 
                                                 >> 3U)))
                               ? (((0x80U & ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x39U)) 
                                             << 7U)) 
                                   | ((0x40U & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x31U)) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x29U)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x21U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                               >> 0x11U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                  >> 9U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 1U)))))))))) 
                                  << (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                               [1U] 
                                               >> 3U)))
                               : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                             [1U]) >> 8U));
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v10 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [1U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x39U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x31U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x29U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x21U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x19U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x11U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 9U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 1U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [1U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [1U]) >> 7U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v10 = 0x39U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v11 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [1U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x39U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x31U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x29U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x21U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x19U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x11U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 9U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 1U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [1U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [1U]) >> 6U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v11 = 0x31U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v12 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [1U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x39U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x31U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x29U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x21U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x19U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x11U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 9U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 1U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [1U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [1U]) >> 5U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v12 = 0x29U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v13 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [1U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x39U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x31U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x29U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x21U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x19U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x11U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 9U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 1U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [1U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [1U]) >> 4U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v13 = 0x21U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v14 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [1U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x39U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x31U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x29U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x21U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x19U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x11U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 9U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 1U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [1U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [1U]) >> 3U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v14 = 0x19U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v15 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [1U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x39U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x31U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x29U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x21U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x19U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x11U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 9U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 1U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [1U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [1U]) >> 2U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v15 = 0x11U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v16 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [1U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x39U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x31U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x29U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x21U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x19U)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x11U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 9U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 1U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [1U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [1U]) >> 1U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v16 = 9U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v17 
                = (1U & (((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                             [1U] >> 3U)))
                           ? (0xffffU & (((0x80U & 
                                           ((IData)(
                                                    (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                     >> 0x39U)) 
                                            << 7U)) 
                                          | ((0x40U 
                                              & ((IData)(
                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                          >> 0x31U)) 
                                                 << 6U)) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                             >> 0x29U)) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                >> 0x21U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 0x19U)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((IData)(
                                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                      >> 0x11U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                         >> 9U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 1U)))))))))) 
                                         << (0x7fU 
                                             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                [1U] 
                                                >> 3U))))
                           : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                         [1U]));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v17 = 1U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v10 
                = (0xffU & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [2U] 
                                                 >> 3U)))
                               ? (((0x80U & ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3aU)) 
                                             << 7U)) 
                                   | ((0x40U & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x32U)) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x2aU)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x22U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x1aU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                               >> 0x12U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                  >> 0xaU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 2U)))))))))) 
                                  << (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                               [2U] 
                                               >> 3U)))
                               : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                             [2U]) >> 8U));
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v18 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [2U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3aU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x32U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2aU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x22U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1aU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x12U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xaU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 2U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [2U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [2U]) >> 7U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v18 = 0x3aU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v19 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [2U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3aU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x32U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2aU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x22U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1aU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x12U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xaU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 2U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [2U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [2U]) >> 6U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v19 = 0x32U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v20 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [2U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3aU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x32U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2aU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x22U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1aU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x12U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xaU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 2U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [2U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [2U]) >> 5U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v20 = 0x2aU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v21 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [2U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3aU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x32U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2aU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x22U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1aU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x12U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xaU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 2U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [2U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [2U]) >> 4U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v21 = 0x22U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v22 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [2U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3aU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x32U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2aU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x22U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1aU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x12U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xaU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 2U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [2U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [2U]) >> 3U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v22 = 0x1aU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v23 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [2U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3aU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x32U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2aU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x22U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1aU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x12U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xaU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 2U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [2U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [2U]) >> 2U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v23 = 0x12U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v24 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [2U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3aU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x32U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2aU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x22U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1aU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x12U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xaU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 2U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [2U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [2U]) >> 1U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v24 = 0xaU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v25 
                = (1U & (((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                             [2U] >> 3U)))
                           ? (0xffffU & (((0x80U & 
                                           ((IData)(
                                                    (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                     >> 0x3aU)) 
                                            << 7U)) 
                                          | ((0x40U 
                                              & ((IData)(
                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                          >> 0x32U)) 
                                                 << 6U)) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                             >> 0x2aU)) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                >> 0x22U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 0x1aU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((IData)(
                                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                      >> 0x12U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                         >> 0xaU)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 2U)))))))))) 
                                         << (0x7fU 
                                             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                [2U] 
                                                >> 3U))))
                           : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                         [2U]));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v25 = 2U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v11 
                = (0xffU & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [3U] 
                                                 >> 3U)))
                               ? (((0x80U & ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3bU)) 
                                             << 7U)) 
                                   | ((0x40U & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x33U)) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x2bU)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x23U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x1bU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                               >> 0x13U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                  >> 0xbU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 3U)))))))))) 
                                  << (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                               [3U] 
                                               >> 3U)))
                               : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                             [3U]) >> 8U));
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v26 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [3U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3bU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x33U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2bU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x23U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1bU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x13U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xbU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 3U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [3U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [3U]) >> 7U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v26 = 0x3bU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v27 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [3U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3bU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x33U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2bU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x23U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1bU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x13U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xbU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 3U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [3U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [3U]) >> 6U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v27 = 0x33U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v28 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [3U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3bU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x33U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2bU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x23U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1bU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x13U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xbU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 3U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [3U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [3U]) >> 5U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v28 = 0x2bU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v29 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [3U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3bU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x33U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2bU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x23U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1bU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x13U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xbU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 3U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [3U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [3U]) >> 4U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v29 = 0x23U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v30 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [3U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3bU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x33U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2bU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x23U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1bU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x13U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xbU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 3U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [3U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [3U]) >> 3U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v30 = 0x1bU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v31 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [3U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3bU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x33U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2bU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x23U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1bU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x13U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xbU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 3U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [3U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [3U]) >> 2U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v31 = 0x13U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v32 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [3U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3bU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x33U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2bU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x23U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1bU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x13U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xbU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 3U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [3U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [3U]) >> 1U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v32 = 0xbU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v33 
                = (1U & (((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                             [3U] >> 3U)))
                           ? (0xffffU & (((0x80U & 
                                           ((IData)(
                                                    (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                     >> 0x3bU)) 
                                            << 7U)) 
                                          | ((0x40U 
                                              & ((IData)(
                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                          >> 0x33U)) 
                                                 << 6U)) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                             >> 0x2bU)) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                >> 0x23U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 0x1bU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((IData)(
                                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                      >> 0x13U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                         >> 0xbU)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 3U)))))))))) 
                                         << (0x7fU 
                                             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                [3U] 
                                                >> 3U))))
                           : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                         [3U]));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v33 = 3U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v12 
                = (0xffU & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [4U] 
                                                 >> 3U)))
                               ? (((0x80U & ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3cU)) 
                                             << 7U)) 
                                   | ((0x40U & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x34U)) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x2cU)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x24U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x1cU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                               >> 0x14U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                  >> 0xcU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 4U)))))))))) 
                                  << (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                               [4U] 
                                               >> 3U)))
                               : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                             [4U]) >> 8U));
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v34 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [4U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3cU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x34U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2cU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x24U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1cU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x14U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xcU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 4U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [4U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [4U]) >> 7U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v34 = 0x3cU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v35 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [4U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3cU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x34U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2cU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x24U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1cU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x14U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xcU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 4U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [4U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [4U]) >> 6U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v35 = 0x34U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v36 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [4U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3cU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x34U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2cU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x24U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1cU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x14U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xcU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 4U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [4U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [4U]) >> 5U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v36 = 0x2cU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v37 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [4U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3cU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x34U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2cU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x24U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1cU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x14U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xcU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 4U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [4U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [4U]) >> 4U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v37 = 0x24U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v38 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [4U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3cU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x34U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2cU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x24U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1cU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x14U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xcU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 4U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [4U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [4U]) >> 3U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v38 = 0x1cU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v39 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [4U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3cU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x34U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2cU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x24U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1cU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x14U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xcU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 4U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [4U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [4U]) >> 2U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v39 = 0x14U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v40 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [4U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3cU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x34U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2cU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x24U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1cU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x14U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xcU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 4U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [4U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [4U]) >> 1U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v40 = 0xcU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v41 
                = (1U & (((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                             [4U] >> 3U)))
                           ? (0xffffU & (((0x80U & 
                                           ((IData)(
                                                    (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                     >> 0x3cU)) 
                                            << 7U)) 
                                          | ((0x40U 
                                              & ((IData)(
                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                          >> 0x34U)) 
                                                 << 6U)) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                             >> 0x2cU)) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                >> 0x24U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 0x1cU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((IData)(
                                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                      >> 0x14U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                         >> 0xcU)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 4U)))))))))) 
                                         << (0x7fU 
                                             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                [4U] 
                                                >> 3U))))
                           : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                         [4U]));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v41 = 4U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v13 
                = (0xffU & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [5U] 
                                                 >> 3U)))
                               ? (((0x80U & ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3dU)) 
                                             << 7U)) 
                                   | ((0x40U & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x35U)) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x2dU)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x25U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x1dU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                               >> 0x15U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                  >> 0xdU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 5U)))))))))) 
                                  << (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                               [5U] 
                                               >> 3U)))
                               : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                             [5U]) >> 8U));
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v42 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [5U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3dU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x35U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2dU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x25U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1dU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x15U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xdU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 5U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [5U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [5U]) >> 7U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v42 = 0x3dU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v43 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [5U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3dU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x35U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2dU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x25U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1dU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x15U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xdU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 5U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [5U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [5U]) >> 6U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v43 = 0x35U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v44 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [5U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3dU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x35U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2dU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x25U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1dU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x15U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xdU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 5U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [5U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [5U]) >> 5U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v44 = 0x2dU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v45 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [5U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3dU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x35U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2dU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x25U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1dU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x15U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xdU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 5U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [5U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [5U]) >> 4U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v45 = 0x25U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v46 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [5U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3dU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x35U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2dU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x25U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1dU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x15U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xdU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 5U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [5U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [5U]) >> 3U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v46 = 0x1dU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v47 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [5U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3dU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x35U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2dU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x25U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1dU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x15U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xdU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 5U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [5U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [5U]) >> 2U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v47 = 0x15U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v48 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [5U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3dU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x35U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2dU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x25U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1dU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x15U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xdU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 5U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [5U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [5U]) >> 1U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v48 = 0xdU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v49 
                = (1U & (((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                             [5U] >> 3U)))
                           ? (0xffffU & (((0x80U & 
                                           ((IData)(
                                                    (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                     >> 0x3dU)) 
                                            << 7U)) 
                                          | ((0x40U 
                                              & ((IData)(
                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                          >> 0x35U)) 
                                                 << 6U)) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                             >> 0x2dU)) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                >> 0x25U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 0x1dU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((IData)(
                                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                      >> 0x15U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                         >> 0xdU)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 5U)))))))))) 
                                         << (0x7fU 
                                             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                [5U] 
                                                >> 3U))))
                           : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                         [5U]));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v49 = 5U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v14 
                = (0xffU & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [6U] 
                                                 >> 3U)))
                               ? (((0x80U & ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3eU)) 
                                             << 7U)) 
                                   | ((0x40U & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x36U)) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x2eU)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x26U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x1eU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                               >> 0x16U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                  >> 0xeU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 6U)))))))))) 
                                  << (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                               [6U] 
                                               >> 3U)))
                               : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                             [6U]) >> 8U));
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v50 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [6U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3eU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x36U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2eU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x26U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1eU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x16U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xeU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 6U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [6U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [6U]) >> 7U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v50 = 0x3eU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v51 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [6U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3eU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x36U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2eU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x26U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1eU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x16U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xeU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 6U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [6U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [6U]) >> 6U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v51 = 0x36U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v52 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [6U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3eU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x36U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2eU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x26U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1eU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x16U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xeU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 6U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [6U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [6U]) >> 5U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v52 = 0x2eU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v53 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [6U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3eU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x36U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2eU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x26U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1eU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x16U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xeU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 6U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [6U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [6U]) >> 4U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v53 = 0x26U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v54 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [6U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3eU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x36U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2eU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x26U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1eU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x16U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xeU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 6U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [6U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [6U]) >> 3U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v54 = 0x1eU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v55 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [6U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3eU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x36U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2eU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x26U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1eU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x16U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xeU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 6U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [6U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [6U]) >> 2U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v55 = 0x16U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v56 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [6U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3eU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x36U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2eU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x26U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1eU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x16U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xeU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 6U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [6U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [6U]) >> 1U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v56 = 0xeU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v57 
                = (1U & (((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                             [6U] >> 3U)))
                           ? (0xffffU & (((0x80U & 
                                           ((IData)(
                                                    (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                     >> 0x3eU)) 
                                            << 7U)) 
                                          | ((0x40U 
                                              & ((IData)(
                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                          >> 0x36U)) 
                                                 << 6U)) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                             >> 0x2eU)) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                >> 0x26U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 0x1eU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((IData)(
                                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                      >> 0x16U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                         >> 0xeU)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 6U)))))))))) 
                                         << (0x7fU 
                                             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                [6U] 
                                                >> 3U))))
                           : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                         [6U]));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v57 = 6U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v15 
                = (0xffU & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [7U] 
                                                 >> 3U)))
                               ? (((0x80U & ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3fU)) 
                                             << 7U)) 
                                   | ((0x40U & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x37U)) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x2fU)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                         >> 0x27U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                            >> 0x1fU)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                               >> 0x17U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                  >> 0xfU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 7U)))))))))) 
                                  << (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                               [7U] 
                                               >> 3U)))
                               : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                             [7U]) >> 8U));
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v58 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [7U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3fU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x37U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2fU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x27U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1fU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x17U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xfU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 7U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [7U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [7U]) >> 7U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v58 = 0x3fU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v59 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [7U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3fU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x37U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2fU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x27U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1fU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x17U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xfU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 7U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [7U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [7U]) >> 6U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v59 = 0x37U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v60 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [7U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3fU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x37U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2fU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x27U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1fU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x17U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xfU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 7U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [7U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [7U]) >> 5U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v60 = 0x2fU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v61 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [7U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3fU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x37U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2fU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x27U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1fU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x17U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xfU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 7U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [7U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [7U]) >> 4U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v61 = 0x27U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v62 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [7U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3fU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x37U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2fU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x27U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1fU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x17U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xfU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 7U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [7U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [7U]) >> 3U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v62 = 0x1fU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v63 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [7U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3fU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x37U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2fU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x27U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1fU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x17U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xfU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 7U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [7U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [7U]) >> 2U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v63 = 0x17U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v64 
                = (1U & ((((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                              [7U] 
                                              >> 3U)))
                            ? (0xffffU & (((0x80U & 
                                            ((IData)(
                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                      >> 0x3fU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                           >> 0x37U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                              >> 0x2fU)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                 >> 0x27U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                    >> 0x1fU)) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                       >> 0x17U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 0xfU)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                           >> 7U)))))))))) 
                                          << (0x7fU 
                                              & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                 [7U] 
                                                 >> 3U))))
                            : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                          [7U]) >> 1U));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v64 = 0xfU;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v65 
                = (1U & (((0xfU >= (0x7fU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                             [7U] >> 3U)))
                           ? (0xffffU & (((0x80U & 
                                           ((IData)(
                                                    (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                     >> 0x3fU)) 
                                            << 7U)) 
                                          | ((0x40U 
                                              & ((IData)(
                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                          >> 0x37U)) 
                                                 << 6U)) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                             >> 0x2fU)) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                >> 0x27U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((IData)(
                                                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                   >> 0x1fU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((IData)(
                                                                     (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                      >> 0x17U)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                         >> 0xfU)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                                                                          >> 7U)))))))))) 
                                         << (0x7fU 
                                             & (vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index
                                                [7U] 
                                                >> 3U))))
                           : 0U) | vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm
                         [7U]));
            __Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v65 = 7U;
            __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v66 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
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
            if (((((((((0U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))) 
                       | (1U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                      | (2U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                     | (3U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                    | (4U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                   | (5U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                  | (6U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                 | (7U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))))) {
                if ((0U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein
                            [(7U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                    >> 4U))];
                    }
                } else if ((1U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein
                            [(7U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                    >> 4U))];
                    }
                } else if ((2U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein
                            [(7U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                    >> 4U))];
                    }
                } else if ((3U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein
                            [(7U & ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr) 
                                    >> 4U))];
                    }
                } else if ((4U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
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
                } else if ((5U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = ((0xfffff000U & vlSelf->main__DOT__wb32_ddr3_phy_idata) 
                               | ((vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                                   [2U] << 8U) | ((
                                                   vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                                                   [1U] 
                                                   << 4U) 
                                                  | vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                                                  [0U])));
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = ((0xff000fffU & vlSelf->main__DOT__wb32_ddr3_phy_idata) 
                               | ((vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                                   [5U] << 0x14U) | 
                                  ((vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                                    [4U] << 0x10U) 
                                   | (vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                                      [3U] << 0xcU))));
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = ((0xffffffU & vlSelf->main__DOT__wb32_ddr3_phy_idata) 
                               | ((vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                                   [7U] << 0x1cU) | 
                                  (vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe
                                   [6U] << 0x18U)));
                    }
                } else if ((6U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store);
                    }
                } else if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[0U];
                }
            } else if (((((((((8U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))) 
                              | (9U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                             | (0xaU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                            | (0xbU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                           | (0xcU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                          | (0xdU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                         | (0xeU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) 
                        | (0xfU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr))))) {
                if ((8U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[1U];
                    }
                } else if ((9U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[2U];
                    }
                } else if ((0xaU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[3U];
                    }
                } else if ((0xbU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[4U];
                    }
                } else if ((0xcU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[5U];
                    }
                } else if ((0xdU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[6U];
                    }
                } else if ((0xeU == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                    if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                        vlSelf->main__DOT__wb32_ddr3_phy_idata 
                            = vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store[7U];
                    }
                } else if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__read_counter;
                }
            } else if ((0x10U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_counter;
                }
            } else if ((0x11U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__correct_read_data;
                }
            } else if ((0x12U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata 
                        = vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_read_data;
                }
            } else if ((0x13U == (0x1fU & (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr)))) {
                if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                    vlSelf->main__DOT__wb32_ddr3_phy_idata = 0x21U;
                }
            } else if ((1U & (~ (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we)))) {
                vlSelf->main__DOT__wb32_ddr3_phy_idata = 0xaaaaaaaaU;
            }
        }
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP = 0U;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I 
            = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I;
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI 
            = (0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I);
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half 
            = (0x7fffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword);
    }
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
                VL_WRITEF("sR0 : %08x sR1 : %08x sR2 : %08x sR3 : %08x\nsR4 : %08x sR5 : %08x sR6 : %08x sR7 : %08x\nsR8 : %08x sR9 : %08x sR10: %08x sR11: %08x\nsR12: %08x sSP : %08x sCC : %08x sPC : %08x\n\n%10#",
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
                          31,((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                               ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc
                               : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),
                          31,((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
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
                      31,((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                           ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc
                           : vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc));
        }
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim = 1U;
        if (VL_UNLIKELY((0x20U == (0xffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv 
                                              >> 4U))))) {
            VL_WRITEF("@%08x %cR[%2#] = 0x",31,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc,
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
            VL_WRITEF("@%08x uR[%2#] = 0x",31,vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc,
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
    }
    if (vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst) {
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_aux = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_we = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_dm = 0ULL;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_col = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_bank = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_row = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[1U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[2U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[3U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[4U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[5U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[6U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[7U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[8U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[9U] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xaU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xbU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xcU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xdU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xeU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xfU] = 0U;
        vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row = 0U;
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
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned = 0ULL;
    } else if (vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done) {
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
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[1U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[1U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[2U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[2U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[3U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[3U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[4U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[4U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[5U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[5U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[6U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[6U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[7U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[7U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[8U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[8U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[9U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[9U];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xaU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xaU];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xbU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xbU];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xcU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xcU];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xdU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xdU];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xeU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xeU];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned[0xfU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data[0xfU];
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned 
                = (~ vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm);
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending = 0U;
        }
        if (((((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
               >> 2U) & (~ (IData)(vlSelf->main__DOT__wbwide_ddr3_controller_stall))) 
             & (2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__test_state)))) {
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending 
                = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                         >> 2U));
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_aux = 0U;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_we 
                = (1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                         >> 2U));
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_dm 
                = (((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[4U])));
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_col 
                = (0x3f8U & (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                             >> 0xfU));
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_bank 
                = (7U & (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                         >> 0x19U));
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_row 
                = (0x3fffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                               << 4U) | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                         >> 0x1cU)));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row 
                = (0x3fffU & (((IData)(5U) + ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                                               << 0xeU) 
                                              | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                                 >> 0x12U))) 
                              >> 0xaU));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank 
                = (7U & (((IData)(5U) + ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                                          << 0xeU) 
                                         | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                            >> 0x12U))) 
                         >> 7U));
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x20U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[1U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x21U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[2U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x22U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[3U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x23U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[4U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x24U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[5U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x25U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[6U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x26U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[7U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x27U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[8U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x28U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[9U] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x29U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xaU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2aU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xbU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2bU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xcU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2cU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xdU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2dU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xeU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2eU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xfU] 
                = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x2fU];
        } else if ((0x10U != (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) {
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_we 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_dm = 0xffffffffffffffffULL;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_aux 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_col 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_bank = 0U;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_row = 0U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row = 0U;
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank = 0U;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[1U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[1U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[2U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[2U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[3U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[3U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[4U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[4U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[5U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[5U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[6U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[6U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[7U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[7U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[8U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[8U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[9U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[9U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xaU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xaU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xbU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xbU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xcU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xcU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xdU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xdU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xeU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xeU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xfU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data[0xfU];
        } else if ((1U & (~ (IData)(vlSelf->main__DOT__wbwide_ddr3_controller_stall)))) {
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_stb;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_aux 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_aux;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_we 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_we;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_dm 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_sel;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_col 
                = (0x3f8U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__test_addr 
                             << 3U));
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_bank 
                = (7U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__test_addr 
                         >> 7U));
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_row 
                = (0x3fffU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__test_addr 
                              >> 0xaU));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row 
                = (0x3fffU & (((IData)(5U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__test_addr) 
                              >> 0xaU));
            vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank 
                = (7U & (((IData)(5U) + vlSelf->main__DOT__ddr3_controller_inst__DOT__test_addr) 
                         >> 7U));
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[0U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[1U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[1U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[2U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[2U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[3U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[3U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[4U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[4U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[5U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[5U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[6U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[6U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[7U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[7U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[8U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[8U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[9U] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[9U];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xaU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[0xaU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xbU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[0xbU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xcU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[0xcU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xdU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[0xdU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xeU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[0xeU];
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_data[0xfU] 
                = vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data[0xfU];
        }
        if (((~ ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                 >> 2U)) & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))) {
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage2_pending = 0U;
            vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__stage1_pending = 0U;
        }
    }
    if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break = 0U;
    } else if (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce) {
        vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break 
            = (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid) 
                & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break)) 
               & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal)));
    }
    if (((IData)(vlSelf->main__DOT__swic__DOT__cmd_reset) 
         | (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes = 0U;
        vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last = 0U;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last = 0U;
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
    }
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
    }
    if ((1U & ((((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))) 
                | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err)) 
               | ((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc) 
                  & (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb = 0U;
        vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first = 0U;
    } else if ((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                      & (~ (IData)(vlSelf->main__DOT__wbwide_wbdown_stall))))) {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb 
            = (0U != (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U] 
                      >> 0x1cU));
        vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first 
            = (0ULL != (0xfffffffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))));
    } else if ((((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first) 
                 & (~ (IData)(vlSelf->main__DOT__wb32_wbdown_stb))) 
                | ((IData)(vlSelf->main__DOT__wb32_wbdown_stb) 
                   & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))))) {
        vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first = 0U;
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb 
            = (0ULL != (0xfffffffffffffffULL & vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel));
    }
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill 
        = ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy)
            ? (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill)
            : 0U);
    if (vlSelf->i_reset) {
        vlSelf->main__DOT__genbus__DOT__soft_reset = 1U;
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target = 0U;
        vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address = 0U;
        vlSelf->main__DOT__i2ci__DOT__jump_target = 0U;
        vlSelf->main__DOT__i2ci__DOT__abort_address = 0U;
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl = 1U;
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl = 1U;
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid = 0U;
        vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid = 0U;
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
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl 
                = (1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits) 
                         >> 6U));
        }
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
                = (0x7fffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]);
            vlSelf->main__DOT__i2ci__DOT__abort_address 
                = (0x7fffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]);
        } else {
            if (((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
                   & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
                  & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle))) 
                 & (0xb0U == (0xf0U & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_insn))))) {
                vlSelf->main__DOT__i2ci__DOT__jump_target 
                    = (0x7fffffffU & ((IData)(1U) + vlSelf->main__DOT__i2ci__DOT__pf_insn_addr));
            }
            if (((((IData)(vlSelf->main__DOT__i2ci__DOT__pf_valid) 
                   & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_ready)) 
                  & (~ (IData)(vlSelf->main__DOT__i2ci__DOT__imm_cycle))) 
                 & (0xa0U == (0xf0U & (IData)(vlSelf->main__DOT__i2ci__DOT__pf_insn))))) {
                vlSelf->main__DOT__i2ci__DOT__abort_address 
                    = (0x7fffffffU & ((IData)(1U) + vlSelf->main__DOT__i2ci__DOT__pf_insn_addr));
            }
        }
        if (((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
             & (~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy)))) {
            vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl 
                = (1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits) 
                         >> 6U));
        }
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
    }
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack 
        = ((~ (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))) 
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
    vlSelf->main__DOT__wb32_i2cdma_idata = ((0x200U 
                                             & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])
                                             ? ((0x80000000U 
                                                 & vlSelf->main__DOT__wb32_i2cdma_idata) 
                                                | ((0x100U 
                                                    & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])
                                                    ? vlSelf->main__DOT__u_i2cdma__DOT__r_memlen
                                                    : vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr))
                                             : ((0x100U 
                                                 & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])
                                                 ? 
                                                ((0x80000000U 
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
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq_q;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dq;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_q;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs_val;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__write_dqs;
    vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__check_test_address_counter;
    vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow 
        = vlSelf->__Vdly__main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result;
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
    vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter 
        = vlSelf->__Vdly__main__DOT__scope3_ddr3i__DOT__holdoff_counter;
    vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter 
        = vlSelf->__Vdly__main__DOT__i2cscopei__DOT__holdoff_counter;
    vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter 
        = vlSelf->__Vdly__main__DOT__scope2_ddr3i__DOT__holdoff_counter;
    vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter 
        = vlSelf->__Vdly__main__DOT__scope1_ddr3i__DOT__holdoff_counter;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag;
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount;
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
    vlSelf->main__DOT__i2ci__DOT__i2c_ckcount = vlSelf->__Vdly__main__DOT__i2ci__DOT__i2c_ckcount;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill 
        = vlSelf->__Vdly__main__DOT__console__DOT__rxfifo__DOT__r_fill;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill 
        = vlSelf->__Vdly__main__DOT__console__DOT__txfifo__DOT__r_fill;
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr 
        = vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr;
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
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][0U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][1U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][2U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][3U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][4U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][5U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][6U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][7U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][8U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][9U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][0xaU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][0xbU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][0xcU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][0xdU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][0xeU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0U][0xfU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][0U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][1U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][2U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][3U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][4U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][5U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][6U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][7U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][8U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][9U] 
            = Vmain__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][0xaU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][0xbU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][0xcU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][0xdU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][0xeU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1U][0xfU] 
            = Vmain__ConstPool__CONST_h93e1b771_0[0xfU];
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
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v2);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v3);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v4);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v5);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v6);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v7);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v8);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v9);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v10);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v11);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v12);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v13);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v14);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v15);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v16), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v16);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v17), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v17);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v18) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v18), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v18);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v19), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v19);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v20), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v20);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v21), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v21);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v22), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v22);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v23), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v23);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v24), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v24);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v25), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v25);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v26) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v26), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v26);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v27), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v27);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v28), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v28);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v29), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v29);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v30), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v30);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v31), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v31);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v32), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v32);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v33), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v33);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v34) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v34), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v34);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v35), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v35);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v36), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v36);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v37), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v37);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v38), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v38);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v39), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v39);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v40), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v40);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v41), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v41);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v42) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v42), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v42);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v43), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v43);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v44), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v44);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v45), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v45);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v46), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v46);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v47), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v47);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v48), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v48);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v49), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v49);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v50) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v50), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v50);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v51), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v51);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v52), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v52);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v53), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v53);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v54), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v54);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v55), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v55);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v56), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v56);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v57), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v57);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v58) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v58), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v58);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v59), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v59);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v60), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v60);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v61), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v61);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v62), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v62);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v63), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v63);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v64), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v64);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v65), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v65);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v66) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v66), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v66);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v67), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v67);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v68), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v68);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v69), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v69);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v70), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v70);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v71), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v71);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v72), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v72);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v73), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v73);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v74) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v74), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v74);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v75), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v75);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v76), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v76);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v77), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v77);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v78), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v78);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v79), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v79);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v80), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v80);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v81), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v81);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v82) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v82), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v82);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v83), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v83);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v84), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v84);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v85), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v85);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v86), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v86);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v87), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v87);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v88), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v88);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v89), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v89);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v90) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v90), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v90);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v91), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v91);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v92), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v92);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v93), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v93);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v94), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v94);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v95), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v95);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v96), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v96);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v97), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v97);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v98) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v98), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v98);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v99), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v99);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v100), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v100);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v101), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v101);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v102), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v102);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v103), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v103);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v104), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v104);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v105), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v105);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v106) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v106), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v106);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v107), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v107);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v108), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v108);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v109), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v109);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v110), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v110);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v111), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v111);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v112), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v112);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v113), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v113);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v114) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v114), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v114);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v115), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v115);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v116), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v116);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v117), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v117);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v118), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v118);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v119), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v119);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v120), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v120);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v121), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v121);
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v122) {
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v122), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v122);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v123), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v123);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v124), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v124);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v125), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v125);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v126), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v126);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v127), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v127);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v128), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v128);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v129), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q
                        [1U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__o_wb_data_q__v129);
    }
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
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[1U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[2U];
    vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U] 
        = vlSelf->__Vdly__main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg[3U];
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
    vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr 
        = vlSelf->__Vdly__main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr;
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
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[1U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[2U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[3U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[4U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[5U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[6U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[7U] = 0ULL;
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
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v8;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v9;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[2U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v10;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[3U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v11;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[4U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v12;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[5U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v13;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[6U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v14;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[7U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_data__v15;
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v2);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v3);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v4);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v5);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v6);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v7);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v8), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v8);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v9), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v9);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v10), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v10);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v11), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v11);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v12), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v12);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v13), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v13);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v14), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v14);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v15), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v15);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v16), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v16);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v17), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v17);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v18), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v18);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v19), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v19);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v20), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v20);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v21), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v21);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v22), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v22);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v23), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v23);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v24), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v24);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v25), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v25);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v26), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v26);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v27), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v27);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v28), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v28);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v29), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v29);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v30), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v30);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v31), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v31);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v32), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v32);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v33), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v33);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v34), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v34);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v35), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v35);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v36), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v36);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v37), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v37);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v38), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v38);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v39), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v39);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v40), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v40);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v41), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v41);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v42), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v42);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v43), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v43);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v44), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v44);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v45), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v45);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v46), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v46);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v47), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v47);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v48), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v48);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v49), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v49);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v50), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v50);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v51), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v51);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v52), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v52);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v53), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v53);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v54), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v54);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v55), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v55);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v56), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v56);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v57), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v57);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v58), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v58);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v59), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v59);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v60), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v60);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v61), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v61);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v62), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v62);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v63), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v63);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v64), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v64);
        VL_ASSIGNSEL_WI(512,8,(IData)(vlSelf->__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_data__v65), 
                        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data
                        [0U], vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v65);
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[0U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][1U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[1U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][2U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[2U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][3U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[3U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][4U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[4U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][5U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[5U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][6U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[6U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][7U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[7U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][8U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[8U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][9U] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[9U];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xaU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[0xaU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xbU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[0xbU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xcU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[0xcU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xdU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[0xdU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xeU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[0xeU];
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1U][0xfU] 
            = vlSelf->__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_data__v66[0xfU];
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v0) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[1U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[2U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[3U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[4U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[5U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[6U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[7U] = 0U;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] = 0ULL;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v8) {
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v8;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[1U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v9;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[2U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v10;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[3U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v11;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[4U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v12;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[5U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v13;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[6U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v14;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[7U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__unaligned_dm__v15;
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v2)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v3)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v4)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v5)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v6)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v7)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v8)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v9)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v10))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v10)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v10)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v11))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v11)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v11)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v12))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v12)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v12)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v13))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v13)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v13)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v14))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v14)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v14)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v15))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v15)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v15)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v16))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v16)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v16)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v17))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v17)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v17)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v18))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v18)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v18)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v19))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v19)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v19)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v20))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v20)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v20)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v21))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v21)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v21)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v22))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v22)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v22)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v23))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v23)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v23)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v24))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v24)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v24)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v25))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v25)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v25)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v26))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v26)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v26)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v27))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v27)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v27)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v28))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v28)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v28)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v29))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v29)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v29)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v30))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v30)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v30)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v31))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v31)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v31)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v32))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v32)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v32)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v33))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v33)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v33)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v34))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v34)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v34)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v35))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v35)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v35)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v36))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v36)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v36)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v37))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v37)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v37)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v38))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v38)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v38)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v39))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v39)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v39)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v40))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v40)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v40)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v41))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v41)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v41)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v42))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v42)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v42)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v43))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v43)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v43)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v44))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v44)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v44)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v45))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v45)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v45)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v46))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v46)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v46)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v47))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v47)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v47)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v48))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v48)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v48)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v49))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v49)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v49)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v50))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v50)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v50)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v51))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v51)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v51)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v52))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v52)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v52)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v53))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v53)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v53)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v54))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v54)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v54)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v55))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v55)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v55)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v56))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v56)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v56)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v57))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v57)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v57)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v58))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v58)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v58)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v59))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v59)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v59)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v60))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v60)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v60)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v61))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v61)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v61)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v62))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v62)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v62)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v63))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v63)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v63)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v64))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v64)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v64)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0U] 
            = (((~ (1ULL << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v65))) 
                & vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm
                [0U]) | ((QData)((IData)(__Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v65)) 
                         << (IData)(__Vdlyvlsb__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v65)));
        vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1U] 
            = __Vdlyvval__main__DOT__ddr3_controller_inst__DOT__stage2_dm__v66;
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
    vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill 
        = vlSelf->__Vdly__main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill;
    vlSelf->main__DOT__wbwide_i2cm_addr = vlSelf->__Vdly__main__DOT__wbwide_i2cm_addr;
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
        = __Vdlyvval__main__DOT__clock_generator__DOT__counter__v7;
    if (vlSelf->__Vdlyvset__main__DOT__console__DOT__txfifo__DOT__fifo__v0) {
        vlSelf->main__DOT__console__DOT__txfifo__DOT__fifo[vlSelf->__Vdlyvdim0__main__DOT__console__DOT__txfifo__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__main__DOT__console__DOT__txfifo__DOT__fifo__v0;
    }
    if (vlSelf->__Vdlyvset__main__DOT__console__DOT__rxfifo__DOT__fifo__v0) {
        vlSelf->main__DOT__console__DOT__rxfifo__DOT__fifo[vlSelf->__Vdlyvdim0__main__DOT__console__DOT__rxfifo__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__main__DOT__console__DOT__rxfifo__DOT__fifo__v0;
    }
    vlSelf->o_gpio = vlSelf->__Vdly__o_gpio;
    vlSelf->main__DOT__spioi__DOT__r_led = vlSelf->__Vdly__main__DOT__spioi__DOT__r_led;
    if (vlSelf->__Vdlyvset__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem__v0) {
        vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[vlSelf->__Vdlyvdim0__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem__v0;
    }
    vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr 
        = vlSelf->__Vdly__main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag;
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending 
        = vlSelf->__Vdly__main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__correct_read_data 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__correct_read_data;
    vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_read_data 
        = vlSelf->__Vdly__main__DOT__ddr3_controller_inst__DOT__wrong_read_data;
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
    vlSelf->o_ddr3_controller_dq_tri_control = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq) 
                                                    >> 2U)));
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
    if (vlSelf->main__DOT__genbus__DOT__r_wdt_reset) {
        vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr = 0U;
        vlSelf->main__DOT__genbus__DOT__exec_word = 
            (0xc0000000ULL | (QData)((IData)((0x3fffffffU 
                                              & vlSelf->main__DOT__wbu_idata))));
        vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr = 0U;
        vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid = 0U;
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
    }
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
    if ((1U & (((IData)(vlSelf->i_reset) | (~ (IData)(vlSelf->main__DOT__wbu_cyc))) 
               | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr)))) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending = 0U;
        vlSelf->main__DOT__wbu_xbar__DOT__mempty = 1U;
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__mnearfull = 0U;
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
    } else if ((2U == ((((IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stb) 
                         & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__m_stall))) 
                        << 1U) | (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack)))) {
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending)));
        vlSelf->__Vdly__main__DOT__wbu_xbar__DOT__mnearfull 
            = (IData)(((0x3cU == (0x3cU & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending))) 
                       & (0U != (3U & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending)))));
        vlSelf->main__DOT__wbu_xbar__DOT__mempty = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy)))) {
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc;
        vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size 
            = vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size;
    }
    vlSelf->cpu_prof_ticks = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks;
    if (vlSelf->main__DOT__wbwide_wbdown_stall) {
        if ((1U & ((~ (IData)(vlSelf->main__DOT__wb32_wbdown_stb)) 
                   | (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid))))) {
            vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift = 1U;
        }
    } else {
        vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift 
            = ((0U != vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])
                ? 1U : (0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr)));
    }
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error 
        = ((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset)) 
           & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor)));
    vlSelf->main__DOT__clock_generator__DOT__times_five 
        = ((vlSelf->main__DOT__r_sirefclk_data << 2U) 
           + vlSelf->main__DOT__r_sirefclk_data);
    vlSelf->main__DOT__clock_generator__DOT__times_seven 
        = ((vlSelf->main__DOT__r_sirefclk_data << 3U) 
           - vlSelf->main__DOT__r_sirefclk_data);
    vlSelf->main__DOT__clock_generator__DOT__times_three 
        = ((vlSelf->main__DOT__r_sirefclk_data << 1U) 
           + vlSelf->main__DOT__r_sirefclk_data);
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill = 0U;
    vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill 
        = ((0x3c0U & (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill)) 
           | (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill));
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill = 0U;
    vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill 
        = ((0x3c0U & (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill)) 
           | (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill));
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel 
        = (((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])));
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x10U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[1U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x11U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[2U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x12U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[3U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x13U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[4U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x14U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[5U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x15U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[6U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x16U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[7U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x17U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[8U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x18U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[9U] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x19U];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xaU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1aU];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xbU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1bU];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xcU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1cU];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xdU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1dU];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xeU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1eU];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data[0xfU] 
        = vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata[0x1fU];
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb 
        = (1U & ((~ (IData)(vlSelf->i_reset)) & (((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                                  & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe)) 
                                                 >> 1U)));
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
    } else if (((((IData)(vlSelf->main__DOT__i2ci__DOT__bus_write) 
                  & (0U == (3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U]))) 
                 & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U] 
                    >> 0x16U)) & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                          >> 0x12U)))) {
        vlSelf->main__DOT__i2ci__DOT__soft_halt_request = 1U;
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
    vlSelf->__Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw = 0U;
    vlSelf->__Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw 
        = (0xffU & ((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe) 
                    >> 8U));
    vlSelf->__Vdly__main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe 
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
    if (((IData)(vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb) 
         & (~ (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)))) {
        vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we 
            = vlSelf->main__DOT____Vcellinp__swic__i_dbg_we;
    }
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr 
        = (0x3fffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                       << 7U) | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
                                 >> 0x19U)));
    if ((((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_write)) 
          | (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall))) 
         & (IData)(vlSelf->main__DOT__swic__DOT__dbg_cpu_write))) {
        vlSelf->main__DOT__swic__DOT__cmd_wdata = vlSelf->main__DOT__swic__DOT__dbg_idata;
        vlSelf->main__DOT__swic__DOT__cmd_waddr = (0x1fU 
                                                   & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr));
    }
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
    vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb 
        = (1U & ((~ (IData)(vlSelf->i_reset)) & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                                 >> 1U)));
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ubreak 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak;
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
    vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ubus_err_flag 
        = vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag;
    vlSelf->main__DOT__wb32_xbar__DOT__s_data[0U] = vlSelf->main__DOT__i2cscopei__DOT__o_bus_data;
    vlSelf->main__DOT__i2cscopei__DOT__nxt_mem = vlSelf->main__DOT__i2cscopei__DOT__mem
        [vlSelf->main__DOT__i2cscopei__DOT__this_addr];
    if ((4U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))) {
        if (vlSelf->main__DOT__i2cscopei__DOT__dw_trigger) {
            vlSelf->main__DOT__i2cscopei__DOT__dr_triggered = 1U;
        }
    } else {
        vlSelf->main__DOT__i2cscopei__DOT__dr_triggered = 0U;
    }
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
    if ((4U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))) {
        if (vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger) {
            vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered = 1U;
        }
    } else {
        vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered = 0U;
    }
    vlSelf->main__DOT__scope3_ddr3i__DOT__read_address 
        = (1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                 >> 0x18U));
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
    if ((4U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))) {
        if (vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger) {
            vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered = 1U;
        }
    } else {
        vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered = 0U;
    }
    vlSelf->main__DOT__scope2_ddr3i__DOT__read_address 
        = (1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                 >> 0x10U));
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
    if ((4U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))) {
        if (vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger) {
            vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered = 1U;
        }
    } else {
        vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered = 0U;
    }
    vlSelf->main__DOT__scope1_ddr3i__DOT__read_address 
        = (1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                 >> 8U));
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
        }
    } else {
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel 
            = (0xf0U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel));
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe 
            = (2U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe));
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
        }
    } else {
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel 
            = (0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel));
        vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe 
            = (1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe));
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
            << 0x19U) | vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr);
}
