// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmain__Syms.h"
#include "Vmain___024root.h"

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
        Vmain___024root___nba_sequent__TOP__3(vlSelf);
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
        vlSelf->__Vm_traceActivity[3U] = 1U;
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
    VlTriggerVec<7> __VpreTriggered;
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
