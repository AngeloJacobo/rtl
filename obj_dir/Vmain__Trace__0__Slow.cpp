// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__0(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declQuad(c+4143,"i_ddr3_controller_iserdes_data", false,-1, 63,0);
    tracep->declBus(c+4145,"i_ddr3_controller_iserdes_dqs", false,-1, 7,0);
    tracep->declBus(c+4146,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 7,0);
    tracep->declBit(c+4147,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4148,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4151,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4152,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4153,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declQuad(c+4154,"o_ddr3_controller_data", false,-1, 63,0);
    tracep->declBus(c+4156,"o_ddr3_controller_dm", false,-1, 7,0);
    tracep->declBus(c+4157,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4158,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4159,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4160,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4161,"o_ddr3_controller_odelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4162,"o_ddr3_controller_odelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4163,"o_ddr3_controller_idelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4164,"o_ddr3_controller_idelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4165,"o_ddr3_controller_bitslip", false,-1, 0,0);
    tracep->declBus(c+4166,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4167,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4168,"i_fan_sda", false,-1);
    tracep->declBit(c+4169,"i_fan_scl", false,-1);
    tracep->declBit(c+4170,"o_fan_sda", false,-1);
    tracep->declBit(c+4171,"o_fan_scl", false,-1);
    tracep->declBit(c+4172,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4173,"o_sys_pwm", false,-1);
    tracep->declBit(c+4174,"i_fan_tach", false,-1);
    tracep->declBit(c+4175,"i_i2c_sda", false,-1);
    tracep->declBit(c+4176,"i_i2c_scl", false,-1);
    tracep->declBit(c+4177,"o_i2c_sda", false,-1);
    tracep->declBit(c+4178,"o_i2c_scl", false,-1);
    tracep->declBit(c+4179,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4180,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4181,"cpu_sim_we", false,-1);
    tracep->declBus(c+4182,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4183,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4184,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4185,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4186,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4187,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4188,"cpu_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4189,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4190,"i_cpu_reset", false,-1);
    tracep->declBit(c+4191,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4192,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4193,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4194,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4195,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4196,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4197,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4198,"o_led", false,-1, 7,0);
    tracep->declBit(c+4199,"i_clk200", false,-1);
    tracep->pushNamePrefix("main ");
    tracep->declDouble(c+4241,"DDR3_CONTROLLERCONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4243,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4245,"DDR3_CONTROLLERROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4246,"DDR3_CONTROLLERCOL_BITS", false,-1, 31,0);
    tracep->declBus(c+4247,"DDR3_CONTROLLERBA_BITS", false,-1, 31,0);
    tracep->declBus(c+4248,"DDR3_CONTROLLERDQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4249,"DDR3_CONTROLLERLANES", false,-1, 31,0);
    tracep->declBus(c+4249,"DDR3_CONTROLLERAUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4250,"DDR3_CONTROLLERSERDES_RATIO", false,-1, 31,0);
    tracep->declBus(c+4251,"DDR3_CONTROLLERCMD_LEN", false,-1, 31,0);
    tracep->declBus(c+4252,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4253,"ZIP_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4254,"ZIP_INTS", false,-1, 31,0);
    tracep->declBus(c+4255,"ZIP_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4256,"BUSUART", false,-1, 23,0);
    tracep->declBus(c+4257,"DBGBUSBITS", false,-1, 31,0);
    tracep->declBus(c+4254,"DBGBUSWATCHDOG_RAW", false,-1, 31,0);
    tracep->declBus(c+4258,"DBGBUSWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4247,"ICAPE_LGDIV", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declQuad(c+4143,"i_ddr3_controller_iserdes_data", false,-1, 63,0);
    tracep->declBus(c+4145,"i_ddr3_controller_iserdes_dqs", false,-1, 7,0);
    tracep->declBus(c+4146,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 7,0);
    tracep->declBit(c+4147,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4148,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4151,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4152,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4153,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declQuad(c+4154,"o_ddr3_controller_data", false,-1, 63,0);
    tracep->declBus(c+4156,"o_ddr3_controller_dm", false,-1, 7,0);
    tracep->declBus(c+4157,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4158,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4159,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4160,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4161,"o_ddr3_controller_odelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4162,"o_ddr3_controller_odelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4163,"o_ddr3_controller_idelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4164,"o_ddr3_controller_idelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4165,"o_ddr3_controller_bitslip", false,-1, 0,0);
    tracep->declBus(c+4166,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4167,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4168,"i_fan_sda", false,-1);
    tracep->declBit(c+4169,"i_fan_scl", false,-1);
    tracep->declBit(c+4170,"o_fan_sda", false,-1);
    tracep->declBit(c+4171,"o_fan_scl", false,-1);
    tracep->declBit(c+4172,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4173,"o_sys_pwm", false,-1);
    tracep->declBit(c+4174,"i_fan_tach", false,-1);
    tracep->declBit(c+4175,"i_i2c_sda", false,-1);
    tracep->declBit(c+4176,"i_i2c_scl", false,-1);
    tracep->declBit(c+4177,"o_i2c_sda", false,-1);
    tracep->declBit(c+4178,"o_i2c_scl", false,-1);
    tracep->declBit(c+4179,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4180,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4181,"cpu_sim_we", false,-1);
    tracep->declBus(c+4182,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4183,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4184,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4185,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4186,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4187,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4188,"cpu_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4189,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4190,"i_cpu_reset", false,-1);
    tracep->declBit(c+4191,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4192,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4193,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4254,"NGPI", false,-1, 31,0);
    tracep->declBus(c+4248,"NGPO", false,-1, 31,0);
    tracep->declBus(c+4194,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4195,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4196,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4197,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4198,"o_led", false,-1, 7,0);
    tracep->declBit(c+137,"scope1_ddr3_int", false,-1);
    tracep->declBit(c+138,"scope2_ddr3_int", false,-1);
    tracep->declBit(c+139,"uartrxf_int", false,-1);
    tracep->declBit(c+140,"uarttx_int", false,-1);
    tracep->declBit(c+141,"uarttxf_int", false,-1);
    tracep->declBit(c+142,"uartrx_int", false,-1);
    tracep->declBit(c+143,"i2cscope_int", false,-1);
    tracep->declBit(c+144,"scope3_ddr3_int", false,-1);
    tracep->declBit(c+145,"gpio_int", false,-1);
    tracep->declBit(c+146,"spio_int", false,-1);
    tracep->declBus(c+4059,"ddr3_controller_aux_out", false,-1, 0,0);
    tracep->declBus(c+4200,"ddr3_controller_debug1", false,-1, 31,0);
    tracep->declBus(c+4201,"ddr3_controller_debug2", false,-1, 31,0);
    tracep->declBus(c+4202,"ddr3_controller_debug3", false,-1, 31,0);
    tracep->declBit(c+147,"r_sirefclk_en", false,-1);
    tracep->declBus(c+148,"r_sirefclk_data", false,-1, 29,0);
    tracep->declBit(c+149,"w_sirefclk_unused_stb", false,-1);
    tracep->declBit(c+150,"r_sirefclk_ack", false,-1);
    tracep->declBit(c+151,"i2cdma_ready", false,-1);
    tracep->declBus(c+4203,"fan_debug", false,-1, 31,0);
    tracep->declBus(c+4259,"I2C_ID_WIDTH", false,-1, 31,0);
    tracep->declBit(c+152,"i2c_valid", false,-1);
    tracep->declBit(c+153,"i2c_ready", false,-1);
    tracep->declBit(c+154,"i2c_last", false,-1);
    tracep->declBus(c+155,"i2c_data", false,-1, 7,0);
    tracep->declBus(c+156,"i2c_id", false,-1, 1,0);
    tracep->declBus(c+35,"i2c_debug", false,-1, 31,0);
    tracep->declBit(c+157,"w_console_rx_stb", false,-1);
    tracep->declBit(c+158,"w_console_tx_stb", false,-1);
    tracep->declBit(c+159,"w_console_busy", false,-1);
    tracep->declBus(c+160,"w_console_rx_data", false,-1, 6,0);
    tracep->declBus(c+161,"w_console_tx_data", false,-1, 6,0);
    tracep->declBus(c+162,"uart_debug", false,-1, 31,0);
    tracep->declBit(c+163,"raw_cpu_dbg_stall", false,-1);
    tracep->declBit(c+164,"raw_cpu_dbg_ack", false,-1);
    tracep->declBus(c+4260,"zip_debug", false,-1, 31,0);
    tracep->declBit(c+4261,"zip_trigger", false,-1);
    tracep->declBus(c+165,"zip_int_vector", false,-1, 15,0);
    tracep->declBit(c+166,"zip_cpu_int", false,-1);
    tracep->declBit(c+4199,"i_clk200", false,-1);
    tracep->declBus(c+167,"wbu_rx_data", false,-1, 7,0);
    tracep->declBus(c+168,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+169,"wbu_rx_stb", false,-1);
    tracep->declBit(c+170,"wbu_tx_stb", false,-1);
    tracep->declBit(c+171,"wbu_tx_busy", false,-1);
    tracep->declBus(c+172,"wbubus_dbg", false,-1, 0,0);
    tracep->declBus(c+4260,"cfg_debug", false,-1, 31,0);
    tracep->declBus(c+173,"w_led", false,-1, 7,0);
    tracep->declBus(c+174,"sys_int_vector", false,-1, 14,0);
    tracep->declBus(c+175,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+176,"wbwide_i2cdma_cyc", false,-1);
    tracep->declBit(c+177,"wbwide_i2cdma_stb", false,-1);
    tracep->declBit(c+4262,"wbwide_i2cdma_we", false,-1);
    tracep->declBus(c+178,"wbwide_i2cdma_addr", false,-1, 21,0);
    tracep->declArray(c+179,"wbwide_i2cdma_data", false,-1, 511,0);
    tracep->declQuad(c+195,"wbwide_i2cdma_sel", false,-1, 63,0);
    tracep->declBit(c+197,"wbwide_i2cdma_stall", false,-1);
    tracep->declBit(c+198,"wbwide_i2cdma_ack", false,-1);
    tracep->declBit(c+199,"wbwide_i2cdma_err", false,-1);
    tracep->declArray(c+200,"wbwide_i2cdma_idata", false,-1, 511,0);
    tracep->declBit(c+216,"wbwide_i2cm_cyc", false,-1);
    tracep->declBit(c+217,"wbwide_i2cm_stb", false,-1);
    tracep->declBit(c+4261,"wbwide_i2cm_we", false,-1);
    tracep->declBus(c+218,"wbwide_i2cm_addr", false,-1, 21,0);
    tracep->declArray(c+4263,"wbwide_i2cm_data", false,-1, 511,0);
    tracep->declQuad(c+4279,"wbwide_i2cm_sel", false,-1, 63,0);
    tracep->declBit(c+219,"wbwide_i2cm_stall", false,-1);
    tracep->declBit(c+220,"wbwide_i2cm_ack", false,-1);
    tracep->declBit(c+221,"wbwide_i2cm_err", false,-1);
    tracep->declArray(c+222,"wbwide_i2cm_idata", false,-1, 511,0);
    tracep->declBit(c+238,"wbwide_zip_cyc", false,-1);
    tracep->declBit(c+239,"wbwide_zip_stb", false,-1);
    tracep->declBit(c+240,"wbwide_zip_we", false,-1);
    tracep->declBus(c+241,"wbwide_zip_addr", false,-1, 21,0);
    tracep->declArray(c+242,"wbwide_zip_data", false,-1, 511,0);
    tracep->declQuad(c+258,"wbwide_zip_sel", false,-1, 63,0);
    tracep->declBit(c+260,"wbwide_zip_stall", false,-1);
    tracep->declBit(c+261,"wbwide_zip_ack", false,-1);
    tracep->declBit(c+262,"wbwide_zip_err", false,-1);
    tracep->declArray(c+263,"wbwide_zip_idata", false,-1, 511,0);
    tracep->declBit(c+279,"wbwide_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+280,"wbwide_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+281,"wbwide_wbu_arbiter_we", false,-1);
    tracep->declBus(c+282,"wbwide_wbu_arbiter_addr", false,-1, 21,0);
    tracep->declArray(c+283,"wbwide_wbu_arbiter_data", false,-1, 511,0);
    tracep->declQuad(c+299,"wbwide_wbu_arbiter_sel", false,-1, 63,0);
    tracep->declBit(c+301,"wbwide_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+302,"wbwide_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+303,"wbwide_wbu_arbiter_err", false,-1);
    tracep->declArray(c+304,"wbwide_wbu_arbiter_idata", false,-1, 511,0);
    tracep->declBit(c+3829,"wbwide_bkram_cyc", false,-1);
    tracep->declBit(c+3830,"wbwide_bkram_stb", false,-1);
    tracep->declBit(c+320,"wbwide_bkram_we", false,-1);
    tracep->declBus(c+321,"wbwide_bkram_addr", false,-1, 21,0);
    tracep->declArray(c+322,"wbwide_bkram_data", false,-1, 511,0);
    tracep->declQuad(c+338,"wbwide_bkram_sel", false,-1, 63,0);
    tracep->declBit(c+4261,"wbwide_bkram_stall", false,-1);
    tracep->declBit(c+340,"wbwide_bkram_ack", false,-1);
    tracep->declBit(c+4261,"wbwide_bkram_err", false,-1);
    tracep->declArray(c+341,"wbwide_bkram_idata", false,-1, 511,0);
    tracep->declBit(c+3831,"wbwide_wbdown_cyc", false,-1);
    tracep->declBit(c+3832,"wbwide_wbdown_stb", false,-1);
    tracep->declBit(c+357,"wbwide_wbdown_we", false,-1);
    tracep->declBus(c+358,"wbwide_wbdown_addr", false,-1, 21,0);
    tracep->declArray(c+359,"wbwide_wbdown_data", false,-1, 511,0);
    tracep->declQuad(c+375,"wbwide_wbdown_sel", false,-1, 63,0);
    tracep->declBit(c+377,"wbwide_wbdown_stall", false,-1);
    tracep->declBit(c+378,"wbwide_wbdown_ack", false,-1);
    tracep->declBit(c+3833,"wbwide_wbdown_err", false,-1);
    tracep->declArray(c+379,"wbwide_wbdown_idata", false,-1, 511,0);
    tracep->declBit(c+3834,"wb32_wbdown_cyc", false,-1);
    tracep->declBit(c+395,"wb32_wbdown_stb", false,-1);
    tracep->declBit(c+396,"wb32_wbdown_we", false,-1);
    tracep->declBus(c+397,"wb32_wbdown_addr", false,-1, 24,0);
    tracep->declBus(c+398,"wb32_wbdown_data", false,-1, 31,0);
    tracep->declBus(c+399,"wb32_wbdown_sel", false,-1, 3,0);
    tracep->declBit(c+400,"wb32_wbdown_stall", false,-1);
    tracep->declBit(c+401,"wb32_wbdown_ack", false,-1);
    tracep->declBit(c+3835,"wb32_wbdown_err", false,-1);
    tracep->declBus(c+402,"wb32_wbdown_idata", false,-1, 31,0);
    tracep->declBit(c+3836,"wb32_buildtime_cyc", false,-1);
    tracep->declBit(c+3837,"wb32_buildtime_stb", false,-1);
    tracep->declBit(c+3838,"wb32_buildtime_we", false,-1);
    tracep->declBus(c+4281,"wb32_buildtime_addr", false,-1, 24,0);
    tracep->declBus(c+3839,"wb32_buildtime_data", false,-1, 31,0);
    tracep->declBus(c+3840,"wb32_buildtime_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_buildtime_stall", false,-1);
    tracep->declBit(c+3837,"wb32_buildtime_ack", false,-1);
    tracep->declBit(c+4282,"wb32_buildtime_err", false,-1);
    tracep->declBus(c+4283,"wb32_buildtime_idata", false,-1, 31,0);
    tracep->declBit(c+3836,"wb32_gpio_cyc", false,-1);
    tracep->declBit(c+3841,"wb32_gpio_stb", false,-1);
    tracep->declBit(c+3838,"wb32_gpio_we", false,-1);
    tracep->declBus(c+4284,"wb32_gpio_addr", false,-1, 24,0);
    tracep->declBus(c+3839,"wb32_gpio_data", false,-1, 31,0);
    tracep->declBus(c+3840,"wb32_gpio_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_gpio_stall", false,-1);
    tracep->declBit(c+3841,"wb32_gpio_ack", false,-1);
    tracep->declBit(c+4285,"wb32_gpio_err", false,-1);
    tracep->declBus(c+4204,"wb32_gpio_idata", false,-1, 31,0);
    tracep->declBit(c+3836,"wb32_sirefclk_cyc", false,-1);
    tracep->declBit(c+3842,"wb32_sirefclk_stb", false,-1);
    tracep->declBit(c+3838,"wb32_sirefclk_we", false,-1);
    tracep->declBus(c+4286,"wb32_sirefclk_addr", false,-1, 24,0);
    tracep->declBus(c+3839,"wb32_sirefclk_data", false,-1, 31,0);
    tracep->declBus(c+3840,"wb32_sirefclk_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_sirefclk_stall", false,-1);
    tracep->declBit(c+150,"wb32_sirefclk_ack", false,-1);
    tracep->declBit(c+4287,"wb32_sirefclk_err", false,-1);
    tracep->declBus(c+403,"wb32_sirefclk_idata", false,-1, 31,0);
    tracep->declBit(c+3836,"wb32_spio_cyc", false,-1);
    tracep->declBit(c+3843,"wb32_spio_stb", false,-1);
    tracep->declBit(c+3838,"wb32_spio_we", false,-1);
    tracep->declBus(c+4288,"wb32_spio_addr", false,-1, 24,0);
    tracep->declBus(c+3839,"wb32_spio_data", false,-1, 31,0);
    tracep->declBus(c+3840,"wb32_spio_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_spio_stall", false,-1);
    tracep->declBit(c+404,"wb32_spio_ack", false,-1);
    tracep->declBit(c+4289,"wb32_spio_err", false,-1);
    tracep->declBus(c+405,"wb32_spio_idata", false,-1, 31,0);
    tracep->declBit(c+3836,"wb32_version_cyc", false,-1);
    tracep->declBit(c+3844,"wb32_version_stb", false,-1);
    tracep->declBit(c+3838,"wb32_version_we", false,-1);
    tracep->declBus(c+4290,"wb32_version_addr", false,-1, 24,0);
    tracep->declBus(c+3839,"wb32_version_data", false,-1, 31,0);
    tracep->declBus(c+3840,"wb32_version_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_version_stall", false,-1);
    tracep->declBit(c+3844,"wb32_version_ack", false,-1);
    tracep->declBit(c+4291,"wb32_version_err", false,-1);
    tracep->declBus(c+4292,"wb32_version_idata", false,-1, 31,0);
    tracep->declBit(c+3845,"wb32_i2cscope_cyc", false,-1);
    tracep->declBit(c+3846,"wb32_i2cscope_stb", false,-1);
    tracep->declBit(c+3847,"wb32_i2cscope_we", false,-1);
    tracep->declBus(c+3848,"wb32_i2cscope_addr", false,-1, 24,0);
    tracep->declBus(c+3849,"wb32_i2cscope_data", false,-1, 31,0);
    tracep->declBus(c+3850,"wb32_i2cscope_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_i2cscope_stall", false,-1);
    tracep->declBit(c+406,"wb32_i2cscope_ack", false,-1);
    tracep->declBit(c+4261,"wb32_i2cscope_err", false,-1);
    tracep->declBus(c+407,"wb32_i2cscope_idata", false,-1, 31,0);
    tracep->declBit(c+3851,"wb32_scope1_ddr3_cyc", false,-1);
    tracep->declBit(c+3852,"wb32_scope1_ddr3_stb", false,-1);
    tracep->declBit(c+3853,"wb32_scope1_ddr3_we", false,-1);
    tracep->declBus(c+3854,"wb32_scope1_ddr3_addr", false,-1, 24,0);
    tracep->declBus(c+3855,"wb32_scope1_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+3856,"wb32_scope1_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_scope1_ddr3_stall", false,-1);
    tracep->declBit(c+408,"wb32_scope1_ddr3_ack", false,-1);
    tracep->declBit(c+4261,"wb32_scope1_ddr3_err", false,-1);
    tracep->declBus(c+409,"wb32_scope1_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+3857,"wb32_scope2_ddr3_cyc", false,-1);
    tracep->declBit(c+3858,"wb32_scope2_ddr3_stb", false,-1);
    tracep->declBit(c+3859,"wb32_scope2_ddr3_we", false,-1);
    tracep->declBus(c+3860,"wb32_scope2_ddr3_addr", false,-1, 24,0);
    tracep->declBus(c+3861,"wb32_scope2_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+3862,"wb32_scope2_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_scope2_ddr3_stall", false,-1);
    tracep->declBit(c+410,"wb32_scope2_ddr3_ack", false,-1);
    tracep->declBit(c+4261,"wb32_scope2_ddr3_err", false,-1);
    tracep->declBus(c+411,"wb32_scope2_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+3863,"wb32_scope3_ddr3_cyc", false,-1);
    tracep->declBit(c+3864,"wb32_scope3_ddr3_stb", false,-1);
    tracep->declBit(c+3865,"wb32_scope3_ddr3_we", false,-1);
    tracep->declBus(c+3866,"wb32_scope3_ddr3_addr", false,-1, 24,0);
    tracep->declBus(c+3867,"wb32_scope3_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+3868,"wb32_scope3_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_scope3_ddr3_stall", false,-1);
    tracep->declBit(c+412,"wb32_scope3_ddr3_ack", false,-1);
    tracep->declBit(c+4261,"wb32_scope3_ddr3_err", false,-1);
    tracep->declBus(c+413,"wb32_scope3_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+3869,"wb32_i2cs_cyc", false,-1);
    tracep->declBit(c+3870,"wb32_i2cs_stb", false,-1);
    tracep->declBit(c+3871,"wb32_i2cs_we", false,-1);
    tracep->declBus(c+3872,"wb32_i2cs_addr", false,-1, 24,0);
    tracep->declBus(c+3873,"wb32_i2cs_data", false,-1, 31,0);
    tracep->declBus(c+3874,"wb32_i2cs_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_i2cs_stall", false,-1);
    tracep->declBit(c+414,"wb32_i2cs_ack", false,-1);
    tracep->declBit(c+4261,"wb32_i2cs_err", false,-1);
    tracep->declBus(c+415,"wb32_i2cs_idata", false,-1, 31,0);
    tracep->declBit(c+3875,"wb32_i2cdma_cyc", false,-1);
    tracep->declBit(c+3876,"wb32_i2cdma_stb", false,-1);
    tracep->declBit(c+3877,"wb32_i2cdma_we", false,-1);
    tracep->declBus(c+3878,"wb32_i2cdma_addr", false,-1, 24,0);
    tracep->declBus(c+3879,"wb32_i2cdma_data", false,-1, 31,0);
    tracep->declBus(c+3880,"wb32_i2cdma_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_i2cdma_stall", false,-1);
    tracep->declBit(c+416,"wb32_i2cdma_ack", false,-1);
    tracep->declBit(c+4261,"wb32_i2cdma_err", false,-1);
    tracep->declBus(c+417,"wb32_i2cdma_idata", false,-1, 31,0);
    tracep->declBit(c+3881,"wb32_uart_cyc", false,-1);
    tracep->declBit(c+3882,"wb32_uart_stb", false,-1);
    tracep->declBit(c+3883,"wb32_uart_we", false,-1);
    tracep->declBus(c+3884,"wb32_uart_addr", false,-1, 24,0);
    tracep->declBus(c+3885,"wb32_uart_data", false,-1, 31,0);
    tracep->declBus(c+3886,"wb32_uart_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_uart_stall", false,-1);
    tracep->declBit(c+418,"wb32_uart_ack", false,-1);
    tracep->declBit(c+4261,"wb32_uart_err", false,-1);
    tracep->declBus(c+419,"wb32_uart_idata", false,-1, 31,0);
    tracep->declBit(c+3887,"wb32_fan_cyc", false,-1);
    tracep->declBit(c+3888,"wb32_fan_stb", false,-1);
    tracep->declBit(c+3889,"wb32_fan_we", false,-1);
    tracep->declBus(c+3890,"wb32_fan_addr", false,-1, 24,0);
    tracep->declBus(c+3891,"wb32_fan_data", false,-1, 31,0);
    tracep->declBus(c+3892,"wb32_fan_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_fan_stall", false,-1);
    tracep->declBit(c+420,"wb32_fan_ack", false,-1);
    tracep->declBit(c+4261,"wb32_fan_err", false,-1);
    tracep->declBus(c+421,"wb32_fan_idata", false,-1, 31,0);
    tracep->declBit(c+3836,"wb32_sio_cyc", false,-1);
    tracep->declBit(c+3893,"wb32_sio_stb", false,-1);
    tracep->declBit(c+3838,"wb32_sio_we", false,-1);
    tracep->declBus(c+3894,"wb32_sio_addr", false,-1, 24,0);
    tracep->declBus(c+3839,"wb32_sio_data", false,-1, 31,0);
    tracep->declBus(c+3840,"wb32_sio_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_sio_stall", false,-1);
    tracep->declBit(c+422,"wb32_sio_ack", false,-1);
    tracep->declBit(c+4261,"wb32_sio_err", false,-1);
    tracep->declBus(c+423,"wb32_sio_idata", false,-1, 31,0);
    tracep->declBit(c+3895,"wb32_cfg_cyc", false,-1);
    tracep->declBit(c+3896,"wb32_cfg_stb", false,-1);
    tracep->declBit(c+3897,"wb32_cfg_we", false,-1);
    tracep->declBus(c+3898,"wb32_cfg_addr", false,-1, 24,0);
    tracep->declBus(c+3899,"wb32_cfg_data", false,-1, 31,0);
    tracep->declBus(c+3900,"wb32_cfg_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"wb32_cfg_stall", false,-1);
    tracep->declBit(c+424,"wb32_cfg_ack", false,-1);
    tracep->declBit(c+4261,"wb32_cfg_err", false,-1);
    tracep->declBus(c+4260,"wb32_cfg_idata", false,-1, 31,0);
    tracep->declBit(c+3901,"wb32_ddr3_phy_cyc", false,-1);
    tracep->declBit(c+3902,"wb32_ddr3_phy_stb", false,-1);
    tracep->declBit(c+3903,"wb32_ddr3_phy_we", false,-1);
    tracep->declBus(c+3904,"wb32_ddr3_phy_addr", false,-1, 24,0);
    tracep->declBus(c+3905,"wb32_ddr3_phy_data", false,-1, 31,0);
    tracep->declBus(c+3906,"wb32_ddr3_phy_sel", false,-1, 3,0);
    tracep->declBit(c+3658,"wb32_ddr3_phy_stall", false,-1);
    tracep->declBit(c+3659,"wb32_ddr3_phy_ack", false,-1);
    tracep->declBit(c+4261,"wb32_ddr3_phy_err", false,-1);
    tracep->declBus(c+3660,"wb32_ddr3_phy_idata", false,-1, 31,0);
    tracep->declBit(c+3907,"wb32_ddr3_controller_cyc", false,-1);
    tracep->declBit(c+3908,"wb32_ddr3_controller_stb", false,-1);
    tracep->declBit(c+3909,"wb32_ddr3_controller_we", false,-1);
    tracep->declBus(c+3910,"wb32_ddr3_controller_addr", false,-1, 24,0);
    tracep->declBus(c+3911,"wb32_ddr3_controller_data", false,-1, 31,0);
    tracep->declBus(c+3912,"wb32_ddr3_controller_sel", false,-1, 3,0);
    tracep->declBit(c+3661,"wb32_ddr3_controller_stall", false,-1);
    tracep->declBit(c+4205,"wb32_ddr3_controller_ack", false,-1);
    tracep->declBit(c+4261,"wb32_ddr3_controller_err", false,-1);
    tracep->declBus(c+4060,"wb32_ddr3_controller_idata", false,-1, 31,0);
    tracep->declBit(c+425,"wbu_cyc", false,-1);
    tracep->declBit(c+426,"wbu_stb", false,-1);
    tracep->declBit(c+427,"wbu_we", false,-1);
    tracep->declBus(c+428,"wbu_addr", false,-1, 26,0);
    tracep->declBus(c+429,"wbu_data", false,-1, 31,0);
    tracep->declBus(c+4293,"wbu_sel", false,-1, 3,0);
    tracep->declBit(c+430,"wbu_stall", false,-1);
    tracep->declBit(c+431,"wbu_ack", false,-1);
    tracep->declBit(c+432,"wbu_err", false,-1);
    tracep->declBus(c+433,"wbu_idata", false,-1, 31,0);
    tracep->declBit(c+434,"wbu_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+435,"wbu_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+436,"wbu_wbu_arbiter_we", false,-1);
    tracep->declBus(c+437,"wbu_wbu_arbiter_addr", false,-1, 26,0);
    tracep->declBus(c+438,"wbu_wbu_arbiter_data", false,-1, 31,0);
    tracep->declBus(c+439,"wbu_wbu_arbiter_sel", false,-1, 3,0);
    tracep->declBit(c+440,"wbu_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+441,"wbu_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+442,"wbu_wbu_arbiter_err", false,-1);
    tracep->declBus(c+443,"wbu_wbu_arbiter_idata", false,-1, 31,0);
    tracep->declBit(c+444,"wbu_zip_cyc", false,-1);
    tracep->declBit(c+445,"wbu_zip_stb", false,-1);
    tracep->declBit(c+446,"wbu_zip_we", false,-1);
    tracep->declBus(c+447,"wbu_zip_addr", false,-1, 26,0);
    tracep->declBus(c+448,"wbu_zip_data", false,-1, 31,0);
    tracep->declBus(c+449,"wbu_zip_sel", false,-1, 3,0);
    tracep->declBit(c+4206,"wbu_zip_stall", false,-1);
    tracep->declBit(c+4207,"wbu_zip_ack", false,-1);
    tracep->declBit(c+4261,"wbu_zip_err", false,-1);
    tracep->declBus(c+450,"wbu_zip_idata", false,-1, 31,0);
    tracep->declBit(c+422,"r_wb32_sio_ack", false,-1);
    tracep->declBus(c+423,"r_wb32_sio_data", false,-1, 31,0);
    tracep->declBit(c+4261,"zip_unused", false,-1);
    tracep->declBit(c+166,"w_bus_int", false,-1);
    tracep->declBus(c+451,"wbu_tmp_addr", false,-1, 29,0);
    tracep->declBit(c+424,"r_cfg_ack", false,-1);
    tracep->declBit(c+4261,"cfg_unused", false,-1);
    tracep->declBus(c+4294,"INITIAL_GPIO", false,-1, 7,0);
    tracep->pushNamePrefix("bkrami ");
    tracep->declBus(c+4295,"LGMEMSZ", false,-1, 31,0);
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBus(c+4249,"EXTRACLOCK", false,-1, 31,0);
    tracep->declBus(c+4297,"HEXFILE", false,-1, 7,0);
    tracep->declBus(c+4298,"OPT_ROM", false,-1, 0,0);
    tracep->declBus(c+4245,"AW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+3829,"i_wb_cyc", false,-1);
    tracep->declBit(c+3830,"i_wb_stb", false,-1);
    tracep->declBit(c+320,"i_wb_we", false,-1);
    tracep->declBus(c+452,"i_wb_addr", false,-1, 13,0);
    tracep->declArray(c+322,"i_wb_data", false,-1, 511,0);
    tracep->declQuad(c+338,"i_wb_sel", false,-1, 63,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+340,"o_wb_ack", false,-1);
    tracep->declArray(c+341,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+453,"w_wstb", false,-1);
    tracep->declBit(c+454,"w_stb", false,-1);
    tracep->declArray(c+455,"w_data", false,-1, 511,0);
    tracep->declBus(c+471,"w_addr", false,-1, 13,0);
    tracep->declQuad(c+472,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("EXTRA_MEM_CLOCK_CYCLE ");
    tracep->declBit(c+453,"last_wstb", false,-1);
    tracep->declBit(c+454,"last_stb", false,-1);
    tracep->declBus(c+471,"last_addr", false,-1, 13,0);
    tracep->declArray(c+455,"last_data", false,-1, 511,0);
    tracep->declQuad(c+472,"last_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WRITE_TO_MEMORY ");
    tracep->declBus(c+474,"ik", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clock_generator ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBus(c+4248,"UPSAMPLE", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBus(c+475,"i_delay", false,-1, 31,0);
    tracep->declBus(c+4166,"o_word", false,-1, 7,0);
    tracep->declBit(c+149,"o_stb", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+476+i*1,"counter", true,(i+0), 31,0);
    }
    tracep->declBus(c+484,"r_delay", false,-1, 31,0);
    tracep->declBus(c+485,"times_three", false,-1, 31,0);
    tracep->declBus(c+486,"times_five", false,-1, 31,0);
    tracep->declBus(c+487,"times_seven", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("console ");
    tracep->declBus(c+4300,"LGFLEN", false,-1, 3,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4261,"i_reset", false,-1);
    tracep->declBit(c+3881,"i_wb_cyc", false,-1);
    tracep->declBit(c+3882,"i_wb_stb", false,-1);
    tracep->declBit(c+3883,"i_wb_we", false,-1);
    tracep->declBus(c+3913,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+3885,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3886,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+418,"o_wb_ack", false,-1);
    tracep->declBus(c+419,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+158,"o_uart_stb", false,-1);
    tracep->declBus(c+161,"o_uart_data", false,-1, 6,0);
    tracep->declBit(c+159,"i_uart_busy", false,-1);
    tracep->declBit(c+157,"i_uart_stb", false,-1);
    tracep->declBus(c+160,"i_uart_data", false,-1, 6,0);
    tracep->declBit(c+142,"o_uart_rx_int", false,-1);
    tracep->declBit(c+140,"o_uart_tx_int", false,-1);
    tracep->declBit(c+139,"o_uart_rxfifo_int", false,-1);
    tracep->declBit(c+141,"o_uart_txfifo_int", false,-1);
    tracep->declBus(c+162,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4300,"LCLLGFLEN", false,-1, 3,0);
    tracep->declBus(c+4301,"UART_SETUP", false,-1, 1,0);
    tracep->declBus(c+4302,"UART_FIFO", false,-1, 1,0);
    tracep->declBus(c+4303,"UART_RXREG", false,-1, 1,0);
    tracep->declBus(c+4304,"UART_TXREG", false,-1, 1,0);
    tracep->declBit(c+488,"rx_uart_reset", false,-1);
    tracep->declBit(c+142,"rx_empty_n", false,-1);
    tracep->declBit(c+489,"rx_fifo_err", false,-1);
    tracep->declBus(c+490,"rxf_wb_data", false,-1, 6,0);
    tracep->declBus(c+491,"rxf_status", false,-1, 15,0);
    tracep->declBit(c+492,"rxf_wb_read", false,-1);
    tracep->declBus(c+493,"wb_rx_data", false,-1, 31,0);
    tracep->declBit(c+158,"tx_empty_n", false,-1);
    tracep->declBit(c+494,"txf_err", false,-1);
    tracep->declBus(c+495,"txf_status", false,-1, 15,0);
    tracep->declBit(c+496,"txf_wb_write", false,-1);
    tracep->declBit(c+497,"tx_uart_reset", false,-1);
    tracep->declBus(c+498,"txf_wb_data", false,-1, 6,0);
    tracep->declBus(c+499,"wb_tx_data", false,-1, 31,0);
    tracep->declBus(c+500,"wb_fifo_data", false,-1, 31,0);
    tracep->declBus(c+501,"r_wb_addr", false,-1, 1,0);
    tracep->declBit(c+502,"r_wb_ack", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("rxfifo ");
    tracep->declBus(c+4257,"BW", false,-1, 31,0);
    tracep->declBus(c+4300,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4255,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4305,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+488,"i_reset", false,-1);
    tracep->declBit(c+157,"i_wr", false,-1);
    tracep->declBus(c+160,"i_data", false,-1, 6,0);
    tracep->declBit(c+142,"o_empty_n", false,-1);
    tracep->declBit(c+492,"i_rd", false,-1);
    tracep->declBus(c+490,"o_data", false,-1, 6,0);
    tracep->declBus(c+491,"o_status", false,-1, 15,0);
    tracep->declBit(c+489,"o_err", false,-1);
    tracep->declBus(c+503,"r_data", false,-1, 6,0);
    tracep->declBus(c+504,"last_write", false,-1, 6,0);
    tracep->declBus(c+505,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+506,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+507,"r_next", false,-1, 5,0);
    tracep->declBit(c+508,"will_overflow", false,-1);
    tracep->declBit(c+509,"will_underflow", false,-1);
    tracep->declBit(c+510,"osrc", false,-1);
    tracep->declBus(c+511,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+512,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+513,"w_write", false,-1);
    tracep->declBit(c+514,"w_read", false,-1);
    tracep->declBus(c+515,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4300,"lglen", false,-1, 3,0);
    tracep->declBit(c+139,"w_half_full", false,-1);
    tracep->declBus(c+516,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("txfifo ");
    tracep->declBus(c+4257,"BW", false,-1, 31,0);
    tracep->declBus(c+4300,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4298,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4305,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+497,"i_reset", false,-1);
    tracep->declBit(c+496,"i_wr", false,-1);
    tracep->declBus(c+498,"i_data", false,-1, 6,0);
    tracep->declBit(c+158,"o_empty_n", false,-1);
    tracep->declBit(c+517,"i_rd", false,-1);
    tracep->declBus(c+161,"o_data", false,-1, 6,0);
    tracep->declBus(c+495,"o_status", false,-1, 15,0);
    tracep->declBit(c+494,"o_err", false,-1);
    tracep->declBus(c+518,"r_data", false,-1, 6,0);
    tracep->declBus(c+519,"last_write", false,-1, 6,0);
    tracep->declBus(c+520,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+521,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+522,"r_next", false,-1, 5,0);
    tracep->declBit(c+523,"will_overflow", false,-1);
    tracep->declBit(c+524,"will_underflow", false,-1);
    tracep->declBit(c+525,"osrc", false,-1);
    tracep->declBus(c+526,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+527,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+528,"w_write", false,-1);
    tracep->declBit(c+529,"w_read", false,-1);
    tracep->declBus(c+530,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4300,"lglen", false,-1, 3,0);
    tracep->declBit(c+141,"w_half_full", false,-1);
    tracep->declBus(c+531,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ddr3_controller_inst ");
    tracep->declDouble(c+4241,"CONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4243,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4245,"ROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4246,"COL_BITS", false,-1, 31,0);
    tracep->declBus(c+4247,"BA_BITS", false,-1, 31,0);
    tracep->declBus(c+4248,"DQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4249,"LANES", false,-1, 31,0);
    tracep->declBus(c+4249,"AUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4257,"WB2_ADDR_BITS", false,-1, 31,0);
    tracep->declBus(c+4299,"WB2_DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_BUS_ABORT", false,-1, 0,0);
    tracep->declBus(c+4298,"MICRON_SIM", false,-1, 0,0);
    tracep->declBus(c+4255,"ODELAY_SUPPORTED", false,-1, 0,0);
    tracep->declBus(c+4250,"serdes_ratio", false,-1, 31,0);
    tracep->declBus(c+4305,"wb_data_bits", false,-1, 31,0);
    tracep->declBus(c+4251,"wb_addr_bits", false,-1, 31,0);
    tracep->declBus(c+4248,"wb_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4250,"wb2_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4251,"cmd_len", false,-1, 31,0);
    tracep->declBus(c+4249,"lanes_clog2", false,-1, 31,0);
    tracep->declBit(c+4141,"i_controller_clk", false,-1);
    tracep->declBit(c+4208,"i_rst_n", false,-1);
    tracep->declBit(c+3907,"i_wb_cyc", false,-1);
    tracep->declBit(c+3908,"i_wb_stb", false,-1);
    tracep->declBit(c+3909,"i_wb_we", false,-1);
    tracep->declBus(c+3914,"i_wb_addr", false,-1, 23,0);
    tracep->declQuad(c+3915,"i_wb_data", false,-1, 63,0);
    tracep->declBus(c+3917,"i_wb_sel", false,-1, 7,0);
    tracep->declBus(c+4261,"i_aux", false,-1, 0,0);
    tracep->declBit(c+3661,"o_wb_stall", false,-1);
    tracep->declBit(c+4205,"o_wb_ack", false,-1);
    tracep->declQuad(c+4061,"o_wb_data", false,-1, 63,0);
    tracep->declBus(c+4059,"o_aux", false,-1, 0,0);
    tracep->declBit(c+3901,"i_wb2_cyc", false,-1);
    tracep->declBit(c+3902,"i_wb2_stb", false,-1);
    tracep->declBit(c+3903,"i_wb2_we", false,-1);
    tracep->declBus(c+3918,"i_wb2_addr", false,-1, 6,0);
    tracep->declBus(c+3906,"i_wb2_sel", false,-1, 3,0);
    tracep->declBus(c+3905,"i_wb2_data", false,-1, 31,0);
    tracep->declBit(c+3658,"o_wb2_stall", false,-1);
    tracep->declBit(c+3659,"o_wb2_ack", false,-1);
    tracep->declBus(c+3660,"o_wb2_data", false,-1, 31,0);
    tracep->declQuad(c+4143,"i_phy_iserdes_data", false,-1, 63,0);
    tracep->declBus(c+4145,"i_phy_iserdes_dqs", false,-1, 7,0);
    tracep->declBus(c+4146,"i_phy_iserdes_bitslip_reference", false,-1, 7,0);
    tracep->declBit(c+4147,"i_phy_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4148,"o_phy_cmd", false,-1, 95,0);
    tracep->declBit(c+4151,"o_phy_dqs_tri_control", false,-1);
    tracep->declBit(c+4152,"o_phy_dq_tri_control", false,-1);
    tracep->declBit(c+4153,"o_phy_toggle_dqs", false,-1);
    tracep->declQuad(c+4154,"o_phy_data", false,-1, 63,0);
    tracep->declBus(c+4156,"o_phy_dm", false,-1, 7,0);
    tracep->declBus(c+4157,"o_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4158,"o_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4159,"o_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4160,"o_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4161,"o_phy_odelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4162,"o_phy_odelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4163,"o_phy_idelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4164,"o_phy_idelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4165,"o_phy_bitslip", false,-1, 0,0);
    tracep->declBus(c+4200,"o_debug1", false,-1, 31,0);
    tracep->declBus(c+4201,"o_debug2", false,-1, 31,0);
    tracep->declBus(c+4202,"o_debug3", false,-1, 31,0);
    tracep->declBus(c+4306,"CMD_MRS", false,-1, 3,0);
    tracep->declBus(c+4307,"CMD_REF", false,-1, 3,0);
    tracep->declBus(c+4308,"CMD_PRE", false,-1, 3,0);
    tracep->declBus(c+4309,"CMD_ACT", false,-1, 3,0);
    tracep->declBus(c+4310,"CMD_WR", false,-1, 3,0);
    tracep->declBus(c+4311,"CMD_RD", false,-1, 3,0);
    tracep->declBus(c+4312,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+4300,"CMD_ZQC", false,-1, 3,0);
    tracep->declBus(c+4313,"RST_DONE", false,-1, 31,0);
    tracep->declBus(c+4313,"REF_IDLE", false,-1, 31,0);
    tracep->declBus(c+4314,"USE_TIMER", false,-1, 31,0);
    tracep->declBus(c+4315,"A10_CONTROL", false,-1, 31,0);
    tracep->declBus(c+4251,"CLOCK_EN", false,-1, 31,0);
    tracep->declBus(c+4316,"RESET_N", false,-1, 31,0);
    tracep->declBus(c+4253,"DDR3_CMD_START", false,-1, 31,0);
    tracep->declBus(c+4258,"DDR3_CMD_END", false,-1, 31,0);
    tracep->declBus(c+4317,"MRS_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4316,"CMD_CS_N", false,-1, 31,0);
    tracep->declBus(c+4253,"CMD_RAS_N", false,-1, 31,0);
    tracep->declBus(c+4318,"CMD_CAS_N", false,-1, 31,0);
    tracep->declBus(c+4295,"CMD_WE_N", false,-1, 31,0);
    tracep->declBus(c+4258,"CMD_ODT", false,-1, 31,0);
    tracep->declBus(c+4317,"CMD_CKE", false,-1, 31,0);
    tracep->declBus(c+4319,"CMD_RESET_N", false,-1, 31,0);
    tracep->declBus(c+4254,"CMD_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4320,"CMD_ADDRESS_START", false,-1, 31,0);
    tracep->declBus(c+4303,"READ_SLOT", false,-1, 1,0);
    tracep->declBus(c+4304,"WRITE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4301,"ACTIVATE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4302,"PRECHARGE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4260,"DATA_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4248,"DQS_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4260,"DATA_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4248,"DQS_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4258,"DELAY_SLOT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4321,"POWER_ON_RESET_HIGH", false,-1, 31,0);
    tracep->declBus(c+4322,"INITIAL_CKE_LOW", false,-1, 31,0);
    tracep->declDouble(c+4323,"tRCD", false,-1);
    tracep->declDouble(c+4323,"tRP", false,-1);
    tracep->declBus(c+4325,"tRAS", false,-1, 31,0);
    tracep->declDouble(c+4326,"tRFC", false,-1);
    tracep->declBus(c+4328,"tREFI", false,-1, 31,0);
    tracep->declDouble(c+4329,"tXPR", false,-1);
    tracep->declDouble(c+4331,"tWR", false,-1);
    tracep->declDouble(c+4241,"tWTR", false,-1);
    tracep->declBus(c+4333,"tWLMRD", false,-1, 18,0);
    tracep->declDouble(c+4334,"tWLO", false,-1);
    tracep->declBus(c+4259,"tWLOE", false,-1, 31,0);
    tracep->declDouble(c+4241,"tRTP", false,-1);
    tracep->declBus(c+4250,"tCCD", false,-1, 31,0);
    tracep->declBus(c+4247,"tMOD", false,-1, 31,0);
    tracep->declBus(c+4336,"tZQinit", false,-1, 31,0);
    tracep->declBus(c+4337,"CL_nCK", false,-1, 31,0);
    tracep->declBus(c+4338,"CWL_nCK", false,-1, 31,0);
    tracep->declBus(c+4339,"DELAY_MAX_VALUE", false,-1, 18,0);
    tracep->declBus(c+4317,"DELAY_COUNTER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4259,"CALIBRATION_DELAY", false,-1, 31,0);
    tracep->declBus(c+4307,"PRECHARGE_TO_ACTIVATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4309,"ACTIVATE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4306,"ACTIVATE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4306,"ACTIVATE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4307,"READ_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4306,"READ_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4307,"READ_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4306,"WRITE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4309,"WRITE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4310,"WRITE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4338,"PRE_REFRESH_DELAY", false,-1, 31,0);
    tracep->declBus(c+4311,"MARGIN_BEFORE_ANTICIPATE", false,-1, 3,0);
    tracep->declBus(c+4259,"STAGE2_DATA_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4260,"READ_DELAY", false,-1, 31,0);
    tracep->declBus(c+4338,"READ_ACK_PIPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4254,"MAX_ADDED_READ_ACK_DELAY", false,-1, 31,0);
    tracep->declBus(c+4320,"DELAY_BEFORE_WRITE_LEVEL_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4260,"IDLE", false,-1, 31,0);
    tracep->declBus(c+4249,"BITSLIP_DQS_TRAIN_1", false,-1, 31,0);
    tracep->declBus(c+4259,"MPR_READ", false,-1, 31,0);
    tracep->declBus(c+4247,"COLLECT_DQS", false,-1, 31,0);
    tracep->declBus(c+4250,"ANALYZE_DQS", false,-1, 31,0);
    tracep->declBus(c+4338,"CALIBRATE_DQS", false,-1, 31,0);
    tracep->declBus(c+4337,"BITSLIP_DQS_TRAIN_2", false,-1, 31,0);
    tracep->declBus(c+4257,"START_WRITE_LEVEL", false,-1, 31,0);
    tracep->declBus(c+4248,"WAIT_FOR_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4340,"ISSUE_WRITE_1", false,-1, 31,0);
    tracep->declBus(c+4246,"ISSUE_WRITE_2", false,-1, 31,0);
    tracep->declBus(c+4341,"ISSUE_READ", false,-1, 31,0);
    tracep->declBus(c+4342,"READ_DATA", false,-1, 31,0);
    tracep->declBus(c+4320,"ANALYZE_DATA", false,-1, 31,0);
    tracep->declBus(c+4245,"DONE_CALIBRATE", false,-1, 31,0);
    tracep->declBus(c+4338,"STORED_DQS_SIZE", false,-1, 31,0);
    tracep->declBus(c+4247,"REPEAT_DQS_ANALYZE", false,-1, 31,0);
    tracep->declBus(c+4343,"PASR", false,-1, 2,0);
    tracep->declBus(c+4343,"CWL", false,-1, 2,0);
    tracep->declBus(c+4255,"ASR", false,-1, 0,0);
    tracep->declBus(c+4298,"SRT", false,-1, 0,0);
    tracep->declBus(c+4301,"RTT_WR", false,-1, 1,0);
    tracep->declBus(c+4344,"MR2_SEL", false,-1, 2,0);
    tracep->declBus(c+4345,"MR2", false,-1, 18,0);
    tracep->declBus(c+4301,"MPR_LOC", false,-1, 1,0);
    tracep->declBus(c+4255,"MPR_EN", false,-1, 0,0);
    tracep->declBus(c+4298,"MPR_DIS", false,-1, 0,0);
    tracep->declBus(c+4346,"MR3_SEL", false,-1, 2,0);
    tracep->declBus(c+4347,"MR3_MPR_EN", false,-1, 18,0);
    tracep->declBus(c+4348,"MR3_MPR_DIS", false,-1, 18,0);
    tracep->declBus(c+4298,"DLL_EN", false,-1, 0,0);
    tracep->declBus(c+4301,"DIC", false,-1, 1,0);
    tracep->declBus(c+4346,"RTT_NOM", false,-1, 2,0);
    tracep->declBus(c+4255,"WL_EN", false,-1, 0,0);
    tracep->declBus(c+4298,"WL_DIS", false,-1, 0,0);
    tracep->declBus(c+4301,"AL", false,-1, 1,0);
    tracep->declBus(c+4298,"TDQS", false,-1, 0,0);
    tracep->declBus(c+4298,"QOFF", false,-1, 0,0);
    tracep->declBus(c+4349,"MR1_SEL", false,-1, 2,0);
    tracep->declBus(c+4350,"MR1_WL_EN", false,-1, 18,0);
    tracep->declBus(c+4351,"MR1_WL_DIS", false,-1, 18,0);
    tracep->declBus(c+4301,"BL", false,-1, 1,0);
    tracep->declBus(c+4310,"CL", false,-1, 3,0);
    tracep->declBus(c+4298,"RBT", false,-1, 0,0);
    tracep->declBus(c+4255,"DLL_RST", false,-1, 0,0);
    tracep->declBus(c+4346,"WR", false,-1, 2,0);
    tracep->declBus(c+4298,"PPD", false,-1, 0,0);
    tracep->declBus(c+4343,"MR0_SEL", false,-1, 2,0);
    tracep->declBus(c+4352,"MR0", false,-1, 18,0);
    tracep->declBus(c+4353,"INITIAL_RESET_INSTRUCTION", false,-1, 27,0);
    tracep->declBus(c+3662,"index", false,-1, 31,0);
    tracep->declBus(c+3663,"instruction_address", false,-1, 4,0);
    tracep->declBus(c+3664,"instruction", false,-1, 27,0);
    tracep->declBus(c+3665,"delay_counter", false,-1, 17,0);
    tracep->declBit(c+3666,"delay_counter_is_zero", false,-1);
    tracep->declBit(c+3667,"reset_done", false,-1);
    tracep->declBit(c+3668,"pause_counter", false,-1);
    tracep->declBit(c+3669,"issue_read_command", false,-1);
    tracep->declBit(c+4261,"issue_write_command", false,-1);
    tracep->declBit(c+3670,"stage2_update", false,-1);
    tracep->declBit(c+4080,"stage2_stall", false,-1);
    tracep->declBit(c+4081,"stage1_stall", false,-1);
    tracep->declBus(c+3671,"bank_status_q", false,-1, 7,0);
    tracep->declBus(c+4082,"bank_status_d", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3672+i*1,"bank_active_row_q", true,(i+0), 13,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4083+i*1,"bank_active_row_d", true,(i+0), 13,0);
    }
    tracep->declBit(c+3680,"stage1_pending", false,-1);
    tracep->declBus(c+3681,"stage1_aux", false,-1, 0,0);
    tracep->declBit(c+3682,"stage1_we", false,-1);
    tracep->declQuad(c+3683,"stage1_data", false,-1, 63,0);
    tracep->declBus(c+3685,"stage1_dm", false,-1, 7,0);
    tracep->declBus(c+3686,"stage1_col", false,-1, 9,0);
    tracep->declBus(c+3687,"stage1_bank", false,-1, 2,0);
    tracep->declBus(c+3688,"stage1_row", false,-1, 13,0);
    tracep->declBus(c+3689,"stage1_next_bank", false,-1, 2,0);
    tracep->declBus(c+3690,"stage1_next_row", false,-1, 13,0);
    tracep->declBus(c+3919,"wb_addr_plus_anticipate", false,-1, 23,0);
    tracep->declBit(c+3691,"stage2_pending", false,-1);
    tracep->declBus(c+3692,"stage2_aux", false,-1, 0,0);
    tracep->declBit(c+3693,"stage2_we", false,-1);
    tracep->declBus(c+3694,"stage2_dm_unaligned", false,-1, 7,0);
    tracep->declBus(c+3695,"stage2_dm_unaligned_temp", false,-1, 7,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3696+i*1,"stage2_dm", true,(i+0), 7,0);
    }
    tracep->declQuad(c+3698,"stage2_data_unaligned", false,-1, 63,0);
    tracep->declQuad(c+3700,"stage2_data_unaligned_temp", false,-1, 63,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+3702+i*2,"stage2_data", true,(i+0), 63,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+3706+i*2,"unaligned_data", true,(i+0), 63,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3708+i*1,"unaligned_dm", true,(i+0), 7,0);
    }
    tracep->declBus(c+3709,"stage2_col", false,-1, 9,0);
    tracep->declBus(c+3710,"stage2_bank", false,-1, 2,0);
    tracep->declBus(c+3711,"stage2_row", false,-1, 13,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3712+i*1,"delay_before_precharge_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4091+i*1,"delay_before_precharge_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3720+i*1,"delay_before_activate_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4099+i*1,"delay_before_activate_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3728+i*1,"delay_before_write_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4107+i*1,"delay_before_write_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3736+i*1,"delay_before_read_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4115+i*1,"delay_before_read_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4123+i*1,"cmd_d", true,(i+0), 23,0);
    }
    tracep->declBit(c+3744,"cmd_odt_q", false,-1);
    tracep->declBit(c+4127,"cmd_odt", false,-1);
    tracep->declBit(c+4128,"cmd_ck_en", false,-1);
    tracep->declBit(c+4129,"cmd_reset_n", false,-1);
    tracep->declBit(c+3745,"o_wb_stall_q", false,-1);
    tracep->declBit(c+4130,"o_wb_stall_d", false,-1);
    tracep->declBit(c+4131,"precharge_slot_busy", false,-1);
    tracep->declBit(c+4132,"activate_slot_busy", false,-1);
    tracep->declBus(c+3746,"write_dqs_q", false,-1, 1,0);
    tracep->declBit(c+3747,"write_dqs_d", false,-1);
    tracep->declBus(c+3748,"write_dqs", false,-1, 2,0);
    tracep->declBus(c+3749,"write_dqs_val", false,-1, 2,0);
    tracep->declBit(c+3750,"write_dq_q", false,-1);
    tracep->declBit(c+3751,"write_dq_d", false,-1);
    tracep->declBus(c+3752,"write_dq", false,-1, 3,0);
    tracep->declBus(c+3753,"state_calibrate", false,-1, 4,0);
    tracep->declQuad(c+3754,"dqs_store", false,-1, 39,0);
    tracep->declBus(c+3756,"dqs_count_repeat", false,-1, 3,0);
    tracep->declBus(c+3757,"dqs_start_index", false,-1, 5,0);
    tracep->declBus(c+3758,"dqs_start_index_stored", false,-1, 5,0);
    tracep->declBus(c+3759,"dqs_target_index", false,-1, 5,0);
    tracep->declBus(c+3760,"dqs_target_index_orig", false,-1, 5,0);
    tracep->declBus(c+3761,"dq_target_index", false,-1, 5,0);
    tracep->declBus(c+3762,"dqs_target_index_value", false,-1, 5,0);
    tracep->declBus(c+3763,"dqs_start_index_repeat", false,-1, 2,0);
    tracep->declBus(c+3764,"train_delay", false,-1, 1,0);
    tracep->declBus(c+3765,"delay_before_read_data", false,-1, 3,0);
    tracep->declBus(c+3766,"delay_before_write_level_feedback", false,-1, 4,0);
    tracep->declBit(c+3767,"initial_dqs", false,-1);
    tracep->declBus(c+3768,"lane", false,-1, 0,0);
    tracep->declBus(c+3769,"lane_times_8", false,-1, 2,0);
    tracep->declBus(c+3770,"dqs_bitslip_arrangement", false,-1, 15,0);
    tracep->declBus(c+3771,"added_read_pipe_max", false,-1, 3,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3772+i*1,"added_read_pipe", true,(i+0), 3,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+3773+i*1,"shift_reg_read_pipe_q", true,(i+0), 1,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+3778+i*1,"shift_reg_read_pipe_d", true,(i+0), 1,0);
    }
    tracep->declBit(c+3783,"index_read_pipe", false,-1);
    tracep->declBit(c+3784,"index_wb_data", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3785+i*1,"delay_read_pipe", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+3787+i*2,"o_wb_data_q", true,(i+0), 63,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+4063+i*1,"o_wb_ack_read_q", true,(i+0), 1,0);
    }
    tracep->declBit(c+3791,"write_calib_stb", false,-1);
    tracep->declBus(c+3792,"write_calib_aux", false,-1, 0,0);
    tracep->declBit(c+3793,"write_calib_we", false,-1);
    tracep->declBus(c+3794,"write_calib_col", false,-1, 9,0);
    tracep->declQuad(c+3795,"write_calib_data", false,-1, 63,0);
    tracep->declBit(c+3797,"write_calib_odt", false,-1);
    tracep->declBit(c+3798,"write_calib_dqs", false,-1);
    tracep->declBit(c+3799,"write_calib_dq", false,-1);
    tracep->declBit(c+3800,"prev_write_level_feedback", false,-1);
    tracep->declQuad(c+3801,"read_data_store", false,-1, 63,0);
    tracep->declArray(c+3803,"write_pattern", false,-1, 127,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3807+i*1,"data_start_index", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3808+i*1,"odelay_data_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3809+i*1,"odelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3810+i*1,"idelay_data_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBus(c+3811,"idelay_data_cntvaluein_prev", false,-1, 4,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3812+i*1,"idelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBit(c+3813,"wb2_stb", false,-1);
    tracep->declBit(c+3814,"wb2_update", false,-1);
    tracep->declBit(c+3815,"wb2_we", false,-1);
    tracep->declBus(c+3816,"wb2_addr", false,-1, 6,0);
    tracep->declBus(c+3817,"wb2_data", false,-1, 31,0);
    tracep->declBus(c+3818,"wb2_sel", false,-1, 3,0);
    tracep->declBus(c+3819,"wb2_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3820,"wb2_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3821,"wb2_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3822,"wb2_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3823,"wb2_phy_odelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+3824,"wb2_phy_odelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+3825,"wb2_phy_idelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+3826,"wb2_phy_idelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+3827,"wb2_write_lane", false,-1, 0,0);
    tracep->declBus(c+3920,"wb_data_to_wb2", false,-1, 31,0);
    tracep->declBit(c+4079,"debug_trigger", false,-1);
    tracep->declBit(c+4209,"dq_all_zeroes", false,-1);
    tracep->declBus(c+4354,"get_slot__Vstatic__delay", false,-1, 31,0);
    tracep->declBus(c+4355,"get_slot__Vstatic__slot_number", false,-1, 1,0);
    tracep->declBus(c+4356,"get_slot__Vstatic__read_slot", false,-1, 1,0);
    tracep->declBus(c+4357,"get_slot__Vstatic__write_slot", false,-1, 1,0);
    tracep->declBus(c+4358,"get_slot__Vstatic__anticipate_activate_slot", false,-1, 1,0);
    tracep->declBus(c+4359,"get_slot__Vstatic__anticipate_precharge_slot", false,-1, 1,0);
    tracep->declBus(c+4360,"find_delay__Vstatic__k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genbus ");
    tracep->declBus(c+4258,"LGWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4337,"LGINPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4246,"LGOUTPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4298,"CMD_PORT_OFF_UNTIL_ACCESSED", false,-1, 0,0);
    tracep->declBus(c+4361,"AW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+169,"i_rx_stb", false,-1);
    tracep->declBus(c+167,"i_rx_data", false,-1, 7,0);
    tracep->declBit(c+425,"o_wb_cyc", false,-1);
    tracep->declBit(c+426,"o_wb_stb", false,-1);
    tracep->declBit(c+427,"o_wb_we", false,-1);
    tracep->declBus(c+451,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+429,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+430,"i_wb_stall", false,-1);
    tracep->declBit(c+431,"i_wb_ack", false,-1);
    tracep->declBus(c+433,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+432,"i_wb_err", false,-1);
    tracep->declBit(c+166,"i_interrupt", false,-1);
    tracep->declBit(c+170,"o_tx_stb", false,-1);
    tracep->declBus(c+168,"o_tx_data", false,-1, 7,0);
    tracep->declBit(c+171,"i_tx_busy", false,-1);
    tracep->declBit(c+158,"i_console_stb", false,-1);
    tracep->declBus(c+161,"i_console_data", false,-1, 6,0);
    tracep->declBit(c+159,"o_console_busy", false,-1);
    tracep->declBit(c+157,"o_console_stb", false,-1);
    tracep->declBus(c+160,"o_console_data", false,-1, 6,0);
    tracep->declBit(c+172,"o_dbg", false,-1);
    tracep->declBit(c+532,"soft_reset", false,-1);
    tracep->declBit(c+172,"r_wdt_reset", false,-1);
    tracep->declBit(c+4262,"cmd_port_active", false,-1);
    tracep->declBit(c+533,"rx_valid", false,-1);
    tracep->declBus(c+534,"rx_data", false,-1, 7,0);
    tracep->declBit(c+535,"in_stb", false,-1);
    tracep->declBit(c+536,"in_active", false,-1);
    tracep->declQuad(c+537,"in_word", false,-1, 35,0);
    tracep->declBit(c+170,"ps_full", false,-1);
    tracep->declBus(c+168,"ps_data", false,-1, 7,0);
    tracep->declBit(c+539,"wbu_tx_stb", false,-1);
    tracep->declBus(c+540,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+541,"ififo_valid", false,-1);
    tracep->declQuad(c+542,"ififo_codword", false,-1, 35,0);
    tracep->declBit(c+544,"exec_stb", false,-1);
    tracep->declQuad(c+545,"exec_word", false,-1, 35,0);
    tracep->declBit(c+547,"ofifo_rd", false,-1);
    tracep->declQuad(c+548,"ofifo_codword", false,-1, 35,0);
    tracep->declBit(c+550,"ofifo_err", false,-1);
    tracep->declBit(c+551,"ofifo_empty_n", false,-1);
    tracep->declBit(c+552,"w_bus_busy", false,-1);
    tracep->declBit(c+172,"w_bus_reset", false,-1);
    tracep->declBus(c+553,"r_wdt_timer", false,-1, 18,0);
    tracep->declBit(c+554,"ign_input_busy", false,-1);
    tracep->declBit(c+555,"output_busy", false,-1);
    tracep->declBit(c+556,"out_active", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("GEN_OUTBOUND_FIFO ");
    tracep->pushNamePrefix("busoutfifo ");
    tracep->declBus(c+4362,"BW", false,-1, 31,0);
    tracep->declBus(c+4246,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+172,"i_reset", false,-1);
    tracep->declBit(c+544,"i_wr", false,-1);
    tracep->declQuad(c+545,"i_data", false,-1, 35,0);
    tracep->declBit(c+547,"i_rd", false,-1);
    tracep->declQuad(c+548,"o_data", false,-1, 35,0);
    tracep->declBit(c+551,"o_empty_n", false,-1);
    tracep->declBit(c+550,"o_err", false,-1);
    tracep->declBus(c+4363,"FLEN", false,-1, 31,0);
    tracep->declBus(c+557,"r_wrptr", false,-1, 10,0);
    tracep->declBus(c+558,"r_rdptr", false,-1, 10,0);
    tracep->declBus(c+559,"nxt_wrptr", false,-1, 10,0);
    tracep->declBus(c+560,"nxt_rdptr", false,-1, 10,0);
    tracep->declBit(c+561,"will_overflow", false,-1);
    tracep->declBit(c+562,"will_underflow", false,-1);
    tracep->declBit(c+563,"r_empty_n", false,-1);
    tracep->declBit(c+564,"w_write", false,-1);
    tracep->declBit(c+565,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("INPUT_FIFO ");
    tracep->declBit(c+541,"ififo_empty_n", false,-1);
    tracep->declBit(c+566,"ififo_err", false,-1);
    tracep->declBit(c+567,"ififo_rd", false,-1);
    tracep->declBit(c+4261,"gen_unused", false,-1);
    tracep->pushNamePrefix("padififo ");
    tracep->declBus(c+4362,"BW", false,-1, 31,0);
    tracep->declBus(c+4337,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+172,"i_reset", false,-1);
    tracep->declBit(c+535,"i_wr", false,-1);
    tracep->declQuad(c+537,"i_data", false,-1, 35,0);
    tracep->declBit(c+567,"i_rd", false,-1);
    tracep->declQuad(c+542,"o_data", false,-1, 35,0);
    tracep->declBit(c+541,"o_empty_n", false,-1);
    tracep->declBit(c+566,"o_err", false,-1);
    tracep->declBus(c+4305,"FLEN", false,-1, 31,0);
    tracep->declBus(c+568,"r_wrptr", false,-1, 6,0);
    tracep->declBus(c+569,"r_rdptr", false,-1, 6,0);
    tracep->declBus(c+570,"nxt_wrptr", false,-1, 6,0);
    tracep->declBus(c+571,"nxt_rdptr", false,-1, 6,0);
    tracep->declBit(c+572,"will_overflow", false,-1);
    tracep->declBit(c+573,"will_underflow", false,-1);
    tracep->declBit(c+574,"r_empty_n", false,-1);
    tracep->declBit(c+575,"w_write", false,-1);
    tracep->declBit(c+576,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getinput ");
    tracep->declBus(c+4255,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+533,"i_stb", false,-1);
    tracep->declBit(c+554,"o_busy", false,-1);
    tracep->declBus(c+534,"i_byte", false,-1, 7,0);
    tracep->declBit(c+532,"o_soft_reset", false,-1);
    tracep->declBit(c+535,"o_stb", false,-1);
    tracep->declBit(c+4261,"i_busy", false,-1);
    tracep->declQuad(c+537,"o_codword", false,-1, 35,0);
    tracep->declBit(c+536,"o_active", false,-1);
    tracep->declBit(c+577,"hx_stb", false,-1);
    tracep->declBit(c+578,"hx_valid", false,-1);
    tracep->declBus(c+579,"hx_hexbits", false,-1, 5,0);
    tracep->declBit(c+580,"cw_stb", false,-1);
    tracep->declBit(c+581,"cw_busy", false,-1);
    tracep->declBit(c+582,"cw_active", false,-1);
    tracep->declQuad(c+583,"cw_word", false,-1, 35,0);
    tracep->declBit(c+585,"cod_busy", false,-1);
    tracep->declBit(c+586,"cod_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("unpack ");
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+580,"i_stb", false,-1);
    tracep->declBit(c+585,"o_busy", false,-1);
    tracep->declQuad(c+583,"i_word", false,-1, 35,0);
    tracep->declBit(c+535,"o_stb", false,-1);
    tracep->declBit(c+4261,"i_busy", false,-1);
    tracep->declQuad(c+537,"o_word", false,-1, 35,0);
    tracep->declBit(c+586,"o_active", false,-1);
    tracep->declBus(c+587,"wr_addr", false,-1, 7,0);
    tracep->declQuad(c+588,"r_word", false,-1, 35,0);
    tracep->declBus(c+590,"cmd_addr", false,-1, 7,0);
    tracep->declBus(c+591,"r_addr", false,-1, 24,0);
    tracep->declBus(c+592,"w_addr", false,-1, 31,0);
    tracep->declBus(c+593,"rd_len", false,-1, 9,0);
    tracep->declBus(c+594,"cword", false,-1, 31,0);
    tracep->declBus(c+595,"r_stb", false,-1, 2,0);
    tracep->declBit(c+596,"cmd_write_not_compressed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("formcw ");
    tracep->declBus(c+4298,"OPT_SKIDBUFFER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+577,"i_stb", false,-1);
    tracep->declBit(c+581,"o_busy", false,-1);
    tracep->declBit(c+578,"i_valid", false,-1);
    tracep->declBus(c+579,"i_hexbits", false,-1, 5,0);
    tracep->declBit(c+580,"o_stb", false,-1);
    tracep->declBit(c+585,"i_busy", false,-1);
    tracep->declQuad(c+583,"o_codword", false,-1, 35,0);
    tracep->declBit(c+582,"o_active", false,-1);
    tracep->declBus(c+597,"r_len", false,-1, 2,0);
    tracep->declBus(c+598,"cw_len", false,-1, 2,0);
    tracep->declBus(c+599,"lastcw", false,-1, 1,0);
    tracep->declBit(c+600,"w_stb", false,-1);
    tracep->declQuad(c+601,"shiftreg", false,-1, 35,0);
    tracep->declBit(c+577,"skd_stb", false,-1);
    tracep->declBit(c+578,"skd_valid", false,-1);
    tracep->declBus(c+579,"skd_hexbits", false,-1, 5,0);
    tracep->declBit(c+581,"skd_busy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tobits ");
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+533,"i_stb", false,-1);
    tracep->declBit(c+554,"o_busy", false,-1);
    tracep->declBus(c+534,"i_byte", false,-1, 7,0);
    tracep->declBit(c+532,"o_soft_reset", false,-1);
    tracep->declBit(c+577,"o_stb", false,-1);
    tracep->declBit(c+578,"o_valid", false,-1);
    tracep->declBit(c+581,"i_busy", false,-1);
    tracep->declBus(c+579,"o_hexbits", false,-1, 5,0);
    tracep->declBus(c+1,"k", false,-1, 31,0);
    tracep->declBus(c+2,"newv", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("runwb ");
    tracep->declBus(c+4298,"OPT_COUNT_FIFO", false,-1, 0,0);
    tracep->declBus(c+4250,"LGFIFO", false,-1, 31,0);
    tracep->declBus(c+4361,"AW", false,-1, 31,0);
    tracep->declBus(c+4299,"DW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+172,"i_reset", false,-1);
    tracep->declBit(c+541,"i_valid", false,-1);
    tracep->declQuad(c+542,"i_codword", false,-1, 35,0);
    tracep->declBit(c+552,"o_busy", false,-1);
    tracep->declBit(c+425,"o_wb_cyc", false,-1);
    tracep->declBit(c+426,"o_wb_stb", false,-1);
    tracep->declBit(c+427,"o_wb_we", false,-1);
    tracep->declBus(c+451,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+429,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+430,"i_wb_stall", false,-1);
    tracep->declBit(c+431,"i_wb_ack", false,-1);
    tracep->declBus(c+433,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+432,"i_wb_err", false,-1);
    tracep->declBit(c+544,"o_stb", false,-1);
    tracep->declQuad(c+545,"o_codword", false,-1, 35,0);
    tracep->declBit(c+547,"i_fifo_rd", false,-1);
    tracep->declBus(c+4301,"WB_IDLE", false,-1, 1,0);
    tracep->declBus(c+4302,"WB_READ_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4303,"WB_WRITE_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4304,"WB_FLUSH_WRITE_REQUESTS", false,-1, 1,0);
    tracep->declBus(c+4302,"WRITE_PREFIX", false,-1, 1,0);
    tracep->declBus(c+603,"w_cod_data", false,-1, 31,0);
    tracep->declBus(c+604,"wb_state", false,-1, 1,0);
    tracep->declBus(c+605,"r_acks_needed", false,-1, 9,0);
    tracep->declBus(c+606,"r_len", false,-1, 9,0);
    tracep->declBit(c+607,"r_inc", false,-1);
    tracep->declBit(c+608,"r_new_addr", false,-1);
    tracep->declBit(c+609,"last_read_request", false,-1);
    tracep->declBit(c+610,"last_ack", false,-1);
    tracep->declBit(c+611,"zero_acks", false,-1);
    tracep->declBit(c+552,"r_busy", false,-1);
    tracep->declBus(c+612,"wide_addr", false,-1, 31,0);
    tracep->declBus(c+4364,"fifo_space_available", false,-1, 4,0);
    tracep->declBit(c+4262,"space_available", false,-1);
    tracep->pushNamePrefix("NO_FIFO ");
    tracep->declBit(c+4261,"unused_count", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wroutput ");
    tracep->declBus(c+4255,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_IDLES", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+172,"i_soft_reset", false,-1);
    tracep->declBit(c+547,"i_stb", false,-1);
    tracep->declBit(c+555,"o_busy", false,-1);
    tracep->declQuad(c+548,"i_codword", false,-1, 35,0);
    tracep->declBit(c+425,"i_wb_cyc", false,-1);
    tracep->declBit(c+166,"i_int", false,-1);
    tracep->declBit(c+613,"i_bus_busy", false,-1);
    tracep->declBit(c+539,"o_stb", false,-1);
    tracep->declBit(c+556,"o_active", false,-1);
    tracep->declBus(c+540,"o_char", false,-1, 7,0);
    tracep->declBit(c+170,"i_tx_busy", false,-1);
    tracep->declBit(c+614,"dw_busy", false,-1);
    tracep->declBit(c+555,"cw_stb", false,-1);
    tracep->declBit(c+555,"cw_busy", false,-1);
    tracep->declBit(c+615,"cp_stb", false,-1);
    tracep->declBit(c+614,"dw_stb", false,-1);
    tracep->declBit(c+616,"ln_stb", false,-1);
    tracep->declBit(c+617,"ln_busy", false,-1);
    tracep->declBit(c+618,"cp_busy", false,-1);
    tracep->declBit(c+619,"byte_busy", false,-1);
    tracep->declBit(c+620,"cp_active", false,-1);
    tracep->declBit(c+621,"dw_active", false,-1);
    tracep->declBit(c+622,"ln_active", false,-1);
    tracep->declQuad(c+623,"cw_codword", false,-1, 35,0);
    tracep->declQuad(c+625,"cp_word", false,-1, 35,0);
    tracep->declBus(c+627,"dw_bits", false,-1, 6,0);
    tracep->declBus(c+628,"ln_bits", false,-1, 6,0);
    tracep->declBit(c+629,"r_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("packit ");
    tracep->declBus(c+4299,"DW", false,-1, 31,0);
    tracep->declBus(c+4362,"CW", false,-1, 31,0);
    tracep->declBus(c+4246,"TBITS", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+172,"i_reset", false,-1);
    tracep->declBit(c+555,"i_stb", false,-1);
    tracep->declQuad(c+623,"i_codword", false,-1, 35,0);
    tracep->declBit(c+614,"i_busy", false,-1);
    tracep->declBit(c+615,"o_stb", false,-1);
    tracep->declQuad(c+625,"o_cword", false,-1, 35,0);
    tracep->declBit(c+618,"o_busy", false,-1);
    tracep->declBit(c+620,"o_active", false,-1);
    tracep->declBit(c+630,"aword_valid", false,-1);
    tracep->declQuad(c+631,"a_addrword", false,-1, 35,0);
    tracep->declBus(c+633,"w_addr", false,-1, 31,0);
    tracep->declBus(c+634,"addr_zcheck", false,-1, 3,0);
    tracep->declBit(c+635,"tbl_busy", false,-1);
    tracep->declBit(c+636,"w_accepted", false,-1);
    tracep->declQuad(c+637,"r_word", false,-1, 35,0);
    tracep->declBus(c+639,"tbl_addr", false,-1, 9,0);
    tracep->declBit(c+640,"tbl_filled", false,-1);
    tracep->declBus(c+641,"rd_addr", false,-1, 9,0);
    tracep->declBit(c+642,"pmatch", false,-1);
    tracep->declBit(c+643,"dmatch", false,-1);
    tracep->declBit(c+644,"vaddr", false,-1);
    tracep->declBus(c+645,"cword", false,-1, 31,0);
    tracep->declBus(c+646,"maddr", false,-1, 9,0);
    tracep->declBit(c+647,"matched", false,-1);
    tracep->declBit(c+648,"zmatch", false,-1);
    tracep->declBit(c+649,"hmatch", false,-1);
    tracep->declBus(c+650,"adr_dbld", false,-1, 9,0);
    tracep->declBus(c+651,"adr_hlfd", false,-1, 2,0);
    tracep->declQuad(c+625,"r_cword", false,-1, 35,0);
    tracep->declBus(c+652,"dffaddr", false,-1, 9,0);
    tracep->declBit(c+653,"clear_table", false,-1);
    tracep->declBit(c+654,"addr_within_table", false,-1);
    tracep->declBit(c+655,"w_match", false,-1);
    tracep->declBus(c+3,"k", false,-1, 31,0);
    tracep->declBit(c+656,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_IDLES ");
    tracep->pushNamePrefix("buildcw ");
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+172,"i_reset", false,-1);
    tracep->declBit(c+547,"i_stb", false,-1);
    tracep->declQuad(c+548,"i_codword", false,-1, 35,0);
    tracep->declBit(c+425,"i_cyc", false,-1);
    tracep->declBit(c+613,"i_busy", false,-1);
    tracep->declBit(c+166,"i_int", false,-1);
    tracep->declBit(c+555,"o_stb", false,-1);
    tracep->declQuad(c+623,"o_codword", false,-1, 35,0);
    tracep->declBit(c+555,"o_busy", false,-1);
    tracep->declBit(c+657,"i_tx_busy", false,-1);
    tracep->declQuad(c+4365,"CW_INTERRUPT", false,-1, 35,0);
    tracep->declQuad(c+4367,"CW_BUSBUSY", false,-1, 35,0);
    tracep->declQuad(c+4369,"CW_IDLE", false,-1, 35,0);
    tracep->declBus(c+4253,"IDLEBITS", false,-1, 31,0);
    tracep->declBit(c+658,"int_request", false,-1);
    tracep->declBit(c+659,"int_sent", false,-1);
    tracep->declBit(c+660,"idle_expired", false,-1);
    tracep->declBit(c+661,"idle_state", false,-1);
    tracep->declBus(c+662,"idle_counter", false,-1, 21,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deword ");
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+615,"i_stb", false,-1);
    tracep->declQuad(c+625,"i_word", false,-1, 35,0);
    tracep->declBit(c+617,"i_tx_busy", false,-1);
    tracep->declBit(c+614,"o_stb", false,-1);
    tracep->declBus(c+627,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+614,"o_busy", false,-1);
    tracep->declBit(c+621,"o_active", false,-1);
    tracep->declBus(c+663,"w_len", false,-1, 2,0);
    tracep->declBus(c+664,"r_len", false,-1, 2,0);
    tracep->declBus(c+665,"r_word", false,-1, 29,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("linepacker ");
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+614,"i_stb", false,-1);
    tracep->declBus(c+627,"i_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+616,"o_stb", false,-1);
    tracep->declBus(c+628,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+666,"i_bus_busy", false,-1);
    tracep->declBit(c+619,"i_tx_busy", false,-1);
    tracep->declBit(c+617,"o_busy", false,-1);
    tracep->declBit(c+622,"o_active", false,-1);
    tracep->declBus(c+4371,"MAX_LINE_LENGTH", false,-1, 6,0);
    tracep->declBus(c+4372,"TRIGGER_LENGTH", false,-1, 6,0);
    tracep->declBit(c+667,"last_out_nl", false,-1);
    tracep->declBit(c+668,"last_in_nl", false,-1);
    tracep->declBit(c+669,"full_line", false,-1);
    tracep->declBit(c+670,"r_busy", false,-1);
    tracep->declBus(c+671,"linelen", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mkbytes ");
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+616,"i_stb", false,-1);
    tracep->declBus(c+628,"i_bits", false,-1, 6,0);
    tracep->declBit(c+539,"o_stb", false,-1);
    tracep->declBus(c+540,"o_char", false,-1, 7,0);
    tracep->declBit(c+619,"o_busy", false,-1);
    tracep->declBit(c+170,"i_busy", false,-1);
    tracep->declBus(c+4,"newv", false,-1, 6,0);
    tracep->declBus(c+5,"k", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("gpioi ");
    tracep->declBus(c+4254,"NIN", false,-1, 31,0);
    tracep->declBus(c+4248,"NOUT", false,-1, 31,0);
    tracep->declBus(c+4294,"DEFAULT", false,-1, 7,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+3836,"i_wb_cyc", false,-1);
    tracep->declBit(c+3841,"i_wb_stb", false,-1);
    tracep->declBit(c+3838,"i_wb_we", false,-1);
    tracep->declBus(c+3839,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3840,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+3841,"o_wb_ack", false,-1);
    tracep->declBus(c+4204,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4194,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4195,"o_gpio", false,-1, 7,0);
    tracep->declBit(c+145,"o_int", false,-1);
    tracep->declBus(c+672,"r_gpio", false,-1, 15,0);
    tracep->declBus(c+673,"x_gpio", false,-1, 15,0);
    tracep->declBus(c+674,"q_gpio", false,-1, 15,0);
    tracep->declBus(c+672,"hi_bits", false,-1, 15,0);
    tracep->declBus(c+4210,"low_bits", false,-1, 15,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2ci ");
    tracep->declBus(c+4253,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4296,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4248,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4259,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4301,"DEF_CHANNEL", false,-1, 1,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBus(c+4248,"RW", false,-1, 31,0);
    tracep->declBus(c+4373,"BAW", false,-1, 31,0);
    tracep->declBus(c+4374,"RESET_ADDRESS", false,-1, 27,0);
    tracep->declBus(c+4255,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4260,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4375,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+3869,"i_wb_cyc", false,-1);
    tracep->declBit(c+3870,"i_wb_stb", false,-1);
    tracep->declBit(c+3871,"i_wb_we", false,-1);
    tracep->declBus(c+3921,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+3873,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3874,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+414,"o_wb_ack", false,-1);
    tracep->declBus(c+415,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+216,"o_pf_cyc", false,-1);
    tracep->declBit(c+217,"o_pf_stb", false,-1);
    tracep->declBit(c+4261,"o_pf_we", false,-1);
    tracep->declBus(c+218,"o_pf_addr", false,-1, 21,0);
    tracep->declArray(c+4263,"o_pf_data", false,-1, 511,0);
    tracep->declQuad(c+4279,"o_pf_sel", false,-1, 63,0);
    tracep->declBit(c+219,"i_pf_stall", false,-1);
    tracep->declBit(c+220,"i_pf_ack", false,-1);
    tracep->declBit(c+221,"i_pf_err", false,-1);
    tracep->declArray(c+222,"i_pf_data", false,-1, 511,0);
    tracep->declBit(c+4175,"i_i2c_sda", false,-1);
    tracep->declBit(c+4176,"i_i2c_scl", false,-1);
    tracep->declBit(c+4177,"o_i2c_sda", false,-1);
    tracep->declBit(c+4178,"o_i2c_scl", false,-1);
    tracep->declBit(c+152,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+153,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+155,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+154,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+156,"M_AXIS_TID", false,-1, 1,0);
    tracep->declBit(c+4261,"i_sync_signal", false,-1);
    tracep->declBus(c+35,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4301,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4302,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4303,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4304,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4258,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4295,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4318,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4253,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4340,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4341,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4306,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4308,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4309,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4310,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4311,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4300,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4312,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4376,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4377,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4378,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4379,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4380,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4381,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+675,"cpu_reset", false,-1);
    tracep->declBit(c+4261,"cpu_clear_cache", false,-1);
    tracep->declBit(c+676,"cpu_new_pc", false,-1);
    tracep->declBus(c+677,"pf_jump_addr", false,-1, 27,0);
    tracep->declBit(c+678,"pf_valid", false,-1);
    tracep->declBit(c+679,"pf_ready", false,-1);
    tracep->declBus(c+680,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+681,"pf_insn_addr", false,-1, 27,0);
    tracep->declBit(c+682,"pf_illegal", false,-1);
    tracep->declBit(c+683,"half_valid", false,-1);
    tracep->declBit(c+684,"imm_cycle", false,-1);
    tracep->declBit(c+3922,"next_valid", false,-1);
    tracep->declBus(c+3923,"next_insn", false,-1, 7,0);
    tracep->declBit(c+685,"insn_ready", false,-1);
    tracep->declBit(c+686,"half_ready", false,-1);
    tracep->declBit(c+687,"i2c_abort", false,-1);
    tracep->declBit(c+688,"insn_valid", false,-1);
    tracep->declBus(c+689,"insn", false,-1, 11,0);
    tracep->declBus(c+690,"half_insn", false,-1, 3,0);
    tracep->declBit(c+691,"i2c_ckedge", false,-1);
    tracep->declBit(c+692,"i2c_stretch", false,-1);
    tracep->declBus(c+693,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+694,"ckcount", false,-1, 11,0);
    tracep->declBus(c+695,"abort_address", false,-1, 27,0);
    tracep->declBus(c+696,"jump_target", false,-1, 27,0);
    tracep->declBit(c+697,"r_wait", false,-1);
    tracep->declBit(c+698,"soft_halt_request", false,-1);
    tracep->declBit(c+675,"r_halted", false,-1);
    tracep->declBit(c+699,"r_err", false,-1);
    tracep->declBit(c+700,"r_aborted", false,-1);
    tracep->declBit(c+701,"r_manual", false,-1);
    tracep->declBit(c+702,"r_sda", false,-1);
    tracep->declBit(c+703,"r_scl", false,-1);
    tracep->declBit(c+704,"w_stopped", false,-1);
    tracep->declBit(c+705,"w_sda", false,-1);
    tracep->declBit(c+706,"w_scl", false,-1);
    tracep->declBit(c+3924,"bus_read", false,-1);
    tracep->declBit(c+3925,"bus_write", false,-1);
    tracep->declBit(c+3926,"bus_override", false,-1);
    tracep->declBit(c+3927,"bus_manual", false,-1);
    tracep->declBit(c+707,"ovw_ready", false,-1);
    tracep->declBit(c+3928,"bus_jump", false,-1);
    tracep->declBus(c+3921,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+3921,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+3873,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+3874,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+415,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+708,"s_tvalid", false,-1);
    tracep->declBit(c+686,"s_tready", false,-1);
    tracep->declBus(c+709,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+36,"w_control", false,-1, 31,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+701,"manual", false,-1);
    tracep->declBit(c+703,"scl", false,-1);
    tracep->declBit(c+702,"sda", false,-1);
    tracep->declBit(c+710,"o_scl", false,-1);
    tracep->declBit(c+711,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_TID ");
    tracep->declBit(c+712,"mid_axis_pkt", false,-1);
    tracep->declBus(c+713,"r_channel", false,-1, 1,0);
    tracep->declBus(c+156,"axis_tid", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4260,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+37,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+708,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+685,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+714,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+152,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+153,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+155,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+154,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+691,"i_ckedge", false,-1);
    tracep->declBit(c+692,"o_stretch", false,-1);
    tracep->declBit(c+4176,"i_scl", false,-1);
    tracep->declBit(c+4175,"i_sda", false,-1);
    tracep->declBit(c+706,"o_scl", false,-1);
    tracep->declBit(c+705,"o_sda", false,-1);
    tracep->declBit(c+687,"o_abort", false,-1);
    tracep->declBus(c+4306,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4307,"START", false,-1, 3,0);
    tracep->declBus(c+4308,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4309,"STOP", false,-1, 3,0);
    tracep->declBus(c+4310,"DATA", false,-1, 3,0);
    tracep->declBus(c+4311,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4300,"ACK", false,-1, 3,0);
    tracep->declBus(c+4312,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4376,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4377,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4378,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4379,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4380,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4298,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4255,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4343,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4349,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4344,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4346,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4382,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4383,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4384,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4385,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4298,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+715,"last_byte", false,-1);
    tracep->declBit(c+716,"dir", false,-1);
    tracep->declBit(c+717,"will_ack", false,-1);
    tracep->declBus(c+718,"state", false,-1, 3,0);
    tracep->declBus(c+719,"nbits", false,-1, 2,0);
    tracep->declBus(c+720,"sreg", false,-1, 7,0);
    tracep->declBit(c+721,"q_scl", false,-1);
    tracep->declBit(c+722,"q_sda", false,-1);
    tracep->declBit(c+723,"ck_scl", false,-1);
    tracep->declBit(c+724,"ck_sda", false,-1);
    tracep->declBit(c+725,"lst_scl", false,-1);
    tracep->declBit(c+726,"lst_sda", false,-1);
    tracep->declBit(c+727,"stop_bit", false,-1);
    tracep->declBit(c+728,"channel_busy", false,-1);
    tracep->declBit(c+4261,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4373,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4248,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4296,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4373,"AW", false,-1, 31,0);
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+38,"i_reset", false,-1);
    tracep->declBit(c+676,"i_new_pc", false,-1);
    tracep->declBit(c+4261,"i_clear_cache", false,-1);
    tracep->declBit(c+679,"i_ready", false,-1);
    tracep->declBus(c+677,"i_pc", false,-1, 27,0);
    tracep->declBit(c+678,"o_valid", false,-1);
    tracep->declBit(c+682,"o_illegal", false,-1);
    tracep->declBus(c+680,"o_insn", false,-1, 7,0);
    tracep->declBus(c+681,"o_pc", false,-1, 27,0);
    tracep->declBit(c+216,"o_wb_cyc", false,-1);
    tracep->declBit(c+217,"o_wb_stb", false,-1);
    tracep->declBit(c+4261,"o_wb_we", false,-1);
    tracep->declBus(c+218,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+4263,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+219,"i_wb_stall", false,-1);
    tracep->declBit(c+220,"i_wb_ack", false,-1);
    tracep->declBit(c+221,"i_wb_err", false,-1);
    tracep->declArray(c+222,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+729,"last_stb", false,-1);
    tracep->declBit(c+730,"invalid_bus_cycle", false,-1);
    tracep->declArray(c+731,"cache_word", false,-1, 511,0);
    tracep->declBit(c+747,"cache_valid", false,-1);
    tracep->declBus(c+748,"inflight", false,-1, 1,0);
    tracep->declBit(c+749,"cache_illegal", false,-1);
    tracep->declBit(c+750,"r_valid", false,-1);
    tracep->declArray(c+751,"r_insn", false,-1, 511,0);
    tracep->declArray(c+767,"i_wb_shifted", false,-1, 511,0);
    tracep->pushNamePrefix("GEN_SUBSHIFT ");
    tracep->declBus(c+4337,"NSHIFT", false,-1, 31,0);
    tracep->declBit(c+750,"rg_valid", false,-1);
    tracep->declArray(c+751,"rg_insn", false,-1, 511,0);
    tracep->declBus(c+783,"r_count", false,-1, 6,0);
    tracep->declBus(c+784,"r_shift", false,-1, 5,0);
    tracep->declBit(c+4261,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("i2cscopei ");
    tracep->declBus(c+4386,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4299,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4387,"NELM", false,-1, 31,0);
    tracep->declBus(c+4255,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4295,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4388,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4387,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4389,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4141,"i_data_clk", false,-1);
    tracep->declBit(c+4262,"i_ce", false,-1);
    tracep->declBit(c+700,"i_trigger", false,-1);
    tracep->declBus(c+39,"i_data", false,-1, 30,0);
    tracep->declBit(c+4141,"i_wb_clk", false,-1);
    tracep->declBit(c+3845,"i_wb_cyc", false,-1);
    tracep->declBit(c+3846,"i_wb_stb", false,-1);
    tracep->declBit(c+3847,"i_wb_we", false,-1);
    tracep->declBit(c+3929,"i_wb_addr", false,-1);
    tracep->declBus(c+3849,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3850,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+406,"o_wb_ack", false,-1);
    tracep->declBus(c+407,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+143,"o_interrupt", false,-1);
    tracep->declBit(c+3930,"write_stb", false,-1);
    tracep->declBit(c+3931,"read_from_data", false,-1);
    tracep->declBit(c+3932,"write_to_control", false,-1);
    tracep->declBus(c+407,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4141,"bus_clock", false,-1);
    tracep->declBit(c+785,"read_address", false,-1);
    tracep->declBus(c+3849,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+786,"raddr", false,-1, 9,0);
    tracep->declBus(c+787,"waddr", false,-1, 9,0);
    tracep->declBit(c+788,"bw_reset_request", false,-1);
    tracep->declBit(c+789,"bw_manual_trigger", false,-1);
    tracep->declBit(c+790,"bw_disable_trigger", false,-1);
    tracep->declBit(c+788,"bw_reset_complete", false,-1);
    tracep->declBus(c+791,"br_config", false,-1, 2,0);
    tracep->declBus(c+792,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+793,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+788,"dw_reset", false,-1);
    tracep->declBit(c+789,"dw_manual_trigger", false,-1);
    tracep->declBit(c+790,"dw_disable_trigger", false,-1);
    tracep->declBit(c+794,"dr_triggered", false,-1);
    tracep->declBit(c+795,"dr_primed", false,-1);
    tracep->declBit(c+796,"dw_trigger", false,-1);
    tracep->declBit(c+797,"dr_stopped", false,-1);
    tracep->declBus(c+4338,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+798,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+799,"dw_final_stop", false,-1);
    tracep->declBus(c+800,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+801,"qd_data", false,-1, 30,0);
    tracep->declBit(c+802,"dr_force_write", false,-1);
    tracep->declBit(c+803,"dr_run_timeout", false,-1);
    tracep->declBit(c+804,"new_data", false,-1);
    tracep->declBit(c+805,"dr_force_inhibit", false,-1);
    tracep->declBus(c+801,"w_data", false,-1, 30,0);
    tracep->declBit(c+806,"imm_adr", false,-1);
    tracep->declBit(c+807,"lst_adr", false,-1);
    tracep->declBus(c+808,"lst_val", false,-1, 30,0);
    tracep->declBus(c+809,"imm_val", false,-1, 30,0);
    tracep->declBit(c+810,"record_ce", false,-1);
    tracep->declBus(c+811,"r_data", false,-1, 31,0);
    tracep->declBit(c+799,"bw_stopped", false,-1);
    tracep->declBit(c+794,"bw_triggered", false,-1);
    tracep->declBit(c+795,"bw_primed", false,-1);
    tracep->declBit(c+406,"br_wb_ack", false,-1);
    tracep->declBit(c+812,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3846,"bw_cyc_stb", false,-1);
    tracep->declBus(c+813,"this_addr", false,-1, 9,0);
    tracep->declBus(c+814,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+792,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4386,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+815,"br_level_interrupt", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rcv ");
    tracep->declBus(c+4257,"TIMER_BITS", false,-1, 31,0);
    tracep->declBus(c+4390,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBus(c+4257,"TB", false,-1, 31,0);
    tracep->declBus(c+4306,"RXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4307,"RXUL_BIT_ONE", false,-1, 3,0);
    tracep->declBus(c+4308,"RXUL_BIT_TWO", false,-1, 3,0);
    tracep->declBus(c+4309,"RXUL_BIT_THREE", false,-1, 3,0);
    tracep->declBus(c+4310,"RXUL_BIT_FOUR", false,-1, 3,0);
    tracep->declBus(c+4311,"RXUL_BIT_FIVE", false,-1, 3,0);
    tracep->declBus(c+4300,"RXUL_BIT_SIX", false,-1, 3,0);
    tracep->declBus(c+4312,"RXUL_BIT_SEVEN", false,-1, 3,0);
    tracep->declBus(c+4376,"RXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4377,"RXUL_WAIT", false,-1, 3,0);
    tracep->declBus(c+4293,"RXUL_IDLE", false,-1, 3,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4191,"i_uart_rx", false,-1);
    tracep->declBit(c+169,"o_wr", false,-1);
    tracep->declBus(c+167,"o_data", false,-1, 7,0);
    tracep->declBus(c+4391,"half_baud", false,-1, 6,0);
    tracep->declBus(c+816,"state", false,-1, 3,0);
    tracep->declBus(c+817,"baud_counter", false,-1, 6,0);
    tracep->declBit(c+818,"zero_baud_counter", false,-1);
    tracep->declBit(c+819,"q_uart", false,-1);
    tracep->declBit(c+820,"qq_uart", false,-1);
    tracep->declBit(c+821,"ck_uart", false,-1);
    tracep->declBus(c+822,"chg_counter", false,-1, 6,0);
    tracep->declBit(c+823,"half_baud_time", false,-1);
    tracep->declBus(c+824,"data_reg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope1_ddr3i ");
    tracep->declBus(c+4386,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4299,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4387,"NELM", false,-1, 31,0);
    tracep->declBus(c+4255,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4295,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4388,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4387,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4389,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4141,"i_data_clk", false,-1);
    tracep->declBit(c+4262,"i_ce", false,-1);
    tracep->declBit(c+4079,"i_trigger", false,-1);
    tracep->declBus(c+4211,"i_data", false,-1, 30,0);
    tracep->declBit(c+4141,"i_wb_clk", false,-1);
    tracep->declBit(c+3851,"i_wb_cyc", false,-1);
    tracep->declBit(c+3852,"i_wb_stb", false,-1);
    tracep->declBit(c+3853,"i_wb_we", false,-1);
    tracep->declBit(c+3933,"i_wb_addr", false,-1);
    tracep->declBus(c+3855,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3856,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+408,"o_wb_ack", false,-1);
    tracep->declBus(c+409,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+137,"o_interrupt", false,-1);
    tracep->declBit(c+3934,"write_stb", false,-1);
    tracep->declBit(c+3935,"read_from_data", false,-1);
    tracep->declBit(c+3936,"write_to_control", false,-1);
    tracep->declBus(c+409,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4141,"bus_clock", false,-1);
    tracep->declBit(c+825,"read_address", false,-1);
    tracep->declBus(c+3855,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+826,"raddr", false,-1, 9,0);
    tracep->declBus(c+827,"waddr", false,-1, 9,0);
    tracep->declBit(c+828,"bw_reset_request", false,-1);
    tracep->declBit(c+829,"bw_manual_trigger", false,-1);
    tracep->declBit(c+830,"bw_disable_trigger", false,-1);
    tracep->declBit(c+828,"bw_reset_complete", false,-1);
    tracep->declBus(c+831,"br_config", false,-1, 2,0);
    tracep->declBus(c+832,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+833,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+828,"dw_reset", false,-1);
    tracep->declBit(c+829,"dw_manual_trigger", false,-1);
    tracep->declBit(c+830,"dw_disable_trigger", false,-1);
    tracep->declBit(c+834,"dr_triggered", false,-1);
    tracep->declBit(c+835,"dr_primed", false,-1);
    tracep->declBit(c+4133,"dw_trigger", false,-1);
    tracep->declBit(c+836,"dr_stopped", false,-1);
    tracep->declBus(c+4338,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+837,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+838,"dw_final_stop", false,-1);
    tracep->declBus(c+839,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+840,"qd_data", false,-1, 30,0);
    tracep->declBit(c+841,"dr_force_write", false,-1);
    tracep->declBit(c+842,"dr_run_timeout", false,-1);
    tracep->declBit(c+843,"new_data", false,-1);
    tracep->declBit(c+844,"dr_force_inhibit", false,-1);
    tracep->declBus(c+840,"w_data", false,-1, 30,0);
    tracep->declBit(c+845,"imm_adr", false,-1);
    tracep->declBit(c+846,"lst_adr", false,-1);
    tracep->declBus(c+847,"lst_val", false,-1, 30,0);
    tracep->declBus(c+848,"imm_val", false,-1, 30,0);
    tracep->declBit(c+849,"record_ce", false,-1);
    tracep->declBus(c+850,"r_data", false,-1, 31,0);
    tracep->declBit(c+838,"bw_stopped", false,-1);
    tracep->declBit(c+834,"bw_triggered", false,-1);
    tracep->declBit(c+835,"bw_primed", false,-1);
    tracep->declBit(c+408,"br_wb_ack", false,-1);
    tracep->declBit(c+851,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3852,"bw_cyc_stb", false,-1);
    tracep->declBus(c+852,"this_addr", false,-1, 9,0);
    tracep->declBus(c+853,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+832,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4386,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+854,"br_level_interrupt", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope2_ddr3i ");
    tracep->declBus(c+4386,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4299,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4387,"NELM", false,-1, 31,0);
    tracep->declBus(c+4255,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4295,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4388,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4387,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4389,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4141,"i_data_clk", false,-1);
    tracep->declBit(c+4262,"i_ce", false,-1);
    tracep->declBit(c+4079,"i_trigger", false,-1);
    tracep->declBus(c+4212,"i_data", false,-1, 30,0);
    tracep->declBit(c+4141,"i_wb_clk", false,-1);
    tracep->declBit(c+3857,"i_wb_cyc", false,-1);
    tracep->declBit(c+3858,"i_wb_stb", false,-1);
    tracep->declBit(c+3859,"i_wb_we", false,-1);
    tracep->declBit(c+3937,"i_wb_addr", false,-1);
    tracep->declBus(c+3861,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3862,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+410,"o_wb_ack", false,-1);
    tracep->declBus(c+411,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+138,"o_interrupt", false,-1);
    tracep->declBit(c+3938,"write_stb", false,-1);
    tracep->declBit(c+3939,"read_from_data", false,-1);
    tracep->declBit(c+3940,"write_to_control", false,-1);
    tracep->declBus(c+411,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4141,"bus_clock", false,-1);
    tracep->declBit(c+855,"read_address", false,-1);
    tracep->declBus(c+3861,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+856,"raddr", false,-1, 9,0);
    tracep->declBus(c+857,"waddr", false,-1, 9,0);
    tracep->declBit(c+858,"bw_reset_request", false,-1);
    tracep->declBit(c+859,"bw_manual_trigger", false,-1);
    tracep->declBit(c+860,"bw_disable_trigger", false,-1);
    tracep->declBit(c+858,"bw_reset_complete", false,-1);
    tracep->declBus(c+861,"br_config", false,-1, 2,0);
    tracep->declBus(c+862,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+863,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+858,"dw_reset", false,-1);
    tracep->declBit(c+859,"dw_manual_trigger", false,-1);
    tracep->declBit(c+860,"dw_disable_trigger", false,-1);
    tracep->declBit(c+864,"dr_triggered", false,-1);
    tracep->declBit(c+865,"dr_primed", false,-1);
    tracep->declBit(c+4134,"dw_trigger", false,-1);
    tracep->declBit(c+866,"dr_stopped", false,-1);
    tracep->declBus(c+4338,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+867,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+868,"dw_final_stop", false,-1);
    tracep->declBus(c+869,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+870,"qd_data", false,-1, 30,0);
    tracep->declBit(c+871,"dr_force_write", false,-1);
    tracep->declBit(c+872,"dr_run_timeout", false,-1);
    tracep->declBit(c+873,"new_data", false,-1);
    tracep->declBit(c+874,"dr_force_inhibit", false,-1);
    tracep->declBus(c+870,"w_data", false,-1, 30,0);
    tracep->declBit(c+875,"imm_adr", false,-1);
    tracep->declBit(c+876,"lst_adr", false,-1);
    tracep->declBus(c+877,"lst_val", false,-1, 30,0);
    tracep->declBus(c+878,"imm_val", false,-1, 30,0);
    tracep->declBit(c+879,"record_ce", false,-1);
    tracep->declBus(c+880,"r_data", false,-1, 31,0);
    tracep->declBit(c+868,"bw_stopped", false,-1);
    tracep->declBit(c+864,"bw_triggered", false,-1);
    tracep->declBit(c+865,"bw_primed", false,-1);
    tracep->declBit(c+410,"br_wb_ack", false,-1);
    tracep->declBit(c+881,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3858,"bw_cyc_stb", false,-1);
    tracep->declBus(c+882,"this_addr", false,-1, 9,0);
    tracep->declBus(c+883,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+862,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4386,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+884,"br_level_interrupt", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope3_ddr3i ");
    tracep->declBus(c+4386,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4299,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4387,"NELM", false,-1, 31,0);
    tracep->declBus(c+4255,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4295,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4388,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4387,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4389,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4141,"i_data_clk", false,-1);
    tracep->declBit(c+4262,"i_ce", false,-1);
    tracep->declBit(c+4079,"i_trigger", false,-1);
    tracep->declBus(c+4213,"i_data", false,-1, 30,0);
    tracep->declBit(c+4141,"i_wb_clk", false,-1);
    tracep->declBit(c+3863,"i_wb_cyc", false,-1);
    tracep->declBit(c+3864,"i_wb_stb", false,-1);
    tracep->declBit(c+3865,"i_wb_we", false,-1);
    tracep->declBit(c+3941,"i_wb_addr", false,-1);
    tracep->declBus(c+3867,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3868,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+412,"o_wb_ack", false,-1);
    tracep->declBus(c+413,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+144,"o_interrupt", false,-1);
    tracep->declBit(c+3942,"write_stb", false,-1);
    tracep->declBit(c+3943,"read_from_data", false,-1);
    tracep->declBit(c+3944,"write_to_control", false,-1);
    tracep->declBus(c+413,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4141,"bus_clock", false,-1);
    tracep->declBit(c+885,"read_address", false,-1);
    tracep->declBus(c+3867,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+886,"raddr", false,-1, 9,0);
    tracep->declBus(c+887,"waddr", false,-1, 9,0);
    tracep->declBit(c+888,"bw_reset_request", false,-1);
    tracep->declBit(c+889,"bw_manual_trigger", false,-1);
    tracep->declBit(c+890,"bw_disable_trigger", false,-1);
    tracep->declBit(c+888,"bw_reset_complete", false,-1);
    tracep->declBus(c+891,"br_config", false,-1, 2,0);
    tracep->declBus(c+892,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+893,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+888,"dw_reset", false,-1);
    tracep->declBit(c+889,"dw_manual_trigger", false,-1);
    tracep->declBit(c+890,"dw_disable_trigger", false,-1);
    tracep->declBit(c+894,"dr_triggered", false,-1);
    tracep->declBit(c+895,"dr_primed", false,-1);
    tracep->declBit(c+4135,"dw_trigger", false,-1);
    tracep->declBit(c+896,"dr_stopped", false,-1);
    tracep->declBus(c+4338,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+897,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+898,"dw_final_stop", false,-1);
    tracep->declBus(c+899,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+900,"qd_data", false,-1, 30,0);
    tracep->declBit(c+901,"dr_force_write", false,-1);
    tracep->declBit(c+902,"dr_run_timeout", false,-1);
    tracep->declBit(c+903,"new_data", false,-1);
    tracep->declBit(c+904,"dr_force_inhibit", false,-1);
    tracep->declBus(c+900,"w_data", false,-1, 30,0);
    tracep->declBit(c+905,"imm_adr", false,-1);
    tracep->declBit(c+906,"lst_adr", false,-1);
    tracep->declBus(c+907,"lst_val", false,-1, 30,0);
    tracep->declBus(c+908,"imm_val", false,-1, 30,0);
    tracep->declBit(c+909,"record_ce", false,-1);
    tracep->declBus(c+910,"r_data", false,-1, 31,0);
    tracep->declBit(c+898,"bw_stopped", false,-1);
    tracep->declBit(c+894,"bw_triggered", false,-1);
    tracep->declBit(c+895,"bw_primed", false,-1);
    tracep->declBit(c+412,"br_wb_ack", false,-1);
    tracep->declBit(c+911,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3864,"bw_cyc_stb", false,-1);
    tracep->declBus(c+912,"this_addr", false,-1, 9,0);
    tracep->declBus(c+913,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+892,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4386,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+914,"br_level_interrupt", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spioi ");
    tracep->declBus(c+4248,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4338,"NBTN", false,-1, 31,0);
    tracep->declBus(c+4248,"NSW", false,-1, 31,0);
    tracep->declBus(c+4259,"NFF", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+3836,"i_wb_cyc", false,-1);
    tracep->declBit(c+3843,"i_wb_stb", false,-1);
    tracep->declBit(c+3838,"i_wb_we", false,-1);
    tracep->declBus(c+3839,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3840,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+404,"o_wb_ack", false,-1);
    tracep->declBus(c+405,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4196,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4197,"i_btn", false,-1, 4,0);
    tracep->declBus(c+173,"o_led", false,-1, 7,0);
    tracep->declBit(c+146,"o_int", false,-1);
    tracep->declBit(c+915,"led_demo", false,-1);
    tracep->declBus(c+916,"r_led", false,-1, 7,0);
    tracep->declBus(c+917,"w_btn", false,-1, 7,0);
    tracep->declBus(c+918,"bounced", false,-1, 7,0);
    tracep->declBus(c+919,"r_sw", false,-1, 7,0);
    tracep->declBit(c+920,"sw_int", false,-1);
    tracep->declBit(c+921,"btn_int", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("GEN_BUTTON ");
    tracep->declBus(c+3945,"next_btn", false,-1, 4,0);
    tracep->declBus(c+922,"s_btn", false,-1, 4,0);
    tracep->declBus(c+923,"r_btn", false,-1, 4,0);
    tracep->declBus(c+924,"btn_pipe", false,-1, 9,0);
    tracep->declBit(c+921,"r_btn_int", false,-1);
    tracep->declBit(c+3946,"next_int", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SWITCHES ");
    tracep->declBus(c+925,"sw_pipe", false,-1, 15,0);
    tracep->declBus(c+919,"rr_sw", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("knightrider ");
    tracep->declBus(c+4248,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4315,"CTRBITS", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBus(c+918,"o_leds", false,-1, 7,0);
    tracep->declBus(c+926,"led_owner", false,-1, 7,0);
    tracep->declBit(c+927,"led_dir", false,-1);
    tracep->declBus(c+928,"led_ctr", false,-1, 24,0);
    tracep->declBit(c+929,"led_clk", false,-1);
    tracep->declBus(c+930,"br_ctr", false,-1, 4,0);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[0] ");
    tracep->declBus(c+931,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[1] ");
    tracep->declBus(c+932,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[2] ");
    tracep->declBus(c+933,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[3] ");
    tracep->declBus(c+934,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[4] ");
    tracep->declBus(c+935,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[5] ");
    tracep->declBus(c+936,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[6] ");
    tracep->declBus(c+937,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[7] ");
    tracep->declBus(c+938,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("swic ");
    tracep->declBus(c+4252,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4373,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4296,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4299,"DBG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4342,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4342,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4255,"START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4254,"EXTERNAL_INTERRUPTS", false,-1, 31,0);
    tracep->declBus(c+4247,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DMA", false,-1, 0,0);
    tracep->declBus(c+4246,"DMA_LGMEM", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_ACCOUNTING", false,-1, 0,0);
    tracep->declBus(c+4255,"DELAY_DBG_BUS", false,-1, 0,0);
    tracep->declBus(c+4298,"DELAY_EXT_BUS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4295,"RESET_DURATION", false,-1, 31,0);
    tracep->declBus(c+4253,"PAW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4214,"i_reset", false,-1);
    tracep->declBit(c+238,"o_wb_cyc", false,-1);
    tracep->declBit(c+239,"o_wb_stb", false,-1);
    tracep->declBit(c+240,"o_wb_we", false,-1);
    tracep->declBus(c+241,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+242,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+258,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+260,"i_wb_stall", false,-1);
    tracep->declBit(c+261,"i_wb_ack", false,-1);
    tracep->declArray(c+263,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+262,"i_wb_err", false,-1);
    tracep->declBus(c+165,"i_ext_int", false,-1, 15,0);
    tracep->declBit(c+166,"o_ext_int", false,-1);
    tracep->declBit(c+40,"i_dbg_cyc", false,-1);
    tracep->declBit(c+41,"i_dbg_stb", false,-1);
    tracep->declBit(c+42,"i_dbg_we", false,-1);
    tracep->declBus(c+43,"i_dbg_addr", false,-1, 6,0);
    tracep->declBus(c+44,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+4215,"i_dbg_sel", false,-1, 3,0);
    tracep->declBit(c+163,"o_dbg_stall", false,-1);
    tracep->declBit(c+164,"o_dbg_ack", false,-1);
    tracep->declBus(c+450,"o_dbg_data", false,-1, 31,0);
    tracep->declBus(c+4260,"o_cpu_debug", false,-1, 31,0);
    tracep->declBit(c+4187,"o_prof_stb", false,-1);
    tracep->declBus(c+4188,"o_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4189,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBus(c+4392,"PERIPHBASE", false,-1, 31,0);
    tracep->declBus(c+4297,"INTCTRL", false,-1, 7,0);
    tracep->declBus(c+4393,"WATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4394,"BUSWATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4395,"CTRINT", false,-1, 7,0);
    tracep->declBus(c+4396,"TIMER_A", false,-1, 7,0);
    tracep->declBus(c+4397,"TIMER_B", false,-1, 7,0);
    tracep->declBus(c+4398,"TIMER_C", false,-1, 7,0);
    tracep->declBus(c+4399,"JIFFIES", false,-1, 7,0);
    tracep->declBus(c+4400,"MSTR_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4401,"MSTR_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4402,"MSTR_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4403,"MSTR_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4404,"USER_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4405,"USER_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4406,"USER_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4407,"USER_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4408,"MMU_ADDR", false,-1, 7,0);
    tracep->declBus(c+4409,"DMAC_ADDR", false,-1, 7,0);
    tracep->declBus(c+4260,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4259,"STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4247,"RESET_BIT", false,-1, 31,0);
    tracep->declBus(c+4250,"CLEAR_CACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4338,"CATCH_BIT", false,-1, 31,0);
    tracep->declBus(c+4253,"VIRTUAL_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4301,"DBG_ADDR_CTRL", false,-1, 1,0);
    tracep->declBus(c+4302,"DBG_ADDR_CPU", false,-1, 1,0);
    tracep->declBus(c+4303,"DBG_ADDR_SYS", false,-1, 1,0);
    tracep->declBus(c+939,"main_int_vector", false,-1, 14,0);
    tracep->declBus(c+940,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+941,"ctri_int", false,-1);
    tracep->declBit(c+942,"tma_int", false,-1);
    tracep->declBit(c+943,"tmb_int", false,-1);
    tracep->declBit(c+944,"tmc_int", false,-1);
    tracep->declBit(c+945,"jif_int", false,-1);
    tracep->declBit(c+946,"dmac_int", false,-1);
    tracep->declBit(c+947,"mtc_int", false,-1);
    tracep->declBit(c+948,"moc_int", false,-1);
    tracep->declBit(c+949,"mpc_int", false,-1);
    tracep->declBit(c+950,"mic_int", false,-1);
    tracep->declBit(c+951,"utc_int", false,-1);
    tracep->declBit(c+952,"uoc_int", false,-1);
    tracep->declBit(c+953,"upc_int", false,-1);
    tracep->declBit(c+954,"uic_int", false,-1);
    tracep->declBus(c+955,"actr_data", false,-1, 31,0);
    tracep->declBit(c+956,"actr_ack", false,-1);
    tracep->declBit(c+4261,"actr_stall", false,-1);
    tracep->declBit(c+957,"cpu_clken", false,-1);
    tracep->declBit(c+958,"sys_cyc", false,-1);
    tracep->declBit(c+959,"sys_stb", false,-1);
    tracep->declBit(c+960,"sys_we", false,-1);
    tracep->declBus(c+961,"sys_addr", false,-1, 7,0);
    tracep->declBus(c+962,"sys_data", false,-1, 31,0);
    tracep->declBus(c+963,"cpu_addr", false,-1, 21,0);
    tracep->declBus(c+964,"sys_idata", false,-1, 31,0);
    tracep->declBit(c+965,"sys_ack", false,-1);
    tracep->declBit(c+4261,"sys_stall", false,-1);
    tracep->declBit(c+956,"sel_counter", false,-1);
    tracep->declBit(c+966,"sel_timer", false,-1);
    tracep->declBit(c+967,"sel_pic", false,-1);
    tracep->declBit(c+968,"sel_apic", false,-1);
    tracep->declBit(c+969,"sel_watchdog", false,-1);
    tracep->declBit(c+970,"sel_bus_watchdog", false,-1);
    tracep->declBit(c+971,"sel_dmac", false,-1);
    tracep->declBit(c+972,"sel_mmus", false,-1);
    tracep->declBit(c+973,"dbg_cyc", false,-1);
    tracep->declBit(c+974,"dbg_stb", false,-1);
    tracep->declBit(c+975,"dbg_we", false,-1);
    tracep->declBus(c+976,"dbg_addr", false,-1, 6,0);
    tracep->declBus(c+977,"dbg_idata", false,-1, 31,0);
    tracep->declBit(c+978,"dbg_ack", false,-1);
    tracep->declBit(c+979,"dbg_stall", false,-1);
    tracep->declBus(c+980,"dbg_odata", false,-1, 31,0);
    tracep->declBus(c+981,"dbg_sel", false,-1, 3,0);
    tracep->declBit(c+982,"no_dbg_err", false,-1);
    tracep->declBit(c+983,"cpu_break", false,-1);
    tracep->declBit(c+984,"dbg_cmd_write", false,-1);
    tracep->declBit(c+985,"dbg_cpu_write", false,-1);
    tracep->declBit(c+986,"dbg_cpu_read", false,-1);
    tracep->declBus(c+977,"dbg_cmd_data", false,-1, 31,0);
    tracep->declBus(c+981,"dbg_cmd_strb", false,-1, 3,0);
    tracep->declBit(c+987,"reset_hold", false,-1);
    tracep->declBit(c+988,"halt_on_fault", false,-1);
    tracep->declBit(c+988,"dbg_catch", false,-1);
    tracep->declBit(c+989,"reset_request", false,-1);
    tracep->declBit(c+990,"release_request", false,-1);
    tracep->declBit(c+991,"halt_request", false,-1);
    tracep->declBit(c+992,"step_request", false,-1);
    tracep->declBit(c+993,"clear_cache_request", false,-1);
    tracep->declBit(c+994,"cmd_reset", false,-1);
    tracep->declBit(c+995,"cmd_halt", false,-1);
    tracep->declBit(c+996,"cmd_step", false,-1);
    tracep->declBit(c+997,"cmd_clear_cache", false,-1);
    tracep->declBit(c+998,"cmd_write", false,-1);
    tracep->declBit(c+999,"cmd_read", false,-1);
    tracep->declBus(c+1000,"cmd_waddr", false,-1, 4,0);
    tracep->declBus(c+1001,"cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+1002,"cpu_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+994,"cpu_reset", false,-1);
    tracep->declBit(c+995,"cpu_halt", false,-1);
    tracep->declBit(c+1003,"cpu_has_halted", false,-1);
    tracep->declBit(c+1004,"cpu_dbg_stall", false,-1);
    tracep->declBus(c+1005,"cpu_status", false,-1, 31,0);
    tracep->declBit(c+1006,"cpu_gie", false,-1);
    tracep->declBit(c+4261,"wdt_stall", false,-1);
    tracep->declBit(c+1007,"wdt_ack", false,-1);
    tracep->declBit(c+1008,"wdt_reset", false,-1);
    tracep->declBus(c+1009,"wdt_data", false,-1, 31,0);
    tracep->declBit(c+1010,"wdbus_ack", false,-1);
    tracep->declBus(c+1011,"r_wdbus_data", false,-1, 21,0);
    tracep->declBus(c+1012,"pic_data", false,-1, 31,0);
    tracep->declBus(c+1013,"wdbus_data", false,-1, 31,0);
    tracep->declBit(c+1014,"reset_wdbus_timer", false,-1);
    tracep->declBit(c+1015,"wdbus_int", false,-1);
    tracep->declBit(c+45,"cpu_op_stall", false,-1);
    tracep->declBit(c+1016,"cpu_pf_stall", false,-1);
    tracep->declBit(c+1017,"cpu_i_count", false,-1);
    tracep->declBit(c+1018,"dmac_stb", false,-1);
    tracep->declBit(c+1019,"dc_err", false,-1);
    tracep->declBus(c+1020,"dmac_data", false,-1, 31,0);
    tracep->declBit(c+4261,"dmac_stall", false,-1);
    tracep->declBit(c+1021,"dmac_ack", false,-1);
    tracep->declBit(c+1022,"dc_cyc", false,-1);
    tracep->declBit(c+1023,"dc_stb", false,-1);
    tracep->declBit(c+1024,"dc_we", false,-1);
    tracep->declBit(c+1025,"dc_stall", false,-1);
    tracep->declBit(c+1026,"dc_ack", false,-1);
    tracep->declBus(c+1027,"dc_addr", false,-1, 21,0);
    tracep->declArray(c+1028,"dc_data", false,-1, 511,0);
    tracep->declQuad(c+1044,"dc_sel", false,-1, 63,0);
    tracep->declBit(c+1046,"cpu_gbl_cyc", false,-1);
    tracep->declBus(c+1047,"dmac_int_vec", false,-1, 31,0);
    tracep->declBit(c+1048,"ctri_sel", false,-1);
    tracep->declBit(c+4261,"ctri_stall", false,-1);
    tracep->declBit(c+1048,"ctri_ack", false,-1);
    tracep->declBus(c+1049,"ctri_data", false,-1, 31,0);
    tracep->declBit(c+4261,"tma_stall", false,-1);
    tracep->declBit(c+1050,"tma_ack", false,-1);
    tracep->declBit(c+4261,"tmb_stall", false,-1);
    tracep->declBit(c+1051,"tmb_ack", false,-1);
    tracep->declBit(c+4261,"tmc_stall", false,-1);
    tracep->declBit(c+1052,"tmc_ack", false,-1);
    tracep->declBit(c+4261,"jif_stall", false,-1);
    tracep->declBit(c+1053,"jif_ack", false,-1);
    tracep->declBus(c+1054,"tma_data", false,-1, 31,0);
    tracep->declBus(c+1055,"tmb_data", false,-1, 31,0);
    tracep->declBus(c+1056,"tmc_data", false,-1, 31,0);
    tracep->declBus(c+1057,"jif_data", false,-1, 31,0);
    tracep->declBit(c+4261,"pic_stall", false,-1);
    tracep->declBit(c+1058,"pic_ack", false,-1);
    tracep->declBit(c+1059,"cpu_gbl_stb", false,-1);
    tracep->declBit(c+1060,"cpu_lcl_cyc", false,-1);
    tracep->declBit(c+1061,"cpu_lcl_stb", false,-1);
    tracep->declBit(c+1062,"cpu_we", false,-1);
    tracep->declArray(c+1063,"cpu_data", false,-1, 511,0);
    tracep->declQuad(c+1079,"cpu_sel", false,-1, 63,0);
    tracep->declQuad(c+1079,"mmu_sel", false,-1, 63,0);
    tracep->declArray(c+1081,"cpu_idata", false,-1, 511,0);
    tracep->declBit(c+1097,"cpu_stall", false,-1);
    tracep->declBit(c+1098,"pic_interrupt", false,-1);
    tracep->declBit(c+1099,"cpu_ack", false,-1);
    tracep->declBit(c+1100,"cpu_err", false,-1);
    tracep->declBus(c+1101,"cpu_dbg_data", false,-1, 31,0);
    tracep->declBit(c+260,"ext_stall", false,-1);
    tracep->declBit(c+261,"ext_ack", false,-1);
    tracep->declBit(c+1046,"mmu_cyc", false,-1);
    tracep->declBit(c+1059,"mmu_stb", false,-1);
    tracep->declBit(c+1062,"mmu_we", false,-1);
    tracep->declBit(c+1102,"mmu_stall", false,-1);
    tracep->declBit(c+1103,"mmu_ack", false,-1);
    tracep->declBit(c+1104,"mmu_err", false,-1);
    tracep->declBit(c+4261,"mmus_stall", false,-1);
    tracep->declBit(c+1105,"mmus_ack", false,-1);
    tracep->declBus(c+963,"mmu_addr", false,-1, 21,0);
    tracep->declArray(c+1063,"mmu_data", false,-1, 511,0);
    tracep->declArray(c+263,"mmu_idata", false,-1, 511,0);
    tracep->declBus(c+4260,"mmus_data", false,-1, 31,0);
    tracep->declBit(c+4261,"cpu_miss", false,-1);
    tracep->declBit(c+1102,"mmu_cpu_stall", false,-1);
    tracep->declBit(c+1103,"mmu_cpu_ack", false,-1);
    tracep->declArray(c+263,"mmu_cpu_idata", false,-1, 511,0);
    tracep->declBit(c+4261,"pf_return_stb", false,-1);
    tracep->declBit(c+4261,"pf_return_we", false,-1);
    tracep->declBit(c+4261,"pf_return_cachable", false,-1);
    tracep->declBus(c+4410,"pf_return_v", false,-1, 19,0);
    tracep->declBus(c+4410,"pf_return_p", false,-1, 19,0);
    tracep->declBit(c+238,"ext_cyc", false,-1);
    tracep->declBit(c+239,"ext_stb", false,-1);
    tracep->declBit(c+240,"ext_we", false,-1);
    tracep->declBit(c+1106,"ext_err", false,-1);
    tracep->declBus(c+241,"ext_addr", false,-1, 21,0);
    tracep->declArray(c+242,"ext_odata", false,-1, 511,0);
    tracep->declQuad(c+258,"ext_sel", false,-1, 63,0);
    tracep->declArray(c+263,"ext_idata", false,-1, 511,0);
    tracep->declBus(c+1107,"tmr_data", false,-1, 31,0);
    tracep->declBus(c+1108,"w_ack_idx", false,-1, 2,0);
    tracep->declBus(c+1109,"ack_idx", false,-1, 2,0);
    tracep->declBit(c+1110,"last_sys_stb", false,-1);
    tracep->declBit(c+1111,"cmd_read_ack", false,-1);
    tracep->declBit(c+1105,"r_mmus_ack", false,-1);
    tracep->declBit(c+1112,"dbg_pre_ack", false,-1);
    tracep->declBus(c+1113,"dbg_pre_addr", false,-1, 1,0);
    tracep->declBus(c+1114,"dbg_cpu_status", false,-1, 31,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("ACCOUNTING_COUNTERS ");
    tracep->declBit(c+4261,"mtc_stall", false,-1);
    tracep->declBit(c+1115,"mtc_ack", false,-1);
    tracep->declBit(c+4261,"moc_stall", false,-1);
    tracep->declBit(c+1116,"moc_ack", false,-1);
    tracep->declBit(c+4261,"mpc_stall", false,-1);
    tracep->declBit(c+1117,"mpc_ack", false,-1);
    tracep->declBit(c+4261,"mic_stall", false,-1);
    tracep->declBit(c+1118,"mic_ack", false,-1);
    tracep->declBit(c+4261,"utc_stall", false,-1);
    tracep->declBit(c+1119,"utc_ack", false,-1);
    tracep->declBit(c+4261,"uoc_stall", false,-1);
    tracep->declBit(c+1120,"uoc_ack", false,-1);
    tracep->declBit(c+4261,"upc_stall", false,-1);
    tracep->declBit(c+1121,"upc_ack", false,-1);
    tracep->declBit(c+4261,"uic_stall", false,-1);
    tracep->declBit(c+1122,"uic_ack", false,-1);
    tracep->declBus(c+1123,"mtc_data", false,-1, 31,0);
    tracep->declBus(c+1124,"moc_data", false,-1, 31,0);
    tracep->declBus(c+1125,"mpc_data", false,-1, 31,0);
    tracep->declBus(c+1126,"mic_data", false,-1, 31,0);
    tracep->declBus(c+1127,"utc_data", false,-1, 31,0);
    tracep->declBus(c+1128,"uoc_data", false,-1, 31,0);
    tracep->declBus(c+1129,"upc_data", false,-1, 31,0);
    tracep->declBus(c+1130,"uic_data", false,-1, 31,0);
    tracep->declBus(c+955,"r_actr_data", false,-1, 31,0);
    tracep->pushNamePrefix("mins_ctr ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4261,"i_reset", false,-1);
    tracep->declBit(c+1017,"i_event", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+1131,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1118,"o_wb_ack", false,-1);
    tracep->declBus(c+1126,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+950,"o_int", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmstall_ctr ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4261,"i_reset", false,-1);
    tracep->declBit(c+45,"i_event", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+1132,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1116,"o_wb_ack", false,-1);
    tracep->declBus(c+1124,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+948,"o_int", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mpstall_ctr ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4261,"i_reset", false,-1);
    tracep->declBit(c+1016,"i_event", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+1133,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1117,"o_wb_ack", false,-1);
    tracep->declBus(c+1125,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+949,"o_int", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtask_ctr ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4261,"i_reset", false,-1);
    tracep->declBit(c+1134,"i_event", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+1135,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1115,"o_wb_ack", false,-1);
    tracep->declBus(c+1123,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+947,"o_int", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uins_ctr ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4261,"i_reset", false,-1);
    tracep->declBit(c+1136,"i_event", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+1137,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1122,"o_wb_ack", false,-1);
    tracep->declBus(c+1130,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+954,"o_int", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("umstall_ctr ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4261,"i_reset", false,-1);
    tracep->declBit(c+46,"i_event", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+1138,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1120,"o_wb_ack", false,-1);
    tracep->declBus(c+1128,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+952,"o_int", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("upstall_ctr ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4261,"i_reset", false,-1);
    tracep->declBit(c+1139,"i_event", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+1140,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1121,"o_wb_ack", false,-1);
    tracep->declBus(c+1129,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+953,"o_int", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("utask_ctr ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4261,"i_reset", false,-1);
    tracep->declBit(c+1141,"i_event", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+1142,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1119,"o_wb_ack", false,-1);
    tracep->declBus(c+1127,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+951,"o_int", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DELAY_THE_DEBUG_BUS ");
    tracep->declBit(c+4261,"dbg_err", false,-1);
    tracep->pushNamePrefix("wbdelay ");
    tracep->declBus(c+4257,"AW", false,-1, 31,0);
    tracep->declBus(c+4299,"DW", false,-1, 31,0);
    tracep->declBus(c+4255,"DELAY_STALL", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4214,"i_reset", false,-1);
    tracep->declBit(c+40,"i_wb_cyc", false,-1);
    tracep->declBit(c+41,"i_wb_stb", false,-1);
    tracep->declBit(c+42,"i_wb_we", false,-1);
    tracep->declBus(c+43,"i_wb_addr", false,-1, 6,0);
    tracep->declBus(c+44,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4293,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+163,"o_wb_stall", false,-1);
    tracep->declBit(c+164,"o_wb_ack", false,-1);
    tracep->declBus(c+450,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+982,"o_wb_err", false,-1);
    tracep->declBit(c+973,"o_dly_cyc", false,-1);
    tracep->declBit(c+974,"o_dly_stb", false,-1);
    tracep->declBit(c+975,"o_dly_we", false,-1);
    tracep->declBus(c+976,"o_dly_addr", false,-1, 6,0);
    tracep->declBus(c+977,"o_dly_data", false,-1, 31,0);
    tracep->declBus(c+981,"o_dly_sel", false,-1, 3,0);
    tracep->declBit(c+979,"i_dly_stall", false,-1);
    tracep->declBit(c+978,"i_dly_ack", false,-1);
    tracep->declBus(c+980,"i_dly_data", false,-1, 31,0);
    tracep->declBit(c+4261,"i_dly_err", false,-1);
    tracep->pushNamePrefix("SKIDBUFFER ");
    tracep->declBit(c+163,"r_stb", false,-1);
    tracep->declBit(c+1143,"r_we", false,-1);
    tracep->declBus(c+1144,"r_addr", false,-1, 6,0);
    tracep->declBus(c+1145,"r_data", false,-1, 31,0);
    tracep->declBus(c+1146,"r_sel", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DMA ");
    tracep->pushNamePrefix("dma_controller ");
    tracep->declBus(c+4373,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4246,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4373,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4299,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4296,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_REGISTER_RAM", false,-1, 0,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+958,"i_swb_cyc", false,-1);
    tracep->declBit(c+1018,"i_swb_stb", false,-1);
    tracep->declBit(c+960,"i_swb_we", false,-1);
    tracep->declBus(c+1147,"i_swb_addr", false,-1, 1,0);
    tracep->declBus(c+962,"i_swb_data", false,-1, 31,0);
    tracep->declBus(c+4293,"i_swb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_swb_stall", false,-1);
    tracep->declBit(c+1021,"o_swb_ack", false,-1);
    tracep->declBus(c+1020,"o_swb_data", false,-1, 31,0);
    tracep->declBit(c+1022,"o_mwb_cyc", false,-1);
    tracep->declBit(c+1023,"o_mwb_stb", false,-1);
    tracep->declBit(c+1024,"o_mwb_we", false,-1);
    tracep->declBus(c+1027,"o_mwb_addr", false,-1, 21,0);
    tracep->declArray(c+1028,"o_mwb_data", false,-1, 511,0);
    tracep->declQuad(c+1044,"o_mwb_sel", false,-1, 63,0);
    tracep->declBit(c+1025,"i_mwb_stall", false,-1);
    tracep->declBit(c+1026,"i_mwb_ack", false,-1);
    tracep->declArray(c+263,"i_mwb_data", false,-1, 511,0);
    tracep->declBit(c+1019,"i_mwb_err", false,-1);
    tracep->declBus(c+1047,"i_dev_ints", false,-1, 31,0);
    tracep->declBit(c+946,"o_interrupt", false,-1);
    tracep->declBus(c+4411,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4250,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+1148,"dma_request", false,-1);
    tracep->declBit(c+1149,"dma_abort", false,-1);
    tracep->declBit(c+1150,"dma_busy", false,-1);
    tracep->declBit(c+1151,"dma_err", false,-1);
    tracep->declBus(c+1152,"dma_src", false,-1, 27,0);
    tracep->declBus(c+1153,"dma_dst", false,-1, 27,0);
    tracep->declBus(c+1154,"read_addr", false,-1, 27,0);
    tracep->declBus(c+1155,"write_addr", false,-1, 27,0);
    tracep->declBus(c+1156,"dma_length", false,-1, 27,0);
    tracep->declBus(c+1157,"remaining_len", false,-1, 27,0);
    tracep->declBus(c+1158,"dma_transferlen", false,-1, 10,0);
    tracep->declBit(c+1159,"dma_trigger", false,-1);
    tracep->declBit(c+1160,"mm2s_request", false,-1);
    tracep->declBit(c+1161,"s2mm_request", false,-1);
    tracep->declBit(c+1162,"mm2s_busy", false,-1);
    tracep->declBit(c+1163,"s2mm_busy", false,-1);
    tracep->declBit(c+1164,"mm2s_err", false,-1);
    tracep->declBit(c+1165,"s2mm_err", false,-1);
    tracep->declBit(c+1166,"mm2s_inc", false,-1);
    tracep->declBit(c+1167,"s2mm_inc", false,-1);
    tracep->declBus(c+1168,"mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1169,"s2mm_size", false,-1, 1,0);
    tracep->declBus(c+1170,"mm2s_addr", false,-1, 27,0);
    tracep->declBus(c+1171,"s2mm_addr", false,-1, 27,0);
    tracep->declBus(c+1172,"mm2s_transferlen", false,-1, 10,0);
    tracep->declBus(c+1172,"s2mm_transferlen", false,-1, 10,0);
    tracep->declBit(c+1173,"mm2s_rd_cyc", false,-1);
    tracep->declBit(c+1174,"mm2s_rd_stb", false,-1);
    tracep->declBit(c+4261,"mm2s_rd_we", false,-1);
    tracep->declBit(c+1175,"mm2s_rd_stall", false,-1);
    tracep->declBit(c+1176,"mm2s_rd_ack", false,-1);
    tracep->declBit(c+1177,"mm2s_rd_err", false,-1);
    tracep->declBus(c+1178,"mm2s_rd_addr", false,-1, 21,0);
    tracep->declArray(c+4263,"mm2s_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1179,"mm2s_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1181,"mm2s_valid", false,-1);
    tracep->declBit(c+1182,"mm2s_ready", false,-1);
    tracep->declBit(c+1183,"mm2s_last", false,-1);
    tracep->declArray(c+1184,"mm2s_data", false,-1, 511,0);
    tracep->declBus(c+1200,"mm2s_bytes", false,-1, 6,0);
    tracep->declBit(c+1201,"rx_valid", false,-1);
    tracep->declBit(c+1202,"rx_ready", false,-1);
    tracep->declBit(c+1203,"rx_last", false,-1);
    tracep->declArray(c+1204,"rx_data", false,-1, 511,0);
    tracep->declBus(c+1220,"rx_bytes", false,-1, 6,0);
    tracep->declBit(c+1221,"tx_valid", false,-1);
    tracep->declBit(c+1222,"tx_ready", false,-1);
    tracep->declBit(c+1223,"tx_last", false,-1);
    tracep->declArray(c+1224,"tx_data", false,-1, 511,0);
    tracep->declBus(c+1240,"tx_bytes", false,-1, 6,0);
    tracep->declBit(c+1241,"sfifo_full", false,-1);
    tracep->declBit(c+1242,"sfifo_empty", false,-1);
    tracep->declBus(c+1243,"ign_sfifo_fill", false,-1, 4,0);
    tracep->declBit(c+1244,"s2mm_valid", false,-1);
    tracep->declBit(c+1245,"s2mm_ready", false,-1);
    tracep->declBit(c+1246,"s2mm_last", false,-1);
    tracep->declArray(c+1247,"s2mm_data", false,-1, 511,0);
    tracep->declBus(c+1263,"s2mm_bytes", false,-1, 6,0);
    tracep->declBit(c+1264,"s2mm_wr_cyc", false,-1);
    tracep->declBit(c+1265,"s2mm_wr_stb", false,-1);
    tracep->declBit(c+4262,"s2mm_wr_we", false,-1);
    tracep->declBit(c+1266,"s2mm_wr_stall", false,-1);
    tracep->declBit(c+1267,"s2mm_wr_ack", false,-1);
    tracep->declBit(c+1268,"s2mm_wr_err", false,-1);
    tracep->declBus(c+1269,"s2mm_wr_addr", false,-1, 21,0);
    tracep->declArray(c+1028,"s2mm_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1270,"s2mm_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1022,"wb_cyc", false,-1);
    tracep->declBit(c+1023,"wb_stb", false,-1);
    tracep->declBit(c+1024,"wb_we", false,-1);
    tracep->declBit(c+1025,"wb_stall", false,-1);
    tracep->declBit(c+1026,"wb_ack", false,-1);
    tracep->declBit(c+1019,"wb_err", false,-1);
    tracep->declBus(c+1027,"wb_addr", false,-1, 21,0);
    tracep->declArray(c+1028,"wb_data", false,-1, 511,0);
    tracep->declArray(c+263,"wb_idata", false,-1, 511,0);
    tracep->declQuad(c+1044,"wb_sel", false,-1, 63,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declArray(c+4412,"SCHEME", false,-1, 87,0);
    tracep->declBus(c+4298,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1173,"i_a_cyc", false,-1);
    tracep->declBit(c+1174,"i_a_stb", false,-1);
    tracep->declBit(c+4261,"i_a_we", false,-1);
    tracep->declBus(c+1178,"i_a_adr", false,-1, 21,0);
    tracep->declArray(c+1028,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1179,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1175,"o_a_stall", false,-1);
    tracep->declBit(c+1176,"o_a_ack", false,-1);
    tracep->declBit(c+1177,"o_a_err", false,-1);
    tracep->declBit(c+1264,"i_b_cyc", false,-1);
    tracep->declBit(c+1265,"i_b_stb", false,-1);
    tracep->declBit(c+4262,"i_b_we", false,-1);
    tracep->declBus(c+1269,"i_b_adr", false,-1, 21,0);
    tracep->declArray(c+1028,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1270,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1266,"o_b_stall", false,-1);
    tracep->declBit(c+1267,"o_b_ack", false,-1);
    tracep->declBit(c+1268,"o_b_err", false,-1);
    tracep->declBit(c+1022,"o_cyc", false,-1);
    tracep->declBit(c+1023,"o_stb", false,-1);
    tracep->declBit(c+1024,"o_we", false,-1);
    tracep->declBus(c+1027,"o_adr", false,-1, 21,0);
    tracep->declArray(c+1028,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1044,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1025,"i_stall", false,-1);
    tracep->declBit(c+1026,"i_ack", false,-1);
    tracep->declBit(c+1019,"i_err", false,-1);
    tracep->declBit(c+1272,"r_a_owner", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("ALT ");
    tracep->declBit(c+1273,"last_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_controller ");
    tracep->declBus(c+4373,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4246,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4299,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4373,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4415,"ABORT_KEY", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4373,"AW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+958,"i_cyc", false,-1);
    tracep->declBit(c+1018,"i_stb", false,-1);
    tracep->declBit(c+960,"i_we", false,-1);
    tracep->declBus(c+1147,"i_addr", false,-1, 1,0);
    tracep->declBus(c+962,"i_data", false,-1, 31,0);
    tracep->declBus(c+4293,"i_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_stall", false,-1);
    tracep->declBit(c+1021,"o_ack", false,-1);
    tracep->declBus(c+1020,"o_data", false,-1, 31,0);
    tracep->declBit(c+1148,"o_dma_request", false,-1);
    tracep->declBit(c+1149,"o_dma_abort", false,-1);
    tracep->declBit(c+1150,"i_dma_busy", false,-1);
    tracep->declBit(c+1151,"i_dma_err", false,-1);
    tracep->declBus(c+1152,"o_src_addr", false,-1, 27,0);
    tracep->declBus(c+1153,"o_dst_addr", false,-1, 27,0);
    tracep->declBus(c+1156,"o_length", false,-1, 27,0);
    tracep->declBus(c+1158,"o_transferlen", false,-1, 10,0);
    tracep->declBit(c+1166,"o_mm2s_inc", false,-1);
    tracep->declBit(c+1167,"o_s2mm_inc", false,-1);
    tracep->declBus(c+1168,"o_mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1169,"o_s2mm_size", false,-1, 1,0);
    tracep->declBit(c+1159,"o_trigger", false,-1);
    tracep->declBus(c+1154,"i_current_src", false,-1, 27,0);
    tracep->declBus(c+1155,"i_current_dst", false,-1, 27,0);
    tracep->declBus(c+1157,"i_remaining_len", false,-1, 27,0);
    tracep->declBus(c+1047,"i_dma_int", false,-1, 31,0);
    tracep->declBit(c+946,"o_interrupt", false,-1);
    tracep->declBit(c+1274,"int_trigger", false,-1);
    tracep->declBit(c+1275,"r_err", false,-1);
    tracep->declBit(c+1276,"r_zero_len", false,-1);
    tracep->declBit(c+1277,"r_busy", false,-1);
    tracep->declBus(c+1278,"int_sel", false,-1, 4,0);
    tracep->declBus(c+1279,"next_src", false,-1, 31,0);
    tracep->declBus(c+1280,"next_dst", false,-1, 31,0);
    tracep->declBus(c+1281,"next_len", false,-1, 31,0);
    tracep->declBus(c+1282,"next_tlen", false,-1, 31,0);
    tracep->declBus(c+1283,"w_control_reg", false,-1, 31,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("UNUSED_LEN ");
    tracep->declBit(c+4261,"unused_len", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_WIDE_ADDR ");
    tracep->declBit(c+4261,"unused_addr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dma_fsm ");
    tracep->declBus(c+4373,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4373,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4246,"LGSUBLENGTH", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1149,"i_soft_reset", false,-1);
    tracep->declBit(c+1148,"i_dma_request", false,-1);
    tracep->declBit(c+1150,"o_dma_busy", false,-1);
    tracep->declBit(c+1151,"o_dma_err", false,-1);
    tracep->declBus(c+1152,"i_src_addr", false,-1, 27,0);
    tracep->declBus(c+1153,"i_dst_addr", false,-1, 27,0);
    tracep->declBus(c+1156,"i_length", false,-1, 27,0);
    tracep->declBus(c+1158,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1157,"o_remaining_len", false,-1, 27,0);
    tracep->declBit(c+1159,"i_trigger", false,-1);
    tracep->declBit(c+1160,"o_mm2s_request", false,-1);
    tracep->declBit(c+1162,"i_mm2s_busy", false,-1);
    tracep->declBit(c+1164,"i_mm2s_err", false,-1);
    tracep->declBit(c+1166,"i_mm2s_inc", false,-1);
    tracep->declBus(c+1170,"o_mm2s_addr", false,-1, 27,0);
    tracep->declBus(c+1172,"o_mm2s_transferlen", false,-1, 10,0);
    tracep->declBit(c+1161,"o_s2mm_request", false,-1);
    tracep->declBit(c+1163,"i_s2mm_busy", false,-1);
    tracep->declBit(c+1165,"i_s2mm_err", false,-1);
    tracep->declBit(c+1167,"i_s2mm_inc", false,-1);
    tracep->declBus(c+1171,"o_s2mm_addr", false,-1, 27,0);
    tracep->declBus(c+1172,"o_s2mm_transferlen", false,-1, 10,0);
    tracep->declBus(c+4301,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+4302,"S_WAIT", false,-1, 1,0);
    tracep->declBus(c+4303,"S_READ", false,-1, 1,0);
    tracep->declBus(c+4304,"S_WRITE", false,-1, 1,0);
    tracep->declBus(c+1157,"r_length", false,-1, 27,0);
    tracep->declBus(c+1172,"r_transferlen", false,-1, 10,0);
    tracep->declBus(c+1284,"fsm_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mm2s ");
    tracep->declBus(c+4373,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4296,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4246,"LGLENGTH", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+1285,"i_reset", false,-1);
    tracep->declBit(c+1160,"i_request", false,-1);
    tracep->declBit(c+1162,"o_busy", false,-1);
    tracep->declBit(c+1164,"o_err", false,-1);
    tracep->declBit(c+1166,"i_inc", false,-1);
    tracep->declBus(c+1168,"i_size", false,-1, 1,0);
    tracep->declBus(c+1172,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1170,"i_addr", false,-1, 27,0);
    tracep->declBit(c+1173,"o_rd_cyc", false,-1);
    tracep->declBit(c+1174,"o_rd_stb", false,-1);
    tracep->declBit(c+4261,"o_rd_we", false,-1);
    tracep->declBus(c+1178,"o_rd_addr", false,-1, 21,0);
    tracep->declArray(c+4263,"o_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1179,"o_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1175,"i_rd_stall", false,-1);
    tracep->declBit(c+1176,"i_rd_ack", false,-1);
    tracep->declArray(c+263,"i_rd_data", false,-1, 511,0);
    tracep->declBit(c+1177,"i_rd_err", false,-1);
    tracep->declBit(c+1181,"M_VALID", false,-1);
    tracep->declBit(c+1182,"M_READY", false,-1);
    tracep->declArray(c+1184,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1200,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1183,"M_LAST", false,-1);
    tracep->declBus(c+4304,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4303,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4302,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4301,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4337,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+1286,"nxtstb_size", false,-1, 6,0);
    tracep->declBus(c+1287,"rdstb_size", false,-1, 6,0);
    tracep->declBus(c+1288,"rdack_size", false,-1, 6,0);
    tracep->declBus(c+1289,"first_size", false,-1, 6,0);
    tracep->declBus(c+1290,"next_addr", false,-1, 27,0);
    tracep->declBus(c+1291,"last_request_addr", false,-1, 27,0);
    tracep->declBus(c+1292,"subaddr", false,-1, 5,0);
    tracep->declBus(c+1293,"rdack_subaddr", false,-1, 5,0);
    tracep->declQuad(c+1294,"nxtstb_sel", false,-1, 63,0);
    tracep->declQuad(c+1296,"first_sel", false,-1, 63,0);
    tracep->declQuad(c+1298,"base_sel", false,-1, 63,0);
    tracep->declQuad(c+1300,"ibase_sel", false,-1, 63,0);
    tracep->declBus(c+1302,"wb_outstanding", false,-1, 10,0);
    tracep->declBus(c+1303,"fill", false,-1, 7,0);
    tracep->declBus(c+1304,"next_fill", false,-1, 7,0);
    tracep->declBit(c+1181,"m_valid", false,-1);
    tracep->declBit(c+1183,"m_last", false,-1);
    tracep->declArray(c+1184,"sreg", false,-1, 511,0);
    tracep->declBus(c+1200,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1305,"rdstb_len", false,-1, 10,0);
    tracep->declBus(c+1306,"rdack_len", false,-1, 10,0);
    tracep->declBus(c+1307,"pre_shift", false,-1, 5,0);
    tracep->declArray(c+1308,"pre_shifted_data", false,-1, 511,0);
    tracep->declBit(c+1324,"r_inc", false,-1);
    tracep->declBus(c+1325,"r_size", false,-1, 1,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rxgears ");
    tracep->declBus(c+4296,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1149,"i_soft_reset", false,-1);
    tracep->declBit(c+1181,"S_VALID", false,-1);
    tracep->declBit(c+1182,"S_READY", false,-1);
    tracep->declArray(c+1184,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1200,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1183,"S_LAST", false,-1);
    tracep->declBit(c+1201,"M_VALID", false,-1);
    tracep->declBit(c+1202,"M_READY", false,-1);
    tracep->declArray(c+1204,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1220,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1203,"M_LAST", false,-1);
    tracep->declBus(c+4337,"WBLSB", false,-1, 31,0);
    tracep->declArray(c+1326,"sreg", false,-1, 1023,0);
    tracep->declBus(c+1358,"next_fill", false,-1, 7,0);
    tracep->declBus(c+1359,"fill", false,-1, 7,0);
    tracep->declBit(c+1201,"m_valid", false,-1);
    tracep->declBit(c+1203,"m_last", false,-1);
    tracep->declBit(c+1360,"next_last", false,-1);
    tracep->declBit(c+1361,"r_last", false,-1);
    tracep->declBit(c+1362,"r_full", false,-1);
    tracep->declBus(c+1220,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1363,"shift", false,-1, 5,0);
    tracep->declArray(c+1364,"s_data", false,-1, 511,0);
    tracep->declBus(c+4416,"ik", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_s2mm ");
    tracep->declBus(c+4373,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4296,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4246,"LGPIPE", false,-1, 31,0);
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+1285,"i_reset", false,-1);
    tracep->declBit(c+1161,"i_request", false,-1);
    tracep->declBit(c+1163,"o_busy", false,-1);
    tracep->declBit(c+1165,"o_err", false,-1);
    tracep->declBit(c+1167,"i_inc", false,-1);
    tracep->declBus(c+1169,"i_size", false,-1, 1,0);
    tracep->declBus(c+1171,"i_addr", false,-1, 27,0);
    tracep->declBit(c+1244,"S_VALID", false,-1);
    tracep->declBit(c+1245,"S_READY", false,-1);
    tracep->declArray(c+1247,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1263,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1246,"S_LAST", false,-1);
    tracep->declBit(c+1264,"o_wr_cyc", false,-1);
    tracep->declBit(c+1265,"o_wr_stb", false,-1);
    tracep->declBit(c+4262,"o_wr_we", false,-1);
    tracep->declBus(c+1269,"o_wr_addr", false,-1, 21,0);
    tracep->declArray(c+1028,"o_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1270,"o_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1266,"i_wr_stall", false,-1);
    tracep->declBit(c+1267,"i_wr_ack", false,-1);
    tracep->declArray(c+263,"i_wr_data", false,-1, 511,0);
    tracep->declBit(c+1268,"i_wr_err", false,-1);
    tracep->declBus(c+4304,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4303,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4302,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4301,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4337,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+6,"ik", false,-1, 31,0);
    tracep->declBit(c+1380,"r_inc", false,-1);
    tracep->declBus(c+1381,"r_size", false,-1, 1,0);
    tracep->declBus(c+1382,"next_addr", false,-1, 28,0);
    tracep->declBus(c+1383,"subaddr", false,-1, 5,0);
    tracep->declArray(c+1384,"next_data", false,-1, 1023,0);
    tracep->declArray(c+1416,"r_data", false,-1, 511,0);
    tracep->declArray(c+1432,"next_sel", false,-1, 127,0);
    tracep->declArray(c+1436,"pre_sel", false,-1, 127,0);
    tracep->declQuad(c+1440,"r_sel", false,-1, 63,0);
    tracep->declBit(c+1442,"r_last", false,-1);
    tracep->declBus(c+1443,"wb_outstanding", false,-1, 9,0);
    tracep->declBit(c+1444,"wb_pipeline_full", false,-1);
    tracep->declBit(c+1445,"addr_overflow", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sfifo ");
    tracep->declBus(c+4411,"BW", false,-1, 31,0);
    tracep->declBus(c+4250,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+1285,"i_reset", false,-1);
    tracep->declBit(c+1201,"i_wr", false,-1);
    tracep->declArray(c+1446,"i_data", false,-1, 519,0);
    tracep->declBit(c+1241,"o_full", false,-1);
    tracep->declBus(c+1243,"o_fill", false,-1, 4,0);
    tracep->declBit(c+1222,"i_rd", false,-1);
    tracep->declArray(c+1463,"o_data", false,-1, 519,0);
    tracep->declBit(c+1242,"o_empty", false,-1);
    tracep->declBus(c+4254,"FLEN", false,-1, 31,0);
    tracep->declBit(c+1241,"r_full", false,-1);
    tracep->declBit(c+1242,"r_empty", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+1480+i*17,"mem", true,(i+0), 519,0);
    }
    tracep->declBus(c+1752,"wr_addr", false,-1, 4,0);
    tracep->declBus(c+1753,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1754,"w_wr", false,-1);
    tracep->declBit(c+1755,"w_rd", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_txgears ");
    tracep->declBus(c+4296,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1149,"i_soft_reset", false,-1);
    tracep->declBus(c+1169,"i_size", false,-1, 1,0);
    tracep->declBit(c+1221,"S_VALID", false,-1);
    tracep->declBit(c+1222,"S_READY", false,-1);
    tracep->declArray(c+1224,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1240,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1223,"S_LAST", false,-1);
    tracep->declBit(c+1244,"M_VALID", false,-1);
    tracep->declBit(c+1245,"M_READY", false,-1);
    tracep->declArray(c+1247,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1263,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1246,"M_LAST", false,-1);
    tracep->declBus(c+4337,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4304,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4303,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4302,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4301,"SZ_BUS", false,-1, 1,0);
    tracep->declBit(c+1244,"m_valid", false,-1);
    tracep->declBit(c+1246,"m_last", false,-1);
    tracep->declBit(c+1756,"r_last", false,-1);
    tracep->declBit(c+1757,"r_next", false,-1);
    tracep->declArray(c+1247,"sreg", false,-1, 511,0);
    tracep->declBus(c+1263,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1758,"fill", false,-1, 6,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("GEN_DBG_CATCH ");
    tracep->declBit(c+988,"r_dbg_catch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("INITIAL_RESET_HOLD ");
    tracep->declBus(c+1759,"reset_counter", false,-1, 4,0);
    tracep->declBit(c+987,"r_reset_hold", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MAIN_PIC ");
    tracep->pushNamePrefix("pic ");
    tracep->declBus(c+4417,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4299,"DW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+1058,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4293,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1058,"o_wb_ack", false,-1);
    tracep->declBus(c+1012,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+939,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+1098,"o_interrupt", false,-1);
    tracep->declBus(c+1760,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+1761,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+1762,"r_mie", false,-1);
    tracep->declBit(c+1763,"w_any", false,-1);
    tracep->declBit(c+1764,"wb_write", false,-1);
    tracep->declBit(c+1765,"enable_ints", false,-1);
    tracep->declBit(c+1766,"disable_ints", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PIC_WITH_ACCOUNTING ");
    tracep->pushNamePrefix("ALT_PIC ");
    tracep->pushNamePrefix("ctri ");
    tracep->declBus(c+4417,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4299,"DW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+1048,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4293,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1048,"o_wb_ack", false,-1);
    tracep->declBus(c+1049,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+940,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+941,"o_interrupt", false,-1);
    tracep->declBus(c+1767,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+1768,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+1769,"r_mie", false,-1);
    tracep->declBit(c+1770,"w_any", false,-1);
    tracep->declBit(c+1771,"wb_write", false,-1);
    tracep->declBit(c+1772,"enable_ints", false,-1);
    tracep->declBit(c+1773,"disable_ints", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmacvcpu ");
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+1046,"i_a_cyc", false,-1);
    tracep->declBit(c+1059,"i_a_stb", false,-1);
    tracep->declBit(c+1062,"i_a_we", false,-1);
    tracep->declBus(c+963,"i_a_adr", false,-1, 21,0);
    tracep->declArray(c+1063,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1079,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1102,"o_a_stall", false,-1);
    tracep->declBit(c+1103,"o_a_ack", false,-1);
    tracep->declBit(c+1104,"o_a_err", false,-1);
    tracep->declBit(c+1022,"i_b_cyc", false,-1);
    tracep->declBit(c+1023,"i_b_stb", false,-1);
    tracep->declBit(c+1024,"i_b_we", false,-1);
    tracep->declBus(c+1027,"i_b_adr", false,-1, 21,0);
    tracep->declArray(c+1028,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1044,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1025,"o_b_stall", false,-1);
    tracep->declBit(c+1026,"o_b_ack", false,-1);
    tracep->declBit(c+1019,"o_b_err", false,-1);
    tracep->declBit(c+238,"o_cyc", false,-1);
    tracep->declBit(c+239,"o_stb", false,-1);
    tracep->declBit(c+240,"o_we", false,-1);
    tracep->declBus(c+241,"o_adr", false,-1, 21,0);
    tracep->declArray(c+242,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+258,"o_sel", false,-1, 63,0);
    tracep->declBit(c+260,"i_stall", false,-1);
    tracep->declBit(c+261,"i_ack", false,-1);
    tracep->declBit(c+1106,"i_err", false,-1);
    tracep->declBit(c+1774,"r_a_owner", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thecpu ");
    tracep->declBus(c+4252,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4253,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4296,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4342,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4299,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4247,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4298,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4342,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4255,"WITH_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBus(c+4337,"WBLSB", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1098,"i_interrupt", false,-1);
    tracep->declBit(c+957,"i_cpu_clken", false,-1);
    tracep->declBit(c+995,"i_halt", false,-1);
    tracep->declBit(c+997,"i_clear_cache", false,-1);
    tracep->declBus(c+1000,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+998,"i_dbg_we", false,-1);
    tracep->declBus(c+1001,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+1775,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+1004,"o_dbg_stall", false,-1);
    tracep->declBit(c+1003,"o_halted", false,-1);
    tracep->declBus(c+1101,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1002,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+983,"o_break", false,-1);
    tracep->declBit(c+1046,"o_wb_gbl_cyc", false,-1);
    tracep->declBit(c+1059,"o_wb_gbl_stb", false,-1);
    tracep->declBit(c+1060,"o_wb_lcl_cyc", false,-1);
    tracep->declBit(c+1061,"o_wb_lcl_stb", false,-1);
    tracep->declBit(c+1062,"o_wb_we", false,-1);
    tracep->declBus(c+963,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+1063,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+1079,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+1097,"i_wb_stall", false,-1);
    tracep->declBit(c+1099,"i_wb_ack", false,-1);
    tracep->declArray(c+1081,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+1100,"i_wb_err", false,-1);
    tracep->declBit(c+45,"o_op_stall", false,-1);
    tracep->declBit(c+1016,"o_pf_stall", false,-1);
    tracep->declBit(c+1017,"o_i_count", false,-1);
    tracep->declBus(c+4260,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4187,"o_prof_stb", false,-1);
    tracep->declBus(c+4188,"o_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4189,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4299,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+4262,"cpu_clken", false,-1);
    tracep->declBit(c+4141,"cpu_clock", false,-1);
    tracep->declBit(c+4262,"clk_gate", false,-1);
    tracep->declBus(c+4260,"cpu_debug", false,-1, 31,0);
    tracep->declBit(c+1776,"pf_new_pc", false,-1);
    tracep->declBit(c+1777,"clear_icache", false,-1);
    tracep->declBit(c+47,"pf_ready", false,-1);
    tracep->declBus(c+1778,"pf_request_address", false,-1, 27,0);
    tracep->declBus(c+1779,"pf_instruction", false,-1, 31,0);
    tracep->declBus(c+1780,"pf_instruction_pc", false,-1, 27,0);
    tracep->declBit(c+1781,"pf_valid", false,-1);
    tracep->declBit(c+1782,"pf_illegal", false,-1);
    tracep->declBit(c+1783,"pf_cyc", false,-1);
    tracep->declBit(c+1784,"pf_stb", false,-1);
    tracep->declBit(c+1785,"pf_stall", false,-1);
    tracep->declBit(c+1786,"pf_ack", false,-1);
    tracep->declBit(c+1787,"pf_err", false,-1);
    tracep->declBus(c+1788,"pf_addr", false,-1, 21,0);
    tracep->declBit(c+4261,"pf_we", false,-1);
    tracep->declArray(c+4263,"pf_data", false,-1, 511,0);
    tracep->declBit(c+1789,"clear_dcache", false,-1);
    tracep->declBit(c+48,"mem_ce", false,-1);
    tracep->declBit(c+1790,"bus_lock", false,-1);
    tracep->declBus(c+1791,"mem_op", false,-1, 2,0);
    tracep->declBus(c+1792,"mem_cpu_addr", false,-1, 31,0);
    tracep->declBus(c+1793,"mem_lock_pc", false,-1, 27,0);
    tracep->declBus(c+1794,"mem_wdata", false,-1, 31,0);
    tracep->declArray(c+1063,"mem_data", false,-1, 511,0);
    tracep->declBus(c+1795,"mem_reg", false,-1, 4,0);
    tracep->declBit(c+1796,"mem_busy", false,-1);
    tracep->declBit(c+1797,"mem_rdbusy", false,-1);
    tracep->declBit(c+1798,"mem_pipe_stalled", false,-1);
    tracep->declBit(c+1799,"mem_valid", false,-1);
    tracep->declBit(c+1800,"mem_bus_err", false,-1);
    tracep->declBus(c+1801,"mem_wreg", false,-1, 4,0);
    tracep->declBus(c+1802,"mem_result", false,-1, 31,0);
    tracep->declBit(c+1803,"mem_stb_lcl", false,-1);
    tracep->declBit(c+1804,"mem_stb_gbl", false,-1);
    tracep->declBit(c+1805,"mem_cyc_lcl", false,-1);
    tracep->declBit(c+1806,"mem_cyc_gbl", false,-1);
    tracep->declBus(c+1807,"mem_bus_addr", false,-1, 21,0);
    tracep->declBit(c+1808,"mem_we", false,-1);
    tracep->declBit(c+1809,"mem_stall", false,-1);
    tracep->declBit(c+1810,"mem_ack", false,-1);
    tracep->declBit(c+1811,"mem_err", false,-1);
    tracep->declQuad(c+1812,"mem_sel", false,-1, 63,0);
    tracep->declBit(c+1004,"w_dbg_stall", false,-1);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("DATA_CACHE ");
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+4337,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4296,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4253,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4247,"LGNLINES", false,-1, 31,0);
    tracep->declBus(c+4338,"NAUX", false,-1, 31,0);
    tracep->declBus(c+4299,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_PIPE", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DUAL_READ_PORT", false,-1, 0,0);
    tracep->declBus(c+4250,"OPT_FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBus(c+4337,"CS", false,-1, 31,0);
    tracep->declBus(c+4247,"LS", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4250,"DP", false,-1, 31,0);
    tracep->declBus(c+4337,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4301,"DC_IDLE", false,-1, 1,0);
    tracep->declBus(c+4302,"DC_WRITE", false,-1, 1,0);
    tracep->declBus(c+4303,"DC_READS", false,-1, 1,0);
    tracep->declBus(c+4304,"DC_READC", false,-1, 1,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1789,"i_clear", false,-1);
    tracep->declBit(c+48,"i_pipe_stb", false,-1);
    tracep->declBit(c+1790,"i_lock", false,-1);
    tracep->declBus(c+1791,"i_op", false,-1, 2,0);
    tracep->declBus(c+1792,"i_addr", false,-1, 31,0);
    tracep->declBus(c+1794,"i_data", false,-1, 31,0);
    tracep->declBus(c+1795,"i_oreg", false,-1, 4,0);
    tracep->declBit(c+1796,"o_busy", false,-1);
    tracep->declBit(c+1797,"o_rdbusy", false,-1);
    tracep->declBit(c+1798,"o_pipe_stalled", false,-1);
    tracep->declBit(c+1799,"o_valid", false,-1);
    tracep->declBit(c+1800,"o_err", false,-1);
    tracep->declBus(c+1801,"o_wreg", false,-1, 4,0);
    tracep->declBus(c+1802,"o_data", false,-1, 31,0);
    tracep->declBit(c+1806,"o_wb_cyc_gbl", false,-1);
    tracep->declBit(c+1805,"o_wb_cyc_lcl", false,-1);
    tracep->declBit(c+1804,"o_wb_stb_gbl", false,-1);
    tracep->declBit(c+1803,"o_wb_stb_lcl", false,-1);
    tracep->declBit(c+1808,"o_wb_we", false,-1);
    tracep->declBus(c+1807,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+1063,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+1812,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+1809,"i_wb_stall", false,-1);
    tracep->declBit(c+1810,"i_wb_ack", false,-1);
    tracep->declBit(c+1811,"i_wb_err", false,-1);
    tracep->declArray(c+1081,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4342,"FIF_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1814,"ik", false,-1, 31,0);
    tracep->declBit(c+1815,"cyc", false,-1);
    tracep->declBit(c+1816,"stb", false,-1);
    tracep->declBit(c+1817,"last_ack", false,-1);
    tracep->declBit(c+1818,"end_of_line", false,-1);
    tracep->declBit(c+1819,"last_line_stb", false,-1);
    tracep->declBit(c+1820,"r_wb_cyc_gbl", false,-1);
    tracep->declBit(c+1821,"r_wb_cyc_lcl", false,-1);
    tracep->declBus(c+1822,"npending", false,-1, 4,0);
    tracep->declBus(c+1823,"c_v", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1824+i*1,"c_vtags", true,(i+0), 18,0);
    }
    tracep->declBit(c+1832,"set_vflag", false,-1);
    tracep->declBus(c+1833,"state", false,-1, 1,0);
    tracep->declBus(c+1834,"wr_addr", false,-1, 5,0);
    tracep->declArray(c+1835,"cached_iword", false,-1, 511,0);
    tracep->declArray(c+1851,"cached_rword", false,-1, 511,0);
    tracep->declBit(c+1867,"lock_gbl", false,-1);
    tracep->declBit(c+1868,"lock_lcl", false,-1);
    tracep->declBit(c+1869,"c_wr", false,-1);
    tracep->declArray(c+1870,"c_wdata", false,-1, 511,0);
    tracep->declQuad(c+1886,"c_wsel", false,-1, 63,0);
    tracep->declBus(c+1888,"c_waddr", false,-1, 5,0);
    tracep->declBus(c+1889,"last_tag", false,-1, 18,0);
    tracep->declBit(c+1890,"last_tag_valid", false,-1);
    tracep->declBus(c+1891,"i_cline", false,-1, 2,0);
    tracep->declBus(c+1892,"i_caddr", false,-1, 5,0);
    tracep->declBit(c+1893,"cache_miss_inow", false,-1);
    tracep->declBit(c+1894,"w_cachable", false,-1);
    tracep->declBit(c+1895,"raw_cachable_address", false,-1);
    tracep->declBit(c+1896,"r_cachable", false,-1);
    tracep->declBit(c+1897,"r_svalid", false,-1);
    tracep->declBit(c+1898,"r_dvalid", false,-1);
    tracep->declBit(c+1899,"r_rd", false,-1);
    tracep->declBit(c+1900,"r_cache_miss", false,-1);
    tracep->declBit(c+1901,"r_rd_pending", false,-1);
    tracep->declBus(c+1902,"r_addr", false,-1, 21,0);
    tracep->declBus(c+1903,"r_cline", false,-1, 2,0);
    tracep->declBus(c+1904,"r_caddr", false,-1, 5,0);
    tracep->declBus(c+1905,"r_ctag", false,-1, 18,0);
    tracep->declBit(c+1906,"wr_cstb", false,-1);
    tracep->declBit(c+1907,"r_iv", false,-1);
    tracep->declBit(c+1908,"in_cache", false,-1);
    tracep->declBus(c+1909,"r_itag", false,-1, 18,0);
    tracep->declBus(c+1910,"req_data", false,-1, 12,0);
    tracep->declBit(c+1911,"gie", false,-1);
    tracep->declArray(c+1912,"pre_data", false,-1, 511,0);
    tracep->declArray(c+1928,"pre_shifted", false,-1, 511,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("GEN_SEL ");
    tracep->declBus(c+1944,"pre_sel", false,-1, 3,0);
    tracep->declQuad(c+1945,"full_sel", false,-1, 63,0);
    tracep->declQuad(c+1812,"r_wb_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_WIDE_BUS ");
    tracep->declBus(c+1947,"pre_shift", false,-1, 31,0);
    tracep->declArray(c+1948,"wide_preshift", false,-1, 511,0);
    tracep->declArray(c+1964,"shifted_data", false,-1, 511,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_PIPE_FIFO ");
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1980+i*1,"fifo_data", true,(i+0), 11,0);
    }
    tracep->declBus(c+1996,"wraddr", false,-1, 4,0);
    tracep->declBus(c+1997,"rdaddr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_BITS ");
    tracep->declBit(c+4418,"unused_aw", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("chkaddress ");
    tracep->declBus(c+1998,"i_addr", false,-1, 27,0);
    tracep->declBit(c+1895,"o_cachable", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("NO_CLOCK_GATE ");
    tracep->declBit(c+4261,"unused_clk", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PFCACHE ");
    tracep->pushNamePrefix("pf ");
    tracep->declBus(c+4337,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4253,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4247,"LGLINES", false,-1, 31,0);
    tracep->declBus(c+4296,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4305,"CACHELEN", false,-1, 31,0);
    tracep->declBus(c+4337,"CW", false,-1, 31,0);
    tracep->declBus(c+4247,"LS", false,-1, 31,0);
    tracep->declBus(c+4296,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4299,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4337,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1776,"i_new_pc", false,-1);
    tracep->declBit(c+1777,"i_clear_cache", false,-1);
    tracep->declBit(c+47,"i_ready", false,-1);
    tracep->declBus(c+1778,"i_pc", false,-1, 27,0);
    tracep->declBit(c+1781,"o_valid", false,-1);
    tracep->declBit(c+1782,"o_illegal", false,-1);
    tracep->declBus(c+1779,"o_insn", false,-1, 31,0);
    tracep->declBus(c+1780,"o_pc", false,-1, 27,0);
    tracep->declBit(c+1783,"o_wb_cyc", false,-1);
    tracep->declBit(c+1784,"o_wb_stb", false,-1);
    tracep->declBit(c+4261,"o_wb_we", false,-1);
    tracep->declBus(c+1788,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+4263,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+1785,"i_wb_stall", false,-1);
    tracep->declBit(c+1786,"i_wb_ack", false,-1);
    tracep->declBit(c+1787,"i_wb_err", false,-1);
    tracep->declArray(c+1081,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4259,"INLSB", false,-1, 31,0);
    tracep->declBit(c+1999,"r_v", false,-1);
    tracep->declArray(c+2000,"cache_word", false,-1, 511,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2016+i*1,"cache_tags", true,(i+0), 15,0);
    }
    tracep->declBus(c+2024,"valid_mask", false,-1, 7,0);
    tracep->declBit(c+2025,"r_v_from_pc", false,-1);
    tracep->declBit(c+2026,"r_v_from_last", false,-1);
    tracep->declBit(c+2027,"rvsrc", false,-1);
    tracep->declBit(c+2028,"w_v_from_pc", false,-1);
    tracep->declBit(c+2029,"w_v_from_last", false,-1);
    tracep->declBus(c+2030,"lastpc", false,-1, 27,0);
    tracep->declBus(c+2031,"wraddr", false,-1, 5,0);
    tracep->declBus(c+2032,"pc_tag_lookup", false,-1, 21,3);
    tracep->declBus(c+2033,"last_tag_lookup", false,-1, 21,3);
    tracep->declBus(c+2034,"tag_lookup", false,-1, 21,3);
    tracep->declBus(c+2035,"pc_tag", false,-1, 21,3);
    tracep->declBus(c+2036,"lasttag", false,-1, 21,3);
    tracep->declBit(c+2037,"illegal_valid", false,-1);
    tracep->declBus(c+2038,"illegal_cache", false,-1, 21,3);
    tracep->declArray(c+2039,"r_pc_cache", false,-1, 511,0);
    tracep->declArray(c+2055,"r_last_cache", false,-1, 511,0);
    tracep->declBus(c+1780,"r_pc", false,-1, 27,0);
    tracep->declBit(c+2071,"isrc", false,-1);
    tracep->declBus(c+2072,"delay", false,-1, 1,0);
    tracep->declBit(c+2073,"svmask", false,-1);
    tracep->declBit(c+2074,"last_ack", false,-1);
    tracep->declBit(c+2075,"needload", false,-1);
    tracep->declBit(c+2076,"last_addr", false,-1);
    tracep->declBit(c+2077,"bus_abort", false,-1);
    tracep->declBus(c+2078,"saddr", false,-1, 2,0);
    tracep->declBit(c+49,"w_advance", false,-1);
    tracep->declBit(c+2079,"w_invalidate_result", false,-1);
    tracep->declBus(c+2080,"pc_line", false,-1, 2,0);
    tracep->declBus(c+2081,"last_line", false,-1, 2,0);
    tracep->pushNamePrefix("SHIFT_INSN ");
    tracep->declArray(c+2082,"shifted", false,-1, 511,0);
    tracep->declBus(c+2098,"shift", false,-1, 3,0);
    tracep->declBit(c+4261,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("PRIORITY_DATA ");
    tracep->pushNamePrefix("pformem ");
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1806,"i_a_cyc_a", false,-1);
    tracep->declBit(c+1805,"i_a_cyc_b", false,-1);
    tracep->declBit(c+1804,"i_a_stb_a", false,-1);
    tracep->declBit(c+1803,"i_a_stb_b", false,-1);
    tracep->declBit(c+1808,"i_a_we", false,-1);
    tracep->declBus(c+1807,"i_a_adr", false,-1, 21,0);
    tracep->declArray(c+1063,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1812,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1809,"o_a_stall", false,-1);
    tracep->declBit(c+1810,"o_a_ack", false,-1);
    tracep->declBit(c+1811,"o_a_err", false,-1);
    tracep->declBit(c+1783,"i_b_cyc_a", false,-1);
    tracep->declBit(c+4261,"i_b_cyc_b", false,-1);
    tracep->declBit(c+1784,"i_b_stb_a", false,-1);
    tracep->declBit(c+4261,"i_b_stb_b", false,-1);
    tracep->declBit(c+4261,"i_b_we", false,-1);
    tracep->declBus(c+1788,"i_b_adr", false,-1, 21,0);
    tracep->declArray(c+1063,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+4279,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1785,"o_b_stall", false,-1);
    tracep->declBit(c+1786,"o_b_ack", false,-1);
    tracep->declBit(c+1787,"o_b_err", false,-1);
    tracep->declBit(c+1046,"o_cyc_a", false,-1);
    tracep->declBit(c+1060,"o_cyc_b", false,-1);
    tracep->declBit(c+1059,"o_stb_a", false,-1);
    tracep->declBit(c+1061,"o_stb_b", false,-1);
    tracep->declBit(c+1062,"o_we", false,-1);
    tracep->declBus(c+963,"o_adr", false,-1, 21,0);
    tracep->declArray(c+1063,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1079,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1097,"i_stall", false,-1);
    tracep->declBit(c+1099,"i_ack", false,-1);
    tracep->declBit(c+1100,"i_err", false,-1);
    tracep->declBit(c+2099,"r_a_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBus(c+4314,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4252,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4247,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4298,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4314,"AW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1098,"i_interrupt", false,-1);
    tracep->declBit(c+4262,"o_clken", false,-1);
    tracep->declBit(c+995,"i_halt", false,-1);
    tracep->declBit(c+997,"i_clear_cache", false,-1);
    tracep->declBus(c+1000,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+998,"i_dbg_we", false,-1);
    tracep->declBus(c+1001,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+1775,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+1004,"o_dbg_stall", false,-1);
    tracep->declBus(c+1101,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1002,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+983,"o_break", false,-1);
    tracep->declBit(c+1776,"o_pf_new_pc", false,-1);
    tracep->declBit(c+1777,"o_clear_icache", false,-1);
    tracep->declBit(c+47,"o_pf_ready", false,-1);
    tracep->declBus(c+1778,"o_pf_request_address", false,-1, 27,0);
    tracep->declBit(c+1781,"i_pf_valid", false,-1);
    tracep->declBit(c+1782,"i_pf_illegal", false,-1);
    tracep->declBus(c+1779,"i_pf_instruction", false,-1, 31,0);
    tracep->declBus(c+1780,"i_pf_instruction_pc", false,-1, 27,0);
    tracep->declBit(c+1789,"o_clear_dcache", false,-1);
    tracep->declBit(c+48,"o_mem_ce", false,-1);
    tracep->declBit(c+1790,"o_bus_lock", false,-1);
    tracep->declBus(c+1791,"o_mem_op", false,-1, 2,0);
    tracep->declBus(c+1792,"o_mem_addr", false,-1, 31,0);
    tracep->declBus(c+1794,"o_mem_data", false,-1, 31,0);
    tracep->declBus(c+1793,"o_mem_lock_pc", false,-1, 27,0);
    tracep->declBus(c+1795,"o_mem_reg", false,-1, 4,0);
    tracep->declBit(c+1796,"i_mem_busy", false,-1);
    tracep->declBit(c+1797,"i_mem_rdbusy", false,-1);
    tracep->declBit(c+1798,"i_mem_pipe_stalled", false,-1);
    tracep->declBit(c+1799,"i_mem_valid", false,-1);
    tracep->declBit(c+1800,"i_bus_err", false,-1);
    tracep->declBus(c+1801,"i_mem_wreg", false,-1, 4,0);
    tracep->declBus(c+1802,"i_mem_result", false,-1, 31,0);
    tracep->declBit(c+45,"o_op_stall", false,-1);
    tracep->declBit(c+1016,"o_pf_stall", false,-1);
    tracep->declBit(c+1017,"o_i_count", false,-1);
    tracep->declBus(c+4260,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4187,"o_prof_stb", false,-1);
    tracep->declBus(c+4188,"o_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4189,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4419,"RESET_BUS_ADDRESS", false,-1, 25,0);
    tracep->declBus(c+4420,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4293,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4306,"CPU_SUB_OP", false,-1, 3,0);
    tracep->declBus(c+4307,"CPU_AND_OP", false,-1, 3,0);
    tracep->declBus(c+4376,"CPU_BREV_OP", false,-1, 3,0);
    tracep->declBus(c+4381,"CPU_MOV_OP", false,-1, 3,0);
    tracep->declBus(c+4417,"CPU_CLRDCACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4245,"CPU_CLRICACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4320,"CPU_PHASE_BIT", false,-1, 31,0);
    tracep->declBus(c+4342,"CPU_FPUERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4341,"CPU_DIVERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4246,"CPU_BUSERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4340,"CPU_TRAP_BIT", false,-1, 31,0);
    tracep->declBus(c+4248,"CPU_ILL_BIT", false,-1, 31,0);
    tracep->declBus(c+4257,"CPU_BREAK_BIT", false,-1, 31,0);
    tracep->declBus(c+4337,"CPU_STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4338,"CPU_GIE_BIT", false,-1, 31,0);
    tracep->declBus(c+4250,"CPU_SLEEP_BIT", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2100+i*1,"regset", true,(i+0), 31,0);
    }
    tracep->declBus(c+2132,"flags", false,-1, 3,0);
    tracep->declBus(c+2133,"iflags", false,-1, 3,0);
    tracep->declBus(c+2134,"w_uflags", false,-1, 15,0);
    tracep->declBus(c+2135,"w_iflags", false,-1, 15,0);
    tracep->declBit(c+2136,"break_en", false,-1);
    tracep->declBit(c+2137,"user_step", false,-1);
    tracep->declBit(c+2138,"sleep", false,-1);
    tracep->declBit(c+2139,"r_halted", false,-1);
    tracep->declBit(c+2140,"break_pending", false,-1);
    tracep->declBit(c+2141,"trap", false,-1);
    tracep->declBit(c+2142,"gie", false,-1);
    tracep->declBit(c+2143,"ubreak", false,-1);
    tracep->declBit(c+2144,"pending_interrupt", false,-1);
    tracep->declBit(c+2145,"stepped", false,-1);
    tracep->declBit(c+2146,"step", false,-1);
    tracep->declBit(c+2147,"ill_err_u", false,-1);
    tracep->declBit(c+2148,"ill_err_i", false,-1);
    tracep->declBit(c+2149,"ibus_err_flag", false,-1);
    tracep->declBit(c+2150,"ubus_err_flag", false,-1);
    tracep->declBit(c+2151,"idiv_err_flag", false,-1);
    tracep->declBit(c+2152,"udiv_err_flag", false,-1);
    tracep->declBit(c+4261,"ifpu_err_flag", false,-1);
    tracep->declBit(c+4261,"ufpu_err_flag", false,-1);
    tracep->declBit(c+2153,"ihalt_phase", false,-1);
    tracep->declBit(c+2154,"uhalt_phase", false,-1);
    tracep->declBit(c+2155,"master_ce", false,-1);
    tracep->declBit(c+50,"master_stall", false,-1);
    tracep->declBus(c+2156,"pf_pc", false,-1, 27,0);
    tracep->declBit(c+2157,"new_pc", false,-1);
    tracep->declBit(c+2157,"clear_pipeline", false,-1);
    tracep->declBit(c+51,"dcd_stalled", false,-1);
    tracep->declBit(c+2142,"pf_gie", false,-1);
    tracep->declBus(c+2158,"dcd_opn", false,-1, 3,0);
    tracep->declBit(c+52,"dcd_ce", false,-1);
    tracep->declBit(c+2159,"dcd_phase", false,-1);
    tracep->declBus(c+2160,"dcd_A", false,-1, 4,0);
    tracep->declBus(c+2161,"dcd_B", false,-1, 4,0);
    tracep->declBus(c+2162,"dcd_R", false,-1, 4,0);
    tracep->declBus(c+2163,"dcd_preA", false,-1, 4,0);
    tracep->declBus(c+2164,"dcd_preB", false,-1, 4,0);
    tracep->declBit(c+2165,"dcd_Acc", false,-1);
    tracep->declBit(c+2166,"dcd_Bcc", false,-1);
    tracep->declBit(c+2167,"dcd_Apc", false,-1);
    tracep->declBit(c+2168,"dcd_Bpc", false,-1);
    tracep->declBit(c+2169,"dcd_Rcc", false,-1);
    tracep->declBit(c+2170,"dcd_Rpc", false,-1);
    tracep->declBus(c+2171,"dcd_F", false,-1, 3,0);
    tracep->declBit(c+2172,"dcd_wR", false,-1);
    tracep->declBit(c+2173,"dcd_rA", false,-1);
    tracep->declBit(c+2174,"dcd_rB", false,-1);
    tracep->declBit(c+2175,"dcd_ALU", false,-1);
    tracep->declBit(c+2176,"dcd_M", false,-1);
    tracep->declBit(c+2177,"dcd_DIV", false,-1);
    tracep->declBit(c+2178,"dcd_FP", false,-1);
    tracep->declBit(c+2179,"dcd_wF", false,-1);
    tracep->declBit(c+2142,"dcd_gie", false,-1);
    tracep->declBit(c+2180,"dcd_break", false,-1);
    tracep->declBit(c+2181,"dcd_lock", false,-1);
    tracep->declBit(c+2182,"dcd_pipe", false,-1);
    tracep->declBit(c+2183,"dcd_ljmp", false,-1);
    tracep->declBit(c+2184,"dcd_valid", false,-1);
    tracep->declBus(c+4216,"dcd_pc", false,-1, 27,0);
    tracep->declBus(c+2185,"dcd_I", false,-1, 31,0);
    tracep->declBit(c+2186,"dcd_zI", false,-1);
    tracep->declBit(c+53,"dcd_A_stall", false,-1);
    tracep->declBit(c+54,"dcd_B_stall", false,-1);
    tracep->declBit(c+4217,"dcd_F_stall", false,-1);
    tracep->declBit(c+2187,"dcd_illegal", false,-1);
    tracep->declBit(c+2188,"dcd_early_branch", false,-1);
    tracep->declBit(c+2189,"dcd_early_branch_stb", false,-1);
    tracep->declBus(c+2190,"dcd_branch_pc", false,-1, 27,0);
    tracep->declBit(c+4218,"dcd_sim", false,-1);
    tracep->declBus(c+4219,"dcd_sim_immv", false,-1, 22,0);
    tracep->declBit(c+2191,"prelock_stall", false,-1);
    tracep->declBit(c+2192,"last_lock_insn", false,-1);
    tracep->declBit(c+2193,"cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2194,"pending_sreg_write", false,-1);
    tracep->declBit(c+4220,"op_valid", false,-1);
    tracep->declBit(c+2195,"op_valid_mem", false,-1);
    tracep->declBit(c+2196,"op_valid_alu", false,-1);
    tracep->declBit(c+2197,"op_valid_div", false,-1);
    tracep->declBit(c+2198,"op_valid_fpu", false,-1);
    tracep->declBit(c+55,"op_stall", false,-1);
    tracep->declBus(c+2199,"op_opn", false,-1, 3,0);
    tracep->declBus(c+1795,"op_R", false,-1, 4,0);
    tracep->declBit(c+2200,"op_Rcc", false,-1);
    tracep->declBus(c+2201,"op_Aid", false,-1, 4,0);
    tracep->declBus(c+2202,"op_Bid", false,-1, 4,0);
    tracep->declBit(c+2203,"op_rA", false,-1);
    tracep->declBit(c+2204,"op_rB", false,-1);
    tracep->declBus(c+2205,"r_op_Av", false,-1, 31,0);
    tracep->declBus(c+2206,"r_op_Bv", false,-1, 31,0);
    tracep->declBus(c+2207,"op_pc", false,-1, 27,0);
    tracep->declBus(c+2208,"w_op_Av", false,-1, 31,0);
    tracep->declBus(c+2209,"w_op_Bv", false,-1, 31,0);
    tracep->declBus(c+1794,"op_Av", false,-1, 31,0);
    tracep->declBus(c+1792,"op_Bv", false,-1, 31,0);
    tracep->declBus(c+56,"w_pcB_v", false,-1, 31,0);
    tracep->declBus(c+57,"w_pcA_v", false,-1, 31,0);
    tracep->declBus(c+2210,"w_op_BnI", false,-1, 31,0);
    tracep->declBit(c+2211,"op_wR", false,-1);
    tracep->declBit(c+2212,"op_wF", false,-1);
    tracep->declBit(c+2142,"op_gie", false,-1);
    tracep->declBus(c+2213,"op_Fl", false,-1, 3,0);
    tracep->declBus(c+2214,"r_op_F", false,-1, 6,0);
    tracep->declBus(c+2215,"op_F", false,-1, 7,0);
    tracep->declBit(c+58,"op_ce", false,-1);
    tracep->declBit(c+2216,"op_phase", false,-1);
    tracep->declBit(c+2217,"op_pipe", false,-1);
    tracep->declBit(c+2218,"r_op_break", false,-1);
    tracep->declBit(c+2219,"w_op_valid", false,-1);
    tracep->declBit(c+4261,"op_lowpower_clear", false,-1);
    tracep->declBus(c+4421,"w_cpu_info", false,-1, 8,0);
    tracep->declBit(c+2220,"op_illegal", false,-1);
    tracep->declBit(c+2218,"op_break", false,-1);
    tracep->declBit(c+2221,"op_lock", false,-1);
    tracep->declBit(c+4221,"op_sim", false,-1);
    tracep->declBus(c+4222,"op_sim_immv", false,-1, 22,0);
    tracep->declBit(c+4223,"alu_sim", false,-1);
    tracep->declBus(c+4224,"alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2222,"alu_pc", false,-1, 27,0);
    tracep->declBus(c+2223,"alu_reg", false,-1, 4,0);
    tracep->declBit(c+2224,"r_alu_pc_valid", false,-1);
    tracep->declBit(c+2225,"mem_pc_valid", false,-1);
    tracep->declBit(c+2226,"alu_pc_valid", false,-1);
    tracep->declBit(c+2227,"alu_phase", false,-1);
    tracep->declBit(c+4225,"alu_ce", false,-1);
    tracep->declBit(c+59,"alu_stall", false,-1);
    tracep->declBus(c+2228,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2229,"alu_flags", false,-1, 3,0);
    tracep->declBit(c+2230,"alu_valid", false,-1);
    tracep->declBit(c+2231,"alu_busy", false,-1);
    tracep->declBit(c+2232,"set_cond", false,-1);
    tracep->declBit(c+2233,"alu_wR", false,-1);
    tracep->declBit(c+2234,"alu_wF", false,-1);
    tracep->declBit(c+2142,"alu_gie", false,-1);
    tracep->declBit(c+2235,"alu_illegal", false,-1);
    tracep->declBit(c+60,"mem_ce", false,-1);
    tracep->declBit(c+61,"mem_stalled", false,-1);
    tracep->declBit(c+62,"div_ce", false,-1);
    tracep->declBit(c+2236,"div_error", false,-1);
    tracep->declBit(c+2237,"div_busy", false,-1);
    tracep->declBit(c+2238,"div_valid", false,-1);
    tracep->declBus(c+2239,"div_result", false,-1, 31,0);
    tracep->declBus(c+2240,"div_flags", false,-1, 3,0);
    tracep->declBit(c+4261,"fpu_ce", false,-1);
    tracep->declBit(c+4261,"fpu_error", false,-1);
    tracep->declBit(c+4261,"fpu_busy", false,-1);
    tracep->declBit(c+4261,"fpu_valid", false,-1);
    tracep->declBus(c+4260,"fpu_result", false,-1, 31,0);
    tracep->declBus(c+4306,"fpu_flags", false,-1, 3,0);
    tracep->declBit(c+63,"adf_ce_unconditional", false,-1);
    tracep->declBit(c+2241,"dbgv", false,-1);
    tracep->declBit(c+2242,"dbg_clear_pipe", false,-1);
    tracep->declBus(c+2243,"dbg_val", false,-1, 31,0);
    tracep->declBus(c+2244,"debug_pc", false,-1, 31,0);
    tracep->declBit(c+2245,"r_dbg_stall", false,-1);
    tracep->declBit(c+2246,"wr_write_pc", false,-1);
    tracep->declBit(c+2247,"wr_write_cc", false,-1);
    tracep->declBit(c+2248,"wr_write_scc", false,-1);
    tracep->declBit(c+2249,"wr_write_ucc", false,-1);
    tracep->declBit(c+2250,"wr_reg_ce", false,-1);
    tracep->declBit(c+2251,"wr_flags_ce", false,-1);
    tracep->declBus(c+2252,"wr_flags", false,-1, 3,0);
    tracep->declBus(c+2253,"wr_index", false,-1, 2,0);
    tracep->declBus(c+2254,"wr_reg_id", false,-1, 4,0);
    tracep->declBus(c+2255,"wr_gpreg_vl", false,-1, 31,0);
    tracep->declBus(c+2256,"wr_spreg_vl", false,-1, 31,0);
    tracep->declBit(c+2257,"w_switch_to_interrupt", false,-1);
    tracep->declBit(c+2258,"w_release_from_interrupt", false,-1);
    tracep->declBus(c+2259,"ipc", false,-1, 27,0);
    tracep->declBus(c+2260,"upc", false,-1, 27,0);
    tracep->declBit(c+2261,"last_write_to_cc", false,-1);
    tracep->declBit(c+2262,"cc_write_hold", false,-1);
    tracep->declBit(c+1777,"r_clear_icache", false,-1);
    tracep->declBit(c+64,"pfpcset", false,-1);
    tracep->declBus(c+65,"pfpcsrc", false,-1, 2,0);
    tracep->declBit(c+4262,"w_clken", false,-1);
    tracep->declBus(c+2263,"dcd_full_R", false,-1, 6,0);
    tracep->declBus(c+2264,"dcd_full_A", false,-1, 6,0);
    tracep->declBus(c+2265,"dcd_full_B", false,-1, 6,0);
    tracep->declBus(c+66,"avsrc", false,-1, 2,0);
    tracep->declBus(c+67,"bvsrc", false,-1, 2,0);
    tracep->declBus(c+2266,"bisrc", false,-1, 1,0);
    tracep->declBit(c+68,"cpu_sim", false,-1);
    tracep->declBus(c+4298,"OPT_SIM_DEBUG", false,-1, 0,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("ALU_SIM ");
    tracep->declBit(c+2267,"r_alu_sim", false,-1);
    tracep->declBus(c+2268,"r_alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2269,"regid", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BUSLOCK ");
    tracep->declBit(c+2191,"r_prelock_stall", false,-1);
    tracep->declBus(c+2270,"r_bus_lock", false,-1, 1,0);
    tracep->declBus(c+1793,"r_lock_pc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLEAR_DCACHE ");
    tracep->declBit(c+1789,"r_clear_dcache", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DIVERR ");
    tracep->declBit(c+2151,"r_idiv_err_flag", false,-1);
    tracep->pushNamePrefix("USER_DIVERR ");
    tracep->declBit(c+2152,"r_udiv_err_flag", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DIVIDE ");
    tracep->pushNamePrefix("thedivide ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBus(c+4338,"LGBW", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+2271,"i_reset", false,-1);
    tracep->declBit(c+62,"i_wr", false,-1);
    tracep->declBit(c+2272,"i_signed", false,-1);
    tracep->declBus(c+1794,"i_numerator", false,-1, 31,0);
    tracep->declBus(c+1792,"i_denominator", false,-1, 31,0);
    tracep->declBit(c+2237,"o_busy", false,-1);
    tracep->declBit(c+2238,"o_valid", false,-1);
    tracep->declBit(c+2236,"o_err", false,-1);
    tracep->declBus(c+2239,"o_quotient", false,-1, 31,0);
    tracep->declBus(c+2240,"o_flags", false,-1, 3,0);
    tracep->declBit(c+2273,"r_busy", false,-1);
    tracep->declBus(c+2274,"r_divisor", false,-1, 31,0);
    tracep->declQuad(c+2275,"r_dividend", false,-1, 62,0);
    tracep->declQuad(c+2277,"diff", false,-1, 32,0);
    tracep->declBit(c+2279,"r_sign", false,-1);
    tracep->declBit(c+2280,"pre_sign", false,-1);
    tracep->declBit(c+2281,"r_z", false,-1);
    tracep->declBit(c+2282,"r_c", false,-1);
    tracep->declBit(c+2283,"last_bit", false,-1);
    tracep->declBus(c+2284,"r_bit", false,-1, 4,0);
    tracep->declBit(c+2285,"zero_divisor", false,-1);
    tracep->declBit(c+2286,"w_n", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("FWD_OPERATION ");
    tracep->declBus(c+2199,"r_op_opn", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PC ");
    tracep->declBus(c+2222,"r_alu_pc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PHASE ");
    tracep->declBit(c+2227,"r_alu_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_STALL ");
    tracep->declBit(c+4261,"unused_alu_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_DISTRIBUTED_REGS ");
    tracep->declBit(c+4261,"unused_prereg_addrs", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_IHALT_PHASE ");
    tracep->declBit(c+2153,"r_ihalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPLOCK ");
    tracep->declBit(c+2221,"r_op_lock", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_PIPE ");
    tracep->declBit(c+2217,"r_op_pipe", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_STALL ");
    tracep->declBit(c+2193,"r_cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2194,"r_pending_sreg_write", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_WR ");
    tracep->declBit(c+2211,"r_op_wR", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_BREAK ");
    tracep->declBit(c+2140,"r_break_pending", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_INTERRUPT ");
    tracep->declBit(c+2287,"r_pending_interrupt", false,-1);
    tracep->declBit(c+2145,"r_user_stepped", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PROFILER ");
    tracep->declBit(c+2288,"prof_stb", false,-1);
    tracep->declBus(c+2289,"prof_addr", false,-1, 27,0);
    tracep->declBus(c+2290,"prof_ticks", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_UHALT_PHASE ");
    tracep->declBit(c+2154,"r_uhalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_CIS_OP_PHASE ");
    tracep->declBit(c+2216,"r_op_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_REG_ADVANEC ");
    tracep->declBus(c+1795,"r_op_R", false,-1, 4,0);
    tracep->declBus(c+2201,"r_op_Aid", false,-1, 4,0);
    tracep->declBus(c+2202,"r_op_Bid", false,-1, 4,0);
    tracep->declBit(c+2203,"r_op_rA", false,-1);
    tracep->declBit(c+2204,"r_op_rB", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_SIM ");
    tracep->declBit(c+2291,"r_op_sim", false,-1);
    tracep->declBus(c+2292,"r_op_sim_immv", false,-1, 22,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SETDBG ");
    tracep->declBus(c+2293,"pre_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1101,"r_dbg_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_ALU_ILLEGAL ");
    tracep->declBit(c+2235,"r_alu_illegal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_GIE ");
    tracep->declBit(c+2142,"r_gie", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_OP_PC ");
    tracep->declBus(c+2207,"r_op_pc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_TRAP_N_UBREAK ");
    tracep->declBit(c+2141,"r_trap", false,-1);
    tracep->declBit(c+2143,"r_ubreak", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_BUSERR ");
    tracep->declBit(c+2150,"r_ubus_err_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_ILLEGAL_INSN ");
    tracep->declBit(c+2147,"r_ill_err_u", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_PC ");
    tracep->declBus(c+2260,"r_upc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_AW ");
    tracep->declBit(c+4261,"generic_ignore", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("doalu ");
    tracep->declBus(c+4247,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+2271,"i_reset", false,-1);
    tracep->declBit(c+4225,"i_stb", false,-1);
    tracep->declBus(c+2199,"i_op", false,-1, 3,0);
    tracep->declBus(c+1794,"i_a", false,-1, 31,0);
    tracep->declBus(c+1792,"i_b", false,-1, 31,0);
    tracep->declBus(c+2228,"o_c", false,-1, 31,0);
    tracep->declBus(c+2229,"o_f", false,-1, 3,0);
    tracep->declBit(c+2230,"o_valid", false,-1);
    tracep->declBit(c+2231,"o_busy", false,-1);
    tracep->declBus(c+2294,"w_brev_result", false,-1, 31,0);
    tracep->declBit(c+2295,"z", false,-1);
    tracep->declBit(c+2296,"n", false,-1);
    tracep->declBit(c+2297,"v", false,-1);
    tracep->declBit(c+2298,"vx", false,-1);
    tracep->declBit(c+2299,"c", false,-1);
    tracep->declBit(c+2300,"pre_sign", false,-1);
    tracep->declBit(c+2301,"set_ovfl", false,-1);
    tracep->declBit(c+2302,"keep_sgn_on_ovfl", false,-1);
    tracep->declQuad(c+2303,"w_lsr_result", false,-1, 32,0);
    tracep->declQuad(c+2305,"w_asr_result", false,-1, 32,0);
    tracep->declQuad(c+2307,"w_lsl_result", false,-1, 32,0);
    tracep->declQuad(c+2309,"mpy_result", false,-1, 63,0);
    tracep->declBit(c+2311,"mpyhi", false,-1);
    tracep->declBit(c+2312,"mpybusy", false,-1);
    tracep->declBit(c+2313,"mpydone", false,-1);
    tracep->declBit(c+69,"this_is_a_multiply_op", false,-1);
    tracep->declBit(c+2231,"r_busy", false,-1);
    tracep->pushNamePrefix("IMPLEMENT_SHIFTS ");
    tracep->declQuad(c+2314,"w_pre_asr_input", false,-1, 32,0);
    tracep->declQuad(c+2316,"w_pre_asr_shifted", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thempy ");
    tracep->declBus(c+4247,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+2271,"i_reset", false,-1);
    tracep->declBit(c+69,"i_stb", false,-1);
    tracep->declBus(c+2318,"i_op", false,-1, 1,0);
    tracep->declBus(c+1794,"i_a", false,-1, 31,0);
    tracep->declBus(c+1792,"i_b", false,-1, 31,0);
    tracep->declBit(c+2313,"o_valid", false,-1);
    tracep->declBit(c+2312,"o_busy", false,-1);
    tracep->declQuad(c+2309,"o_result", false,-1, 63,0);
    tracep->declBit(c+2311,"o_hi", false,-1);
    tracep->pushNamePrefix("IMPY ");
    tracep->pushNamePrefix("MPN1 ");
    tracep->pushNamePrefix("MPN2 ");
    tracep->pushNamePrefix("MPY3CK ");
    tracep->declQuad(c+2319,"r_smpy_result", false,-1, 63,0);
    tracep->declQuad(c+2321,"r_umpy_result", false,-1, 63,0);
    tracep->declBus(c+2323,"r_mpy_a_input", false,-1, 31,0);
    tracep->declBus(c+2324,"r_mpy_b_input", false,-1, 31,0);
    tracep->declBus(c+2325,"mpypipe", false,-1, 1,0);
    tracep->declBus(c+2326,"r_sgn", false,-1, 1,0);
    tracep->declBit(c+2311,"r_hi", false,-1);
    tracep->declQuad(c+2327,"s_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2329,"s_mpy_b_input", false,-1, 63,0);
    tracep->declQuad(c+2331,"u_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2333,"u_mpy_b_input", false,-1, 63,0);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("instruction_decoder ");
    tracep->declBus(c+4314,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_MPY", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DIVIDE", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_OPIPE", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_SUPPRESS_NULL_BRANCHES", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4314,"AW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+2335,"i_reset", false,-1);
    tracep->declBit(c+52,"i_ce", false,-1);
    tracep->declBit(c+51,"i_stalled", false,-1);
    tracep->declBus(c+1779,"i_instruction", false,-1, 31,0);
    tracep->declBit(c+2142,"i_gie", false,-1);
    tracep->declBus(c+1780,"i_pc", false,-1, 27,0);
    tracep->declBit(c+1781,"i_pf_valid", false,-1);
    tracep->declBit(c+1782,"i_illegal", false,-1);
    tracep->declBit(c+2184,"o_valid", false,-1);
    tracep->declBit(c+2159,"o_phase", false,-1);
    tracep->declBit(c+2187,"o_illegal", false,-1);
    tracep->declBus(c+4216,"o_pc", false,-1, 27,0);
    tracep->declBus(c+2263,"o_dcdR", false,-1, 6,0);
    tracep->declBus(c+2264,"o_dcdA", false,-1, 6,0);
    tracep->declBus(c+2265,"o_dcdB", false,-1, 6,0);
    tracep->declBus(c+2163,"o_preA", false,-1, 4,0);
    tracep->declBus(c+2164,"o_preB", false,-1, 4,0);
    tracep->declBus(c+2185,"o_I", false,-1, 31,0);
    tracep->declBit(c+2186,"o_zI", false,-1);
    tracep->declBus(c+2171,"o_cond", false,-1, 3,0);
    tracep->declBit(c+2179,"o_wF", false,-1);
    tracep->declBus(c+2158,"o_op", false,-1, 3,0);
    tracep->declBit(c+2175,"o_ALU", false,-1);
    tracep->declBit(c+2176,"o_M", false,-1);
    tracep->declBit(c+2177,"o_DV", false,-1);
    tracep->declBit(c+2178,"o_FP", false,-1);
    tracep->declBit(c+2180,"o_break", false,-1);
    tracep->declBit(c+2181,"o_lock", false,-1);
    tracep->declBit(c+2172,"o_wR", false,-1);
    tracep->declBit(c+2173,"o_rA", false,-1);
    tracep->declBit(c+2174,"o_rB", false,-1);
    tracep->declBit(c+2188,"o_early_branch", false,-1);
    tracep->declBit(c+2189,"o_early_branch_stb", false,-1);
    tracep->declBus(c+2190,"o_branch_pc", false,-1, 27,0);
    tracep->declBit(c+2183,"o_ljmp", false,-1);
    tracep->declBit(c+2182,"o_pipe", false,-1);
    tracep->declBit(c+4218,"o_sim", false,-1);
    tracep->declBus(c+4219,"o_sim_immv", false,-1, 22,0);
    tracep->declBus(c+4381,"CPU_SP_REG", false,-1, 3,0);
    tracep->declBus(c+4420,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4293,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4387,"CISBIT", false,-1, 31,0);
    tracep->declBus(c+4316,"CISIMMSEL", false,-1, 31,0);
    tracep->declBus(c+4317,"IMMSEL", false,-1, 31,0);
    tracep->declBus(c+2336,"w_op", false,-1, 4,0);
    tracep->declBit(c+2337,"w_ldi", false,-1);
    tracep->declBit(c+2338,"w_mov", false,-1);
    tracep->declBit(c+2339,"w_cmptst", false,-1);
    tracep->declBit(c+2340,"w_ldilo", false,-1);
    tracep->declBit(c+2341,"w_ALU", false,-1);
    tracep->declBit(c+2342,"w_brev", false,-1);
    tracep->declBit(c+2343,"w_noop", false,-1);
    tracep->declBit(c+2344,"w_lock", false,-1);
    tracep->declBit(c+2345,"w_sim", false,-1);
    tracep->declBit(c+2346,"w_break", false,-1);
    tracep->declBit(c+2347,"w_special", false,-1);
    tracep->declBit(c+2348,"w_add", false,-1);
    tracep->declBit(c+2349,"w_mpy", false,-1);
    tracep->declBus(c+2163,"w_dcdR", false,-1, 4,0);
    tracep->declBus(c+2164,"w_dcdB", false,-1, 4,0);
    tracep->declBus(c+2163,"w_dcdA", false,-1, 4,0);
    tracep->declBit(c+2350,"w_dcdR_pc", false,-1);
    tracep->declBit(c+2351,"w_dcdR_cc", false,-1);
    tracep->declBit(c+2350,"w_dcdA_pc", false,-1);
    tracep->declBit(c+2351,"w_dcdA_cc", false,-1);
    tracep->declBit(c+2352,"w_dcdB_pc", false,-1);
    tracep->declBit(c+2353,"w_dcdB_cc", false,-1);
    tracep->declBus(c+2354,"w_cond", false,-1, 3,0);
    tracep->declBit(c+2355,"w_wF", false,-1);
    tracep->declBit(c+2356,"w_mem", false,-1);
    tracep->declBit(c+2357,"w_sto", false,-1);
    tracep->declBit(c+2358,"w_div", false,-1);
    tracep->declBit(c+2359,"w_fpu", false,-1);
    tracep->declBit(c+2360,"w_wR", false,-1);
    tracep->declBit(c+2361,"w_rA", false,-1);
    tracep->declBit(c+2362,"w_rB", false,-1);
    tracep->declBit(c+2363,"w_wR_n", false,-1);
    tracep->declBit(c+2364,"w_ljmp", false,-1);
    tracep->declBit(c+2183,"w_ljmp_dly", false,-1);
    tracep->declBit(c+2365,"w_cis_ljmp", false,-1);
    tracep->declBus(c+2366,"iword", false,-1, 31,0);
    tracep->declBit(c+2367,"pf_valid", false,-1);
    tracep->declBus(c+2368,"r_nxt_half", false,-1, 14,0);
    tracep->declBus(c+2369,"w_cis_op", false,-1, 4,0);
    tracep->declBus(c+2370,"r_I", false,-1, 22,0);
    tracep->declBus(c+2371,"w_fullI", false,-1, 22,0);
    tracep->declBus(c+2372,"w_I", false,-1, 22,0);
    tracep->declBit(c+2373,"w_Iz", false,-1);
    tracep->declBus(c+2374,"w_immsrc", false,-1, 1,0);
    tracep->declBit(c+2184,"r_valid", false,-1);
    tracep->declBit(c+2375,"insn_is_pipeable", false,-1);
    tracep->declBit(c+4261,"illegal_shift", false,-1);
    tracep->declBit(c+4261,"possibly_unused", false,-1);
    tracep->pushNamePrefix("GEN_CIS_IMMEDIATE ");
    tracep->declBus(c+2376,"w_halfI", false,-1, 7,0);
    tracep->declBus(c+2377,"w_halfbits", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_CIS_PHASE ");
    tracep->declBit(c+2159,"r_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_EARLY_BRANCH_LOGIC ");
    tracep->declBit(c+2188,"r_early_branch", false,-1);
    tracep->declBit(c+2189,"r_early_branch_stb", false,-1);
    tracep->declBit(c+2183,"r_ljmp", false,-1);
    tracep->declBus(c+2190,"r_branch_pc", false,-1, 27,0);
    tracep->declBit(c+2378,"w_add_to_pc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPIPE ");
    tracep->declBit(c+2182,"r_pipe", false,-1);
    tracep->declBit(c+2375,"r_insn_is_pipeable", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_jiffies ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1134,"i_ce", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+2379,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4293,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1053,"o_wb_ack", false,-1);
    tracep->declBus(c+1057,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+945,"o_int", false,-1);
    tracep->declBus(c+1057,"r_counter", false,-1, 31,0);
    tracep->declBit(c+2380,"int_set", false,-1);
    tracep->declBit(c+2381,"new_set", false,-1);
    tracep->declBit(c+2382,"int_now", false,-1);
    tracep->declBus(c+2383,"int_when", false,-1, 31,0);
    tracep->declBus(c+2384,"new_when", false,-1, 31,0);
    tracep->declBus(c+2385,"till_wb", false,-1, 31,0);
    tracep->declBus(c+2386,"till_when", false,-1, 31,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_timer_a ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBus(c+4387,"VW", false,-1, 31,0);
    tracep->declBus(c+4255,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1134,"i_ce", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+2387,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4293,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1050,"o_wb_ack", false,-1);
    tracep->declBus(c+1054,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+942,"o_int", false,-1);
    tracep->declBit(c+2388,"r_running", false,-1);
    tracep->declBit(c+2389,"r_zero", false,-1);
    tracep->declBus(c+2390,"r_value", false,-1, 30,0);
    tracep->declBit(c+2391,"wb_write", false,-1);
    tracep->declBit(c+2392,"auto_reload", false,-1);
    tracep->declBus(c+2393,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2392,"r_auto_reload", false,-1);
    tracep->declBus(c+2393,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_b ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBus(c+4387,"VW", false,-1, 31,0);
    tracep->declBus(c+4255,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1134,"i_ce", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+2394,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4293,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1051,"o_wb_ack", false,-1);
    tracep->declBus(c+1055,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+943,"o_int", false,-1);
    tracep->declBit(c+2395,"r_running", false,-1);
    tracep->declBit(c+2396,"r_zero", false,-1);
    tracep->declBus(c+2397,"r_value", false,-1, 30,0);
    tracep->declBit(c+2398,"wb_write", false,-1);
    tracep->declBit(c+2399,"auto_reload", false,-1);
    tracep->declBus(c+2400,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2399,"r_auto_reload", false,-1);
    tracep->declBus(c+2400,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_c ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBus(c+4387,"VW", false,-1, 31,0);
    tracep->declBus(c+4255,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1134,"i_ce", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+2401,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4293,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1052,"o_wb_ack", false,-1);
    tracep->declBus(c+1056,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+944,"o_int", false,-1);
    tracep->declBit(c+2402,"r_running", false,-1);
    tracep->declBit(c+2403,"r_zero", false,-1);
    tracep->declBus(c+2404,"r_value", false,-1, 30,0);
    tracep->declBit(c+2405,"wb_write", false,-1);
    tracep->declBit(c+2406,"auto_reload", false,-1);
    tracep->declBus(c+2407,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2406,"r_auto_reload", false,-1);
    tracep->declBus(c+2407,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_watchbus ");
    tracep->declBus(c+4245,"BW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+2408,"i_reset", false,-1);
    tracep->declBus(c+4422,"i_timeout", false,-1, 13,0);
    tracep->declBit(c+1015,"o_int", false,-1);
    tracep->declBus(c+2409,"r_value", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_watchdog ");
    tracep->declBus(c+4299,"BW", false,-1, 31,0);
    tracep->declBus(c+4387,"VW", false,-1, 31,0);
    tracep->declBus(c+4298,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+994,"i_reset", false,-1);
    tracep->declBit(c+1134,"i_ce", false,-1);
    tracep->declBit(c+958,"i_wb_cyc", false,-1);
    tracep->declBit(c+2410,"i_wb_stb", false,-1);
    tracep->declBit(c+960,"i_wb_we", false,-1);
    tracep->declBus(c+962,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4293,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+1007,"o_wb_ack", false,-1);
    tracep->declBus(c+1009,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1008,"o_int", false,-1);
    tracep->declBit(c+2411,"r_running", false,-1);
    tracep->declBit(c+2412,"r_zero", false,-1);
    tracep->declBus(c+2413,"r_value", false,-1, 30,0);
    tracep->declBit(c+2414,"wb_write", false,-1);
    tracep->declBit(c+4261,"auto_reload", false,-1);
    tracep->declBus(c+4423,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("txv ");
    tracep->declBus(c+4424,"TIMING_BITS", false,-1, 4,0);
    tracep->declBus(c+4424,"TB", false,-1, 4,0);
    tracep->declBus(c+4390,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+170,"i_wr", false,-1);
    tracep->declBus(c+168,"i_data", false,-1, 7,0);
    tracep->declBit(c+4192,"o_uart_tx", false,-1);
    tracep->declBit(c+171,"o_busy", false,-1);
    tracep->declBus(c+4306,"TXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4376,"TXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4293,"TXUL_IDLE", false,-1, 3,0);
    tracep->declBus(c+2415,"baud_counter", false,-1, 6,0);
    tracep->declBus(c+2416,"state", false,-1, 3,0);
    tracep->declBus(c+2417,"lcl_data", false,-1, 7,0);
    tracep->declBit(c+171,"r_busy", false,-1);
    tracep->declBit(c+2418,"zero_baud_counter", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fan ");
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+3887,"i_wb_cyc", false,-1);
    tracep->declBit(c+3888,"i_wb_stb", false,-1);
    tracep->declBit(c+3889,"i_wb_we", false,-1);
    tracep->declBus(c+3947,"i_wb_addr", false,-1, 2,0);
    tracep->declBus(c+3891,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3892,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+420,"o_wb_ack", false,-1);
    tracep->declBus(c+421,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+4168,"i_temp_sda", false,-1);
    tracep->declBit(c+4169,"i_temp_scl", false,-1);
    tracep->declBit(c+4170,"o_temp_sda", false,-1);
    tracep->declBit(c+4171,"o_temp_scl", false,-1);
    tracep->declBit(c+4172,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4173,"o_sys_pwm", false,-1);
    tracep->declBit(c+4174,"i_fan_tach", false,-1);
    tracep->declBus(c+4203,"temp_debug", false,-1, 31,0);
    tracep->declBus(c+4425,"CK_PER_SECOND", false,-1, 31,0);
    tracep->declBus(c+4426,"CK_PER_MS", false,-1, 31,0);
    tracep->declBus(c+4427,"PWM_HZ", false,-1, 31,0);
    tracep->declBus(c+4428,"MAX_PWM", false,-1, 31,0);
    tracep->declBus(c+4320,"LGPWM", false,-1, 31,0);
    tracep->declBus(c+2419,"pwm_counter", false,-1, 12,0);
    tracep->declBus(c+2420,"ctl_fpga", false,-1, 12,0);
    tracep->declBus(c+2421,"ctl_sys", false,-1, 12,0);
    tracep->declBit(c+2422,"ck_tach", false,-1);
    tracep->declBit(c+2423,"last_tach", false,-1);
    tracep->declBus(c+2424,"pipe_tach", false,-1, 1,0);
    tracep->declBit(c+2425,"tach_reset", false,-1);
    tracep->declBus(c+2426,"tach_count", false,-1, 26,0);
    tracep->declBus(c+2427,"tach_counter", false,-1, 26,0);
    tracep->declBus(c+2428,"tach_timer", false,-1, 26,0);
    tracep->declBit(c+4261,"i2c_wb_stall", false,-1);
    tracep->declBit(c+2429,"i2c_wb_ack", false,-1);
    tracep->declBus(c+2430,"i2c_wb_data", false,-1, 31,0);
    tracep->declBit(c+2431,"ign_mem_cyc", false,-1);
    tracep->declBit(c+2432,"mem_stb", false,-1);
    tracep->declBit(c+4261,"ign_mem_we", false,-1);
    tracep->declBit(c+4255,"ign_mem_sel", false,-1);
    tracep->declBus(c+2433,"mem_addr", false,-1, 4,0);
    tracep->declBus(c+4297,"ign_mem_data", false,-1, 7,0);
    tracep->declBus(c+2434,"mem_data", false,-1, 7,0);
    tracep->declBit(c+2435,"mem_ack", false,-1);
    tracep->declBit(c+2436,"i2cd_valid", false,-1);
    tracep->declBit(c+2437,"i2cd_last", false,-1);
    tracep->declBit(c+4261,"ign_i2cd_id", false,-1);
    tracep->declBus(c+2438,"i2cd_data", false,-1, 7,0);
    tracep->declBit(c+2439,"pp_ms", false,-1);
    tracep->declBus(c+2440,"trigger_counter", false,-1, 16,0);
    tracep->declBus(c+2441,"temp_tmp", false,-1, 23,0);
    tracep->declBus(c+2442,"temp_data", false,-1, 31,0);
    tracep->declBit(c+2443,"pre_ack", false,-1);
    tracep->declBus(c+2444,"pre_data", false,-1, 31,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("u_i2ccpu ");
    tracep->declBus(c+4338,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4248,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4248,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4260,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4298,"DEF_CHANNEL", false,-1, 0,0);
    tracep->declBus(c+4338,"AW", false,-1, 31,0);
    tracep->declBus(c+4248,"DW", false,-1, 31,0);
    tracep->declBus(c+4248,"RW", false,-1, 31,0);
    tracep->declBus(c+4338,"BAW", false,-1, 31,0);
    tracep->declBus(c+4364,"RESET_ADDRESS", false,-1, 4,0);
    tracep->declBus(c+4298,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4260,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4429,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+3887,"i_wb_cyc", false,-1);
    tracep->declBit(c+3948,"i_wb_stb", false,-1);
    tracep->declBit(c+3889,"i_wb_we", false,-1);
    tracep->declBus(c+3949,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+3891,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3892,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+2429,"o_wb_ack", false,-1);
    tracep->declBus(c+2430,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+2431,"o_pf_cyc", false,-1);
    tracep->declBit(c+2432,"o_pf_stb", false,-1);
    tracep->declBit(c+4261,"o_pf_we", false,-1);
    tracep->declBus(c+2433,"o_pf_addr", false,-1, 4,0);
    tracep->declBus(c+4297,"o_pf_data", false,-1, 7,0);
    tracep->declBus(c+4255,"o_pf_sel", false,-1, 0,0);
    tracep->declBit(c+4261,"i_pf_stall", false,-1);
    tracep->declBit(c+2435,"i_pf_ack", false,-1);
    tracep->declBit(c+4261,"i_pf_err", false,-1);
    tracep->declBus(c+2434,"i_pf_data", false,-1, 7,0);
    tracep->declBit(c+4168,"i_i2c_sda", false,-1);
    tracep->declBit(c+4169,"i_i2c_scl", false,-1);
    tracep->declBit(c+4170,"o_i2c_sda", false,-1);
    tracep->declBit(c+4171,"o_i2c_scl", false,-1);
    tracep->declBit(c+2436,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4262,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+2438,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+2437,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+4261,"M_AXIS_TID", false,-1, 0,0);
    tracep->declBit(c+2439,"i_sync_signal", false,-1);
    tracep->declBus(c+4203,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4301,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4302,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4303,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4304,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4258,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4295,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4318,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4253,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4340,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4341,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4306,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4308,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4309,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4310,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4311,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4300,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4312,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4376,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4377,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4378,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4379,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4380,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4381,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+2445,"cpu_reset", false,-1);
    tracep->declBit(c+4261,"cpu_clear_cache", false,-1);
    tracep->declBit(c+2446,"cpu_new_pc", false,-1);
    tracep->declBus(c+2447,"pf_jump_addr", false,-1, 4,0);
    tracep->declBit(c+2448,"pf_valid", false,-1);
    tracep->declBit(c+2449,"pf_ready", false,-1);
    tracep->declBus(c+2450,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+2451,"pf_insn_addr", false,-1, 4,0);
    tracep->declBit(c+2452,"pf_illegal", false,-1);
    tracep->declBit(c+2453,"half_valid", false,-1);
    tracep->declBit(c+2454,"imm_cycle", false,-1);
    tracep->declBit(c+3950,"next_valid", false,-1);
    tracep->declBus(c+3951,"next_insn", false,-1, 7,0);
    tracep->declBit(c+2455,"insn_ready", false,-1);
    tracep->declBit(c+2456,"half_ready", false,-1);
    tracep->declBit(c+2457,"i2c_abort", false,-1);
    tracep->declBit(c+2458,"insn_valid", false,-1);
    tracep->declBus(c+2459,"insn", false,-1, 11,0);
    tracep->declBus(c+2460,"half_insn", false,-1, 3,0);
    tracep->declBit(c+2461,"i2c_ckedge", false,-1);
    tracep->declBit(c+2462,"i2c_stretch", false,-1);
    tracep->declBus(c+2463,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+2464,"ckcount", false,-1, 11,0);
    tracep->declBus(c+2465,"abort_address", false,-1, 4,0);
    tracep->declBus(c+2466,"jump_target", false,-1, 4,0);
    tracep->declBit(c+2467,"r_wait", false,-1);
    tracep->declBit(c+2468,"soft_halt_request", false,-1);
    tracep->declBit(c+2445,"r_halted", false,-1);
    tracep->declBit(c+2469,"r_err", false,-1);
    tracep->declBit(c+2470,"r_aborted", false,-1);
    tracep->declBit(c+2471,"r_manual", false,-1);
    tracep->declBit(c+2472,"r_sda", false,-1);
    tracep->declBit(c+2473,"r_scl", false,-1);
    tracep->declBit(c+2474,"w_stopped", false,-1);
    tracep->declBit(c+2475,"w_sda", false,-1);
    tracep->declBit(c+2476,"w_scl", false,-1);
    tracep->declBit(c+3952,"bus_read", false,-1);
    tracep->declBit(c+3953,"bus_write", false,-1);
    tracep->declBit(c+3954,"bus_override", false,-1);
    tracep->declBit(c+3955,"bus_manual", false,-1);
    tracep->declBit(c+2477,"ovw_ready", false,-1);
    tracep->declBit(c+3956,"bus_jump", false,-1);
    tracep->declBus(c+3949,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+3949,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+3891,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+3892,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+2430,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+2478,"s_tvalid", false,-1);
    tracep->declBit(c+2456,"s_tready", false,-1);
    tracep->declBus(c+2479,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+4226,"w_control", false,-1, 31,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+2471,"manual", false,-1);
    tracep->declBit(c+2473,"scl", false,-1);
    tracep->declBit(c+2472,"sda", false,-1);
    tracep->declBit(c+2480,"o_scl", false,-1);
    tracep->declBit(c+2481,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4260,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+70,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+2478,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+2455,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+2482,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+2436,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4262,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+2438,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+2437,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+2461,"i_ckedge", false,-1);
    tracep->declBit(c+2462,"o_stretch", false,-1);
    tracep->declBit(c+4169,"i_scl", false,-1);
    tracep->declBit(c+4168,"i_sda", false,-1);
    tracep->declBit(c+2476,"o_scl", false,-1);
    tracep->declBit(c+2475,"o_sda", false,-1);
    tracep->declBit(c+2457,"o_abort", false,-1);
    tracep->declBus(c+4306,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4307,"START", false,-1, 3,0);
    tracep->declBus(c+4308,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4309,"STOP", false,-1, 3,0);
    tracep->declBus(c+4310,"DATA", false,-1, 3,0);
    tracep->declBus(c+4311,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4300,"ACK", false,-1, 3,0);
    tracep->declBus(c+4312,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4376,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4377,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4378,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4379,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4380,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4298,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4255,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4343,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4349,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4344,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4346,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4382,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4383,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4384,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4385,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4298,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+2483,"last_byte", false,-1);
    tracep->declBit(c+2484,"dir", false,-1);
    tracep->declBit(c+2485,"will_ack", false,-1);
    tracep->declBus(c+2486,"state", false,-1, 3,0);
    tracep->declBus(c+2487,"nbits", false,-1, 2,0);
    tracep->declBus(c+2488,"sreg", false,-1, 7,0);
    tracep->declBit(c+2489,"q_scl", false,-1);
    tracep->declBit(c+2490,"q_sda", false,-1);
    tracep->declBit(c+2491,"ck_scl", false,-1);
    tracep->declBit(c+2492,"ck_sda", false,-1);
    tracep->declBit(c+2493,"lst_scl", false,-1);
    tracep->declBit(c+2494,"lst_sda", false,-1);
    tracep->declBit(c+2495,"stop_bit", false,-1);
    tracep->declBit(c+2496,"channel_busy", false,-1);
    tracep->declBit(c+4261,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4338,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4248,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4248,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4338,"AW", false,-1, 31,0);
    tracep->declBus(c+4248,"DW", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+71,"i_reset", false,-1);
    tracep->declBit(c+2446,"i_new_pc", false,-1);
    tracep->declBit(c+4261,"i_clear_cache", false,-1);
    tracep->declBit(c+2449,"i_ready", false,-1);
    tracep->declBus(c+2447,"i_pc", false,-1, 4,0);
    tracep->declBit(c+2448,"o_valid", false,-1);
    tracep->declBit(c+2452,"o_illegal", false,-1);
    tracep->declBus(c+2450,"o_insn", false,-1, 7,0);
    tracep->declBus(c+2451,"o_pc", false,-1, 4,0);
    tracep->declBit(c+2431,"o_wb_cyc", false,-1);
    tracep->declBit(c+2432,"o_wb_stb", false,-1);
    tracep->declBit(c+4261,"o_wb_we", false,-1);
    tracep->declBus(c+2433,"o_wb_addr", false,-1, 4,0);
    tracep->declBus(c+4297,"o_wb_data", false,-1, 7,0);
    tracep->declBit(c+4261,"i_wb_stall", false,-1);
    tracep->declBit(c+2435,"i_wb_ack", false,-1);
    tracep->declBit(c+4261,"i_wb_err", false,-1);
    tracep->declBus(c+2434,"i_wb_data", false,-1, 7,0);
    tracep->declBit(c+2497,"last_stb", false,-1);
    tracep->declBit(c+2498,"invalid_bus_cycle", false,-1);
    tracep->declBus(c+2499,"cache_word", false,-1, 7,0);
    tracep->declBit(c+2500,"cache_valid", false,-1);
    tracep->declBus(c+2501,"inflight", false,-1, 1,0);
    tracep->declBit(c+2502,"cache_illegal", false,-1);
    tracep->declBit(c+4261,"r_valid", false,-1);
    tracep->declBus(c+4297,"r_insn", false,-1, 7,0);
    tracep->declBus(c+2434,"i_wb_shifted", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_i2cdma ");
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declBus(c+4248,"SW", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+3875,"i_wb_cyc", false,-1);
    tracep->declBit(c+3876,"i_wb_stb", false,-1);
    tracep->declBit(c+3877,"i_wb_we", false,-1);
    tracep->declBus(c+3957,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+3879,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3880,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4261,"o_wb_stall", false,-1);
    tracep->declBit(c+416,"o_wb_ack", false,-1);
    tracep->declBus(c+417,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+2503,"S_VALID", false,-1);
    tracep->declBit(c+151,"S_READY", false,-1);
    tracep->declBus(c+155,"S_DATA", false,-1, 7,0);
    tracep->declBit(c+154,"S_LAST", false,-1);
    tracep->declBit(c+176,"o_dma_cyc", false,-1);
    tracep->declBit(c+177,"o_dma_stb", false,-1);
    tracep->declBit(c+4262,"o_dma_we", false,-1);
    tracep->declBus(c+178,"o_dma_addr", false,-1, 21,0);
    tracep->declArray(c+179,"o_dma_data", false,-1, 511,0);
    tracep->declQuad(c+195,"o_dma_sel", false,-1, 63,0);
    tracep->declBit(c+197,"i_dma_stall", false,-1);
    tracep->declBit(c+198,"i_dma_ack", false,-1);
    tracep->declArray(c+200,"i_dma_data", false,-1, 511,0);
    tracep->declBit(c+199,"i_dma_err", false,-1);
    tracep->declBus(c+4260,"SUBLSB", false,-1, 31,0);
    tracep->declBus(c+4337,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4373,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2504,"r_baseaddr", false,-1, 27,0);
    tracep->declBus(c+2505,"r_memlen", false,-1, 27,0);
    tracep->declBus(c+2506,"subaddr", false,-1, 5,0);
    tracep->declBus(c+2507,"current_addr", false,-1, 27,0);
    tracep->declBus(c+3958,"next_baseaddr", false,-1, 31,0);
    tracep->declBus(c+3959,"next_memlen", false,-1, 31,0);
    tracep->declBit(c+2508,"wb_last", false,-1);
    tracep->declBit(c+2509,"bus_err", false,-1);
    tracep->declBit(c+2510,"r_reset", false,-1);
    tracep->declBit(c+2511,"r_overflow", false,-1);
    tracep->declBit(c+2512,"skd_valid", false,-1);
    tracep->declBit(c+2513,"skd_ready", false,-1);
    tracep->declBit(c+2514,"skd_last", false,-1);
    tracep->declBus(c+2515,"skd_data", false,-1, 7,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("sskd ");
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4340,"DW", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+2503,"i_valid", false,-1);
    tracep->declBit(c+151,"o_ready", false,-1);
    tracep->declBus(c+2516,"i_data", false,-1, 8,0);
    tracep->declBit(c+2512,"o_valid", false,-1);
    tracep->declBit(c+2513,"i_ready", false,-1);
    tracep->declBus(c+2517,"o_data", false,-1, 8,0);
    tracep->declBus(c+2518,"w_data", false,-1, 8,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+2519,"r_valid", false,-1);
    tracep->declBus(c+2518,"r_data", false,-1, 8,0);
    tracep->pushNamePrefix("REG_OUTPUT ");
    tracep->declBit(c+2512,"ro_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_wbdown ");
    tracep->declBus(c+4313,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4296,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4299,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWLOGIC", false,-1, 0,0);
    tracep->declBus(c+4318,"WIDE_AW", false,-1, 31,0);
    tracep->declBus(c+4315,"SMALL_AW", false,-1, 31,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+3831,"i_wcyc", false,-1);
    tracep->declBit(c+3832,"i_wstb", false,-1);
    tracep->declBit(c+357,"i_wwe", false,-1);
    tracep->declBus(c+2520,"i_waddr", false,-1, 20,0);
    tracep->declArray(c+359,"i_wdata", false,-1, 511,0);
    tracep->declQuad(c+375,"i_wsel", false,-1, 63,0);
    tracep->declBit(c+377,"o_wstall", false,-1);
    tracep->declBit(c+378,"o_wack", false,-1);
    tracep->declArray(c+379,"o_wdata", false,-1, 511,0);
    tracep->declBit(c+3833,"o_werr", false,-1);
    tracep->declBit(c+3834,"o_scyc", false,-1);
    tracep->declBit(c+395,"o_sstb", false,-1);
    tracep->declBit(c+396,"o_swe", false,-1);
    tracep->declBus(c+397,"o_saddr", false,-1, 24,0);
    tracep->declBus(c+398,"o_sdata", false,-1, 31,0);
    tracep->declBus(c+399,"o_ssel", false,-1, 3,0);
    tracep->declBit(c+400,"i_sstall", false,-1);
    tracep->declBit(c+401,"i_sack", false,-1);
    tracep->declBus(c+402,"i_sdata", false,-1, 31,0);
    tracep->declBit(c+3835,"i_serr", false,-1);
    tracep->declBus(c+4250,"WBLSB", false,-1, 31,0);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4338,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+3834,"r_cyc", false,-1);
    tracep->declBit(c+2521,"r_stb", false,-1);
    tracep->declBit(c+396,"r_we", false,-1);
    tracep->declBit(c+378,"r_ack", false,-1);
    tracep->declBit(c+3833,"r_err", false,-1);
    tracep->declBit(c+2522,"r_first", false,-1);
    tracep->declBus(c+397,"r_addr", false,-1, 24,0);
    tracep->declBit(c+2523,"s_null", false,-1);
    tracep->declBit(c+2524,"s_last", false,-1);
    tracep->declArray(c+2525,"s_data", false,-1, 511,0);
    tracep->declArray(c+379,"r_data", false,-1, 511,0);
    tracep->declArray(c+2541,"nxt_data", false,-1, 511,0);
    tracep->declQuad(c+2557,"s_sel", false,-1, 63,0);
    tracep->declQuad(c+2559,"nxt_sel", false,-1, 63,0);
    tracep->declBus(c+2561,"r_shift", false,-1, 3,0);
    tracep->declBus(c+2562,"fifo_addr", false,-1, 3,0);
    tracep->declBus(c+2563,"i_subaddr", false,-1, 3,0);
    tracep->declBit(c+2564,"fifo_full", false,-1);
    tracep->declBit(c+2565,"fifo_empty", false,-1);
    tracep->declBit(c+2566,"fifo_ack", false,-1);
    tracep->declBus(c+2567,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4430,"subaddr_fn__Vstatic__fnk", false,-1, 31,0);
    tracep->declBus(c+2568,"subaddr_fn__Vstatic__fm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4338,"BW", false,-1, 31,0);
    tracep->declBus(c+4338,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+111,"i_reset", false,-1);
    tracep->declBit(c+2569,"i_wr", false,-1);
    tracep->declBus(c+2570,"i_data", false,-1, 4,0);
    tracep->declBit(c+2564,"o_full", false,-1);
    tracep->declBus(c+2567,"o_fill", false,-1, 5,0);
    tracep->declBit(c+401,"i_rd", false,-1);
    tracep->declBus(c+2571,"o_data", false,-1, 4,0);
    tracep->declBit(c+2565,"o_empty", false,-1);
    tracep->declBus(c+4299,"FLEN", false,-1, 31,0);
    tracep->declBit(c+2572,"r_full", false,-1);
    tracep->declBit(c+2573,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2574+i*1,"mem", true,(i+0), 4,0);
    }
    tracep->declBus(c+2606,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+2607,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+2608,"w_wr", false,-1);
    tracep->declBit(c+2609,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wb32_xbar ");
    tracep->declBus(c+4249,"NM", false,-1, 31,0);
    tracep->declBus(c+4342,"NS", false,-1, 31,0);
    tracep->declBus(c+4315,"AW", false,-1, 31,0);
    tracep->declBus(c+4299,"DW", false,-1, 31,0);
    tracep->declArray(c+4431,"SLAVE_ADDR", false,-1, 299,0);
    tracep->declArray(c+4441,"SLAVE_MASK", false,-1, 299,0);
    tracep->declBus(c+4337,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4260,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBus(c+3834,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+395,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+396,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+397,"i_maddr", false,-1, 24,0);
    tracep->declBus(c+398,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+399,"i_msel", false,-1, 3,0);
    tracep->declBus(c+400,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+401,"o_mack", false,-1, 0,0);
    tracep->declBus(c+402,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+3835,"o_merr", false,-1, 0,0);
    tracep->declBus(c+3960,"o_scyc", false,-1, 11,0);
    tracep->declBus(c+3961,"o_sstb", false,-1, 11,0);
    tracep->declBus(c+3962,"o_swe", false,-1, 11,0);
    tracep->declArray(c+3963,"o_saddr", false,-1, 299,0);
    tracep->declArray(c+3973,"o_sdata", false,-1, 383,0);
    tracep->declQuad(c+3985,"o_ssel", false,-1, 47,0);
    tracep->declBus(c+3828,"i_sstall", false,-1, 11,0);
    tracep->declBus(c+3629,"i_sack", false,-1, 11,0);
    tracep->declArray(c+3630,"i_sdata", false,-1, 383,0);
    tracep->declBus(c+4451,"i_serr", false,-1, 11,0);
    tracep->declBus(c+4260,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4249,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4250,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3987+i*1,"request", true,(i+0), 12,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+7+i*1,"requested", true,(i+0), 11,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2610+i*1,"grant", true,(i+0), 12,0);
    }
    tracep->declBus(c+2611,"mgrant", false,-1, 0,0);
    tracep->declBus(c+3988,"sgrant", false,-1, 11,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2612+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2613,"mfull", false,-1, 0,0);
    tracep->declBus(c+2614,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+2615,"mempty", false,-1, 0,0);
    tracep->declBus(c+4298,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4249,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4254,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3989+i*1,"mindex", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+3834,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+3990,"m_stb", false,-1, 0,0);
    tracep->declBus(c+3991,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3992+i*1,"m_addr", true,(i+0), 24,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3993+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3994+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+4136,"m_stall", false,-1, 0,0);
    tracep->declBus(c+4137,"s_stall", false,-1, 15,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+3642+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+4227,"s_ack", false,-1, 15,0);
    tracep->declBus(c+4452,"s_err", false,-1, 15,0);
    tracep->declBus(c+3995,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+2616,"iN", false,-1, 31,0);
    tracep->declBus(c+4228,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+3996,"regrant", false,-1, 12,0);
    tracep->declBus(c+4229,"reindex", false,-1, 3,0);
    tracep->declBit(c+3997,"stay_on_channel", false,-1);
    tracep->declBit(c+3998,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+3999,"r_mindex", false,-1, 3,0);
    tracep->declBus(c+3996,"r_regrant", false,-1, 12,0);
    tracep->declBus(c+4229,"r_reindex", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+2617,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+112,"skd_stb", false,-1);
    tracep->declBit(c+4138,"skd_stall", false,-1);
    tracep->declBit(c+4000,"skd_we", false,-1);
    tracep->declBus(c+4001,"skd_addr", false,-1, 24,0);
    tracep->declBus(c+4002,"skd_data", false,-1, 31,0);
    tracep->declBus(c+4003,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+2618,"decoded", false,-1, 12,0);
    tracep->declBit(c+2619,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4342,"NS", false,-1, 31,0);
    tracep->declBus(c+4315,"AW", false,-1, 31,0);
    tracep->declBus(c+4453,"DW", false,-1, 31,0);
    tracep->declArray(c+4431,"SLAVE_ADDR", false,-1, 299,0);
    tracep->declArray(c+4441,"SLAVE_MASK", false,-1, 299,0);
    tracep->declBus(c+4375,"ACCESS_ALLOWED", false,-1, 11,0);
    tracep->declBus(c+4255,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+113,"i_valid", false,-1);
    tracep->declBit(c+4138,"o_stall", false,-1);
    tracep->declBus(c+4001,"i_addr", false,-1, 24,0);
    tracep->declQuad(c+4004,"i_data", false,-1, 36,0);
    tracep->declBit(c+3995,"o_valid", false,-1);
    tracep->declBit(c+4139,"i_stall", false,-1);
    tracep->declBus(c+2618,"o_decode", false,-1, 12,0);
    tracep->declBus(c+2620,"o_addr", false,-1, 24,0);
    tracep->declQuad(c+4006,"o_data", false,-1, 36,0);
    tracep->declBus(c+4255,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+114,"request", false,-1, 12,0);
    tracep->declBus(c+4008,"prerequest", false,-1, 11,0);
    tracep->declBus(c+24,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+115,"r_request", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+116,"r_request_NS", false,-1);
    tracep->declBit(c+117,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4454,"DW", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+118,"i_reset", false,-1);
    tracep->declBit(c+395,"i_valid", false,-1);
    tracep->declBit(c+2619,"o_ready", false,-1);
    tracep->declQuad(c+2621,"i_data", false,-1, 61,0);
    tracep->declBit(c+112,"o_valid", false,-1);
    tracep->declBit(c+4140,"i_ready", false,-1);
    tracep->declQuad(c+4009,"o_data", false,-1, 61,0);
    tracep->declQuad(c+2623,"w_data", false,-1, 61,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+400,"r_valid", false,-1);
    tracep->declQuad(c+2623,"r_data", false,-1, 61,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+401,"r_mack", false,-1, 0,0);
    tracep->declBus(c+3835,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+119,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[10] ");
    tracep->declBit(c+120,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[11] ");
    tracep->declBit(c+121,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+122,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[2] ");
    tracep->declBit(c+123,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[3] ");
    tracep->declBit(c+124,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[4] ");
    tracep->declBit(c+125,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[5] ");
    tracep->declBit(c+126,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[6] ");
    tracep->declBit(c+127,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[7] ");
    tracep->declBit(c+128,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[8] ");
    tracep->declBit(c+129,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[9] ");
    tracep->declBit(c+130,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu_arbiter_upsz ");
    tracep->declBus(c+4373,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4296,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4299,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+434,"i_scyc", false,-1);
    tracep->declBit(c+435,"i_sstb", false,-1);
    tracep->declBit(c+436,"i_swe", false,-1);
    tracep->declBus(c+2625,"i_saddr", false,-1, 25,0);
    tracep->declBus(c+438,"i_sdata", false,-1, 31,0);
    tracep->declBus(c+439,"i_ssel", false,-1, 3,0);
    tracep->declBit(c+440,"o_sstall", false,-1);
    tracep->declBit(c+441,"o_sack", false,-1);
    tracep->declBus(c+443,"o_sdata", false,-1, 31,0);
    tracep->declBit(c+442,"o_serr", false,-1);
    tracep->declBit(c+279,"o_wcyc", false,-1);
    tracep->declBit(c+280,"o_wstb", false,-1);
    tracep->declBit(c+281,"o_wwe", false,-1);
    tracep->declBus(c+282,"o_waddr", false,-1, 21,0);
    tracep->declArray(c+283,"o_wdata", false,-1, 511,0);
    tracep->declQuad(c+299,"o_wsel", false,-1, 63,0);
    tracep->declBit(c+301,"i_wstall", false,-1);
    tracep->declBit(c+302,"i_wack", false,-1);
    tracep->declArray(c+304,"i_wdata", false,-1, 511,0);
    tracep->declBit(c+303,"i_werr", false,-1);
    tracep->pushNamePrefix("UPSIZE ");
    tracep->declBus(c+4338,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+279,"r_cyc", false,-1);
    tracep->declBit(c+2626,"r_stb", false,-1);
    tracep->declBit(c+281,"r_we", false,-1);
    tracep->declBit(c+441,"r_ack", false,-1);
    tracep->declBit(c+442,"r_err", false,-1);
    tracep->declBus(c+282,"r_addr", false,-1, 21,0);
    tracep->declArray(c+283,"r_data", false,-1, 511,0);
    tracep->declArray(c+2627,"rtn_data", false,-1, 511,0);
    tracep->declQuad(c+299,"r_sel", false,-1, 63,0);
    tracep->declBus(c+2643,"r_shift", false,-1, 3,0);
    tracep->declBit(c+2644,"fifo_full", false,-1);
    tracep->declBit(c+2645,"ign_fifo_empty", false,-1);
    tracep->declBus(c+2646,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBus(c+2647,"w_shift", false,-1, 3,0);
    tracep->declBus(c+2648,"fifo_shift", false,-1, 3,0);
    tracep->declArray(c+2649,"w_data", false,-1, 511,0);
    tracep->declQuad(c+2665,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4250,"BW", false,-1, 31,0);
    tracep->declBus(c+4338,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+72,"i_reset", false,-1);
    tracep->declBit(c+2667,"i_wr", false,-1);
    tracep->declBus(c+2643,"i_data", false,-1, 3,0);
    tracep->declBit(c+2644,"o_full", false,-1);
    tracep->declBus(c+2646,"o_fill", false,-1, 5,0);
    tracep->declBit(c+302,"i_rd", false,-1);
    tracep->declBus(c+2648,"o_data", false,-1, 3,0);
    tracep->declBit(c+2645,"o_empty", false,-1);
    tracep->declBus(c+4299,"FLEN", false,-1, 31,0);
    tracep->declBit(c+2644,"r_full", false,-1);
    tracep->declBit(c+2645,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2668+i*1,"mem", true,(i+0), 3,0);
    }
    tracep->declBus(c+2700,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+2701,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+2702,"w_wr", false,-1);
    tracep->declBit(c+2703,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wbu_xbar ");
    tracep->declBus(c+4249,"NM", false,-1, 31,0);
    tracep->declBus(c+4259,"NS", false,-1, 31,0);
    tracep->declBus(c+4313,"AW", false,-1, 31,0);
    tracep->declBus(c+4299,"DW", false,-1, 31,0);
    tracep->declQuad(c+4455,"SLAVE_ADDR", false,-1, 53,0);
    tracep->declQuad(c+4457,"SLAVE_MASK", false,-1, 53,0);
    tracep->declBus(c+4337,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4260,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBus(c+425,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+426,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+427,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+428,"i_maddr", false,-1, 26,0);
    tracep->declBus(c+429,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+4293,"i_msel", false,-1, 3,0);
    tracep->declBus(c+430,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+431,"o_mack", false,-1, 0,0);
    tracep->declBus(c+433,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+432,"o_merr", false,-1, 0,0);
    tracep->declBus(c+2704,"o_scyc", false,-1, 1,0);
    tracep->declBus(c+2705,"o_sstb", false,-1, 1,0);
    tracep->declBus(c+2706,"o_swe", false,-1, 1,0);
    tracep->declQuad(c+2707,"o_saddr", false,-1, 53,0);
    tracep->declQuad(c+2709,"o_sdata", false,-1, 63,0);
    tracep->declBus(c+2711,"o_ssel", false,-1, 7,0);
    tracep->declBus(c+4230,"i_sstall", false,-1, 1,0);
    tracep->declBus(c+4231,"i_sack", false,-1, 1,0);
    tracep->declQuad(c+2712,"i_sdata", false,-1, 63,0);
    tracep->declBus(c+2714,"i_serr", false,-1, 1,0);
    tracep->declBus(c+4260,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4249,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4259,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2715+i*1,"request", true,(i+0), 2,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+25+i*1,"requested", true,(i+0), 1,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2716+i*1,"grant", true,(i+0), 2,0);
    }
    tracep->declBus(c+2717,"mgrant", false,-1, 0,0);
    tracep->declBus(c+2718,"sgrant", false,-1, 1,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2719+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2720,"mfull", false,-1, 0,0);
    tracep->declBus(c+2721,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+2722,"mempty", false,-1, 0,0);
    tracep->declBus(c+4298,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4249,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4250,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4011+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+425,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+2723,"m_stb", false,-1, 0,0);
    tracep->declBus(c+2724,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2725+i*1,"m_addr", true,(i+0), 26,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2726+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2727+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+131,"m_stall", false,-1, 0,0);
    tracep->declBus(c+73,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2728+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+4232,"s_ack", false,-1, 3,0);
    tracep->declBus(c+2732,"s_err", false,-1, 3,0);
    tracep->declBus(c+2733,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+2734,"iN", false,-1, 31,0);
    tracep->declBus(c+4233,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4012,"regrant", false,-1, 2,0);
    tracep->declBus(c+4234,"reindex", false,-1, 1,0);
    tracep->declBit(c+2735,"stay_on_channel", false,-1);
    tracep->declBit(c+2736,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4013,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4012,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4234,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+2737,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+74,"skd_stb", false,-1);
    tracep->declBit(c+132,"skd_stall", false,-1);
    tracep->declBit(c+2738,"skd_we", false,-1);
    tracep->declBus(c+2739,"skd_addr", false,-1, 26,0);
    tracep->declBus(c+2740,"skd_data", false,-1, 31,0);
    tracep->declBus(c+2741,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+2742,"decoded", false,-1, 2,0);
    tracep->declBit(c+2743,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4259,"NS", false,-1, 31,0);
    tracep->declBus(c+4313,"AW", false,-1, 31,0);
    tracep->declBus(c+4453,"DW", false,-1, 31,0);
    tracep->declQuad(c+4455,"SLAVE_ADDR", false,-1, 53,0);
    tracep->declQuad(c+4457,"SLAVE_MASK", false,-1, 53,0);
    tracep->declBus(c+4304,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4255,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+75,"i_valid", false,-1);
    tracep->declBit(c+132,"o_stall", false,-1);
    tracep->declBus(c+2739,"i_addr", false,-1, 26,0);
    tracep->declQuad(c+2744,"i_data", false,-1, 36,0);
    tracep->declBit(c+2733,"o_valid", false,-1);
    tracep->declBit(c+133,"i_stall", false,-1);
    tracep->declBus(c+2742,"o_decode", false,-1, 2,0);
    tracep->declBus(c+2746,"o_addr", false,-1, 26,0);
    tracep->declQuad(c+2747,"o_data", false,-1, 36,0);
    tracep->declBus(c+4255,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+76,"request", false,-1, 2,0);
    tracep->declBus(c+2749,"prerequest", false,-1, 1,0);
    tracep->declBus(c+30,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+77,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+78,"r_request_NS", false,-1);
    tracep->declBit(c+79,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+80,"i_reset", false,-1);
    tracep->declBit(c+426,"i_valid", false,-1);
    tracep->declBit(c+2743,"o_ready", false,-1);
    tracep->declQuad(c+2750,"i_data", false,-1, 63,0);
    tracep->declBit(c+74,"o_valid", false,-1);
    tracep->declBit(c+134,"i_ready", false,-1);
    tracep->declQuad(c+2752,"o_data", false,-1, 63,0);
    tracep->declQuad(c+2754,"w_data", false,-1, 63,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+430,"r_valid", false,-1);
    tracep->declQuad(c+2754,"r_data", false,-1, 63,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+431,"r_mack", false,-1, 0,0);
    tracep->declBus(c+432,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+81,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+82,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbwide_xbar ");
    tracep->declBus(c+4250,"NM", false,-1, 31,0);
    tracep->declBus(c+4259,"NS", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBus(c+4296,"DW", false,-1, 31,0);
    tracep->declQuad(c+4459,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4461,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4337,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4260,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4298,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4255,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBus(c+4014,"i_mcyc", false,-1, 3,0);
    tracep->declBus(c+2756,"i_mstb", false,-1, 3,0);
    tracep->declBus(c+2757,"i_mwe", false,-1, 3,0);
    tracep->declArray(c+2758,"i_maddr", false,-1, 87,0);
    tracep->declArray(c+2761,"i_mdata", false,-1, 2047,0);
    tracep->declArray(c+2825,"i_msel", false,-1, 255,0);
    tracep->declBus(c+2833,"o_mstall", false,-1, 3,0);
    tracep->declBus(c+2834,"o_mack", false,-1, 3,0);
    tracep->declArray(c+2835,"o_mdata", false,-1, 2047,0);
    tracep->declBus(c+2899,"o_merr", false,-1, 3,0);
    tracep->declBus(c+4015,"o_scyc", false,-1, 1,0);
    tracep->declBus(c+4016,"o_sstb", false,-1, 1,0);
    tracep->declBus(c+2900,"o_swe", false,-1, 1,0);
    tracep->declQuad(c+2901,"o_saddr", false,-1, 43,0);
    tracep->declArray(c+2903,"o_sdata", false,-1, 1023,0);
    tracep->declArray(c+2935,"o_ssel", false,-1, 127,0);
    tracep->declBus(c+2939,"i_sstall", false,-1, 1,0);
    tracep->declBus(c+2940,"i_sack", false,-1, 1,0);
    tracep->declArray(c+2941,"i_sdata", false,-1, 1023,0);
    tracep->declBus(c+4017,"i_serr", false,-1, 1,0);
    tracep->declBus(c+4260,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4259,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4259,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2973+i*1,"request", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2977+i*1,"requested", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2981+i*1,"grant", true,(i+0), 2,0);
    }
    tracep->declBus(c+2985,"mgrant", false,-1, 3,0);
    tracep->declBus(c+4018,"sgrant", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2986+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2990,"mfull", false,-1, 3,0);
    tracep->declBus(c+2991,"mnearfull", false,-1, 3,0);
    tracep->declBus(c+2992,"mempty", false,-1, 3,0);
    tracep->declBus(c+4306,"timed_out", false,-1, 3,0);
    tracep->declBus(c+4250,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4250,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4019+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4023+i*1,"sindex", true,(i+0), 1,0);
    }
    tracep->declBus(c+4014,"m_cyc", false,-1, 3,0);
    tracep->declBus(c+2993,"m_stb", false,-1, 3,0);
    tracep->declBus(c+2994,"m_we", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2995+i*1,"m_addr", true,(i+0), 21,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+2999+i*16,"m_data", true,(i+0), 511,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+3063+i*2,"m_sel", true,(i+0), 63,0);
    }
    tracep->declBus(c+4027,"m_stall", false,-1, 3,0);
    tracep->declBus(c+4028,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+3071+i*16,"s_data", true,(i+0), 511,0);
    }
    tracep->declBus(c+4029,"s_ack", false,-1, 3,0);
    tracep->declBus(c+4030,"s_err", false,-1, 3,0);
    tracep->declBus(c+3135,"dcd_stb", false,-1, 3,0);
    tracep->declBus(c+4255,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+4235,"iN", false,-1, 31,0);
    tracep->declBus(c+4236,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4031,"regrant", false,-1, 2,0);
    tracep->declBus(c+4237,"reindex", false,-1, 1,0);
    tracep->declBit(c+3136,"stay_on_channel", false,-1);
    tracep->declBit(c+4032,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4033,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4031,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4237,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[1] ");
    tracep->declBus(c+4034,"regrant", false,-1, 2,0);
    tracep->declBus(c+4238,"reindex", false,-1, 1,0);
    tracep->declBit(c+3137,"stay_on_channel", false,-1);
    tracep->declBit(c+4035,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4036,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4034,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4238,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[2] ");
    tracep->declBus(c+4037,"regrant", false,-1, 2,0);
    tracep->declBus(c+4239,"reindex", false,-1, 1,0);
    tracep->declBit(c+3138,"stay_on_channel", false,-1);
    tracep->declBit(c+4038,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4039,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4037,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4239,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[3] ");
    tracep->declBus(c+4040,"regrant", false,-1, 2,0);
    tracep->declBus(c+4240,"reindex", false,-1, 1,0);
    tracep->declBit(c+3139,"stay_on_channel", false,-1);
    tracep->declBit(c+4041,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4042,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4040,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4240,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+3140,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[1] ");
    tracep->declBus(c+3141,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[2] ");
    tracep->declBus(c+3142,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[3] ");
    tracep->declBus(c+3143,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+83,"skd_stb", false,-1);
    tracep->declBit(c+4043,"skd_stall", false,-1);
    tracep->declBit(c+3144,"skd_we", false,-1);
    tracep->declBus(c+3145,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3146,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3162,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3164,"decoded", false,-1, 2,0);
    tracep->declBit(c+3165,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4259,"NS", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBus(c+4463,"DW", false,-1, 31,0);
    tracep->declQuad(c+4459,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4461,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4304,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4255,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+84,"i_valid", false,-1);
    tracep->declBit(c+4043,"o_stall", false,-1);
    tracep->declBus(c+3145,"i_addr", false,-1, 21,0);
    tracep->declArray(c+3166,"i_data", false,-1, 576,0);
    tracep->declBit(c+3185,"o_valid", false,-1);
    tracep->declBit(c+4044,"i_stall", false,-1);
    tracep->declBus(c+3164,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3186,"o_addr", false,-1, 21,0);
    tracep->declArray(c+3187,"o_data", false,-1, 576,0);
    tracep->declBus(c+4255,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+85,"request", false,-1, 2,0);
    tracep->declBus(c+3206,"prerequest", false,-1, 1,0);
    tracep->declBus(c+31,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+86,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+87,"r_request_NS", false,-1);
    tracep->declBit(c+88,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4464,"DW", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+89,"i_reset", false,-1);
    tracep->declBit(c+177,"i_valid", false,-1);
    tracep->declBit(c+3165,"o_ready", false,-1);
    tracep->declArray(c+3207,"i_data", false,-1, 598,0);
    tracep->declBit(c+83,"o_valid", false,-1);
    tracep->declBit(c+4045,"i_ready", false,-1);
    tracep->declArray(c+3226,"o_data", false,-1, 598,0);
    tracep->declArray(c+3245,"w_data", false,-1, 598,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3264,"r_valid", false,-1);
    tracep->declArray(c+3245,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[1] ");
    tracep->declBit(c+90,"skd_stb", false,-1);
    tracep->declBit(c+4046,"skd_stall", false,-1);
    tracep->declBit(c+3265,"skd_we", false,-1);
    tracep->declBus(c+3266,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3267,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3283,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3285,"decoded", false,-1, 2,0);
    tracep->declBit(c+3286,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4259,"NS", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBus(c+4463,"DW", false,-1, 31,0);
    tracep->declQuad(c+4459,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4461,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4304,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4255,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+91,"i_valid", false,-1);
    tracep->declBit(c+4046,"o_stall", false,-1);
    tracep->declBus(c+3266,"i_addr", false,-1, 21,0);
    tracep->declArray(c+3287,"i_data", false,-1, 576,0);
    tracep->declBit(c+3306,"o_valid", false,-1);
    tracep->declBit(c+4047,"i_stall", false,-1);
    tracep->declBus(c+3285,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3307,"o_addr", false,-1, 21,0);
    tracep->declArray(c+3308,"o_data", false,-1, 576,0);
    tracep->declBus(c+4255,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+92,"request", false,-1, 2,0);
    tracep->declBus(c+3327,"prerequest", false,-1, 1,0);
    tracep->declBus(c+32,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+93,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+94,"r_request_NS", false,-1);
    tracep->declBit(c+95,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4464,"DW", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+96,"i_reset", false,-1);
    tracep->declBit(c+217,"i_valid", false,-1);
    tracep->declBit(c+3286,"o_ready", false,-1);
    tracep->declArray(c+3328,"i_data", false,-1, 598,0);
    tracep->declBit(c+90,"o_valid", false,-1);
    tracep->declBit(c+4048,"i_ready", false,-1);
    tracep->declArray(c+3347,"o_data", false,-1, 598,0);
    tracep->declArray(c+3366,"w_data", false,-1, 598,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3385,"r_valid", false,-1);
    tracep->declArray(c+3366,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[2] ");
    tracep->declBit(c+97,"skd_stb", false,-1);
    tracep->declBit(c+4049,"skd_stall", false,-1);
    tracep->declBit(c+3386,"skd_we", false,-1);
    tracep->declBus(c+3387,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3388,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3404,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3406,"decoded", false,-1, 2,0);
    tracep->declBit(c+3407,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4259,"NS", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBus(c+4463,"DW", false,-1, 31,0);
    tracep->declQuad(c+4459,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4461,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4304,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4255,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+98,"i_valid", false,-1);
    tracep->declBit(c+4049,"o_stall", false,-1);
    tracep->declBus(c+3387,"i_addr", false,-1, 21,0);
    tracep->declArray(c+3408,"i_data", false,-1, 576,0);
    tracep->declBit(c+3427,"o_valid", false,-1);
    tracep->declBit(c+4050,"i_stall", false,-1);
    tracep->declBus(c+3406,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3428,"o_addr", false,-1, 21,0);
    tracep->declArray(c+3429,"o_data", false,-1, 576,0);
    tracep->declBus(c+4255,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+99,"request", false,-1, 2,0);
    tracep->declBus(c+3448,"prerequest", false,-1, 1,0);
    tracep->declBus(c+33,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+100,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+101,"r_request_NS", false,-1);
    tracep->declBit(c+102,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4464,"DW", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+103,"i_reset", false,-1);
    tracep->declBit(c+239,"i_valid", false,-1);
    tracep->declBit(c+3407,"o_ready", false,-1);
    tracep->declArray(c+3449,"i_data", false,-1, 598,0);
    tracep->declBit(c+97,"o_valid", false,-1);
    tracep->declBit(c+4051,"i_ready", false,-1);
    tracep->declArray(c+3468,"o_data", false,-1, 598,0);
    tracep->declArray(c+3487,"w_data", false,-1, 598,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3506,"r_valid", false,-1);
    tracep->declArray(c+3487,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[3] ");
    tracep->declBit(c+104,"skd_stb", false,-1);
    tracep->declBit(c+4052,"skd_stall", false,-1);
    tracep->declBit(c+3507,"skd_we", false,-1);
    tracep->declBus(c+3508,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3509,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3525,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3527,"decoded", false,-1, 2,0);
    tracep->declBit(c+3528,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4259,"NS", false,-1, 31,0);
    tracep->declBus(c+4253,"AW", false,-1, 31,0);
    tracep->declBus(c+4463,"DW", false,-1, 31,0);
    tracep->declQuad(c+4459,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4461,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4304,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4255,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+4142,"i_reset", false,-1);
    tracep->declBit(c+105,"i_valid", false,-1);
    tracep->declBit(c+4052,"o_stall", false,-1);
    tracep->declBus(c+3508,"i_addr", false,-1, 21,0);
    tracep->declArray(c+3529,"i_data", false,-1, 576,0);
    tracep->declBit(c+3548,"o_valid", false,-1);
    tracep->declBit(c+4053,"i_stall", false,-1);
    tracep->declBus(c+3527,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3549,"o_addr", false,-1, 21,0);
    tracep->declArray(c+3550,"o_data", false,-1, 576,0);
    tracep->declBus(c+4255,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+106,"request", false,-1, 2,0);
    tracep->declBus(c+3569,"prerequest", false,-1, 1,0);
    tracep->declBus(c+34,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+107,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+108,"r_request_NS", false,-1);
    tracep->declBit(c+109,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4298,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4298,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4464,"DW", false,-1, 31,0);
    tracep->declBus(c+4255,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4141,"i_clk", false,-1);
    tracep->declBit(c+110,"i_reset", false,-1);
    tracep->declBit(c+280,"i_valid", false,-1);
    tracep->declBit(c+3528,"o_ready", false,-1);
    tracep->declArray(c+3570,"i_data", false,-1, 598,0);
    tracep->declBit(c+104,"o_valid", false,-1);
    tracep->declBit(c+4054,"i_ready", false,-1);
    tracep->declArray(c+3589,"o_data", false,-1, 598,0);
    tracep->declArray(c+3608,"w_data", false,-1, 598,0);
    tracep->declBit(c+4261,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+301,"r_valid", false,-1);
    tracep->declArray(c+3608,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+2834,"r_mack", false,-1, 3,0);
    tracep->declBus(c+2899,"r_merr", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SINDEX[0] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+3627,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4055,"regrant", false,-1, 3,0);
    tracep->declBus(c+4056,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_SINDEX[1] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+3628,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4057,"regrant", false,-1, 3,0);
    tracep->declBus(c+4058,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+135,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+136,"drop_sgrant", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vmain___024root__trace_init_top(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_top\n"); );
    // Body
    Vmain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain___024root__trace_register(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmain___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmain___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain___024root__trace_full_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_top_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<15>/*479:0*/ Vmain__ConstPool__CONST_hbd99daea_0;
extern const VlWide<16>/*511:0*/ Vmain__ConstPool__CONST_h93e1b771_0;
extern const VlWide<18>/*575:0*/ Vmain__ConstPool__CONST_hb679b2e5_0;
extern const VlWide<10>/*319:0*/ Vmain__ConstPool__CONST_h3dd842ba_0;
extern const VlWide<10>/*319:0*/ Vmain__ConstPool__CONST_h21727c79_0;

VL_ATTR_COLD void Vmain___024root__trace_full_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    VlWide<12>/*383:0*/ __Vtemp_ha8cd40b0__0;
    VlWide<3>/*95:0*/ __Vtemp_hf465e4c8__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k),32);
    bufp->fullCData(oldp+2,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv),7);
    bufp->fullIData(oldp+3,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__k),32);
    bufp->fullCData(oldp+4,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__newv),7);
    bufp->fullIData(oldp+5,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k),32);
    bufp->fullIData(oldp+6,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__ik),32);
    bufp->fullSData(oldp+7,(vlSelf->main__DOT__wb32_xbar__DOT__requested[0]),12);
    bufp->fullBit(oldp+8,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[0]));
    bufp->fullBit(oldp+9,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[1]));
    bufp->fullBit(oldp+10,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[2]));
    bufp->fullBit(oldp+11,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[3]));
    bufp->fullBit(oldp+12,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[4]));
    bufp->fullBit(oldp+13,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[5]));
    bufp->fullBit(oldp+14,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[6]));
    bufp->fullBit(oldp+15,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[7]));
    bufp->fullBit(oldp+16,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[8]));
    bufp->fullBit(oldp+17,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[9]));
    bufp->fullBit(oldp+18,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[10]));
    bufp->fullBit(oldp+19,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[11]));
    bufp->fullBit(oldp+20,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[12]));
    bufp->fullBit(oldp+21,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[13]));
    bufp->fullBit(oldp+22,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[14]));
    bufp->fullBit(oldp+23,(vlSelf->main__DOT__wb32_xbar__DOT__sindex[15]));
    bufp->fullIData(oldp+24,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__iM),32);
    bufp->fullCData(oldp+25,(vlSelf->main__DOT__wbu_xbar__DOT__requested[0]),2);
    bufp->fullBit(oldp+26,(vlSelf->main__DOT__wbu_xbar__DOT__sindex[0]));
    bufp->fullBit(oldp+27,(vlSelf->main__DOT__wbu_xbar__DOT__sindex[1]));
    bufp->fullBit(oldp+28,(vlSelf->main__DOT__wbu_xbar__DOT__sindex[2]));
    bufp->fullBit(oldp+29,(vlSelf->main__DOT__wbu_xbar__DOT__sindex[3]));
    bufp->fullIData(oldp+30,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__iM),32);
    bufp->fullIData(oldp+31,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__iM),32);
    bufp->fullIData(oldp+32,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__iM),32);
    bufp->fullIData(oldp+33,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__iM),32);
    bufp->fullIData(oldp+34,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__iM),32);
    bufp->fullIData(oldp+35,((((IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted) 
                               << 0x1fU) | vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4)),32);
    bufp->fullIData(oldp+36,((((IData)(vlSelf->main__DOT__i2ci__DOT__half_insn) 
                               << 0x1cU) | (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual) 
                                             << 0x18U) 
                                            | vlSelf->main__DOT__i2ci__DOT____VdfgTmp_h373818eb__0))),32);
    bufp->fullBit(oldp+37,(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN));
    bufp->fullBit(oldp+38,(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset));
    bufp->fullIData(oldp+39,(vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4),31);
    bufp->fullBit(oldp+40,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc));
    bufp->fullBit(oldp+41,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb));
    bufp->fullBit(oldp+42,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_we));
    bufp->fullCData(oldp+43,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_addr),7);
    bufp->fullIData(oldp+44,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_data),32);
    bufp->fullBit(oldp+45,(vlSelf->main__DOT__swic__DOT__cpu_op_stall));
    bufp->fullBit(oldp+46,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_op_stall) 
                            & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                               >> 1U))));
    bufp->fullBit(oldp+47,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ready));
    bufp->fullBit(oldp+48,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce));
    bufp->fullBit(oldp+49,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance));
    bufp->fullBit(oldp+50,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall));
    bufp->fullBit(oldp+51,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_stalled));
    bufp->fullBit(oldp+52,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce));
    bufp->fullBit(oldp+53,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA) 
                            & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h39e03a19__0) 
                                & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_he857573c__0) 
                                   & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                      >> 6U))) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                                   >> 6U) 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd))))));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB) 
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
    bufp->fullBit(oldp+55,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_stall));
    bufp->fullIData(oldp+56,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v),32);
    bufp->fullIData(oldp+57,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v),32);
    bufp->fullBit(oldp+58,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce));
    bufp->fullBit(oldp+59,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy)) 
                             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu)) 
                            | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0))));
    bufp->fullBit(oldp+60,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce));
    bufp->fullBit(oldp+61,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_stalled));
    bufp->fullBit(oldp+62,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce));
    bufp->fullBit(oldp+63,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional));
    bufp->fullBit(oldp+64,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset));
    bufp->fullCData(oldp+65,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc),3);
    bufp->fullCData(oldp+66,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc),3);
    bufp->fullCData(oldp+67,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc),3);
    bufp->fullBit(oldp+68,(((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
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
    bufp->fullBit(oldp+69,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__this_is_a_multiply_op));
    bufp->fullBit(oldp+70,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN));
    bufp->fullBit(oldp+71,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset));
    bufp->fullBit(oldp+72,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset));
    bufp->fullCData(oldp+73,(vlSelf->main__DOT__wbu_xbar__DOT__s_stall),4);
    bufp->fullBit(oldp+74,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+75,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+76,((((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                         & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+77,(((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+78,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+79,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+80,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+81,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+82,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+83,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+84,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+85,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                         & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+86,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+87,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+88,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+89,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+90,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb));
    bufp->fullBit(oldp+91,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+92,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid))) 
                                         & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+93,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+94,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+95,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+96,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+97,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb));
    bufp->fullBit(oldp+98,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+99,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid))) 
                                         & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+100,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid))) 
                               & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+101,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+102,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+103,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+104,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb));
    bufp->fullBit(oldp+105,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+106,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid))) 
                                          & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+107,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid))) 
                               & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+108,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+109,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+110,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+111,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset));
    bufp->fullBit(oldp+112,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+113,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullSData(oldp+114,((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 0xcU) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),13);
    bufp->fullSData(oldp+115,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),12);
    bufp->fullBit(oldp+116,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+117,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+118,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+119,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+120,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+121,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__11__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+122,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+123,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+124,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+125,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+126,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+127,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+128,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+129,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+130,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+131,(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
    bufp->fullBit(oldp+132,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+133,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+134,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+135,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+136,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+137,(vlSelf->main__DOT__scope1_ddr3_int));
    bufp->fullBit(oldp+138,(vlSelf->main__DOT__scope2_ddr3_int));
    bufp->fullBit(oldp+139,((1U & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                   >> 5U))));
    bufp->fullBit(oldp+140,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)))));
    bufp->fullBit(oldp+141,((1U & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                   >> 5U))));
    bufp->fullBit(oldp+142,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+143,(vlSelf->main__DOT__i2cscope_int));
    bufp->fullBit(oldp+144,(vlSelf->main__DOT__scope3_ddr3_int));
    bufp->fullBit(oldp+145,(vlSelf->main__DOT__gpio_int));
    bufp->fullBit(oldp+146,(vlSelf->main__DOT__spio_int));
    bufp->fullBit(oldp+147,(vlSelf->main__DOT__r_sirefclk_en));
    bufp->fullIData(oldp+148,(vlSelf->main__DOT__r_sirefclk_data),30);
    bufp->fullBit(oldp+149,(vlSelf->main__DOT__w_sirefclk_unused_stb));
    bufp->fullBit(oldp+150,(vlSelf->main__DOT__r_sirefclk_ack));
    bufp->fullBit(oldp+151,((1U & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullBit(oldp+152,(vlSelf->main__DOT__i2c_valid));
    bufp->fullBit(oldp+153,(vlSelf->main__DOT__i2c_ready));
    bufp->fullBit(oldp+154,(vlSelf->main__DOT__i2c_last));
    bufp->fullCData(oldp+155,(vlSelf->main__DOT__i2c_data),8);
    bufp->fullCData(oldp+156,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid),2);
    bufp->fullBit(oldp+157,(vlSelf->main__DOT__w_console_rx_stb));
    bufp->fullBit(oldp+158,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+159,(vlSelf->main__DOT__w_console_busy));
    bufp->fullCData(oldp+160,(vlSelf->main__DOT__w_console_rx_data),7);
    bufp->fullCData(oldp+161,(vlSelf->main__DOT__w_console_tx_data),7);
    bufp->fullIData(oldp+162,(vlSelf->main__DOT__uart_debug),32);
    bufp->fullBit(oldp+163,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb));
    bufp->fullBit(oldp+164,(vlSelf->main__DOT__raw_cpu_dbg_ack));
    bufp->fullSData(oldp+165,((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+166,(vlSelf->main__DOT__zip_cpu_int));
    bufp->fullCData(oldp+167,(vlSelf->main__DOT__wbu_rx_data),8);
    bufp->fullCData(oldp+168,(vlSelf->main__DOT__genbus__DOT__ps_data),8);
    bufp->fullBit(oldp+169,(vlSelf->main__DOT__wbu_rx_stb));
    bufp->fullBit(oldp+170,(vlSelf->main__DOT__genbus__DOT__ps_full));
    bufp->fullBit(oldp+171,(vlSelf->main__DOT__txv__DOT__r_busy));
    bufp->fullBit(oldp+172,(vlSelf->main__DOT__genbus__DOT__r_wdt_reset));
    bufp->fullCData(oldp+173,(vlSelf->main__DOT__w_led),8);
    bufp->fullSData(oldp+174,((((IData)(vlSelf->main__DOT__spio_int) 
                                << 8U) | ((0x80U & 
                                           ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                            << 2U)) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                                << 1U))))),15);
    bufp->fullSData(oldp+175,((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+176,(vlSelf->main__DOT__wbwide_i2cdma_cyc));
    bufp->fullBit(oldp+177,(vlSelf->main__DOT__wbwide_i2cdma_stb));
    bufp->fullIData(oldp+178,(vlSelf->main__DOT__wbwide_i2cdma_addr),22);
    bufp->fullWData(oldp+179,(vlSelf->main__DOT__wbwide_i2cdma_data),512);
    bufp->fullQData(oldp+195,(vlSelf->main__DOT__wbwide_i2cdma_sel),64);
    bufp->fullBit(oldp+197,((1U & (IData)(vlSelf->__VdfgTmp_h503d14d1__0))));
    bufp->fullBit(oldp+198,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))));
    bufp->fullBit(oldp+199,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))));
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
    bufp->fullWData(oldp+200,(__Vtemp_h053daff0__0),512);
    bufp->fullBit(oldp+216,(vlSelf->main__DOT__wbwide_i2cm_cyc));
    bufp->fullBit(oldp+217,(vlSelf->main__DOT__wbwide_i2cm_stb));
    bufp->fullIData(oldp+218,(vlSelf->main__DOT__wbwide_i2cm_addr),22);
    bufp->fullBit(oldp+219,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+220,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 1U))));
    bufp->fullBit(oldp+221,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+222,(__Vtemp_h3711b190__0),512);
    bufp->fullBit(oldp+238,(vlSelf->main__DOT__wbwide_zip_cyc));
    bufp->fullBit(oldp+239,(vlSelf->main__DOT__wbwide_zip_stb));
    bufp->fullBit(oldp+240,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                    ? (IData)(vlSelf->main__DOT__swic__DOT__cpu_we)
                                    : (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))))));
    bufp->fullIData(oldp+241,(vlSelf->main__DOT__wbwide_zip_addr),22);
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
    bufp->fullWData(oldp+242,(__Vtemp_h58eb921b__0),512);
    bufp->fullQData(oldp+258,(((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                    : 0xffffffffffffffffULL)
                                : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                    : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel))),64);
    bufp->fullBit(oldp+260,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+261,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 2U))));
    bufp->fullBit(oldp+262,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+263,(__Vtemp_hc1d82fb0__0),512);
    bufp->fullBit(oldp+279,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc));
    bufp->fullBit(oldp+280,(vlSelf->main__DOT__wbwide_wbu_arbiter_stb));
    bufp->fullBit(oldp+281,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we));
    bufp->fullIData(oldp+282,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr),22);
    bufp->fullWData(oldp+283,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data),512);
    bufp->fullQData(oldp+299,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel),64);
    bufp->fullBit(oldp+301,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+302,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 3U))));
    bufp->fullBit(oldp+303,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+304,(__Vtemp_hc1851150__0),512);
    bufp->fullBit(oldp+320,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe))));
    bufp->fullIData(oldp+321,((0x3fffffU & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr))),22);
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
    bufp->fullWData(oldp+322,(__Vtemp_h07963193__0),512);
    bufp->fullQData(oldp+338,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))),64);
    bufp->fullBit(oldp+340,(vlSelf->main__DOT__wbwide_bkram_ack));
    bufp->fullWData(oldp+341,(vlSelf->main__DOT__wbwide_bkram_idata),512);
    bufp->fullBit(oldp+357,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                                   >> 1U))));
    bufp->fullIData(oldp+358,((0x3fffffU & (IData)(
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
    bufp->fullWData(oldp+359,(__Vtemp_h07b62ab3__0),512);
    bufp->fullQData(oldp+375,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])))),64);
    bufp->fullBit(oldp+377,(vlSelf->main__DOT__wbwide_wbdown_stall));
    bufp->fullBit(oldp+378,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack));
    bufp->fullWData(oldp+379,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data),512);
    bufp->fullBit(oldp+395,(vlSelf->main__DOT__wb32_wbdown_stb));
    bufp->fullBit(oldp+396,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we));
    bufp->fullIData(oldp+397,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr),25);
    bufp->fullIData(oldp+398,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU]),32);
    bufp->fullCData(oldp+399,((0xfU & (IData)((vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                               >> 0x3cU)))),4);
    bufp->fullBit(oldp+400,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+401,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullIData(oldp+402,(vlSelf->main__DOT__wb32_wbdown_idata),32);
    bufp->fullIData(oldp+403,((((~ (IData)(vlSelf->main__DOT__r_sirefclk_en)) 
                                << 0x1fU) | vlSelf->main__DOT__r_sirefclk_data)),32);
    bufp->fullBit(oldp+404,(vlSelf->main__DOT__wb32_spio_ack));
    bufp->fullIData(oldp+405,((((IData)(vlSelf->main__DOT__spioi__DOT__led_demo) 
                                << 0x18U) | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw) 
                                                 << 8U) 
                                                | (IData)(vlSelf->main__DOT__spioi__DOT__r_led))))),32);
    bufp->fullBit(oldp+406,(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack));
    bufp->fullIData(oldp+407,(vlSelf->main__DOT__i2cscopei__DOT__o_bus_data),32);
    bufp->fullBit(oldp+408,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+409,(vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+410,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+411,(vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+412,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+413,(vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+414,(vlSelf->main__DOT__wb32_i2cs_ack));
    bufp->fullIData(oldp+415,(vlSelf->main__DOT__i2ci__DOT__bus_read_data),32);
    bufp->fullBit(oldp+416,(vlSelf->main__DOT__wb32_i2cdma_ack));
    bufp->fullIData(oldp+417,(vlSelf->main__DOT__wb32_i2cdma_idata),32);
    bufp->fullBit(oldp+418,(vlSelf->main__DOT__wb32_uart_ack));
    bufp->fullIData(oldp+419,(vlSelf->main__DOT__wb32_uart_idata),32);
    bufp->fullBit(oldp+420,(vlSelf->main__DOT__wb32_fan_ack));
    bufp->fullIData(oldp+421,(vlSelf->main__DOT__wb32_fan_idata),32);
    bufp->fullBit(oldp+422,(vlSelf->main__DOT__r_wb32_sio_ack));
    bufp->fullIData(oldp+423,(vlSelf->main__DOT__r_wb32_sio_data),32);
    bufp->fullBit(oldp+424,(vlSelf->main__DOT__r_cfg_ack));
    bufp->fullBit(oldp+425,(vlSelf->main__DOT__wbu_cyc));
    bufp->fullBit(oldp+426,(vlSelf->main__DOT__wbu_stb));
    bufp->fullBit(oldp+427,(vlSelf->main__DOT__wbu_we));
    bufp->fullIData(oldp+428,((0x7ffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),27);
    bufp->fullIData(oldp+429,(vlSelf->main__DOT__wbu_data),32);
    bufp->fullBit(oldp+430,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+431,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullBit(oldp+432,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullIData(oldp+433,(vlSelf->main__DOT__wbu_idata),32);
    bufp->fullBit(oldp+434,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))));
    bufp->fullBit(oldp+435,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb))));
    bufp->fullBit(oldp+436,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe))));
    bufp->fullIData(oldp+437,((0x7ffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),27);
    bufp->fullIData(oldp+438,((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata)),32);
    bufp->fullCData(oldp+439,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel))),4);
    bufp->fullBit(oldp+440,(vlSelf->main__DOT__wbu_wbu_arbiter_stall));
    bufp->fullBit(oldp+441,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack));
    bufp->fullBit(oldp+442,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err));
    bufp->fullIData(oldp+443,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU]),32);
    bufp->fullBit(oldp+444,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   >> 1U))));
    bufp->fullBit(oldp+445,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                   >> 1U))));
    bufp->fullBit(oldp+446,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                                   >> 1U))));
    bufp->fullIData(oldp+447,((0x7ffffffU & (IData)(
                                                    (vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                                     >> 0x1bU)))),27);
    bufp->fullIData(oldp+448,((IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+449,((0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                       >> 4U))),4);
    bufp->fullIData(oldp+450,(vlSelf->main__DOT__wbu_zip_idata),32);
    bufp->fullIData(oldp+451,((0x3fffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),30);
    bufp->fullSData(oldp+452,((0x3fffU & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr))),14);
    bufp->fullBit(oldp+453,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb));
    bufp->fullBit(oldp+454,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb));
    bufp->fullWData(oldp+455,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data),512);
    bufp->fullSData(oldp+471,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr),14);
    bufp->fullQData(oldp+472,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel),64);
    bufp->fullIData(oldp+474,(vlSelf->main__DOT__bkrami__DOT__WRITE_TO_MEMORY__DOT__ik),32);
    bufp->fullIData(oldp+475,(vlSelf->main__DOT__r_sirefclk_data),32);
    bufp->fullIData(oldp+476,(vlSelf->main__DOT__clock_generator__DOT__counter[0]),32);
    bufp->fullIData(oldp+477,(vlSelf->main__DOT__clock_generator__DOT__counter[1]),32);
    bufp->fullIData(oldp+478,(vlSelf->main__DOT__clock_generator__DOT__counter[2]),32);
    bufp->fullIData(oldp+479,(vlSelf->main__DOT__clock_generator__DOT__counter[3]),32);
    bufp->fullIData(oldp+480,(vlSelf->main__DOT__clock_generator__DOT__counter[4]),32);
    bufp->fullIData(oldp+481,(vlSelf->main__DOT__clock_generator__DOT__counter[5]),32);
    bufp->fullIData(oldp+482,(vlSelf->main__DOT__clock_generator__DOT__counter[6]),32);
    bufp->fullIData(oldp+483,(vlSelf->main__DOT__clock_generator__DOT__counter[7]),32);
    bufp->fullIData(oldp+484,(vlSelf->main__DOT__clock_generator__DOT__r_delay),32);
    bufp->fullIData(oldp+485,(vlSelf->main__DOT__clock_generator__DOT__times_three),32);
    bufp->fullIData(oldp+486,(vlSelf->main__DOT__clock_generator__DOT__times_five),32);
    bufp->fullIData(oldp+487,(vlSelf->main__DOT__clock_generator__DOT__times_seven),32);
    bufp->fullBit(oldp+488,(vlSelf->main__DOT__console__DOT__rx_uart_reset));
    bufp->fullBit(oldp+489,(((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__w_console_rx_stb))));
    bufp->fullCData(oldp+490,(vlSelf->main__DOT__console__DOT__rxf_wb_data),7);
    bufp->fullSData(oldp+491,(vlSelf->main__DOT__console__DOT__rxf_status),16);
    bufp->fullBit(oldp+492,(vlSelf->main__DOT__console__DOT__rxf_wb_read));
    bufp->fullIData(oldp+493,(((((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                 & (IData)(vlSelf->main__DOT__w_console_rx_stb)) 
                                << 0xcU) | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                                             << 8U) 
                                            | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_data)))),32);
    bufp->fullBit(oldp+494,(((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write))));
    bufp->fullSData(oldp+495,(vlSelf->main__DOT__console__DOT__txf_status),16);
    bufp->fullBit(oldp+496,(vlSelf->main__DOT__console__DOT__txf_wb_write));
    bufp->fullBit(oldp+497,(vlSelf->main__DOT__console__DOT__tx_uart_reset));
    bufp->fullCData(oldp+498,(vlSelf->main__DOT__console__DOT__txf_wb_data),7);
    bufp->fullIData(oldp+499,((((IData)(vlSelf->__VdfgTmp_ha46ae6a3__0) 
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
    bufp->fullIData(oldp+500,((((IData)(vlSelf->main__DOT__console__DOT__txf_status) 
                                << 0x10U) | (IData)(vlSelf->main__DOT__console__DOT__rxf_status))),32);
    bufp->fullCData(oldp+501,(vlSelf->main__DOT__console__DOT__r_wb_addr),2);
    bufp->fullBit(oldp+502,(vlSelf->main__DOT__console__DOT__r_wb_ack));
    bufp->fullCData(oldp+503,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data),7);
    bufp->fullCData(oldp+504,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write),7);
    bufp->fullCData(oldp+505,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+506,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+507,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next),6);
    bufp->fullBit(oldp+508,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow));
    bufp->fullBit(oldp+509,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow));
    bufp->fullBit(oldp+510,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc));
    bufp->fullCData(oldp+511,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+512,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+513,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write));
    bufp->fullBit(oldp+514,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read));
    bufp->fullCData(oldp+515,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+516,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill),10);
    bufp->fullBit(oldp+517,(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6));
    bufp->fullCData(oldp+518,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data),7);
    bufp->fullCData(oldp+519,(vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write),7);
    bufp->fullCData(oldp+520,(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+521,(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+522,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next),6);
    bufp->fullBit(oldp+523,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow));
    bufp->fullBit(oldp+524,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow));
    bufp->fullBit(oldp+525,(vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc));
    bufp->fullCData(oldp+526,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+527,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+528,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write));
    bufp->fullBit(oldp+529,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read));
    bufp->fullCData(oldp+530,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+531,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill),10);
    bufp->fullBit(oldp+532,(vlSelf->main__DOT__genbus__DOT__soft_reset));
    bufp->fullBit(oldp+533,(vlSelf->main__DOT__genbus__DOT__rx_valid));
    bufp->fullCData(oldp+534,((0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))),8);
    bufp->fullBit(oldp+535,(vlSelf->main__DOT__genbus__DOT__in_stb));
    bufp->fullBit(oldp+536,(((IData)(vlSelf->main__DOT__genbus__DOT__rx_valid) 
                             | ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                  | (IData)(vlSelf->main__DOT__genbus__DOT__in_stb)) 
                                 | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
                                | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))))));
    bufp->fullQData(oldp+537,(vlSelf->main__DOT__genbus__DOT__in_word),36);
    bufp->fullBit(oldp+539,(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
    bufp->fullCData(oldp+540,(vlSelf->main__DOT__genbus__DOT__wbu_tx_data),8);
    bufp->fullBit(oldp+541,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n));
    bufp->fullQData(oldp+542,(vlSelf->main__DOT__genbus__DOT__ififo_codword),36);
    bufp->fullBit(oldp+544,(vlSelf->main__DOT__genbus__DOT__exec_stb));
    bufp->fullQData(oldp+545,(vlSelf->main__DOT__genbus__DOT__exec_word),36);
    bufp->fullBit(oldp+547,(vlSelf->main__DOT__genbus__DOT__ofifo_rd));
    bufp->fullQData(oldp+548,(vlSelf->main__DOT__genbus__DOT__ofifo_codword),36);
    bufp->fullBit(oldp+550,((((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
                              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow))) 
                             | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))));
    bufp->fullBit(oldp+551,(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
    bufp->fullBit(oldp+552,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy));
    bufp->fullIData(oldp+553,(vlSelf->main__DOT__genbus__DOT__r_wdt_timer),19);
    bufp->fullBit(oldp+554,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy) 
                             & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb))));
    bufp->fullBit(oldp+555,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb));
    bufp->fullBit(oldp+556,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb) 
                             | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active))));
    bufp->fullSData(oldp+557,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr),11);
    bufp->fullSData(oldp+558,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr),11);
    bufp->fullSData(oldp+559,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)))),11);
    bufp->fullSData(oldp+560,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr)))),11);
    bufp->fullBit(oldp+561,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow));
    bufp->fullBit(oldp+562,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow));
    bufp->fullBit(oldp+563,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+564,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write));
    bufp->fullBit(oldp+565,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read));
    bufp->fullBit(oldp+566,((((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow))) 
                             | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)))));
    bufp->fullBit(oldp+567,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd));
    bufp->fullCData(oldp+568,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr),7);
    bufp->fullCData(oldp+569,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr),7);
    bufp->fullCData(oldp+570,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)))),7);
    bufp->fullCData(oldp+571,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr)))),7);
    bufp->fullBit(oldp+572,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow));
    bufp->fullBit(oldp+573,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow));
    bufp->fullBit(oldp+574,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)))));
    bufp->fullBit(oldp+575,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write));
    bufp->fullBit(oldp+576,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read));
    bufp->fullBit(oldp+577,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb));
    bufp->fullBit(oldp+578,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid));
    bufp->fullCData(oldp+579,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits),6);
    bufp->fullBit(oldp+580,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb));
    bufp->fullBit(oldp+581,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy));
    bufp->fullBit(oldp+582,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                             | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)))));
    bufp->fullQData(oldp+583,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word),36);
    bufp->fullBit(oldp+585,((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))));
    bufp->fullBit(oldp+586,(((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                             | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))));
    bufp->fullCData(oldp+587,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr),8);
    bufp->fullQData(oldp+588,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word),36);
    bufp->fullCData(oldp+590,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr),8);
    bufp->fullIData(oldp+591,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr),25);
    bufp->fullIData(oldp+592,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr),32);
    bufp->fullSData(oldp+593,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len),10);
    bufp->fullIData(oldp+594,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword),32);
    bufp->fullCData(oldp+595,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb),3);
    bufp->fullBit(oldp+596,((3U == (7U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                  >> 0x21U))))));
    bufp->fullCData(oldp+597,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len),3);
    bufp->fullCData(oldp+598,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len),3);
    bufp->fullCData(oldp+599,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw),2);
    bufp->fullBit(oldp+600,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb));
    bufp->fullQData(oldp+601,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg),36);
    bufp->fullIData(oldp+603,((((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                         >> 0x1fU)) 
                                << 0x1eU) | (0x3fffffffU 
                                             & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)))),32);
    bufp->fullCData(oldp+604,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state),2);
    bufp->fullSData(oldp+605,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed),10);
    bufp->fullSData(oldp+606,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len),10);
    bufp->fullBit(oldp+607,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc));
    bufp->fullBit(oldp+608,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr));
    bufp->fullBit(oldp+609,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request));
    bufp->fullBit(oldp+610,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack));
    bufp->fullBit(oldp+611,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks));
    bufp->fullIData(oldp+612,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr),32);
    bufp->fullBit(oldp+613,(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy));
    bufp->fullBit(oldp+614,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
    bufp->fullBit(oldp+615,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb));
    bufp->fullBit(oldp+616,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
    bufp->fullBit(oldp+617,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy));
    bufp->fullBit(oldp+618,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy));
    bufp->fullBit(oldp+619,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy));
    bufp->fullBit(oldp+620,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)))));
    bufp->fullBit(oldp+621,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
                             | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))));
    bufp->fullBit(oldp+622,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy) 
                                & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl)) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl))))));
    bufp->fullQData(oldp+623,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword),36);
    bufp->fullQData(oldp+625,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword),36);
    bufp->fullCData(oldp+627,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits),7);
    bufp->fullCData(oldp+628,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits),7);
    bufp->fullBit(oldp+629,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active));
    bufp->fullBit(oldp+630,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid));
    bufp->fullQData(oldp+631,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword),36);
    bufp->fullIData(oldp+633,((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)),32);
    bufp->fullCData(oldp+634,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck),4);
    bufp->fullBit(oldp+635,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
    bufp->fullBit(oldp+636,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)) 
                             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))));
    bufp->fullQData(oldp+637,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word),36);
    bufp->fullSData(oldp+639,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr),10);
    bufp->fullBit(oldp+640,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled));
    bufp->fullSData(oldp+641,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr),10);
    bufp->fullBit(oldp+642,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch));
    bufp->fullBit(oldp+643,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch));
    bufp->fullBit(oldp+644,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr));
    bufp->fullIData(oldp+645,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword),32);
    bufp->fullSData(oldp+646,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr),10);
    bufp->fullBit(oldp+647,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched));
    bufp->fullBit(oldp+648,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch));
    bufp->fullBit(oldp+649,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch));
    bufp->fullSData(oldp+650,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld),10);
    bufp->fullCData(oldp+651,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd),3);
    bufp->fullSData(oldp+652,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr),10);
    bufp->fullBit(oldp+653,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table));
    bufp->fullBit(oldp+654,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table));
    bufp->fullBit(oldp+655,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match));
    bufp->fullBit(oldp+656,((1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld) 
                                   >> 9U))));
    bufp->fullBit(oldp+657,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy));
    bufp->fullBit(oldp+658,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request));
    bufp->fullBit(oldp+659,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent));
    bufp->fullBit(oldp+660,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state)) 
                             & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                                >> 0x15U))));
    bufp->fullBit(oldp+661,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state));
    bufp->fullIData(oldp+662,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter),22);
    bufp->fullCData(oldp+663,(((0U == (7U & (IData)(
                                                    (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                     >> 0x21U))))
                                ? 1U : ((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword 
                                                           >> 0x20U))))
                                         ? 6U : (7U 
                                                 & ((3U 
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
    bufp->fullCData(oldp+664,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len),3);
    bufp->fullIData(oldp+665,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word),30);
    bufp->fullBit(oldp+666,(((IData)(vlSelf->main__DOT__wbu_cyc) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy)))));
    bufp->fullBit(oldp+667,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl));
    bufp->fullBit(oldp+668,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl));
    bufp->fullBit(oldp+669,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line));
    bufp->fullBit(oldp+670,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy));
    bufp->fullCData(oldp+671,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen),7);
    bufp->fullSData(oldp+672,(vlSelf->main__DOT__gpioi__DOT__r_gpio),16);
    bufp->fullSData(oldp+673,(vlSelf->main__DOT__gpioi__DOT__x_gpio),16);
    bufp->fullSData(oldp+674,(vlSelf->main__DOT__gpioi__DOT__q_gpio),16);
    bufp->fullBit(oldp+675,(vlSelf->main__DOT__i2ci__DOT__r_halted));
    bufp->fullBit(oldp+676,(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc));
    bufp->fullIData(oldp+677,(vlSelf->main__DOT__i2ci__DOT__pf_jump_addr),28);
    bufp->fullBit(oldp+678,(vlSelf->main__DOT__i2ci__DOT__pf_valid));
    bufp->fullBit(oldp+679,(vlSelf->main__DOT__i2ci__DOT__pf_ready));
    bufp->fullCData(oldp+680,(vlSelf->main__DOT__i2ci__DOT__pf_insn),8);
    bufp->fullIData(oldp+681,(vlSelf->main__DOT__i2ci__DOT__pf_insn_addr),28);
    bufp->fullBit(oldp+682,(vlSelf->main__DOT__i2ci__DOT__pf_illegal));
    bufp->fullBit(oldp+683,(vlSelf->main__DOT__i2ci__DOT__half_valid));
    bufp->fullBit(oldp+684,(vlSelf->main__DOT__i2ci__DOT__imm_cycle));
    bufp->fullBit(oldp+685,(vlSelf->main__DOT__i2ci__DOT__insn_ready));
    bufp->fullBit(oldp+686,(vlSelf->main__DOT__i2ci__DOT__half_ready));
    bufp->fullBit(oldp+687,(vlSelf->main__DOT__i2ci__DOT__i2c_abort));
    bufp->fullBit(oldp+688,(vlSelf->main__DOT__i2ci__DOT__insn_valid));
    bufp->fullSData(oldp+689,(vlSelf->main__DOT__i2ci__DOT__insn),12);
    bufp->fullCData(oldp+690,(vlSelf->main__DOT__i2ci__DOT__half_insn),4);
    bufp->fullBit(oldp+691,(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge));
    bufp->fullBit(oldp+692,(vlSelf->main__DOT__i2ci__DOT__i2c_stretch));
    bufp->fullSData(oldp+693,(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+694,(vlSelf->main__DOT__i2ci__DOT__ckcount),12);
    bufp->fullIData(oldp+695,(vlSelf->main__DOT__i2ci__DOT__abort_address),28);
    bufp->fullIData(oldp+696,(vlSelf->main__DOT__i2ci__DOT__jump_target),28);
    bufp->fullBit(oldp+697,(vlSelf->main__DOT__i2ci__DOT__r_wait));
    bufp->fullBit(oldp+698,(vlSelf->main__DOT__i2ci__DOT__soft_halt_request));
    bufp->fullBit(oldp+699,(vlSelf->main__DOT__i2ci__DOT__r_err));
    bufp->fullBit(oldp+700,(vlSelf->main__DOT__i2ci__DOT__r_aborted));
    bufp->fullBit(oldp+701,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+702,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+703,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+704,(((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                             | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
    bufp->fullBit(oldp+705,(vlSelf->main__DOT__i2ci__DOT__w_sda));
    bufp->fullBit(oldp+706,(vlSelf->main__DOT__i2ci__DOT__w_scl));
    bufp->fullBit(oldp+707,(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
    bufp->fullBit(oldp+708,(vlSelf->main__DOT__i2ci__DOT__s_tvalid));
    bufp->fullSData(oldp+709,(vlSelf->main__DOT__i2ci__DOT__ovw_data),10);
    bufp->fullBit(oldp+710,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+711,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullBit(oldp+712,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt));
    bufp->fullCData(oldp+713,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel),2);
    bufp->fullSData(oldp+714,((0x7ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))),11);
    bufp->fullBit(oldp+715,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+716,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+717,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+718,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+719,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+720,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+721,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+722,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+723,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+724,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+725,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+726,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+727,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+728,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+729,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+730,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullWData(oldp+731,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word),512);
    bufp->fullBit(oldp+747,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+748,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+749,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullBit(oldp+750,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid));
    bufp->fullWData(oldp+751,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn),512);
    bufp->fullWData(oldp+767,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted),512);
    bufp->fullCData(oldp+783,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count),7);
    bufp->fullCData(oldp+784,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift),6);
    bufp->fullBit(oldp+785,(vlSelf->main__DOT__i2cscopei__DOT__read_address));
    bufp->fullSData(oldp+786,(vlSelf->main__DOT__i2cscopei__DOT__raddr),10);
    bufp->fullSData(oldp+787,(vlSelf->main__DOT__i2cscopei__DOT__waddr),10);
    bufp->fullBit(oldp+788,((1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+789,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+790,((1U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))));
    bufp->fullCData(oldp+791,(vlSelf->main__DOT__i2cscopei__DOT__br_config),3);
    bufp->fullIData(oldp+792,(vlSelf->main__DOT__i2cscopei__DOT__br_holdoff),20);
    bufp->fullIData(oldp+793,(vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+794,(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered));
    bufp->fullBit(oldp+795,(vlSelf->main__DOT__i2cscopei__DOT__dr_primed));
    bufp->fullBit(oldp+796,(vlSelf->main__DOT__i2cscopei__DOT__dw_trigger));
    bufp->fullBit(oldp+797,(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped));
    bufp->fullCData(oldp+798,(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+799,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+800,(vlSelf->main__DOT__i2cscopei__DOT__ck_addr),31);
    bufp->fullIData(oldp+801,(vlSelf->main__DOT__i2cscopei__DOT__qd_data),31);
    bufp->fullBit(oldp+802,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write));
    bufp->fullBit(oldp+803,(vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout));
    bufp->fullBit(oldp+804,(vlSelf->main__DOT__i2cscopei__DOT__new_data));
    bufp->fullBit(oldp+805,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+806,(vlSelf->main__DOT__i2cscopei__DOT__imm_adr));
    bufp->fullBit(oldp+807,(vlSelf->main__DOT__i2cscopei__DOT__lst_adr));
    bufp->fullIData(oldp+808,(vlSelf->main__DOT__i2cscopei__DOT__lst_val),31);
    bufp->fullIData(oldp+809,(vlSelf->main__DOT__i2cscopei__DOT__imm_val),31);
    bufp->fullBit(oldp+810,(vlSelf->main__DOT__i2cscopei__DOT__record_ce));
    bufp->fullIData(oldp+811,(vlSelf->main__DOT__i2cscopei__DOT__r_data),32);
    bufp->fullBit(oldp+812,(vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+813,(vlSelf->main__DOT__i2cscopei__DOT__this_addr),10);
    bufp->fullIData(oldp+814,(vlSelf->main__DOT__i2cscopei__DOT__nxt_mem),32);
    bufp->fullBit(oldp+815,(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt));
    bufp->fullCData(oldp+816,(vlSelf->main__DOT__rcv__DOT__state),4);
    bufp->fullCData(oldp+817,(vlSelf->main__DOT__rcv__DOT__baud_counter),7);
    bufp->fullBit(oldp+818,(vlSelf->main__DOT__rcv__DOT__zero_baud_counter));
    bufp->fullBit(oldp+819,(vlSelf->main__DOT__rcv__DOT__q_uart));
    bufp->fullBit(oldp+820,(vlSelf->main__DOT__rcv__DOT__qq_uart));
    bufp->fullBit(oldp+821,(vlSelf->main__DOT__rcv__DOT__ck_uart));
    bufp->fullCData(oldp+822,(vlSelf->main__DOT__rcv__DOT__chg_counter),7);
    bufp->fullBit(oldp+823,(vlSelf->main__DOT__rcv__DOT__half_baud_time));
    bufp->fullCData(oldp+824,(vlSelf->main__DOT__rcv__DOT__data_reg),8);
    bufp->fullBit(oldp+825,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+826,(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+827,(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+828,((1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+829,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+830,((1U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+831,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+832,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+833,(vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+834,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+835,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+836,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+837,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+838,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+839,(vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+840,(vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+841,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+842,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+843,(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+844,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+845,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+846,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+847,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+848,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+849,(vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+850,(vlSelf->main__DOT__scope1_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+851,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+852,(vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+853,(vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+854,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+855,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+856,(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+857,(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+858,((1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+859,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+860,((1U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+861,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+862,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+863,(vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+864,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+865,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+866,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+867,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+868,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+869,(vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+870,(vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+871,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+872,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+873,(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+874,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+875,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+876,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+877,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+878,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+879,(vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+880,(vlSelf->main__DOT__scope2_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+881,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+882,(vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+883,(vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+884,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+885,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+886,(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+887,(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+888,((1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+889,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+890,((1U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+891,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+892,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+893,(vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+894,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+895,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+896,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+897,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+898,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+899,(vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+900,(vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+901,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+902,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+903,(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+904,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+905,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+906,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+907,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+908,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+909,(vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+910,(vlSelf->main__DOT__scope3_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+911,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+912,(vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+913,(vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+914,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+915,(vlSelf->main__DOT__spioi__DOT__led_demo));
    bufp->fullCData(oldp+916,(vlSelf->main__DOT__spioi__DOT__r_led),8);
    bufp->fullCData(oldp+917,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),8);
    bufp->fullCData(oldp+918,(vlSelf->main__DOT__spioi__DOT__bounced),8);
    bufp->fullCData(oldp+919,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw),8);
    bufp->fullBit(oldp+920,(vlSelf->main__DOT__spioi__DOT__sw_int));
    bufp->fullBit(oldp+921,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int));
    bufp->fullCData(oldp+922,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn),5);
    bufp->fullCData(oldp+923,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),5);
    bufp->fullSData(oldp+924,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe),10);
    bufp->fullSData(oldp+925,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe),16);
    bufp->fullCData(oldp+926,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner),8);
    bufp->fullBit(oldp+927,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir));
    bufp->fullIData(oldp+928,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr),25);
    bufp->fullBit(oldp+929,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk));
    bufp->fullCData(oldp+930,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr),5);
    bufp->fullCData(oldp+931,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness),5);
    bufp->fullCData(oldp+932,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness),5);
    bufp->fullCData(oldp+933,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness),5);
    bufp->fullCData(oldp+934,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness),5);
    bufp->fullCData(oldp+935,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness),5);
    bufp->fullCData(oldp+936,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness),5);
    bufp->fullCData(oldp+937,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness),5);
    bufp->fullCData(oldp+938,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness),5);
    bufp->fullSData(oldp+939,(vlSelf->main__DOT__swic__DOT__main_int_vector),15);
    bufp->fullSData(oldp+940,(vlSelf->main__DOT__swic__DOT__alt_int_vector),15);
    bufp->fullBit(oldp+941,(vlSelf->main__DOT__swic__DOT__ctri_int));
    bufp->fullBit(oldp+942,(vlSelf->main__DOT__swic__DOT__tma_int));
    bufp->fullBit(oldp+943,(vlSelf->main__DOT__swic__DOT__tmb_int));
    bufp->fullBit(oldp+944,(vlSelf->main__DOT__swic__DOT__tmc_int));
    bufp->fullBit(oldp+945,(vlSelf->main__DOT__swic__DOT__jif_int));
    bufp->fullBit(oldp+946,(vlSelf->main__DOT__swic__DOT__dmac_int));
    bufp->fullBit(oldp+947,(vlSelf->main__DOT__swic__DOT__mtc_int));
    bufp->fullBit(oldp+948,(vlSelf->main__DOT__swic__DOT__moc_int));
    bufp->fullBit(oldp+949,(vlSelf->main__DOT__swic__DOT__mpc_int));
    bufp->fullBit(oldp+950,(vlSelf->main__DOT__swic__DOT__mic_int));
    bufp->fullBit(oldp+951,(vlSelf->main__DOT__swic__DOT__utc_int));
    bufp->fullBit(oldp+952,(vlSelf->main__DOT__swic__DOT__uoc_int));
    bufp->fullBit(oldp+953,(vlSelf->main__DOT__swic__DOT__upc_int));
    bufp->fullBit(oldp+954,(vlSelf->main__DOT__swic__DOT__uic_int));
    bufp->fullIData(oldp+955,(((4U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullBit(oldp+956,(vlSelf->main__DOT__swic__DOT__actr_ack));
    bufp->fullBit(oldp+957,(((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                             | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_read) 
                                | ((~ ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                       >> 6U)) & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb))))));
    bufp->fullBit(oldp+958,(vlSelf->main__DOT__swic__DOT__sys_cyc));
    bufp->fullBit(oldp+959,(vlSelf->main__DOT__swic__DOT__sys_stb));
    bufp->fullBit(oldp+960,(vlSelf->main__DOT__swic__DOT__sys_we));
    bufp->fullCData(oldp+961,(vlSelf->main__DOT__swic__DOT__sys_addr),8);
    bufp->fullIData(oldp+962,(vlSelf->main__DOT__swic__DOT__sys_data),32);
    bufp->fullIData(oldp+963,(vlSelf->main__DOT__swic__DOT__cpu_addr),22);
    bufp->fullIData(oldp+964,(vlSelf->main__DOT__swic__DOT__sys_idata),32);
    bufp->fullBit(oldp+965,(vlSelf->main__DOT__swic__DOT__sys_ack));
    bufp->fullBit(oldp+966,(vlSelf->main__DOT__swic__DOT__sel_timer));
    bufp->fullBit(oldp+967,(vlSelf->main__DOT__swic__DOT__sel_pic));
    bufp->fullBit(oldp+968,(vlSelf->main__DOT__swic__DOT__sel_apic));
    bufp->fullBit(oldp+969,(vlSelf->main__DOT__swic__DOT__sel_watchdog));
    bufp->fullBit(oldp+970,(vlSelf->main__DOT__swic__DOT__sel_bus_watchdog));
    bufp->fullBit(oldp+971,(vlSelf->main__DOT__swic__DOT__sel_dmac));
    bufp->fullBit(oldp+972,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                             & ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                                >> 7U))));
    bufp->fullBit(oldp+973,(vlSelf->main__DOT__swic__DOT__dbg_cyc));
    bufp->fullBit(oldp+974,(vlSelf->main__DOT__swic__DOT__dbg_stb));
    bufp->fullBit(oldp+975,(vlSelf->main__DOT__swic__DOT__dbg_we));
    bufp->fullCData(oldp+976,(vlSelf->main__DOT__swic__DOT__dbg_addr),7);
    bufp->fullIData(oldp+977,(vlSelf->main__DOT__swic__DOT__dbg_idata),32);
    bufp->fullBit(oldp+978,(vlSelf->main__DOT__swic__DOT__dbg_ack));
    bufp->fullBit(oldp+979,(vlSelf->main__DOT__swic__DOT__dbg_stall));
    bufp->fullIData(oldp+980,(vlSelf->main__DOT__swic__DOT__dbg_odata),32);
    bufp->fullCData(oldp+981,(vlSelf->main__DOT__swic__DOT__dbg_sel),4);
    bufp->fullBit(oldp+982,(vlSelf->main__DOT__swic__DOT__no_dbg_err));
    bufp->fullBit(oldp+983,(vlSelf->main__DOT__swic__DOT__cpu_break));
    bufp->fullBit(oldp+984,(vlSelf->main__DOT__swic__DOT__dbg_cmd_write));
    bufp->fullBit(oldp+985,(vlSelf->main__DOT__swic__DOT__dbg_cpu_write));
    bufp->fullBit(oldp+986,(vlSelf->main__DOT__swic__DOT__dbg_cpu_read));
    bufp->fullBit(oldp+987,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold));
    bufp->fullBit(oldp+988,(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch));
    bufp->fullBit(oldp+989,(vlSelf->main__DOT__swic__DOT__reset_request));
    bufp->fullBit(oldp+990,(((~ vlSelf->main__DOT__swic__DOT__dbg_idata) 
                             & (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0))));
    bufp->fullBit(oldp+991,(vlSelf->main__DOT__swic__DOT__halt_request));
    bufp->fullBit(oldp+992,(vlSelf->main__DOT__swic__DOT__step_request));
    bufp->fullBit(oldp+993,(vlSelf->main__DOT__swic__DOT__clear_cache_request));
    bufp->fullBit(oldp+994,(vlSelf->main__DOT__swic__DOT__cmd_reset));
    bufp->fullBit(oldp+995,(vlSelf->main__DOT__swic__DOT__cmd_halt));
    bufp->fullBit(oldp+996,(vlSelf->main__DOT__swic__DOT__cmd_step));
    bufp->fullBit(oldp+997,(vlSelf->main__DOT__swic__DOT__cmd_clear_cache));
    bufp->fullBit(oldp+998,(vlSelf->main__DOT__swic__DOT__cmd_write));
    bufp->fullBit(oldp+999,(vlSelf->main__DOT__swic__DOT__cmd_read));
    bufp->fullCData(oldp+1000,(vlSelf->main__DOT__swic__DOT__cmd_waddr),5);
    bufp->fullIData(oldp+1001,(vlSelf->main__DOT__swic__DOT__cmd_wdata),32);
    bufp->fullCData(oldp+1002,(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc),3);
    bufp->fullBit(oldp+1003,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))));
    bufp->fullBit(oldp+1004,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall));
    bufp->fullIData(oldp+1005,(((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+1006,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                    >> 1U))));
    bufp->fullBit(oldp+1007,(vlSelf->main__DOT__swic__DOT__wdt_ack));
    bufp->fullBit(oldp+1008,(vlSelf->main__DOT__swic__DOT__wdt_reset));
    bufp->fullIData(oldp+1009,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),32);
    bufp->fullBit(oldp+1010,(vlSelf->main__DOT__swic__DOT__wdbus_ack));
    bufp->fullIData(oldp+1011,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),22);
    bufp->fullIData(oldp+1012,(vlSelf->main__DOT__swic__DOT__pic_data),32);
    bufp->fullIData(oldp+1013,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),32);
    bufp->fullBit(oldp+1014,((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                                    | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                       | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                          >> 2U))))));
    bufp->fullBit(oldp+1015,(vlSelf->main__DOT__swic__DOT__wdbus_int));
    bufp->fullBit(oldp+1016,(vlSelf->main__DOT__swic__DOT__cpu_pf_stall));
    bufp->fullBit(oldp+1017,(vlSelf->main__DOT__swic__DOT__cpu_i_count));
    bufp->fullBit(oldp+1018,(vlSelf->main__DOT__swic__DOT__dmac_stb));
    bufp->fullBit(oldp+1019,(vlSelf->main__DOT__swic__DOT__dc_err));
    bufp->fullIData(oldp+1020,(vlSelf->main__DOT__swic__DOT__dmac_data),32);
    bufp->fullBit(oldp+1021,(vlSelf->main__DOT__swic__DOT__dmac_ack));
    bufp->fullBit(oldp+1022,(vlSelf->main__DOT__swic__DOT__dc_cyc));
    bufp->fullBit(oldp+1023,(vlSelf->main__DOT__swic__DOT__dc_stb));
    bufp->fullBit(oldp+1024,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)))));
    bufp->fullBit(oldp+1025,(vlSelf->main__DOT__swic__DOT__dc_stall));
    bufp->fullBit(oldp+1026,(vlSelf->main__DOT__swic__DOT__dc_ack));
    bufp->fullIData(oldp+1027,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr)),22);
    bufp->fullWData(oldp+1028,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data),512);
    bufp->fullQData(oldp+1044,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)),64);
    bufp->fullBit(oldp+1046,(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc));
    bufp->fullIData(oldp+1047,((((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
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
    bufp->fullBit(oldp+1048,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__sel_apic))));
    bufp->fullIData(oldp+1049,(vlSelf->main__DOT__swic__DOT__ctri_data),32);
    bufp->fullBit(oldp+1050,(vlSelf->main__DOT__swic__DOT__tma_ack));
    bufp->fullBit(oldp+1051,(vlSelf->main__DOT__swic__DOT__tmb_ack));
    bufp->fullBit(oldp+1052,(vlSelf->main__DOT__swic__DOT__tmc_ack));
    bufp->fullBit(oldp+1053,(vlSelf->main__DOT__swic__DOT__jif_ack));
    bufp->fullIData(oldp+1054,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)),32);
    bufp->fullIData(oldp+1055,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)),32);
    bufp->fullIData(oldp+1056,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value)),32);
    bufp->fullIData(oldp+1057,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter),32);
    bufp->fullBit(oldp+1058,(((IData)(vlSelf->main__DOT__swic__DOT__sys_cyc) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__sel_pic)))));
    bufp->fullBit(oldp+1059,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                               ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                               : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb))));
    bufp->fullBit(oldp+1060,(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc));
    bufp->fullBit(oldp+1061,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl))));
    bufp->fullBit(oldp+1062,(vlSelf->main__DOT__swic__DOT__cpu_we));
    bufp->fullWData(oldp+1063,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data),512);
    bufp->fullQData(oldp+1079,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                 : 0xffffffffffffffffULL)),64);
    bufp->fullWData(oldp+1081,(vlSelf->main__DOT__swic__DOT__cpu_idata),512);
    bufp->fullBit(oldp+1097,(vlSelf->main__DOT__swic__DOT__cpu_stall));
    bufp->fullBit(oldp+1098,(vlSelf->main__DOT__swic__DOT__pic_interrupt));
    bufp->fullBit(oldp+1099,(vlSelf->main__DOT__swic__DOT__cpu_ack));
    bufp->fullBit(oldp+1100,(vlSelf->main__DOT__swic__DOT__cpu_err));
    bufp->fullIData(oldp+1101,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg),32);
    bufp->fullBit(oldp+1102,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                    | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1103,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                               >> 2U) & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1104,(((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1105,(vlSelf->main__DOT__swic__DOT__r_mmus_ack));
    bufp->fullBit(oldp+1106,(vlSelf->main__DOT__swic__DOT__ext_err));
    bufp->fullIData(oldp+1107,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullCData(oldp+1108,(vlSelf->main__DOT__swic__DOT__w_ack_idx),3);
    bufp->fullCData(oldp+1109,(vlSelf->main__DOT__swic__DOT__ack_idx),3);
    bufp->fullBit(oldp+1110,(vlSelf->main__DOT__swic__DOT__last_sys_stb));
    bufp->fullBit(oldp+1111,(vlSelf->main__DOT__swic__DOT__cmd_read_ack));
    bufp->fullBit(oldp+1112,(vlSelf->main__DOT__swic__DOT__dbg_pre_ack));
    bufp->fullCData(oldp+1113,(vlSelf->main__DOT__swic__DOT__dbg_pre_addr),2);
    bufp->fullIData(oldp+1114,(vlSelf->main__DOT__swic__DOT__dbg_cpu_status),32);
    bufp->fullBit(oldp+1115,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack));
    bufp->fullBit(oldp+1116,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack));
    bufp->fullBit(oldp+1117,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack));
    bufp->fullBit(oldp+1118,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack));
    bufp->fullBit(oldp+1119,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack));
    bufp->fullBit(oldp+1120,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack));
    bufp->fullBit(oldp+1121,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack));
    bufp->fullBit(oldp+1122,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack));
    bufp->fullIData(oldp+1123,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data),32);
    bufp->fullIData(oldp+1124,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data),32);
    bufp->fullIData(oldp+1125,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data),32);
    bufp->fullIData(oldp+1126,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data),32);
    bufp->fullIData(oldp+1127,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data),32);
    bufp->fullIData(oldp+1128,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data),32);
    bufp->fullIData(oldp+1129,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data),32);
    bufp->fullIData(oldp+1130,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data),32);
    bufp->fullBit(oldp+1131,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5));
    bufp->fullBit(oldp+1132,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1133,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1134,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))));
    bufp->fullBit(oldp+1135,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5));
    bufp->fullBit(oldp+1136,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_i_count) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1137,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5));
    bufp->fullBit(oldp+1138,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1139,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_pf_stall) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1140,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1141,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                                    & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1142,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5));
    bufp->fullBit(oldp+1143,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we));
    bufp->fullCData(oldp+1144,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr),7);
    bufp->fullIData(oldp+1145,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data),32);
    bufp->fullCData(oldp+1146,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel),4);
    bufp->fullCData(oldp+1147,((3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))),2);
    bufp->fullBit(oldp+1148,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request));
    bufp->fullBit(oldp+1149,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort));
    bufp->fullBit(oldp+1150,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy));
    bufp->fullBit(oldp+1151,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err));
    bufp->fullIData(oldp+1152,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src),28);
    bufp->fullIData(oldp+1153,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst),28);
    bufp->fullIData(oldp+1154,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                                << 6U)),28);
    bufp->fullIData(oldp+1155,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                                << 6U)),28);
    bufp->fullIData(oldp+1156,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length),28);
    bufp->fullIData(oldp+1157,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length),28);
    bufp->fullSData(oldp+1158,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen),11);
    bufp->fullBit(oldp+1159,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger));
    bufp->fullBit(oldp+1160,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request));
    bufp->fullBit(oldp+1161,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request));
    bufp->fullBit(oldp+1162,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy));
    bufp->fullBit(oldp+1163,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy));
    bufp->fullBit(oldp+1164,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err));
    bufp->fullBit(oldp+1165,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err));
    bufp->fullBit(oldp+1166,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc));
    bufp->fullBit(oldp+1167,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc));
    bufp->fullCData(oldp+1168,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size),2);
    bufp->fullCData(oldp+1169,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size),2);
    bufp->fullIData(oldp+1170,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr),28);
    bufp->fullIData(oldp+1171,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr),28);
    bufp->fullSData(oldp+1172,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen),11);
    bufp->fullBit(oldp+1173,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc));
    bufp->fullBit(oldp+1174,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb));
    bufp->fullBit(oldp+1175,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall));
    bufp->fullBit(oldp+1176,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack));
    bufp->fullBit(oldp+1177,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err));
    bufp->fullIData(oldp+1178,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr),22);
    bufp->fullQData(oldp+1179,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel),64);
    bufp->fullBit(oldp+1181,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid));
    bufp->fullBit(oldp+1182,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready));
    bufp->fullBit(oldp+1183,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last));
    bufp->fullWData(oldp+1184,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg),512);
    bufp->fullCData(oldp+1200,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes),7);
    bufp->fullBit(oldp+1201,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
    bufp->fullBit(oldp+1202,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))));
    bufp->fullBit(oldp+1203,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last));
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
    bufp->fullWData(oldp+1204,(__Vtemp_hd1e4c677__0),512);
    bufp->fullCData(oldp+1220,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1221,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)))));
    bufp->fullBit(oldp+1222,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
    bufp->fullBit(oldp+1223,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
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
    bufp->fullWData(oldp+1224,(__Vtemp_h6ddae8d1__0),512);
    bufp->fullCData(oldp+1240,((0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])),7);
    bufp->fullBit(oldp+1241,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full));
    bufp->fullBit(oldp+1242,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty));
    bufp->fullCData(oldp+1243,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill),5);
    bufp->fullBit(oldp+1244,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid));
    bufp->fullBit(oldp+1245,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready));
    bufp->fullBit(oldp+1246,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last));
    bufp->fullWData(oldp+1247,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg),512);
    bufp->fullCData(oldp+1263,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1264,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc));
    bufp->fullBit(oldp+1265,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb));
    bufp->fullBit(oldp+1266,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall));
    bufp->fullBit(oldp+1267,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack));
    bufp->fullBit(oldp+1268,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err));
    bufp->fullIData(oldp+1269,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr),22);
    bufp->fullQData(oldp+1270,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel),64);
    bufp->fullBit(oldp+1272,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    bufp->fullBit(oldp+1273,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner));
    bufp->fullBit(oldp+1274,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger));
    bufp->fullBit(oldp+1275,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err));
    bufp->fullBit(oldp+1276,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len));
    bufp->fullBit(oldp+1277,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy));
    bufp->fullCData(oldp+1278,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel),5);
    bufp->fullIData(oldp+1279,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src),32);
    bufp->fullIData(oldp+1280,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst),32);
    bufp->fullIData(oldp+1281,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len),32);
    bufp->fullIData(oldp+1282,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen),32);
    bufp->fullIData(oldp+1283,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg),32);
    bufp->fullCData(oldp+1284,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state),2);
    bufp->fullBit(oldp+1285,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset));
    bufp->fullCData(oldp+1286,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size),7);
    bufp->fullCData(oldp+1287,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size),7);
    bufp->fullCData(oldp+1288,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size),7);
    bufp->fullCData(oldp+1289,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size),7);
    bufp->fullIData(oldp+1290,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr),28);
    bufp->fullIData(oldp+1291,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr),28);
    bufp->fullCData(oldp+1292,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr),6);
    bufp->fullCData(oldp+1293,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr),6);
    bufp->fullQData(oldp+1294,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel),64);
    bufp->fullQData(oldp+1296,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                 ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0x8000000000000000ULL 
                                        >> (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : ((0x4000000000000000ULL 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))) 
                                            << 0x3fU)) 
                                        >> (0x3eU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                 : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? ((2U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)
                                         ? ((1U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)
                                             ? (0x1000000000000000ULL 
                                                >> 
                                                (0x3cU 
                                                 & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                             : (0x3000000000000000ULL 
                                                >> 
                                                (0x3cU 
                                                 & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                         : ((1U & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)
                                             ? (0x7000000000000000ULL 
                                                >> 
                                                (0x3cU 
                                                 & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                             : (0xf000000000000000ULL 
                                                >> 
                                                (0x3cU 
                                                 & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))))
                                     : (0xffffffffffffffffULL 
                                        >> (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))))),64);
    bufp->fullQData(oldp+1298,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel),64);
    bufp->fullQData(oldp+1300,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                 ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0x8000000000000000ULL 
                                        >> (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : (0xc000000000000000ULL 
                                        >> (0x3eU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                 : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0xf000000000000000ULL 
                                        >> (0x3cU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : 0xffffffffffffffffULL))),64);
    bufp->fullSData(oldp+1302,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding),11);
    bufp->fullCData(oldp+1303,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill),8);
    bufp->fullCData(oldp+1304,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill),8);
    bufp->fullSData(oldp+1305,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len),11);
    bufp->fullSData(oldp+1306,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len),11);
    bufp->fullCData(oldp+1307,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift),6);
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
    bufp->fullWData(oldp+1308,(__Vtemp_h6d0d1506__0),512);
    bufp->fullBit(oldp+1324,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc));
    bufp->fullCData(oldp+1325,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size),2);
    bufp->fullWData(oldp+1326,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg),1024);
    bufp->fullCData(oldp+1358,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill),8);
    bufp->fullCData(oldp+1359,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill),8);
    bufp->fullBit(oldp+1360,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last));
    bufp->fullBit(oldp+1361,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last));
    bufp->fullBit(oldp+1362,((0x40U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill))));
    bufp->fullCData(oldp+1363,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift),6);
    bufp->fullWData(oldp+1364,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data),512);
    bufp->fullBit(oldp+1380,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc));
    bufp->fullCData(oldp+1381,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size),2);
    bufp->fullIData(oldp+1382,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr),29);
    bufp->fullCData(oldp+1383,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr),6);
    bufp->fullWData(oldp+1384,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data),1024);
    bufp->fullWData(oldp+1416,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data),512);
    bufp->fullWData(oldp+1432,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel),128);
    bufp->fullWData(oldp+1436,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel),128);
    bufp->fullQData(oldp+1440,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel),64);
    bufp->fullBit(oldp+1442,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last));
    bufp->fullSData(oldp+1443,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding),10);
    bufp->fullBit(oldp+1444,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full));
    bufp->fullBit(oldp+1445,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
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
    bufp->fullWData(oldp+1446,(__Vtemp_h6b3f223d__0),520);
    bufp->fullWData(oldp+1463,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data),520);
    bufp->fullWData(oldp+1480,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[0]),520);
    bufp->fullWData(oldp+1497,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[1]),520);
    bufp->fullWData(oldp+1514,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[2]),520);
    bufp->fullWData(oldp+1531,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[3]),520);
    bufp->fullWData(oldp+1548,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[4]),520);
    bufp->fullWData(oldp+1565,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[5]),520);
    bufp->fullWData(oldp+1582,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[6]),520);
    bufp->fullWData(oldp+1599,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[7]),520);
    bufp->fullWData(oldp+1616,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[8]),520);
    bufp->fullWData(oldp+1633,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[9]),520);
    bufp->fullWData(oldp+1650,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[10]),520);
    bufp->fullWData(oldp+1667,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[11]),520);
    bufp->fullWData(oldp+1684,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[12]),520);
    bufp->fullWData(oldp+1701,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[13]),520);
    bufp->fullWData(oldp+1718,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[14]),520);
    bufp->fullWData(oldp+1735,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[15]),520);
    bufp->fullCData(oldp+1752,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr),5);
    bufp->fullCData(oldp+1753,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr),5);
    bufp->fullBit(oldp+1754,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr));
    bufp->fullBit(oldp+1755,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd));
    bufp->fullBit(oldp+1756,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last));
    bufp->fullBit(oldp+1757,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next));
    bufp->fullCData(oldp+1758,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill),7);
    bufp->fullCData(oldp+1759,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter),5);
    bufp->fullSData(oldp+1760,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state),15);
    bufp->fullSData(oldp+1761,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable),15);
    bufp->fullBit(oldp+1762,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie));
    bufp->fullBit(oldp+1763,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any));
    bufp->fullBit(oldp+1764,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write));
    bufp->fullBit(oldp+1765,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints));
    bufp->fullBit(oldp+1766,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints));
    bufp->fullSData(oldp+1767,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state),15);
    bufp->fullSData(oldp+1768,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable),15);
    bufp->fullBit(oldp+1769,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie));
    bufp->fullBit(oldp+1770,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any));
    bufp->fullBit(oldp+1771,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write));
    bufp->fullBit(oldp+1772,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints));
    bufp->fullBit(oldp+1773,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints));
    bufp->fullBit(oldp+1774,(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner));
    bufp->fullCData(oldp+1775,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))),5);
    bufp->fullBit(oldp+1776,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc));
    bufp->fullBit(oldp+1777,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
    bufp->fullIData(oldp+1778,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address),28);
    bufp->fullIData(oldp+1779,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]),32);
    bufp->fullIData(oldp+1780,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc),28);
    bufp->fullBit(oldp+1781,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
    bufp->fullBit(oldp+1782,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
    bufp->fullBit(oldp+1783,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
    bufp->fullBit(oldp+1784,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
    bufp->fullBit(oldp+1785,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
    bufp->fullBit(oldp+1786,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
    bufp->fullBit(oldp+1787,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err));
    bufp->fullIData(oldp+1788,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr),22);
    bufp->fullBit(oldp+1789,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache));
    bufp->fullBit(oldp+1790,((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullCData(oldp+1791,((7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),3);
    bufp->fullIData(oldp+1792,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr),32);
    bufp->fullIData(oldp+1793,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc),28);
    bufp->fullIData(oldp+1794,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata),32);
    bufp->fullCData(oldp+1795,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R),5);
    bufp->fullBit(oldp+1796,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
    bufp->fullBit(oldp+1797,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy));
    bufp->fullBit(oldp+1798,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled));
    bufp->fullBit(oldp+1799,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
    bufp->fullBit(oldp+1800,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err));
    bufp->fullCData(oldp+1801,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
    bufp->fullIData(oldp+1802,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
    bufp->fullBit(oldp+1803,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
    bufp->fullBit(oldp+1804,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
    bufp->fullBit(oldp+1805,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
    bufp->fullBit(oldp+1806,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl));
    bufp->fullIData(oldp+1807,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr),22);
    bufp->fullBit(oldp+1808,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
    bufp->fullBit(oldp+1809,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
    bufp->fullBit(oldp+1810,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
    bufp->fullBit(oldp+1811,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err));
    bufp->fullQData(oldp+1812,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel),64);
    bufp->fullIData(oldp+1814,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__ik),32);
    bufp->fullBit(oldp+1815,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc));
    bufp->fullBit(oldp+1816,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb));
    bufp->fullBit(oldp+1817,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack));
    bufp->fullBit(oldp+1818,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line));
    bufp->fullBit(oldp+1819,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb));
    bufp->fullBit(oldp+1820,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
    bufp->fullBit(oldp+1821,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
    bufp->fullCData(oldp+1822,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending),5);
    bufp->fullCData(oldp+1823,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v),8);
    bufp->fullIData(oldp+1824,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[0]),19);
    bufp->fullIData(oldp+1825,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[1]),19);
    bufp->fullIData(oldp+1826,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[2]),19);
    bufp->fullIData(oldp+1827,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[3]),19);
    bufp->fullIData(oldp+1828,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[4]),19);
    bufp->fullIData(oldp+1829,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[5]),19);
    bufp->fullIData(oldp+1830,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[6]),19);
    bufp->fullIData(oldp+1831,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[7]),19);
    bufp->fullBit(oldp+1832,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag));
    bufp->fullCData(oldp+1833,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state),2);
    bufp->fullCData(oldp+1834,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr),6);
    bufp->fullWData(oldp+1835,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword),512);
    bufp->fullWData(oldp+1851,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword),512);
    bufp->fullBit(oldp+1867,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl));
    bufp->fullBit(oldp+1868,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl));
    bufp->fullBit(oldp+1869,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr));
    bufp->fullWData(oldp+1870,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata),512);
    bufp->fullQData(oldp+1886,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel),64);
    bufp->fullCData(oldp+1888,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr),6);
    bufp->fullIData(oldp+1889,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag),19);
    bufp->fullBit(oldp+1890,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid));
    bufp->fullCData(oldp+1891,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                      >> 9U))),3);
    bufp->fullCData(oldp+1892,((0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 6U))),6);
    bufp->fullBit(oldp+1893,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow));
    bufp->fullBit(oldp+1894,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable));
    bufp->fullBit(oldp+1895,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address));
    bufp->fullBit(oldp+1896,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable));
    bufp->fullBit(oldp+1897,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid));
    bufp->fullBit(oldp+1898,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid));
    bufp->fullBit(oldp+1899,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd));
    bufp->fullBit(oldp+1900,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss));
    bufp->fullBit(oldp+1901,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending));
    bufp->fullIData(oldp+1902,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr),22);
    bufp->fullCData(oldp+1903,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1904,((0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)),6);
    bufp->fullIData(oldp+1905,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                            >> 3U))),19);
    bufp->fullBit(oldp+1906,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb));
    bufp->fullBit(oldp+1907,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv));
    bufp->fullBit(oldp+1908,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache));
    bufp->fullIData(oldp+1909,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag),19);
    bufp->fullSData(oldp+1910,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data),13);
    bufp->fullBit(oldp+1911,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie));
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
    bufp->fullWData(oldp+1912,(__Vtemp_h01ff8f7b__0),512);
    bufp->fullWData(oldp+1928,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted),512);
    bufp->fullCData(oldp+1944,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel),4);
    bufp->fullQData(oldp+1945,(((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                           >> 0x18U))
                                 ? ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                    >> (3U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                                 : (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                     << 0x3cU) >> (0x3fU 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),64);
    bufp->fullIData(oldp+1947,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift),32);
    bufp->fullWData(oldp+1948,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift),512);
    bufp->fullWData(oldp+1964,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data),512);
    bufp->fullSData(oldp+1980,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[0]),12);
    bufp->fullSData(oldp+1981,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[1]),12);
    bufp->fullSData(oldp+1982,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[2]),12);
    bufp->fullSData(oldp+1983,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[3]),12);
    bufp->fullSData(oldp+1984,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[4]),12);
    bufp->fullSData(oldp+1985,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[5]),12);
    bufp->fullSData(oldp+1986,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[6]),12);
    bufp->fullSData(oldp+1987,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[7]),12);
    bufp->fullSData(oldp+1988,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[8]),12);
    bufp->fullSData(oldp+1989,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[9]),12);
    bufp->fullSData(oldp+1990,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[10]),12);
    bufp->fullSData(oldp+1991,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[11]),12);
    bufp->fullSData(oldp+1992,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[12]),12);
    bufp->fullSData(oldp+1993,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[13]),12);
    bufp->fullSData(oldp+1994,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[14]),12);
    bufp->fullSData(oldp+1995,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[15]),12);
    bufp->fullCData(oldp+1996,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr),5);
    bufp->fullCData(oldp+1997,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr),5);
    bufp->fullIData(oldp+1998,((0xfffffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)),28);
    bufp->fullBit(oldp+1999,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v));
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
    bufp->fullWData(oldp+2000,(__Vtemp_he3c3974d__0),512);
    bufp->fullSData(oldp+2016,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[0]),16);
    bufp->fullSData(oldp+2017,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[1]),16);
    bufp->fullSData(oldp+2018,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[2]),16);
    bufp->fullSData(oldp+2019,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[3]),16);
    bufp->fullSData(oldp+2020,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[4]),16);
    bufp->fullSData(oldp+2021,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[5]),16);
    bufp->fullSData(oldp+2022,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[6]),16);
    bufp->fullSData(oldp+2023,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[7]),16);
    bufp->fullCData(oldp+2024,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask),8);
    bufp->fullBit(oldp+2025,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc));
    bufp->fullBit(oldp+2026,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
    bufp->fullBit(oldp+2027,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc));
    bufp->fullBit(oldp+2028,((((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                            >> 9U)) 
                               == (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                               >> 9U))) 
                              & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
                                  == (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                  >> 9U))) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                    >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                              >> 9U)))))));
    bufp->fullBit(oldp+2029,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last));
    bufp->fullIData(oldp+2030,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc),28);
    bufp->fullCData(oldp+2031,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr),6);
    bufp->fullIData(oldp+2032,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup),19);
    bufp->fullIData(oldp+2033,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup),19);
    bufp->fullIData(oldp+2034,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup),19);
    bufp->fullIData(oldp+2035,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                            >> 9U))),19);
    bufp->fullIData(oldp+2036,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                            >> 9U))),19);
    bufp->fullBit(oldp+2037,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid));
    bufp->fullIData(oldp+2038,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache),19);
    bufp->fullWData(oldp+2039,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache),512);
    bufp->fullWData(oldp+2055,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache),512);
    bufp->fullBit(oldp+2071,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc));
    bufp->fullCData(oldp+2072,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay),2);
    bufp->fullBit(oldp+2073,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask));
    bufp->fullBit(oldp+2074,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack));
    bufp->fullBit(oldp+2075,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload));
    bufp->fullBit(oldp+2076,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr));
    bufp->fullBit(oldp+2077,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort));
    bufp->fullCData(oldp+2078,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr),3);
    bufp->fullBit(oldp+2079,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result));
    bufp->fullCData(oldp+2080,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                      >> 9U))),3);
    bufp->fullCData(oldp+2081,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                      >> 9U))),3);
    bufp->fullWData(oldp+2082,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted),512);
    bufp->fullCData(oldp+2098,((0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                        >> 2U))),4);
    bufp->fullBit(oldp+2099,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
    bufp->fullIData(oldp+2100,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[0]),32);
    bufp->fullIData(oldp+2101,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[1]),32);
    bufp->fullIData(oldp+2102,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[2]),32);
    bufp->fullIData(oldp+2103,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[3]),32);
    bufp->fullIData(oldp+2104,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[4]),32);
    bufp->fullIData(oldp+2105,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[5]),32);
    bufp->fullIData(oldp+2106,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[6]),32);
    bufp->fullIData(oldp+2107,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[7]),32);
    bufp->fullIData(oldp+2108,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[8]),32);
    bufp->fullIData(oldp+2109,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[9]),32);
    bufp->fullIData(oldp+2110,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[10]),32);
    bufp->fullIData(oldp+2111,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[11]),32);
    bufp->fullIData(oldp+2112,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[12]),32);
    bufp->fullIData(oldp+2113,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[13]),32);
    bufp->fullIData(oldp+2114,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[14]),32);
    bufp->fullIData(oldp+2115,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[15]),32);
    bufp->fullIData(oldp+2116,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[16]),32);
    bufp->fullIData(oldp+2117,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[17]),32);
    bufp->fullIData(oldp+2118,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[18]),32);
    bufp->fullIData(oldp+2119,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[19]),32);
    bufp->fullIData(oldp+2120,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[20]),32);
    bufp->fullIData(oldp+2121,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[21]),32);
    bufp->fullIData(oldp+2122,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[22]),32);
    bufp->fullIData(oldp+2123,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[23]),32);
    bufp->fullIData(oldp+2124,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[24]),32);
    bufp->fullIData(oldp+2125,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[25]),32);
    bufp->fullIData(oldp+2126,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[26]),32);
    bufp->fullIData(oldp+2127,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[27]),32);
    bufp->fullIData(oldp+2128,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[28]),32);
    bufp->fullIData(oldp+2129,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[29]),32);
    bufp->fullIData(oldp+2130,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[30]),32);
    bufp->fullIData(oldp+2131,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[31]),32);
    bufp->fullCData(oldp+2132,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags),4);
    bufp->fullCData(oldp+2133,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags),4);
    bufp->fullSData(oldp+2134,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags),16);
    bufp->fullSData(oldp+2135,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags),16);
    bufp->fullBit(oldp+2136,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en));
    bufp->fullBit(oldp+2137,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
    bufp->fullBit(oldp+2138,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep));
    bufp->fullBit(oldp+2139,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted));
    bufp->fullBit(oldp+2140,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending));
    bufp->fullBit(oldp+2141,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
    bufp->fullBit(oldp+2142,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie));
    bufp->fullBit(oldp+2143,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
    bufp->fullBit(oldp+2144,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt));
    bufp->fullBit(oldp+2145,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped));
    bufp->fullBit(oldp+2146,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step));
    bufp->fullBit(oldp+2147,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
    bufp->fullBit(oldp+2148,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i));
    bufp->fullBit(oldp+2149,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag));
    bufp->fullBit(oldp+2150,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
    bufp->fullBit(oldp+2151,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag));
    bufp->fullBit(oldp+2152,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag));
    bufp->fullBit(oldp+2153,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
    bufp->fullBit(oldp+2154,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
    bufp->fullBit(oldp+2155,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce));
    bufp->fullIData(oldp+2156,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc),28);
    bufp->fullBit(oldp+2157,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
    bufp->fullCData(oldp+2158,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn),4);
    bufp->fullBit(oldp+2159,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
    bufp->fullCData(oldp+2160,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))),5);
    bufp->fullCData(oldp+2161,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))),5);
    bufp->fullCData(oldp+2162,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R))),5);
    bufp->fullCData(oldp+2163,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA),5);
    bufp->fullCData(oldp+2164,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB),5);
    bufp->fullBit(oldp+2165,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 6U))));
    bufp->fullBit(oldp+2166,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 6U))));
    bufp->fullBit(oldp+2167,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 5U))));
    bufp->fullBit(oldp+2168,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 5U))));
    bufp->fullBit(oldp+2169,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 6U))));
    bufp->fullBit(oldp+2170,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 5U))));
    bufp->fullCData(oldp+2171,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F),4);
    bufp->fullBit(oldp+2172,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR));
    bufp->fullBit(oldp+2173,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA));
    bufp->fullBit(oldp+2174,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB));
    bufp->fullBit(oldp+2175,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU));
    bufp->fullBit(oldp+2176,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M));
    bufp->fullBit(oldp+2177,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV));
    bufp->fullBit(oldp+2178,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP));
    bufp->fullBit(oldp+2179,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF));
    bufp->fullBit(oldp+2180,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break));
    bufp->fullBit(oldp+2181,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock));
    bufp->fullBit(oldp+2182,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe));
    bufp->fullBit(oldp+2183,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp));
    bufp->fullBit(oldp+2184,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid));
    bufp->fullIData(oldp+2185,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I),32);
    bufp->fullBit(oldp+2186,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI));
    bufp->fullBit(oldp+2187,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal));
    bufp->fullBit(oldp+2188,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch));
    bufp->fullBit(oldp+2189,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb));
    bufp->fullIData(oldp+2190,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc),28);
    bufp->fullBit(oldp+2191,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall));
    bufp->fullBit(oldp+2192,((1U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullBit(oldp+2193,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd));
    bufp->fullBit(oldp+2194,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write));
    bufp->fullBit(oldp+2195,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem));
    bufp->fullBit(oldp+2196,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
    bufp->fullBit(oldp+2197,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div));
    bufp->fullBit(oldp+2198,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu));
    bufp->fullCData(oldp+2199,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn),4);
    bufp->fullBit(oldp+2200,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc));
    bufp->fullCData(oldp+2201,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid),5);
    bufp->fullCData(oldp+2202,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid),5);
    bufp->fullBit(oldp+2203,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA));
    bufp->fullBit(oldp+2204,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB));
    bufp->fullIData(oldp+2205,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av),32);
    bufp->fullIData(oldp+2206,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv),32);
    bufp->fullIData(oldp+2207,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),28);
    bufp->fullIData(oldp+2208,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av),32);
    bufp->fullIData(oldp+2209,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv),32);
    bufp->fullIData(oldp+2210,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
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
    bufp->fullBit(oldp+2211,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR));
    bufp->fullBit(oldp+2212,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
    bufp->fullCData(oldp+2213,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                                 ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0)
                                 : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))),4);
    bufp->fullCData(oldp+2214,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F),7);
    bufp->fullCData(oldp+2215,(((0x80U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F) 
                                          << 4U)) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F))),8);
    bufp->fullBit(oldp+2216,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
    bufp->fullBit(oldp+2217,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe));
    bufp->fullBit(oldp+2218,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break));
    bufp->fullBit(oldp+2219,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
    bufp->fullBit(oldp+2220,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal));
    bufp->fullBit(oldp+2221,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock));
    bufp->fullIData(oldp+2222,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc),28);
    bufp->fullCData(oldp+2223,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg),5);
    bufp->fullBit(oldp+2224,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
    bufp->fullBit(oldp+2225,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid));
    bufp->fullBit(oldp+2226,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
    bufp->fullBit(oldp+2227,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
    bufp->fullIData(oldp+2228,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result),32);
    bufp->fullCData(oldp+2229,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0)) 
                                 << 3U) | ((4U & ((4U 
                                                   & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                                                      >> 0x1dU)) 
                                                  ^ 
                                                  (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                                                    & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0)) 
                                                   << 2U))) 
                                           | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c) 
                                               << 1U) 
                                              | (0U 
                                                 == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result))))),4);
    bufp->fullBit(oldp+2230,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid));
    bufp->fullBit(oldp+2231,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy));
    bufp->fullBit(oldp+2232,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond));
    bufp->fullBit(oldp+2233,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR));
    bufp->fullBit(oldp+2234,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF));
    bufp->fullBit(oldp+2235,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal));
    bufp->fullBit(oldp+2236,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error));
    bufp->fullBit(oldp+2237,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy));
    bufp->fullBit(oldp+2238,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid));
    bufp->fullIData(oldp+2239,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result),32);
    bufp->fullCData(oldp+2240,(((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                       >> 0x1dU)) | 
                                (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
                                  << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z)))),4);
    bufp->fullBit(oldp+2241,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv));
    bufp->fullBit(oldp+2242,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe));
    bufp->fullIData(oldp+2243,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val),32);
    bufp->fullIData(oldp+2244,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc),32);
    bufp->fullBit(oldp+2245,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall));
    bufp->fullBit(oldp+2246,((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2247,((0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2248,((0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2249,((0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2250,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce));
    bufp->fullBit(oldp+2251,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce));
    bufp->fullCData(oldp+2252,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags),4);
    bufp->fullCData(oldp+2253,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index),3);
    bufp->fullCData(oldp+2254,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id),5);
    bufp->fullIData(oldp+2255,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl),32);
    bufp->fullIData(oldp+2256,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl),32);
    bufp->fullBit(oldp+2257,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt));
    bufp->fullBit(oldp+2258,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt));
    bufp->fullIData(oldp+2259,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc),28);
    bufp->fullIData(oldp+2260,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc),28);
    bufp->fullBit(oldp+2261,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc));
    bufp->fullBit(oldp+2262,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc))));
    bufp->fullCData(oldp+2263,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R),7);
    bufp->fullCData(oldp+2264,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A),7);
    bufp->fullCData(oldp+2265,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B),7);
    bufp->fullCData(oldp+2266,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc),2);
    bufp->fullBit(oldp+2267,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim));
    bufp->fullIData(oldp+2268,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv),23);
    bufp->fullCData(oldp+2269,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid),5);
    bufp->fullCData(oldp+2270,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock),2);
    bufp->fullBit(oldp+2271,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset));
    bufp->fullBit(oldp+2272,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
    bufp->fullBit(oldp+2273,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
    bufp->fullIData(oldp+2274,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
    bufp->fullQData(oldp+2275,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
    bufp->fullQData(oldp+2277,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
    bufp->fullBit(oldp+2279,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
    bufp->fullBit(oldp+2280,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
    bufp->fullBit(oldp+2281,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
    bufp->fullBit(oldp+2282,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
    bufp->fullBit(oldp+2283,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
    bufp->fullCData(oldp+2284,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
    bufp->fullBit(oldp+2285,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
    bufp->fullBit(oldp+2286,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2287,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
    bufp->fullBit(oldp+2288,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb));
    bufp->fullIData(oldp+2289,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr),28);
    bufp->fullIData(oldp+2290,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks),32);
    bufp->fullBit(oldp+2291,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim));
    bufp->fullIData(oldp+2292,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv),23);
    bufp->fullIData(oldp+2293,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                               [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))]),32);
    bufp->fullIData(oldp+2294,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result),32);
    bufp->fullBit(oldp+2295,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)));
    bufp->fullBit(oldp+2296,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2297,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2298,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2299,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c));
    bufp->fullBit(oldp+2300,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign));
    bufp->fullBit(oldp+2301,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl));
    bufp->fullBit(oldp+2302,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl));
    bufp->fullQData(oldp+2303,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result),33);
    bufp->fullQData(oldp+2305,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result),33);
    bufp->fullQData(oldp+2307,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result),33);
    bufp->fullQData(oldp+2309,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result),64);
    bufp->fullBit(oldp+2311,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi));
    bufp->fullBit(oldp+2312,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe))));
    bufp->fullBit(oldp+2313,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                                    >> 1U))));
    bufp->fullQData(oldp+2314,(((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                << 1U)),33);
    bufp->fullQData(oldp+2316,((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                                ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                                 << 1U), 
                                                                (0x1fU 
                                                                 & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),33);
    bufp->fullCData(oldp+2318,((3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),2);
    bufp->fullQData(oldp+2319,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result),64);
    bufp->fullQData(oldp+2321,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result),64);
    bufp->fullIData(oldp+2323,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input),32);
    bufp->fullIData(oldp+2324,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input),32);
    bufp->fullCData(oldp+2325,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe),2);
    bufp->fullCData(oldp+2326,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn),2);
    bufp->fullQData(oldp+2327,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input)))),64);
    bufp->fullQData(oldp+2329,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input)))),64);
    bufp->fullQData(oldp+2331,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input))),64);
    bufp->fullQData(oldp+2333,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input))),64);
    bufp->fullBit(oldp+2335,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset));
    bufp->fullCData(oldp+2336,((0x1fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x16U))),5);
    bufp->fullBit(oldp+2337,((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                               >> 1U)))));
    bufp->fullBit(oldp+2338,((0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2339,((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                             >> 1U)))));
    bufp->fullBit(oldp+2340,((9U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2341,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU));
    bufp->fullBit(oldp+2342,((8U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2343,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
    bufp->fullBit(oldp+2344,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock));
    bufp->fullBit(oldp+2345,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7800000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2346,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7000000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2347,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special));
    bufp->fullBit(oldp+2348,((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2349,(((5U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                              >> 1U))) 
                              | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))));
    bufp->fullBit(oldp+2350,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc));
    bufp->fullBit(oldp+2351,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc));
    bufp->fullBit(oldp+2352,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullBit(oldp+2353,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullCData(oldp+2354,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0)
                                 ? 8U : (((0U == (7U 
                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                     >> 0x13U))) 
                                          << 3U) | 
                                         (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))))),4);
    bufp->fullBit(oldp+2355,(((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                              >> 1U))) 
                              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0) 
                                  | (0U == (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                  >> 0x13U)))) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                                    | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                       & ((0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                          & ((9U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                             & ((8U 
                                                 != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                                & (7U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                       >> 0x1cU))))))))))));
    bufp->fullBit(oldp+2356,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem));
    bufp->fullBit(oldp+2357,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto));
    bufp->fullBit(oldp+2358,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div));
    bufp->fullBit(oldp+2359,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu));
    bufp->fullBit(oldp+2360,((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                       | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                          | (8U == 
                                             (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+2361,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                  & ((8U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                     & (0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                    | (8U == (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U))))))));
    bufp->fullBit(oldp+2362,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB));
    bufp->fullBit(oldp+2363,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                              | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 | (8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+2364,((0x7c87c000U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    bufp->fullBit(oldp+2365,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp));
    bufp->fullIData(oldp+2366,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword),32);
    bufp->fullBit(oldp+2367,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid));
    bufp->fullSData(oldp+2368,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half),15);
    bufp->fullCData(oldp+2369,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op),5);
    bufp->fullIData(oldp+2370,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I),23);
    bufp->fullIData(oldp+2371,((0x7fffffU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
                                              ? ((1U 
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
                                              : ((1U 
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
    bufp->fullIData(oldp+2372,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I),23);
    bufp->fullBit(oldp+2373,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I)));
    bufp->fullCData(oldp+2374,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc),2);
    bufp->fullBit(oldp+2375,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable));
    bufp->fullCData(oldp+2376,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
    bufp->fullCData(oldp+2377,((0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x10U))),8);
    bufp->fullBit(oldp+2378,(((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                              & (IData)((0x78800000U 
                                         == (0xfffc0000U 
                                             & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]))))));
    bufp->fullBit(oldp+2379,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb));
    bufp->fullBit(oldp+2380,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set));
    bufp->fullBit(oldp+2381,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set));
    bufp->fullBit(oldp+2382,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now));
    bufp->fullIData(oldp+2383,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when),32);
    bufp->fullIData(oldp+2384,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when),32);
    bufp->fullIData(oldp+2385,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb),32);
    bufp->fullIData(oldp+2386,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when),32);
    bufp->fullBit(oldp+2387,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb));
    bufp->fullBit(oldp+2388,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running));
    bufp->fullBit(oldp+2389,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero));
    bufp->fullIData(oldp+2390,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value),31);
    bufp->fullBit(oldp+2391,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write));
    bufp->fullBit(oldp+2392,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2393,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2394,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb));
    bufp->fullBit(oldp+2395,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running));
    bufp->fullBit(oldp+2396,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero));
    bufp->fullIData(oldp+2397,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value),31);
    bufp->fullBit(oldp+2398,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write));
    bufp->fullBit(oldp+2399,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2400,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2401,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb));
    bufp->fullBit(oldp+2402,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running));
    bufp->fullBit(oldp+2403,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero));
    bufp->fullIData(oldp+2404,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value),31);
    bufp->fullBit(oldp+2405,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write));
    bufp->fullBit(oldp+2406,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2407,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2408,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2));
    bufp->fullSData(oldp+2409,(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value),14);
    bufp->fullBit(oldp+2410,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb));
    bufp->fullBit(oldp+2411,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running));
    bufp->fullBit(oldp+2412,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero));
    bufp->fullIData(oldp+2413,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),31);
    bufp->fullBit(oldp+2414,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write));
    bufp->fullCData(oldp+2415,(vlSelf->main__DOT__txv__DOT__baud_counter),7);
    bufp->fullCData(oldp+2416,(vlSelf->main__DOT__txv__DOT__state),4);
    bufp->fullCData(oldp+2417,(vlSelf->main__DOT__txv__DOT__lcl_data),8);
    bufp->fullBit(oldp+2418,(vlSelf->main__DOT__txv__DOT__zero_baud_counter));
    bufp->fullSData(oldp+2419,(vlSelf->main__DOT__u_fan__DOT__pwm_counter),13);
    bufp->fullSData(oldp+2420,(vlSelf->main__DOT__u_fan__DOT__ctl_fpga),13);
    bufp->fullSData(oldp+2421,(vlSelf->main__DOT__u_fan__DOT__ctl_sys),13);
    bufp->fullBit(oldp+2422,(vlSelf->main__DOT__u_fan__DOT__ck_tach));
    bufp->fullBit(oldp+2423,(vlSelf->main__DOT__u_fan__DOT__last_tach));
    bufp->fullCData(oldp+2424,(vlSelf->main__DOT__u_fan__DOT__pipe_tach),2);
    bufp->fullBit(oldp+2425,(vlSelf->main__DOT__u_fan__DOT__tach_reset));
    bufp->fullIData(oldp+2426,(vlSelf->main__DOT__u_fan__DOT__tach_count),27);
    bufp->fullIData(oldp+2427,(vlSelf->main__DOT__u_fan__DOT__tach_counter),27);
    bufp->fullIData(oldp+2428,(vlSelf->main__DOT__u_fan__DOT__tach_timer),27);
    bufp->fullBit(oldp+2429,(vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack));
    bufp->fullIData(oldp+2430,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data),32);
    bufp->fullBit(oldp+2431,(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc));
    bufp->fullBit(oldp+2432,(vlSelf->main__DOT__u_fan__DOT__mem_stb));
    bufp->fullCData(oldp+2433,(vlSelf->main__DOT__u_fan__DOT__mem_addr),5);
    bufp->fullCData(oldp+2434,(vlSelf->main__DOT__u_fan__DOT__mem_data),8);
    bufp->fullBit(oldp+2435,(vlSelf->main__DOT__u_fan__DOT__mem_ack));
    bufp->fullBit(oldp+2436,(vlSelf->main__DOT__u_fan__DOT__i2cd_valid));
    bufp->fullBit(oldp+2437,(vlSelf->main__DOT__u_fan__DOT__i2cd_last));
    bufp->fullCData(oldp+2438,(vlSelf->main__DOT__u_fan__DOT__i2cd_data),8);
    bufp->fullBit(oldp+2439,(vlSelf->main__DOT__u_fan__DOT__pp_ms));
    bufp->fullIData(oldp+2440,(vlSelf->main__DOT__u_fan__DOT__trigger_counter),17);
    bufp->fullIData(oldp+2441,(vlSelf->main__DOT__u_fan__DOT__temp_tmp),24);
    bufp->fullIData(oldp+2442,(vlSelf->main__DOT__u_fan__DOT__temp_data),32);
    bufp->fullBit(oldp+2443,(vlSelf->main__DOT__u_fan__DOT__pre_ack));
    bufp->fullIData(oldp+2444,(vlSelf->main__DOT__u_fan__DOT__pre_data),32);
    bufp->fullBit(oldp+2445,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
    bufp->fullBit(oldp+2446,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc));
    bufp->fullCData(oldp+2447,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr),5);
    bufp->fullBit(oldp+2448,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid));
    bufp->fullBit(oldp+2449,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
    bufp->fullCData(oldp+2450,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn),8);
    bufp->fullCData(oldp+2451,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr),5);
    bufp->fullBit(oldp+2452,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal));
    bufp->fullBit(oldp+2453,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid));
    bufp->fullBit(oldp+2454,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle));
    bufp->fullBit(oldp+2455,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready));
    bufp->fullBit(oldp+2456,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready));
    bufp->fullBit(oldp+2457,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort));
    bufp->fullBit(oldp+2458,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid));
    bufp->fullSData(oldp+2459,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn),12);
    bufp->fullCData(oldp+2460,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn),4);
    bufp->fullBit(oldp+2461,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge));
    bufp->fullBit(oldp+2462,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch));
    bufp->fullSData(oldp+2463,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+2464,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount),12);
    bufp->fullCData(oldp+2465,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address),5);
    bufp->fullCData(oldp+2466,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target),5);
    bufp->fullBit(oldp+2467,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait));
    bufp->fullBit(oldp+2468,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request));
    bufp->fullBit(oldp+2469,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err));
    bufp->fullBit(oldp+2470,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted));
    bufp->fullBit(oldp+2471,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+2472,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+2473,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+2474,(((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
                              | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
    bufp->fullBit(oldp+2475,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda));
    bufp->fullBit(oldp+2476,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl));
    bufp->fullBit(oldp+2477,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
    bufp->fullBit(oldp+2478,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid));
    bufp->fullSData(oldp+2479,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data),10);
    bufp->fullBit(oldp+2480,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+2481,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullSData(oldp+2482,((0x7ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))),11);
    bufp->fullBit(oldp+2483,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+2484,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+2485,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+2486,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+2487,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+2488,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+2489,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+2490,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+2491,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+2492,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+2493,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+2494,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+2495,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+2496,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+2497,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+2498,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullCData(oldp+2499,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word),8);
    bufp->fullBit(oldp+2500,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+2501,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+2502,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullBit(oldp+2503,(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID));
    bufp->fullIData(oldp+2504,(vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr),28);
    bufp->fullIData(oldp+2505,(vlSelf->main__DOT__u_i2cdma__DOT__r_memlen),28);
    bufp->fullCData(oldp+2506,(vlSelf->main__DOT__u_i2cdma__DOT__subaddr),6);
    bufp->fullIData(oldp+2507,(vlSelf->main__DOT__u_i2cdma__DOT__current_addr),28);
    bufp->fullBit(oldp+2508,(vlSelf->main__DOT__u_i2cdma__DOT__wb_last));
    bufp->fullBit(oldp+2509,(vlSelf->main__DOT__u_i2cdma__DOT__bus_err));
    bufp->fullBit(oldp+2510,(vlSelf->main__DOT__u_i2cdma__DOT__r_reset));
    bufp->fullBit(oldp+2511,(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow));
    bufp->fullBit(oldp+2512,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
    bufp->fullBit(oldp+2513,(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready));
    bufp->fullBit(oldp+2514,((1U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                    >> 8U))));
    bufp->fullCData(oldp+2515,((0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data))),8);
    bufp->fullSData(oldp+2516,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data),9);
    bufp->fullSData(oldp+2517,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data),9);
    bufp->fullSData(oldp+2518,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data),9);
    bufp->fullBit(oldp+2519,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid));
    bufp->fullIData(oldp+2520,((0x1fffffU & (IData)(
                                                    (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr 
                                                     >> 0x16U)))),21);
    bufp->fullBit(oldp+2521,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
    bufp->fullBit(oldp+2522,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first));
    bufp->fullBit(oldp+2523,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null));
    bufp->fullBit(oldp+2524,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last));
    bufp->fullWData(oldp+2525,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data),512);
    bufp->fullWData(oldp+2541,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data),512);
    bufp->fullQData(oldp+2557,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel),64);
    bufp->fullQData(oldp+2559,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel),64);
    bufp->fullCData(oldp+2561,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift),4);
    bufp->fullCData(oldp+2562,((0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data))),4);
    bufp->fullCData(oldp+2563,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr),4);
    bufp->fullBit(oldp+2564,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full));
    bufp->fullBit(oldp+2565,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty));
    bufp->fullBit(oldp+2566,((1U & ((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                                    >> 4U))));
    bufp->fullCData(oldp+2567,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill),6);
    bufp->fullIData(oldp+2568,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm),32);
    bufp->fullBit(oldp+2569,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
    bufp->fullCData(oldp+2570,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data),5);
    bufp->fullCData(oldp+2571,(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data),5);
    bufp->fullBit(oldp+2572,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+2573,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+2574,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[0]),5);
    bufp->fullCData(oldp+2575,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[1]),5);
    bufp->fullCData(oldp+2576,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[2]),5);
    bufp->fullCData(oldp+2577,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[3]),5);
    bufp->fullCData(oldp+2578,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[4]),5);
    bufp->fullCData(oldp+2579,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[5]),5);
    bufp->fullCData(oldp+2580,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[6]),5);
    bufp->fullCData(oldp+2581,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[7]),5);
    bufp->fullCData(oldp+2582,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[8]),5);
    bufp->fullCData(oldp+2583,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[9]),5);
    bufp->fullCData(oldp+2584,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[10]),5);
    bufp->fullCData(oldp+2585,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[11]),5);
    bufp->fullCData(oldp+2586,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[12]),5);
    bufp->fullCData(oldp+2587,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[13]),5);
    bufp->fullCData(oldp+2588,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[14]),5);
    bufp->fullCData(oldp+2589,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[15]),5);
    bufp->fullCData(oldp+2590,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[16]),5);
    bufp->fullCData(oldp+2591,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[17]),5);
    bufp->fullCData(oldp+2592,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[18]),5);
    bufp->fullCData(oldp+2593,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[19]),5);
    bufp->fullCData(oldp+2594,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[20]),5);
    bufp->fullCData(oldp+2595,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[21]),5);
    bufp->fullCData(oldp+2596,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[22]),5);
    bufp->fullCData(oldp+2597,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[23]),5);
    bufp->fullCData(oldp+2598,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[24]),5);
    bufp->fullCData(oldp+2599,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[25]),5);
    bufp->fullCData(oldp+2600,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[26]),5);
    bufp->fullCData(oldp+2601,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[27]),5);
    bufp->fullCData(oldp+2602,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[28]),5);
    bufp->fullCData(oldp+2603,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[29]),5);
    bufp->fullCData(oldp+2604,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[30]),5);
    bufp->fullCData(oldp+2605,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[31]),5);
    bufp->fullCData(oldp+2606,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+2607,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+2608,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+2609,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullSData(oldp+2610,(vlSelf->main__DOT__wb32_xbar__DOT__grant[0]),13);
    bufp->fullBit(oldp+2611,(vlSelf->main__DOT__wb32_xbar__DOT__mgrant));
    bufp->fullCData(oldp+2612,(vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+2613,(vlSelf->main__DOT__wb32_xbar__DOT__mfull));
    bufp->fullBit(oldp+2614,(vlSelf->main__DOT__wb32_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+2615,(vlSelf->main__DOT__wb32_xbar__DOT__mempty));
    bufp->fullIData(oldp+2616,(vlSelf->main__DOT__wb32_xbar__DOT__iN),32);
    bufp->fullCData(oldp+2617,(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullSData(oldp+2618,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),13);
    bufp->fullBit(oldp+2619,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullIData(oldp+2620,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),25);
    bufp->fullQData(oldp+2621,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),62);
    bufp->fullQData(oldp+2623,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),62);
    bufp->fullIData(oldp+2625,((0x3ffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),26);
    bufp->fullBit(oldp+2626,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
    bufp->fullWData(oldp+2627,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data),512);
    bufp->fullCData(oldp+2643,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift),4);
    bufp->fullBit(oldp+2644,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+2645,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+2646,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill),6);
    bufp->fullCData(oldp+2647,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),4);
    bufp->fullCData(oldp+2648,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem
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
    bufp->fullWData(oldp+2649,(__Vtemp_hcfafa750__0),512);
    bufp->fullQData(oldp+2665,(((QData)((IData)((0xfU 
                                                 & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)))) 
                                << 0x3cU)),64);
    bufp->fullBit(oldp+2667,(((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                              & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb))));
    bufp->fullCData(oldp+2668,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[0]),4);
    bufp->fullCData(oldp+2669,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[1]),4);
    bufp->fullCData(oldp+2670,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[2]),4);
    bufp->fullCData(oldp+2671,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[3]),4);
    bufp->fullCData(oldp+2672,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[4]),4);
    bufp->fullCData(oldp+2673,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[5]),4);
    bufp->fullCData(oldp+2674,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[6]),4);
    bufp->fullCData(oldp+2675,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[7]),4);
    bufp->fullCData(oldp+2676,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[8]),4);
    bufp->fullCData(oldp+2677,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[9]),4);
    bufp->fullCData(oldp+2678,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[10]),4);
    bufp->fullCData(oldp+2679,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[11]),4);
    bufp->fullCData(oldp+2680,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[12]),4);
    bufp->fullCData(oldp+2681,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[13]),4);
    bufp->fullCData(oldp+2682,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[14]),4);
    bufp->fullCData(oldp+2683,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[15]),4);
    bufp->fullCData(oldp+2684,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[16]),4);
    bufp->fullCData(oldp+2685,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[17]),4);
    bufp->fullCData(oldp+2686,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[18]),4);
    bufp->fullCData(oldp+2687,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[19]),4);
    bufp->fullCData(oldp+2688,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[20]),4);
    bufp->fullCData(oldp+2689,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[21]),4);
    bufp->fullCData(oldp+2690,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[22]),4);
    bufp->fullCData(oldp+2691,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[23]),4);
    bufp->fullCData(oldp+2692,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[24]),4);
    bufp->fullCData(oldp+2693,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[25]),4);
    bufp->fullCData(oldp+2694,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[26]),4);
    bufp->fullCData(oldp+2695,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[27]),4);
    bufp->fullCData(oldp+2696,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[28]),4);
    bufp->fullCData(oldp+2697,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[29]),4);
    bufp->fullCData(oldp+2698,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[30]),4);
    bufp->fullCData(oldp+2699,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[31]),4);
    bufp->fullCData(oldp+2700,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+2701,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+2702,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+2703,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullCData(oldp+2704,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc),2);
    bufp->fullCData(oldp+2705,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb),2);
    bufp->fullCData(oldp+2706,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe),2);
    bufp->fullQData(oldp+2707,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr),54);
    bufp->fullQData(oldp+2709,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata),64);
    bufp->fullCData(oldp+2711,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel),8);
    bufp->fullQData(oldp+2712,((((QData)((IData)(vlSelf->main__DOT__wbu_zip_idata)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU])))),64);
    bufp->fullCData(oldp+2714,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err),2);
    bufp->fullCData(oldp+2715,(vlSelf->main__DOT__wbu_xbar__DOT__request[0]),3);
    bufp->fullCData(oldp+2716,(vlSelf->main__DOT__wbu_xbar__DOT__grant[0]),3);
    bufp->fullBit(oldp+2717,(vlSelf->main__DOT__wbu_xbar__DOT__mgrant));
    bufp->fullCData(oldp+2718,(vlSelf->main__DOT__wbu_xbar__DOT__sgrant),2);
    bufp->fullCData(oldp+2719,(vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+2720,(vlSelf->main__DOT__wbu_xbar__DOT__mfull));
    bufp->fullBit(oldp+2721,(vlSelf->main__DOT__wbu_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+2722,(vlSelf->main__DOT__wbu_xbar__DOT__mempty));
    bufp->fullBit(oldp+2723,(vlSelf->main__DOT__wbu_xbar__DOT__m_stb));
    bufp->fullBit(oldp+2724,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullIData(oldp+2725,(vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0]),27);
    bufp->fullIData(oldp+2726,(vlSelf->main__DOT__wbu_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+2727,(vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0]),4);
    bufp->fullIData(oldp+2728,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+2729,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+2730,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+2731,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[3]),32);
    bufp->fullCData(oldp+2732,(vlSelf->main__DOT__wbu_xbar__DOT__s_err),4);
    bufp->fullBit(oldp+2733,(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
    bufp->fullIData(oldp+2734,(vlSelf->main__DOT__wbu_xbar__DOT__iN),32);
    bufp->fullBit(oldp+2735,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+2736,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+2737,(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+2738,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                            >> 0x3fU)))));
    bufp->fullIData(oldp+2739,((0x7ffffffU & (IData)(
                                                     (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                      >> 0x24U)))),27);
    bufp->fullIData(oldp+2740,((IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                        >> 4U))),32);
    bufp->fullCData(oldp+2741,((0xfU & (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
    bufp->fullCData(oldp+2742,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
    bufp->fullBit(oldp+2743,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullQData(oldp+2744,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                             >> 0x3fU))))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
    bufp->fullIData(oldp+2746,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),27);
    bufp->fullQData(oldp+2747,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullCData(oldp+2749,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullQData(oldp+2750,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),64);
    bufp->fullQData(oldp+2752,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),64);
    bufp->fullQData(oldp+2754,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),64);
    bufp->fullCData(oldp+2756,((((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb))))),4);
    bufp->fullCData(oldp+2757,((1U | (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we) 
                                       << 3U) | (4U 
                                                 & (((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
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
    bufp->fullWData(oldp+2758,(__Vtemp_h708d16f1__0),88);
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
    bufp->fullWData(oldp+2761,(__Vtemp_h95b27ed2__0),2048);
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
    bufp->fullWData(oldp+2825,(__Vtemp_h7cab7483__0),256);
    bufp->fullCData(oldp+2833,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_h503d14d1__0))),4);
    bufp->fullCData(oldp+2834,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack),4);
    bufp->fullWData(oldp+2835,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata),2048);
    bufp->fullCData(oldp+2899,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr),4);
    bufp->fullCData(oldp+2900,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe),2);
    bufp->fullQData(oldp+2901,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr),44);
    bufp->fullWData(oldp+2903,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata),1024);
    bufp->fullWData(oldp+2935,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel),128);
    bufp->fullCData(oldp+2939,(((IData)(vlSelf->main__DOT__wbwide_wbdown_stall) 
                                << 1U)),2);
    bufp->fullCData(oldp+2940,((((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack) 
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
    bufp->fullWData(oldp+2941,(__Vtemp_h7899650d__0),1024);
    bufp->fullCData(oldp+2973,(vlSelf->main__DOT__wbwide_xbar__DOT__request[0]),3);
    bufp->fullCData(oldp+2974,(vlSelf->main__DOT__wbwide_xbar__DOT__request[1]),3);
    bufp->fullCData(oldp+2975,(vlSelf->main__DOT__wbwide_xbar__DOT__request[2]),3);
    bufp->fullCData(oldp+2976,(vlSelf->main__DOT__wbwide_xbar__DOT__request[3]),3);
    bufp->fullCData(oldp+2977,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[0]),2);
    bufp->fullCData(oldp+2978,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[1]),2);
    bufp->fullCData(oldp+2979,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[2]),2);
    bufp->fullCData(oldp+2980,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[3]),2);
    bufp->fullCData(oldp+2981,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[0]),3);
    bufp->fullCData(oldp+2982,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[1]),3);
    bufp->fullCData(oldp+2983,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[2]),3);
    bufp->fullCData(oldp+2984,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[3]),3);
    bufp->fullCData(oldp+2985,(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant),4);
    bufp->fullCData(oldp+2986,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0]),6);
    bufp->fullCData(oldp+2987,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1]),6);
    bufp->fullCData(oldp+2988,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2]),6);
    bufp->fullCData(oldp+2989,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3]),6);
    bufp->fullCData(oldp+2990,(vlSelf->main__DOT__wbwide_xbar__DOT__mfull),4);
    bufp->fullCData(oldp+2991,(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull),4);
    bufp->fullCData(oldp+2992,(vlSelf->main__DOT__wbwide_xbar__DOT__mempty),4);
    bufp->fullCData(oldp+2993,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb),4);
    bufp->fullCData(oldp+2994,(vlSelf->main__DOT__wbwide_xbar__DOT__m_we),4);
    bufp->fullIData(oldp+2995,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0]),22);
    bufp->fullIData(oldp+2996,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1]),22);
    bufp->fullIData(oldp+2997,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2]),22);
    bufp->fullIData(oldp+2998,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3]),22);
    bufp->fullWData(oldp+2999,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0]),512);
    bufp->fullWData(oldp+3015,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1]),512);
    bufp->fullWData(oldp+3031,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2]),512);
    bufp->fullWData(oldp+3047,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3]),512);
    bufp->fullQData(oldp+3063,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[0]),64);
    bufp->fullQData(oldp+3065,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[1]),64);
    bufp->fullQData(oldp+3067,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[2]),64);
    bufp->fullQData(oldp+3069,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[3]),64);
    bufp->fullWData(oldp+3071,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0]),512);
    bufp->fullWData(oldp+3087,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1]),512);
    bufp->fullWData(oldp+3103,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2]),512);
    bufp->fullWData(oldp+3119,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3]),512);
    bufp->fullCData(oldp+3135,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))))),4);
    bufp->fullBit(oldp+3136,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3137,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3138,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3139,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel));
    bufp->fullCData(oldp+3140,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3141,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3142,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3143,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+3144,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3145,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3146,(__Vtemp_h53a5df10__0),512);
    bufp->fullQData(oldp+3162,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3164,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3165,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3166,(__Vtemp_hb52cb2db__0),577);
    bufp->fullBit(oldp+3185,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3186,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+3187,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3206,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+3207,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),599);
    bufp->fullWData(oldp+3226,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+3245,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullBit(oldp+3264,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3265,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3266,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3267,(__Vtemp_hebded4b4__0),512);
    bufp->fullQData(oldp+3283,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3285,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3286,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3287,(__Vtemp_h0a2cdfa5__0),577);
    bufp->fullBit(oldp+3306,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3307,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+3308,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3327,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest),2);
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
    bufp->fullWData(oldp+3328,(__Vtemp_he57bd368__0),599);
    bufp->fullWData(oldp+3347,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+3366,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullBit(oldp+3385,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3386,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3387,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3388,(__Vtemp_h0964a254__0),512);
    bufp->fullQData(oldp+3404,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3406,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3407,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3408,(__Vtemp_h925b4b87__0),577);
    bufp->fullBit(oldp+3427,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3428,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+3429,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3448,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+3449,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data),599);
    bufp->fullWData(oldp+3468,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+3487,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullBit(oldp+3506,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3507,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3508,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3509,(__Vtemp_h5b5f8605__0),512);
    bufp->fullQData(oldp+3525,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3527,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3528,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3529,(__Vtemp_hfe9179b2__0),577);
    bufp->fullBit(oldp+3548,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3549,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+3550,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3569,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+3570,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data),599);
    bufp->fullWData(oldp+3589,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+3608,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullCData(oldp+3627,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+3628,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullSData(oldp+3629,((((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
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
    bufp->fullWData(oldp+3630,(__Vtemp_ha8cd40b0__0),384);
    bufp->fullIData(oldp+3642,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+3643,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+3644,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+3645,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[3]),32);
    bufp->fullIData(oldp+3646,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[4]),32);
    bufp->fullIData(oldp+3647,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[5]),32);
    bufp->fullIData(oldp+3648,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[6]),32);
    bufp->fullIData(oldp+3649,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[7]),32);
    bufp->fullIData(oldp+3650,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[8]),32);
    bufp->fullIData(oldp+3651,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[9]),32);
    bufp->fullIData(oldp+3652,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[10]),32);
    bufp->fullIData(oldp+3653,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[11]),32);
    bufp->fullIData(oldp+3654,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[12]),32);
    bufp->fullIData(oldp+3655,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[13]),32);
    bufp->fullIData(oldp+3656,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[14]),32);
    bufp->fullIData(oldp+3657,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[15]),32);
    bufp->fullBit(oldp+3658,(vlSelf->main__DOT__wb32_ddr3_phy_stall));
    bufp->fullBit(oldp+3659,(vlSelf->main__DOT__wb32_ddr3_phy_ack));
    bufp->fullIData(oldp+3660,(vlSelf->main__DOT__wb32_ddr3_phy_idata),32);
    bufp->fullBit(oldp+3661,(vlSelf->main__DOT__wb32_ddr3_controller_stall));
    bufp->fullIData(oldp+3662,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index),32);
    bufp->fullCData(oldp+3663,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address),5);
    bufp->fullIData(oldp+3664,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction),28);
    bufp->fullIData(oldp+3665,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter),18);
    bufp->fullBit(oldp+3666,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero));
    bufp->fullBit(oldp+3667,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done));
    bufp->fullBit(oldp+3668,(vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter));
    bufp->fullBit(oldp+3669,(((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                              & (0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data)))));
    bufp->fullBit(oldp+3670,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update));
    bufp->fullCData(oldp+3671,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q),8);
    bufp->fullSData(oldp+3672,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0]),14);
    bufp->fullSData(oldp+3673,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1]),14);
    bufp->fullSData(oldp+3674,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2]),14);
    bufp->fullSData(oldp+3675,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3]),14);
    bufp->fullSData(oldp+3676,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4]),14);
    bufp->fullSData(oldp+3677,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5]),14);
    bufp->fullSData(oldp+3678,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6]),14);
    bufp->fullSData(oldp+3679,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7]),14);
    bufp->fullBit(oldp+3680,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending));
    bufp->fullBit(oldp+3681,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux));
    bufp->fullBit(oldp+3682,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we));
    bufp->fullQData(oldp+3683,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data),64);
    bufp->fullCData(oldp+3685,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm),8);
    bufp->fullSData(oldp+3686,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col),10);
    bufp->fullCData(oldp+3687,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank),3);
    bufp->fullSData(oldp+3688,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row),14);
    bufp->fullCData(oldp+3689,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank),3);
    bufp->fullSData(oldp+3690,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row),14);
    bufp->fullBit(oldp+3691,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending));
    bufp->fullBit(oldp+3692,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux));
    bufp->fullBit(oldp+3693,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we));
    bufp->fullCData(oldp+3694,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned),8);
    bufp->fullCData(oldp+3695,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp),8);
    bufp->fullCData(oldp+3696,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0]),8);
    bufp->fullCData(oldp+3697,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1]),8);
    bufp->fullQData(oldp+3698,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned),64);
    bufp->fullQData(oldp+3700,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp),64);
    bufp->fullQData(oldp+3702,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0]),64);
    bufp->fullQData(oldp+3704,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1]),64);
    bufp->fullQData(oldp+3706,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0]),64);
    bufp->fullCData(oldp+3708,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0]),8);
    bufp->fullSData(oldp+3709,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col),10);
    bufp->fullCData(oldp+3710,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank),3);
    bufp->fullSData(oldp+3711,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row),14);
    bufp->fullCData(oldp+3712,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0]),4);
    bufp->fullCData(oldp+3713,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1]),4);
    bufp->fullCData(oldp+3714,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2]),4);
    bufp->fullCData(oldp+3715,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3]),4);
    bufp->fullCData(oldp+3716,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4]),4);
    bufp->fullCData(oldp+3717,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5]),4);
    bufp->fullCData(oldp+3718,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6]),4);
    bufp->fullCData(oldp+3719,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7]),4);
    bufp->fullCData(oldp+3720,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0]),4);
    bufp->fullCData(oldp+3721,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1]),4);
    bufp->fullCData(oldp+3722,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2]),4);
    bufp->fullCData(oldp+3723,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3]),4);
    bufp->fullCData(oldp+3724,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4]),4);
    bufp->fullCData(oldp+3725,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5]),4);
    bufp->fullCData(oldp+3726,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6]),4);
    bufp->fullCData(oldp+3727,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7]),4);
    bufp->fullCData(oldp+3728,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0]),4);
    bufp->fullCData(oldp+3729,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1]),4);
    bufp->fullCData(oldp+3730,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2]),4);
    bufp->fullCData(oldp+3731,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3]),4);
    bufp->fullCData(oldp+3732,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4]),4);
    bufp->fullCData(oldp+3733,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5]),4);
    bufp->fullCData(oldp+3734,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6]),4);
    bufp->fullCData(oldp+3735,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7]),4);
    bufp->fullCData(oldp+3736,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0]),4);
    bufp->fullCData(oldp+3737,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1]),4);
    bufp->fullCData(oldp+3738,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2]),4);
    bufp->fullCData(oldp+3739,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3]),4);
    bufp->fullCData(oldp+3740,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4]),4);
    bufp->fullCData(oldp+3741,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5]),4);
    bufp->fullCData(oldp+3742,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6]),4);
    bufp->fullCData(oldp+3743,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7]),4);
    bufp->fullBit(oldp+3744,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q));
    bufp->fullBit(oldp+3745,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q));
    bufp->fullCData(oldp+3746,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q),2);
    bufp->fullBit(oldp+3747,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d));
    bufp->fullCData(oldp+3748,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs),3);
    bufp->fullCData(oldp+3749,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val),3);
    bufp->fullBit(oldp+3750,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q));
    bufp->fullBit(oldp+3751,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
    bufp->fullCData(oldp+3752,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq),4);
    bufp->fullCData(oldp+3753,(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate),5);
    bufp->fullQData(oldp+3754,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store),40);
    bufp->fullCData(oldp+3756,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat),4);
    bufp->fullCData(oldp+3757,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index),6);
    bufp->fullCData(oldp+3758,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored),6);
    bufp->fullCData(oldp+3759,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index),6);
    bufp->fullCData(oldp+3760,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig),6);
    bufp->fullCData(oldp+3761,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index),6);
    bufp->fullCData(oldp+3762,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value),6);
    bufp->fullCData(oldp+3763,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat),3);
    bufp->fullCData(oldp+3764,(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay),2);
    bufp->fullCData(oldp+3765,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data),4);
    bufp->fullCData(oldp+3766,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback),5);
    bufp->fullBit(oldp+3767,(vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs));
    bufp->fullBit(oldp+3768,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane));
    bufp->fullCData(oldp+3769,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8),3);
    bufp->fullSData(oldp+3770,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement),16);
    bufp->fullCData(oldp+3771,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max),4);
    bufp->fullCData(oldp+3772,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0]),4);
    bufp->fullCData(oldp+3773,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0]),2);
    bufp->fullCData(oldp+3774,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1]),2);
    bufp->fullCData(oldp+3775,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2]),2);
    bufp->fullCData(oldp+3776,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3]),2);
    bufp->fullCData(oldp+3777,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4]),2);
    bufp->fullCData(oldp+3778,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0]),2);
    bufp->fullCData(oldp+3779,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1]),2);
    bufp->fullCData(oldp+3780,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2]),2);
    bufp->fullCData(oldp+3781,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3]),2);
    bufp->fullCData(oldp+3782,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4]),2);
    bufp->fullBit(oldp+3783,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe));
    bufp->fullBit(oldp+3784,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data));
    bufp->fullSData(oldp+3785,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0]),16);
    bufp->fullSData(oldp+3786,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1]),16);
    bufp->fullQData(oldp+3787,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0]),64);
    bufp->fullQData(oldp+3789,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1]),64);
    bufp->fullBit(oldp+3791,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb));
    bufp->fullBit(oldp+3792,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux));
    bufp->fullBit(oldp+3793,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we));
    bufp->fullSData(oldp+3794,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col),10);
    bufp->fullQData(oldp+3795,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data),64);
    bufp->fullBit(oldp+3797,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt));
    bufp->fullBit(oldp+3798,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs));
    bufp->fullBit(oldp+3799,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq));
    bufp->fullBit(oldp+3800,(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback));
    bufp->fullQData(oldp+3801,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store),64);
    bufp->fullWData(oldp+3803,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern),128);
    bufp->fullCData(oldp+3807,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0]),7);
    bufp->fullCData(oldp+3808,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+3809,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+3810,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+3811,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev),5);
    bufp->fullCData(oldp+3812,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0]),5);
    bufp->fullBit(oldp+3813,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb));
    bufp->fullBit(oldp+3814,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update));
    bufp->fullBit(oldp+3815,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we));
    bufp->fullCData(oldp+3816,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr),7);
    bufp->fullIData(oldp+3817,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data),32);
    bufp->fullCData(oldp+3818,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel),4);
    bufp->fullCData(oldp+3819,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+3820,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+3821,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+3822,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein),5);
    bufp->fullBit(oldp+3823,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld));
    bufp->fullBit(oldp+3824,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld));
    bufp->fullBit(oldp+3825,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld));
    bufp->fullBit(oldp+3826,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld));
    bufp->fullBit(oldp+3827,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane));
    bufp->fullSData(oldp+3828,((((IData)(vlSelf->main__DOT__wb32_ddr3_controller_stall) 
                                 << 0xbU) | ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                             << 0xaU))),12);
    bufp->fullBit(oldp+3829,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))));
    bufp->fullBit(oldp+3830,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb))));
    bufp->fullBit(oldp+3831,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                    >> 1U))));
    bufp->fullBit(oldp+3832,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                    >> 1U))));
    bufp->fullBit(oldp+3833,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err));
    bufp->fullBit(oldp+3834,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
    bufp->fullBit(oldp+3835,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullBit(oldp+3836,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 8U))));
    bufp->fullBit(oldp+3837,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 8U) & (0U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
    bufp->fullBit(oldp+3838,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 8U))));
    bufp->fullIData(oldp+3839,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]),32);
    bufp->fullCData(oldp+3840,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x20U)))),4);
    bufp->fullBit(oldp+3841,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 8U) & (0x100U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
    bufp->fullBit(oldp+3842,(vlSelf->main__DOT__wb32_sirefclk_stb));
    bufp->fullBit(oldp+3843,(vlSelf->main__DOT__wb32_spio_stb));
    bufp->fullBit(oldp+3844,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 8U) & (0x400U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
    bufp->fullBit(oldp+3845,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc))));
    bufp->fullBit(oldp+3846,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb))));
    bufp->fullBit(oldp+3847,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe))));
    bufp->fullIData(oldp+3848,((0x1ffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])),25);
    bufp->fullIData(oldp+3849,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U]),32);
    bufp->fullCData(oldp+3850,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))),4);
    bufp->fullBit(oldp+3851,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 1U))));
    bufp->fullBit(oldp+3852,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 1U))));
    bufp->fullBit(oldp+3853,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 1U))));
    bufp->fullIData(oldp+3854,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                               << 7U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                                 >> 0x19U)))),25);
    bufp->fullIData(oldp+3855,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U]),32);
    bufp->fullCData(oldp+3856,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 4U)))),4);
    bufp->fullBit(oldp+3857,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 2U))));
    bufp->fullBit(oldp+3858,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 2U))));
    bufp->fullBit(oldp+3859,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 2U))));
    bufp->fullIData(oldp+3860,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                               << 0xeU) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                                 >> 0x12U)))),25);
    bufp->fullIData(oldp+3861,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U]),32);
    bufp->fullCData(oldp+3862,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 8U)))),4);
    bufp->fullBit(oldp+3863,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 3U))));
    bufp->fullBit(oldp+3864,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 3U))));
    bufp->fullBit(oldp+3865,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 3U))));
    bufp->fullIData(oldp+3866,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                               << 0x15U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                                 >> 0xbU)))),25);
    bufp->fullIData(oldp+3867,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U]),32);
    bufp->fullCData(oldp+3868,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0xcU)))),4);
    bufp->fullBit(oldp+3869,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 4U))));
    bufp->fullBit(oldp+3870,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 4U))));
    bufp->fullBit(oldp+3871,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 4U))));
    bufp->fullIData(oldp+3872,((0x1ffffffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                              >> 4U))),25);
    bufp->fullIData(oldp+3873,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]),32);
    bufp->fullCData(oldp+3874,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x10U)))),4);
    bufp->fullBit(oldp+3875,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 5U))));
    bufp->fullBit(oldp+3876,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 5U))));
    bufp->fullBit(oldp+3877,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 5U))));
    bufp->fullIData(oldp+3878,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                               << 3U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                                 >> 0x1dU)))),25);
    bufp->fullIData(oldp+3879,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U]),32);
    bufp->fullCData(oldp+3880,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x14U)))),4);
    bufp->fullBit(oldp+3881,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 6U))));
    bufp->fullBit(oldp+3882,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 6U))));
    bufp->fullBit(oldp+3883,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 6U))));
    bufp->fullIData(oldp+3884,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                               << 0xaU) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                                 >> 0x16U)))),25);
    bufp->fullIData(oldp+3885,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]),32);
    bufp->fullCData(oldp+3886,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x18U)))),4);
    bufp->fullBit(oldp+3887,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 7U))));
    bufp->fullBit(oldp+3888,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 7U))));
    bufp->fullBit(oldp+3889,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 7U))));
    bufp->fullIData(oldp+3890,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U] 
                                               << 0x11U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                                 >> 0xfU)))),25);
    bufp->fullIData(oldp+3891,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]),32);
    bufp->fullCData(oldp+3892,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x1cU)))),4);
    bufp->fullBit(oldp+3893,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 8U))));
    bufp->fullIData(oldp+3894,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                               << 0x18U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U] 
                                                 >> 8U)))),25);
    bufp->fullBit(oldp+3895,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 9U))));
    bufp->fullBit(oldp+3896,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 9U))));
    bufp->fullBit(oldp+3897,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 9U))));
    bufp->fullIData(oldp+3898,((0x1ffffffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                              >> 1U))),25);
    bufp->fullIData(oldp+3899,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[9U]),32);
    bufp->fullCData(oldp+3900,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x24U)))),4);
    bufp->fullBit(oldp+3901,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+3902,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+3903,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 0xaU))));
    bufp->fullIData(oldp+3904,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                               << 6U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                                 >> 0x1aU)))),25);
    bufp->fullIData(oldp+3905,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU]),32);
    bufp->fullCData(oldp+3906,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x28U)))),4);
    bufp->fullBit(oldp+3907,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+3908,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+3909,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 0xbU))));
    bufp->fullIData(oldp+3910,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                               << 0xdU) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                 >> 0x13U)))),25);
    bufp->fullIData(oldp+3911,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU]),32);
    bufp->fullCData(oldp+3912,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x2cU)))),4);
    bufp->fullCData(oldp+3913,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                      >> 0x16U))),2);
    bufp->fullIData(oldp+3914,((0xffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                              << 0xdU) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                >> 0x13U)))),24);
    bufp->fullQData(oldp+3915,(((0xffffffffULL & (QData)((IData)(
                                                                 vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU]))) 
                                | ((QData)((IData)(
                                                   vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU])) 
                                   >> 0x20U))),64);
    bufp->fullCData(oldp+3917,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x2cU)))),8);
    bufp->fullCData(oldp+3918,((0x7fU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                          << 6U) | 
                                         (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                          >> 0x1aU)))),7);
    bufp->fullIData(oldp+3919,((0xffffffU & ((IData)(5U) 
                                             + ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                                 << 0xdU) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                   >> 0x13U))))),24);
    bufp->fullIData(oldp+3920,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2),32);
    bufp->fullCData(oldp+3921,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                      >> 4U))),2);
    bufp->fullBit(oldp+3922,(vlSelf->main__DOT__i2ci__DOT__next_valid));
    bufp->fullCData(oldp+3923,(vlSelf->main__DOT__i2ci__DOT__next_insn),8);
    bufp->fullBit(oldp+3924,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     >> 4U) & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+3925,(vlSelf->main__DOT__i2ci__DOT__bus_write));
    bufp->fullBit(oldp+3926,(vlSelf->main__DOT__i2ci__DOT__bus_override));
    bufp->fullBit(oldp+3927,(vlSelf->main__DOT__i2ci__DOT__bus_manual));
    bufp->fullBit(oldp+3928,(vlSelf->main__DOT__i2ci__DOT__bus_jump));
    bufp->fullBit(oldp+3929,((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])));
    bufp->fullBit(oldp+3930,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))));
    bufp->fullBit(oldp+3931,(vlSelf->main__DOT__i2cscopei__DOT__read_from_data));
    bufp->fullBit(oldp+3932,(vlSelf->main__DOT__i2cscopei__DOT__write_to_control));
    bufp->fullBit(oldp+3933,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+3934,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 1U))));
    bufp->fullBit(oldp+3935,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+3936,(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+3937,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+3938,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 2U))));
    bufp->fullBit(oldp+3939,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+3940,(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+3941,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+3942,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 3U))));
    bufp->fullBit(oldp+3943,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+3944,(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control));
    bufp->fullCData(oldp+3945,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn),5);
    bufp->fullBit(oldp+3946,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int));
    bufp->fullCData(oldp+3947,((7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                      >> 0xfU))),3);
    bufp->fullBit(oldp+3948,(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
    bufp->fullCData(oldp+3949,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                      >> 0xfU))),2);
    bufp->fullBit(oldp+3950,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid));
    bufp->fullCData(oldp+3951,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn),8);
    bufp->fullBit(oldp+3952,(((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
                              & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 7U)))));
    bufp->fullBit(oldp+3953,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write));
    bufp->fullBit(oldp+3954,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override));
    bufp->fullBit(oldp+3955,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual));
    bufp->fullBit(oldp+3956,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump));
    bufp->fullCData(oldp+3957,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                      >> 0x1dU))),2);
    bufp->fullIData(oldp+3958,(vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr),32);
    bufp->fullIData(oldp+3959,(vlSelf->main__DOT__u_i2cdma__DOT__next_memlen),32);
    bufp->fullSData(oldp+3960,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc),12);
    bufp->fullSData(oldp+3961,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb),12);
    bufp->fullSData(oldp+3962,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe),12);
    bufp->fullWData(oldp+3963,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr),300);
    bufp->fullWData(oldp+3973,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata),384);
    bufp->fullQData(oldp+3985,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel),48);
    bufp->fullSData(oldp+3987,(vlSelf->main__DOT__wb32_xbar__DOT__request[0]),13);
    bufp->fullSData(oldp+3988,(vlSelf->main__DOT__wb32_xbar__DOT__sgrant),12);
    bufp->fullCData(oldp+3989,(vlSelf->main__DOT__wb32_xbar__DOT__mindex[0]),4);
    bufp->fullBit(oldp+3990,(vlSelf->main__DOT__wb32_xbar__DOT__m_stb));
    bufp->fullBit(oldp+3991,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullIData(oldp+3992,(vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0]),25);
    bufp->fullIData(oldp+3993,(vlSelf->main__DOT__wb32_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+3994,(vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0]),4);
    bufp->fullBit(oldp+3995,(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
    bufp->fullSData(oldp+3996,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),13);
    bufp->fullBit(oldp+3997,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3998,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+3999,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),4);
    bufp->fullBit(oldp+4000,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                            >> 0x3dU)))));
    bufp->fullIData(oldp+4001,((0x1ffffffU & (IData)(
                                                     (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                      >> 0x24U)))),25);
    bufp->fullIData(oldp+4002,((IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                        >> 4U))),32);
    bufp->fullCData(oldp+4003,((0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
    bufp->fullQData(oldp+4004,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                             >> 0x3dU))))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
    bufp->fullQData(oldp+4006,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullSData(oldp+4008,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),12);
    bufp->fullQData(oldp+4009,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),62);
    bufp->fullCData(oldp+4011,(vlSelf->main__DOT__wbu_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4012,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullCData(oldp+4013,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4014,(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc),4);
    bufp->fullCData(oldp+4015,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc),2);
    bufp->fullCData(oldp+4016,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb),2);
    bufp->fullCData(oldp+4017,(((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err) 
                                << 1U)),2);
    bufp->fullCData(oldp+4018,(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant),2);
    bufp->fullCData(oldp+4019,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4020,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1]),2);
    bufp->fullCData(oldp+4021,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2]),2);
    bufp->fullCData(oldp+4022,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3]),2);
    bufp->fullCData(oldp+4023,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0]),2);
    bufp->fullCData(oldp+4024,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1]),2);
    bufp->fullCData(oldp+4025,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2]),2);
    bufp->fullCData(oldp+4026,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[3]),2);
    bufp->fullCData(oldp+4027,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall),4);
    bufp->fullCData(oldp+4028,(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall),4);
    bufp->fullCData(oldp+4029,(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack),4);
    bufp->fullCData(oldp+4030,(vlSelf->main__DOT__wbwide_xbar__DOT__s_err),4);
    bufp->fullCData(oldp+4031,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullBit(oldp+4032,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4033,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4034,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullBit(oldp+4035,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4036,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4037,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullBit(oldp+4038,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4039,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4040,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullBit(oldp+4041,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4042,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullBit(oldp+4043,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4044,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4045,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4046,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4047,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4048,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4049,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4050,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4051,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4052,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4053,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4054,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))));
    bufp->fullCData(oldp+4055,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4056,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4057,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4058,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullBit(oldp+4059,((1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                    [0U] >> 1U))));
    bufp->fullIData(oldp+4060,((IData)(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data)),32);
    bufp->fullQData(oldp+4061,(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data),64);
    bufp->fullCData(oldp+4063,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0]),2);
    bufp->fullCData(oldp+4064,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1]),2);
    bufp->fullCData(oldp+4065,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2]),2);
    bufp->fullCData(oldp+4066,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3]),2);
    bufp->fullCData(oldp+4067,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4]),2);
    bufp->fullCData(oldp+4068,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5]),2);
    bufp->fullCData(oldp+4069,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6]),2);
    bufp->fullCData(oldp+4070,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7]),2);
    bufp->fullCData(oldp+4071,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8]),2);
    bufp->fullCData(oldp+4072,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9]),2);
    bufp->fullCData(oldp+4073,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[10]),2);
    bufp->fullCData(oldp+4074,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[11]),2);
    bufp->fullCData(oldp+4075,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[12]),2);
    bufp->fullCData(oldp+4076,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[13]),2);
    bufp->fullCData(oldp+4077,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[14]),2);
    bufp->fullCData(oldp+4078,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[15]),2);
    bufp->fullBit(oldp+4079,((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                              [0U])));
    bufp->fullBit(oldp+4080,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall));
    bufp->fullBit(oldp+4081,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall));
    bufp->fullCData(oldp+4082,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d),8);
    bufp->fullSData(oldp+4083,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[0]),14);
    bufp->fullSData(oldp+4084,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[1]),14);
    bufp->fullSData(oldp+4085,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[2]),14);
    bufp->fullSData(oldp+4086,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[3]),14);
    bufp->fullSData(oldp+4087,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[4]),14);
    bufp->fullSData(oldp+4088,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[5]),14);
    bufp->fullSData(oldp+4089,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[6]),14);
    bufp->fullSData(oldp+4090,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[7]),14);
    bufp->fullCData(oldp+4091,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[0]),4);
    bufp->fullCData(oldp+4092,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[1]),4);
    bufp->fullCData(oldp+4093,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[2]),4);
    bufp->fullCData(oldp+4094,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[3]),4);
    bufp->fullCData(oldp+4095,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[4]),4);
    bufp->fullCData(oldp+4096,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[5]),4);
    bufp->fullCData(oldp+4097,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[6]),4);
    bufp->fullCData(oldp+4098,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[7]),4);
    bufp->fullCData(oldp+4099,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[0]),4);
    bufp->fullCData(oldp+4100,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[1]),4);
    bufp->fullCData(oldp+4101,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[2]),4);
    bufp->fullCData(oldp+4102,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[3]),4);
    bufp->fullCData(oldp+4103,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[4]),4);
    bufp->fullCData(oldp+4104,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[5]),4);
    bufp->fullCData(oldp+4105,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[6]),4);
    bufp->fullCData(oldp+4106,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[7]),4);
    bufp->fullCData(oldp+4107,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[0]),4);
    bufp->fullCData(oldp+4108,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[1]),4);
    bufp->fullCData(oldp+4109,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[2]),4);
    bufp->fullCData(oldp+4110,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[3]),4);
    bufp->fullCData(oldp+4111,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[4]),4);
    bufp->fullCData(oldp+4112,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[5]),4);
    bufp->fullCData(oldp+4113,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[6]),4);
    bufp->fullCData(oldp+4114,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[7]),4);
    bufp->fullCData(oldp+4115,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0]),4);
    bufp->fullCData(oldp+4116,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1]),4);
    bufp->fullCData(oldp+4117,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2]),4);
    bufp->fullCData(oldp+4118,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3]),4);
    bufp->fullCData(oldp+4119,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4]),4);
    bufp->fullCData(oldp+4120,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5]),4);
    bufp->fullCData(oldp+4121,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6]),4);
    bufp->fullCData(oldp+4122,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7]),4);
    bufp->fullIData(oldp+4123,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0]),24);
    bufp->fullIData(oldp+4124,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1]),24);
    bufp->fullIData(oldp+4125,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2]),24);
    bufp->fullIData(oldp+4126,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3]),24);
    bufp->fullBit(oldp+4127,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt));
    bufp->fullBit(oldp+4128,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en));
    bufp->fullBit(oldp+4129,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n));
    bufp->fullBit(oldp+4130,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d));
    bufp->fullBit(oldp+4131,(vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy));
    bufp->fullBit(oldp+4132,(vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy));
    bufp->fullBit(oldp+4133,(vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4134,(vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4135,(vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4136,(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
    bufp->fullSData(oldp+4137,(vlSelf->main__DOT__wb32_xbar__DOT__s_stall),16);
    bufp->fullBit(oldp+4138,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4139,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4140,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4141,(vlSelf->i_clk));
    bufp->fullBit(oldp+4142,(vlSelf->i_reset));
    bufp->fullQData(oldp+4143,(vlSelf->i_ddr3_controller_iserdes_data),64);
    bufp->fullCData(oldp+4145,(vlSelf->i_ddr3_controller_iserdes_dqs),8);
    bufp->fullCData(oldp+4146,(vlSelf->i_ddr3_controller_iserdes_bitslip_reference),8);
    bufp->fullBit(oldp+4147,(vlSelf->i_ddr3_controller_idelayctrl_rdy));
    bufp->fullWData(oldp+4148,(vlSelf->o_ddr3_controller_cmd),96);
    bufp->fullBit(oldp+4151,(vlSelf->o_ddr3_controller_dqs_tri_control));
    bufp->fullBit(oldp+4152,(vlSelf->o_ddr3_controller_dq_tri_control));
    bufp->fullBit(oldp+4153,(vlSelf->o_ddr3_controller_toggle_dqs));
    bufp->fullQData(oldp+4154,(vlSelf->o_ddr3_controller_data),64);
    bufp->fullCData(oldp+4156,(vlSelf->o_ddr3_controller_dm),8);
    bufp->fullCData(oldp+4157,(vlSelf->o_ddr3_controller_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4158,(vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4159,(vlSelf->o_ddr3_controller_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4160,(vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein),5);
    bufp->fullBit(oldp+4161,(vlSelf->o_ddr3_controller_odelay_data_ld));
    bufp->fullBit(oldp+4162,(vlSelf->o_ddr3_controller_odelay_dqs_ld));
    bufp->fullBit(oldp+4163,(vlSelf->o_ddr3_controller_idelay_data_ld));
    bufp->fullBit(oldp+4164,(vlSelf->o_ddr3_controller_idelay_dqs_ld));
    bufp->fullBit(oldp+4165,(vlSelf->o_ddr3_controller_bitslip));
    bufp->fullCData(oldp+4166,(vlSelf->o_sirefclk_word),8);
    bufp->fullBit(oldp+4167,(vlSelf->o_sirefclk_ce));
    bufp->fullBit(oldp+4168,(vlSelf->i_fan_sda));
    bufp->fullBit(oldp+4169,(vlSelf->i_fan_scl));
    bufp->fullBit(oldp+4170,(vlSelf->o_fan_sda));
    bufp->fullBit(oldp+4171,(vlSelf->o_fan_scl));
    bufp->fullBit(oldp+4172,(vlSelf->o_fpga_pwm));
    bufp->fullBit(oldp+4173,(vlSelf->o_sys_pwm));
    bufp->fullBit(oldp+4174,(vlSelf->i_fan_tach));
    bufp->fullBit(oldp+4175,(vlSelf->i_i2c_sda));
    bufp->fullBit(oldp+4176,(vlSelf->i_i2c_scl));
    bufp->fullBit(oldp+4177,(vlSelf->o_i2c_sda));
    bufp->fullBit(oldp+4178,(vlSelf->o_i2c_scl));
    bufp->fullBit(oldp+4179,(vlSelf->cpu_sim_cyc));
    bufp->fullBit(oldp+4180,(vlSelf->cpu_sim_stb));
    bufp->fullBit(oldp+4181,(vlSelf->cpu_sim_we));
    bufp->fullCData(oldp+4182,(vlSelf->cpu_sim_addr),7);
    bufp->fullIData(oldp+4183,(vlSelf->cpu_sim_data),32);
    bufp->fullBit(oldp+4184,(vlSelf->cpu_sim_stall));
    bufp->fullBit(oldp+4185,(vlSelf->cpu_sim_ack));
    bufp->fullIData(oldp+4186,(vlSelf->cpu_sim_idata),32);
    bufp->fullBit(oldp+4187,(vlSelf->cpu_prof_stb));
    bufp->fullIData(oldp+4188,(vlSelf->cpu_prof_addr),28);
    bufp->fullIData(oldp+4189,(vlSelf->cpu_prof_ticks),32);
    bufp->fullBit(oldp+4190,(vlSelf->i_cpu_reset));
    bufp->fullBit(oldp+4191,(vlSelf->i_wbu_uart_rx));
    bufp->fullBit(oldp+4192,(vlSelf->o_wbu_uart_tx));
    bufp->fullBit(oldp+4193,(vlSelf->o_wbu_uart_cts_n));
    bufp->fullSData(oldp+4194,(vlSelf->i_gpio),16);
    bufp->fullCData(oldp+4195,(vlSelf->o_gpio),8);
    bufp->fullCData(oldp+4196,(vlSelf->i_sw),8);
    bufp->fullCData(oldp+4197,(vlSelf->i_btn),5);
    bufp->fullCData(oldp+4198,(vlSelf->o_led),8);
    bufp->fullBit(oldp+4199,(vlSelf->i_clk200));
    bufp->fullIData(oldp+4200,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4)),32);
    bufp->fullIData(oldp+4201,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | (0x7fffffffU 
                                                   & (IData)(
                                                             (vlSelf->i_ddr3_controller_iserdes_data 
                                                              >> 0x20U))))),32);
    bufp->fullIData(oldp+4202,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | (0x7fffffffU 
                                                   & (IData)(vlSelf->i_ddr3_controller_iserdes_data)))),32);
    bufp->fullIData(oldp+4203,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
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
    bufp->fullIData(oldp+4204,((((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                 << 0x10U) | (IData)(vlSelf->o_gpio))),32);
    bufp->fullBit(oldp+4205,((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                              [0U] & (0xeU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))));
    bufp->fullBit(oldp+4206,(((IData)(vlSelf->cpu_sim_cyc) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb))));
    bufp->fullBit(oldp+4207,(((~ (IData)(vlSelf->cpu_sim_cyc)) 
                              & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack))));
    bufp->fullBit(oldp+4208,(vlSelf->main__DOT____Vcellinp__ddr3_controller_inst__i_rst_n));
    bufp->fullBit(oldp+4209,((0ULL == vlSelf->i_ddr3_controller_iserdes_data)));
    bufp->fullSData(oldp+4210,(vlSelf->o_gpio),16);
    bufp->fullIData(oldp+4211,(vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4),31);
    bufp->fullIData(oldp+4212,((0x7fffffffU & (IData)(
                                                      (vlSelf->i_ddr3_controller_iserdes_data 
                                                       >> 0x20U)))),31);
    bufp->fullIData(oldp+4213,((0x7fffffffU & (IData)(vlSelf->i_ddr3_controller_iserdes_data))),31);
    bufp->fullBit(oldp+4214,(vlSelf->main__DOT____Vcellinp__swic__i_reset));
    bufp->fullCData(oldp+4215,(((IData)(vlSelf->cpu_sim_cyc)
                                 ? 0xfU : (0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                                   >> 4U)))),4);
    bufp->fullIData(oldp+4216,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc),28);
    bufp->fullBit(oldp+4217,((((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
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
    bufp->fullBit(oldp+4218,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim));
    bufp->fullIData(oldp+4219,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv),23);
    bufp->fullBit(oldp+4220,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid));
    bufp->fullBit(oldp+4221,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim));
    bufp->fullIData(oldp+4222,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv),23);
    bufp->fullBit(oldp+4223,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim));
    bufp->fullIData(oldp+4224,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv),23);
    bufp->fullBit(oldp+4225,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce));
    bufp->fullIData(oldp+4226,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
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
    bufp->fullSData(oldp+4227,(((0xfffff800U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                                    [0U] 
                                                    & (0xeU 
                                                       == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                                                   << 0xbU))) 
                                | ((0xfffffc00U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
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
    bufp->fullIData(oldp+4228,(vlSelf->main__DOT__wb32_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4229,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),4);
    bufp->fullCData(oldp+4230,(((((IData)(vlSelf->cpu_sim_cyc) 
                                  | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))),2);
    bufp->fullCData(oldp+4231,(((((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                  & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack))),2);
    bufp->fullCData(oldp+4232,(((0xfffffffeU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                                & (((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                                    & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                                   << 1U))) 
                                | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack)))),4);
    bufp->fullIData(oldp+4233,(vlSelf->main__DOT__wbu_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4234,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullIData(oldp+4235,(vlSelf->main__DOT__wbwide_xbar__DOT__iN),32);
    bufp->fullIData(oldp+4236,(vlSelf->main__DOT__wbwide_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4237,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4238,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4239,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4240,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullDouble(oldp+4241,(10.0));
    bufp->fullDouble(oldp+4243,(2.50000000000000000e+00));
    bufp->fullIData(oldp+4245,(0xeU),32);
    bufp->fullIData(oldp+4246,(0xaU),32);
    bufp->fullIData(oldp+4247,(3U),32);
    bufp->fullIData(oldp+4248,(8U),32);
    bufp->fullIData(oldp+4249,(1U),32);
    bufp->fullIData(oldp+4250,(4U),32);
    bufp->fullIData(oldp+4251,(0x18U),32);
    bufp->fullIData(oldp+4252,(0x2000000U),32);
    bufp->fullIData(oldp+4253,(0x16U),32);
    bufp->fullIData(oldp+4254,(0x10U),32);
    bufp->fullBit(oldp+4255,(1U));
    bufp->fullIData(oldp+4256,(0x64U),24);
    bufp->fullIData(oldp+4257,(7U),32);
    bufp->fullIData(oldp+4258,(0x13U),32);
    bufp->fullIData(oldp+4259,(2U),32);
    bufp->fullIData(oldp+4260,(0U),32);
    bufp->fullBit(oldp+4261,(0U));
    bufp->fullBit(oldp+4262,(1U));
    bufp->fullWData(oldp+4263,(Vmain__ConstPool__CONST_h93e1b771_0),512);
    bufp->fullQData(oldp+4279,(0xffffffffffffffffULL),64);
    bufp->fullIData(oldp+4281,(vlSelf->main__DOT__wb32_buildtime_addr),25);
    bufp->fullBit(oldp+4282,(vlSelf->main__DOT__wb32_buildtime_err));
    bufp->fullIData(oldp+4283,(0x180454U),32);
    bufp->fullIData(oldp+4284,(vlSelf->main__DOT__wb32_gpio_addr),25);
    bufp->fullBit(oldp+4285,(vlSelf->main__DOT__wb32_gpio_err));
    bufp->fullIData(oldp+4286,(vlSelf->main__DOT__wb32_sirefclk_addr),25);
    bufp->fullBit(oldp+4287,(vlSelf->main__DOT__wb32_sirefclk_err));
    bufp->fullIData(oldp+4288,(vlSelf->main__DOT__wb32_spio_addr),25);
    bufp->fullBit(oldp+4289,(vlSelf->main__DOT__wb32_spio_err));
    bufp->fullIData(oldp+4290,(vlSelf->main__DOT__wb32_version_addr),25);
    bufp->fullBit(oldp+4291,(vlSelf->main__DOT__wb32_version_err));
    bufp->fullIData(oldp+4292,(0x20230830U),32);
    bufp->fullCData(oldp+4293,(0xfU),4);
    bufp->fullCData(oldp+4294,(0x20U),8);
    bufp->fullIData(oldp+4295,(0x14U),32);
    bufp->fullIData(oldp+4296,(0x200U),32);
    bufp->fullCData(oldp+4297,(0U),8);
    bufp->fullBit(oldp+4298,(0U));
    bufp->fullIData(oldp+4299,(0x20U),32);
    bufp->fullCData(oldp+4300,(6U),4);
    bufp->fullCData(oldp+4301,(0U),2);
    bufp->fullCData(oldp+4302,(1U),2);
    bufp->fullCData(oldp+4303,(2U),2);
    bufp->fullCData(oldp+4304,(3U),2);
    bufp->fullIData(oldp+4305,(0x40U),32);
    bufp->fullCData(oldp+4306,(0U),4);
    bufp->fullCData(oldp+4307,(1U),4);
    bufp->fullCData(oldp+4308,(2U),4);
    bufp->fullCData(oldp+4309,(3U),4);
    bufp->fullCData(oldp+4310,(4U),4);
    bufp->fullCData(oldp+4311,(5U),4);
    bufp->fullCData(oldp+4312,(7U),4);
    bufp->fullIData(oldp+4313,(0x1bU),32);
    bufp->fullIData(oldp+4314,(0x1aU),32);
    bufp->fullIData(oldp+4315,(0x19U),32);
    bufp->fullIData(oldp+4316,(0x17U),32);
    bufp->fullIData(oldp+4317,(0x12U),32);
    bufp->fullIData(oldp+4318,(0x15U),32);
    bufp->fullIData(oldp+4319,(0x11U),32);
    bufp->fullIData(oldp+4320,(0xdU),32);
    bufp->fullIData(oldp+4321,(0xbebc200U),32);
    bufp->fullIData(oldp+4322,(0x1dcd6500U),32);
    bufp->fullDouble(oldp+4323,(1.37500000000000000e+01));
    bufp->fullIData(oldp+4325,(0x23U),32);
    bufp->fullDouble(oldp+4326,(350.0));
    bufp->fullIData(oldp+4328,(0x1e78U),32);
    bufp->fullDouble(oldp+4329,(360.0));
    bufp->fullDouble(oldp+4331,(15.0));
    bufp->fullIData(oldp+4333,(0xaU),19);
    bufp->fullDouble(oldp+4334,(7.50000000000000000e+00));
    bufp->fullIData(oldp+4336,(0x80U),32);
    bufp->fullIData(oldp+4337,(6U),32);
    bufp->fullIData(oldp+4338,(5U),32);
    bufp->fullIData(oldp+4339,(0x2f080U),19);
    bufp->fullIData(oldp+4340,(9U),32);
    bufp->fullIData(oldp+4341,(0xbU),32);
    bufp->fullIData(oldp+4342,(0xcU),32);
    bufp->fullCData(oldp+4343,(0U),3);
    bufp->fullCData(oldp+4344,(2U),3);
    bufp->fullIData(oldp+4345,(0x20040U),19);
    bufp->fullCData(oldp+4346,(3U),3);
    bufp->fullIData(oldp+4347,(0x30004U),19);
    bufp->fullIData(oldp+4348,(0x30000U),19);
    bufp->fullCData(oldp+4349,(1U),3);
    bufp->fullIData(oldp+4350,(0x100c4U),19);
    bufp->fullIData(oldp+4351,(0x10044U),19);
    bufp->fullIData(oldp+4352,(0x720U),19);
    bufp->fullIData(oldp+4353,(0x4380005U),28);
    bufp->fullIData(oldp+4354,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__delay),32);
    bufp->fullCData(oldp+4355,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__slot_number),2);
    bufp->fullCData(oldp+4356,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__read_slot),2);
    bufp->fullCData(oldp+4357,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__write_slot),2);
    bufp->fullCData(oldp+4358,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_activate_slot),2);
    bufp->fullCData(oldp+4359,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_precharge_slot),2);
    bufp->fullIData(oldp+4360,(vlSelf->main__DOT__ddr3_controller_inst__DOT__find_delay__Vstatic__k),32);
    bufp->fullIData(oldp+4361,(0x1eU),32);
    bufp->fullIData(oldp+4362,(0x24U),32);
    bufp->fullIData(oldp+4363,(0x400U),32);
    bufp->fullCData(oldp+4364,(0U),5);
    bufp->fullQData(oldp+4365,(0x100000000ULL),36);
    bufp->fullQData(oldp+4367,(0x40000000ULL),36);
    bufp->fullQData(oldp+4369,(0ULL),36);
    bufp->fullCData(oldp+4371,(0x4fU),7);
    bufp->fullCData(oldp+4372,(0x49U),7);
    bufp->fullIData(oldp+4373,(0x1cU),32);
    bufp->fullIData(oldp+4374,(0U),28);
    bufp->fullSData(oldp+4375,(0xfffU),12);
    bufp->fullCData(oldp+4376,(8U),4);
    bufp->fullCData(oldp+4377,(9U),4);
    bufp->fullCData(oldp+4378,(0xaU),4);
    bufp->fullCData(oldp+4379,(0xbU),4);
    bufp->fullCData(oldp+4380,(0xcU),4);
    bufp->fullCData(oldp+4381,(0xdU),4);
    bufp->fullCData(oldp+4382,(4U),3);
    bufp->fullCData(oldp+4383,(5U),3);
    bufp->fullCData(oldp+4384,(6U),3);
    bufp->fullCData(oldp+4385,(7U),3);
    bufp->fullCData(oldp+4386,(0xaU),5);
    bufp->fullIData(oldp+4387,(0x1fU),32);
    bufp->fullIData(oldp+4388,(0x1fcU),20);
    bufp->fullIData(oldp+4389,(0x7fffffffU),31);
    bufp->fullCData(oldp+4390,(0x64U),7);
    bufp->fullCData(oldp+4391,(0x32U),7);
    bufp->fullIData(oldp+4392,(0xc0000000U),32);
    bufp->fullCData(oldp+4393,(1U),8);
    bufp->fullCData(oldp+4394,(2U),8);
    bufp->fullCData(oldp+4395,(3U),8);
    bufp->fullCData(oldp+4396,(4U),8);
    bufp->fullCData(oldp+4397,(5U),8);
    bufp->fullCData(oldp+4398,(6U),8);
    bufp->fullCData(oldp+4399,(7U),8);
    bufp->fullCData(oldp+4400,(8U),8);
    bufp->fullCData(oldp+4401,(9U),8);
    bufp->fullCData(oldp+4402,(0xaU),8);
    bufp->fullCData(oldp+4403,(0xbU),8);
    bufp->fullCData(oldp+4404,(0xcU),8);
    bufp->fullCData(oldp+4405,(0xdU),8);
    bufp->fullCData(oldp+4406,(0xeU),8);
    bufp->fullCData(oldp+4407,(0xfU),8);
    bufp->fullCData(oldp+4408,(0x80U),8);
    bufp->fullCData(oldp+4409,(0x10U),8);
    bufp->fullIData(oldp+4410,(0U),20);
    bufp->fullIData(oldp+4411,(0x208U),32);
    __Vtemp_hf465e4c8__0[0U] = 0x54494e47U;
    __Vtemp_hf465e4c8__0[1U] = 0x45524e41U;
    __Vtemp_hf465e4c8__0[2U] = 0x414c54U;
    bufp->fullWData(oldp+4412,(__Vtemp_hf465e4c8__0),88);
    bufp->fullIData(oldp+4415,(0x41425254U),32);
    bufp->fullIData(oldp+4416,(0x40U),32);
    bufp->fullIData(oldp+4417,(0xfU),32);
    bufp->fullBit(oldp+4418,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__UNUSED_BITS__DOT__unused_aw));
    bufp->fullIData(oldp+4419,(0x800000U),26);
    bufp->fullCData(oldp+4420,(0xeU),4);
    bufp->fullSData(oldp+4421,(0x1d7U),9);
    bufp->fullSData(oldp+4422,(0x2000U),14);
    bufp->fullIData(oldp+4423,(0U),31);
    bufp->fullCData(oldp+4424,(7U),5);
    bufp->fullIData(oldp+4425,(0x5f5e100U),32);
    bufp->fullIData(oldp+4426,(0x186a0U),32);
    bufp->fullIData(oldp+4427,(0x4e20U),32);
    bufp->fullIData(oldp+4428,(0x1387U),32);
    bufp->fullSData(oldp+4429,(0xc8U),12);
    bufp->fullIData(oldp+4430,(0x10U),32);
    bufp->fullWData(oldp+4431,(Vmain__ConstPool__CONST_h3dd842ba_0),300);
    bufp->fullWData(oldp+4441,(Vmain__ConstPool__CONST_h21727c79_0),300);
    bufp->fullSData(oldp+4451,(0U),12);
    bufp->fullSData(oldp+4452,(0xf000U),16);
    bufp->fullIData(oldp+4453,(0x25U),32);
    bufp->fullIData(oldp+4454,(0x3eU),32);
    bufp->fullQData(oldp+4455,(0x20000000000000ULL),54);
    bufp->fullQData(oldp+4457,(0x20000004000000ULL),54);
    bufp->fullQData(oldp+4459,(0x80000080000ULL),44);
    bufp->fullQData(oldp+4461,(0x80000380000ULL),44);
    bufp->fullIData(oldp+4463,(0x241U),32);
    bufp->fullIData(oldp+4464,(0x257U),32);
}
